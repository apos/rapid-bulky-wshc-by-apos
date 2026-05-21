# Deutsche Lokalisierung – Strings_de.h

## Übersicht

Die Datei `src/src/locales/Strings_de.h` enthält die deutsche Übersetzung der
OnStep-Handcontroller-Oberfläche. Sie wird über `DISPLAY_LANGUAGE L_de` in `src/Config.h`
aktiviert und von `src/src/locales/Locale.h` eingebunden.

## Display-Beschränkungen

Der Handcontroller verwendet ein **OLED-Display mit 128 × 64 Pixeln**.
Die verwendeten u8g2-Fonts sind in der Strings-Datei definiert:

| Define         | Font                        | Pixelhöhe | Zeichen/Zeile (ca.) |
|----------------|-----------------------------|-----------|----------------------|
| `LF_CATALOGS`  | `u8g2_font_6x13_tf`         | 9 px      | ~21                  |
| `LF_STANDARD`  | `u8g2_font_helvR10_tf`      | 11 px     | ~16–18               |
| `LF_LARGE`     | `u8g2_font_helvR12_tf`      | 12 px     | ~14–16               |
| `LF_PASSWORD`  | `u8g2_font_t0_17_mf`        | 11 px     | ~10 (monospace)      |

Alle `_tf`-Fonts unterstützen den erweiterten Latin-Zeichensatz inkl. Umlaute (ä, ö, ü, ß).
Die Länge der deutschen Strings orientiert sich an den englischen Originalen.

---

## Übersetzungsentscheidungen

### Astronomische Fachbegriffe

Einige Begriffe wurden bewusst **nicht übersetzt**, da sie international einheitlich
verwendet werden oder im deutschsprachigen Amateurastronomiebetrieb so gebräuchlich sind:

| Englisch        | Deutsch         | Begründung                                      |
|-----------------|-----------------|-------------------------------------------------|
| RA              | RA              | Rektaszension – internat. Abkürzung             |
| Dec / De        | Dek             | Deklination – deutsche Kurzform                 |
| Az              | Az              | Azimut – identische Abkürzung                   |
| Alt             | Alt             | Höhe (Altitude) – identische Abkürzung          |
| NCP / SCP       | NCP / SCP       | North/South Celestial Pole – Standardbegriff    |
| PEC             | PEC             | Periodic Error Correction – Fachbegriff         |
| Goto            | Goto            | Eingebürgerter Begriff in der Steuerungssoftware|
| Sync            | Sync            | Synchronisierung – Kurzform allgemein verständlich |
| Home            | Home            | Referenzposition – international gebräuchlich   |
| Meridian Flip   | Meridianflip    | Eingedeutscht, gängiger Begriff                 |
| Sidereal        | Siderisch       | Korrekte deutsche Übersetzung                   |
| Backlash        | Getriebespiel   | Technisch korrekter Fachbegriff                 |
| Dew Point (DP)  | Taupunkt (TP)   | Deutsche Entsprechung für Tauheizer-Menüs       |
| Pier Side       | Pfeilerseite    | Gängiger Begriff bei Montierungen               |

---

### Kürzungsstrategien für Display-Beschränkungen

Wo deutsche Begriffe zu lang sind, wurden folgende Methoden angewendet:

| Methode             | Beispiel                                        |
|---------------------|-------------------------------------------------|
| Abkürzung mit Punkt | `Benutzerkat. wähl.`, `Bev. Pfeilerseite`       |
| Kompositum-Kürzung  | `Polarausricht.` statt `Polarausrichtung`       |
| Abkürzung           | `Lstg.` (Leistung), `Komp.` (Kompensation)     |
| Kurzform            | `Dek` statt `Deklination`, `Fok` statt `Fokus` |
| Vereinfachung       | `Sicher?` statt `Sind Sie sicher?`             |

---

### Vollständig übersetzte Bereiche

- Allgemeine Begriffe (Ein/Aus, Ja/Nein, Fehler, Warnungen)
- Hauptmenü und alle Untermenüs
- Ausrichtungsmenü (Alignment) inkl. Polar-Alignment-Assistent
- Tracking / Nachführung
- Park / Entparken
- PEC (Periodischer Fehler-Korrektor)
- Montierungseinstellungen (Grenzen, Pfeilerseite, Geschwindigkeiten)
- Einstellungsmenü (Datum/Zeit, Standort, Display, Buzzer, Meridianflip)
- Fokussierer (inkl. Temperaturkompensation)
- Rotator
- Tauheizer und Intervalometer
- Goto / Sync (Sonnensystem, Benutzerkataloge, Koordinaten)
- Filterfunktionen (Sternbild, Typ, Helligkeit, Nähe, Separation, Periode)
- SmartController-Meldungen (WiFi, BT, LX200-Befehle)
- Objektkatalog-Typen (Sternhaufen, Nebel, Galaxien usw.)
- Koordinateneingabe

---

## Aktivierung

In `src/Config.h`:

```cpp
#define DISPLAY_LANGUAGE  L_de
```

---

## Bekannte Einschränkungen

- Einige Strings sind geringfügig länger als die englischen Originale. Bei schmalen
  Fonts (LF_CATALOGS) kann es zu Abschneidungen kommen – ggf. im Betrieb prüfen.
- Zeichenketten mit Sonderzeichen (ä, ö, ü, ß) erfordern UTF-8-Kodierung der Quelldatei,
  was im PlatformIO/Arduino-Umfeld standard ist.
- Strings, die mehrfach für zweizeilige Meldungen verwendet werden (`L_CMD_*_1` / `_2`),
  wurden so gewählt, dass sie gut als Zeilenpaar lesbar sind.
