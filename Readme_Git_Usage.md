# Git Usage — SHC2_plus_OnStep / "Rapid bulky wSHC by apos"

## Purpose

This documents the git strategy for testing multiple SHC firmware versions and hardware-specific
configs in this project. It replaces the previous ad-hoc pattern of manually copying complete
source trees into untracked folders (`src_v2_01a/`, `src_v4_01c/`, `src_v4_03a/`, `src_v4.00f/` —
removed 2026-08-08, see "Why not just copy folders?" below).

## Repository structure (for context)

- Outer repo (this one, `rapid-bulky-wshc-by-apos`): hardware docs, 3D-print files, media,
  translations. No firmware code.
- `src/` is a git submodule. Its `origin` remote is the fork **`apos/SmartHandController`**; that
  fork's own `upstream` remote is **`hjd1964/SmartHandController`** (Howard Dutton's official SHC
  project).

## Pattern

1. **A fixed, known-good firmware state → a branch on the fork**, named
   `snapshot/<version>-<config-name>` (e.g. `snapshot/v4.03a-wifi-rapid-bulky`). Use this whenever
   you want to preserve exactly what was flashed for a given test, especially when no clean
   upstream tag/branch exists to build on top of (see "Known snapshot branches" below).
2. **A hardware config variant → its own concern**, currently carried inside each snapshot branch's
   `Config.h`/`Extended.config.h`. Not yet unified into one reusable patch across versions — see
   "Open follow-up" below.
3. **To have multiple versions checked out side by side** (to compare, build, or flash a specific
   one) → `git worktree`, not copy-pasting files. A worktree looks like a normal directory PlatformIO
   can build from directly, but shares the same `.git` object store — no duplicated disk usage, and
   every change stays tracked.

## Concrete commands

### List existing snapshot branches on the fork
```
git -C src ls-remote --heads origin | grep snapshot
```

### Check out one snapshot into its own directory (no full copy)
```
cd src
git fetch origin
git worktree add ../src_v4.03a origin/snapshot/v4.03a-wifi-rapid-bulky
```
Now `../src_v4.03a` can be pointed at from `platformio.ini` / built directly, exactly like the old
copied folder — but it's a real, tracked checkout.

### Remove a worktree when done testing
```
git worktree remove ../src_v4.03a
```

### Create a new snapshot branch after testing a fresh release
```
cd src
git checkout -b snapshot/vX.YZ-<config-name>
git add -A
git commit -m "Snapshot: <config-name> config on SHC vX.YZ"
git push origin snapshot/vX.YZ-<config-name>
```

## Known snapshot branches (as of 2026-08-08)

| Branch | SHC version | Notes |
|---|---|---|
| `snapshot/v2.1a-wifi-rapid-bulky` | 2.1a | Based on upstream `release-2.1` branch (shared git history). |
| `snapshot/v4.01c-wifi-rapid-bulky` | 4.01c | Content matches upstream tag `v4.01c`, but committed as a fresh root commit (no shared git history — the local copy had no `.git` to begin with). |
| `snapshot/v4.03a-wifi-rapid-bulky` | 4.03a | No matching upstream tag/branch exists for this version. Includes the preserved pristine `Config.h.orig`/`Extended.config.h.orig` alongside the modified files. |

## Why not just copy folders?

- **No history/diff between attempts** — impossible to tell what actually changed between, say, the
  4.01c config and the 4.03a config without a manual side-by-side.
- **Untracked, local-only state** — nothing survives a lost or corrupted disk; nothing is shareable
  across machines.
- **Disk clutter** — each copy was a full source tree (up to ~380 files).

`git worktree` + branches on the fork solves all three: full history, no duplicated `.git` internals,
and it's pushed/backed up on GitHub.

## Limits / open follow-up

- The three snapshot branches above are independent, flat commits — `v4.01c` and `v4.03a` have **no
  shared git ancestry** with upstream (they were re-initialized from plain files that had no `.git`
  to begin with), only `v2.1a` does (built on top of the real `release-2.1` branch). Reconstructing a
  clean history against Howard's actual upstream commits for `v4.01c`/`v4.03a` is possible in
  principle (e.g. `git log --all -S'"03"' -- SmartHandController.ino` to search the full history for
  the version bump), but isn't guaranteed to find an exact match and wasn't attempted here — explicit
  decision, 2026-08-08 (favored the fast, verified-safe path over a more thorough but open-ended
  search). See basic-memory `onstepx/00003_shc-overview.md` for the full reasoning.
- The hardware config differences between the three snapshot branches were **not unified** into one
  reusable patch/branch — each snapshot currently carries its own full copy of `Config.h`/
  `Extended.config.h`. A cleaner future setup: extract the `wifi_rapid_bulky`-specific diff once as
  its own branch (rebased fresh onto whichever release is being tested), instead of duplicating it
  into every snapshot.

## Related

- basic-memory `onstepx/00003_shc-overview.md` — full project context (repo layout, PlatformIO
  setup, hardware, DE-localization state).
- basic-memory `basic-memory/basic-memory/00089_bm-git-development-workflow.md` — general git
  workflow rules this project also follows (feature-branch/PR, `git status` before destructive ops).
