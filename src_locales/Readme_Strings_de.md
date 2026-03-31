# Deutsche Lokalisierung – Strings_de.h

German locale for the [SmartHandController](https://github.com/hjd1964/SmartHandController)
(OnStep telescope mount controller).

**Kompatibel mit SHC Firmware 4.03a**
(`FirmwareVersionMajor 4`, `FirmwareVersionMinor 03`, `FirmwareVersionPatch a`)

---

## Installation

1. **Datei kopieren** – `Strings_de.h` muss im Verzeichnis `src/locales/` liegen
   (zusammen mit `Locale.h`, `Locales.h` und `Strings_en.h`):

   ```
   src/locales/
   ├── Locale.h
   ├── Locales.h
   ├── Strings_de.h   ← diese Datei
   └── Strings_en.h
   ```

2. **Sprache aktivieren** – In `src/Config.h` folgende Zeile anpassen:

   ```cpp
   // Vorher (Standard):
   #define DISPLAY_LANGUAGE  L_en

   // Nachher (Deutsch):
   #define DISPLAY_LANGUAGE  L_de
   ```

3. **Neu kompilieren** – Firmware mit PlatformIO neu bauen und auf den Controller flashen.

---

## Hinweise zur Übersetzung

- Das OLED-Display hat **128 × 64 Pixel**. Die Stringlängen orientieren sich am
  englischen Original.
- Astronomische Abkürzungen (RA, Dek, Az, Alt, PEC, NCP/SCP) wurden international
  einheitlich beibehalten.
- Begriffe wie *Goto*, *Sync*, *Home*, *Meridianflip* sind im deutschen
  Amateurastronomiebetrieb gebräuchlich und wurden nicht übersetzt.
- Wo nötig wurden deutsche Begriffe abgekürzt, um auf das Display zu passen
  (z. B. `Polarausricht.`, `Bev. Pfeilerseite`, `Benutzerkat. wähl.`).

---

## Lizenz

Copyright (C) SmartHandController contributors

This program is free software: you can redistribute it and/or modify it under
the terms of the **GNU General Public License** as published by the Free Software
Foundation, either **version 3** of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but **WITHOUT
ANY WARRANTY**; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program. If not, see <https://www.gnu.org/licenses/>.
