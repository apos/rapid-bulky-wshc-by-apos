// -----------------------------------------------------------------------------------
// Locale Deutsch (German,) ISO ISO639-1 language code "de"
#pragma once

// Fonts, see https://github.com/olikraus/u8g2/wiki/fntlistall for the complete list
#define LF_CATALOGS u8g2_font_6x13_tf       //  9 pixel height
#define LF_GREEK u8g2_font_unifont_t_greek  // 10 pixel height
#define LF_STANDARD u8g2_font_helvR10_tf    // 11 pixel height
#define LF_LARGE u8g2_font_helvR12_tf       // 12 pixel height
#define LF_PASSWORD u8g2_font_t0_17_mf      // 11 pixel height monospaced

// General
#define L_OK "OK"
#define L_ON "Ein"
#define L_OFF "Aus"
#define L_YES "Ja"
#define L_NO "Nein"
#define L_NOW "Jetzt"
#define L_SETV "Set"
#define L_ALL "Alle"
#define L_USE "Verwende"
#define L_SET_STATE "Zustand setzen"
#define L_VALUE "Wert"
#define L_WITHIN "Innerhalb"
#define L_DISABLE "Deaktiviere"
#define L_CANCELED "Abgebrochen"
#define L_CURRENT "Aktuelle"
#define L_FAILED "Fehlgeschlg."
#define L_DEGREE "Grad"
#define L_ARCSEC "Bogensek."
#define L_MICRON_PER_C "um/C"
#define L_DAYS "Tage"
#define L_SHOW_EDIT "- Bearbeite -"
#define L_SHOW_KNOWN "- Bekannte -"
#define L_UPDATING "Aktualisiere"
#define L_SCANNING "Suche..."
#define L_PLEASE_WAIT "Bitte warten"
#define L_CONFIRM "Sicher?"
#define L_CLEAR "Löschen"
#define L_MEMORY "Speicher"
#define L_OVERWRITE "Überschreiben"
#define L_PASSWORD "Passwort"
#define L_DHCP_LINE1 "DHCP-Deakt. kann"
#define L_DHCP_LINE2 "Betrieb stören!"
#define L_POWERING "Einschalten"

// common abbreviations
#define L_TELESCOPE "Teleskop"   // telescope
#define L_SEC_ABV "Sek"          // seconds
#define L_MIN_ABV "Min"          // minutes
#define L_HRS_ABV "Std"          // hours
#define L_OFFSET_ABV "Ofs"       // offset
#define L_TZ_ABV "Zone"          // time-zone
#define L_RA "RA"                // Rektaszension
#define L_DE "DEC"               // Deklination (Abkürzung)
#define L_DEC "DEC"
#define L_AZ "Az"                // Azimut
#define L_ALT "Alt"              // Höhe

// --------------------- menu, alignment -------------------

#define L_ALGN_RESUME "Ausricht. forts."
#define L_ALGN_SHOW_CORR "Korr. zeigen"
#define L_ALGN_CLEAR_CORR "Korr. löschen"
#define L_ALGN_RESET_HOME "Home Reset"
#define L_ALIGNMENT "Ausrichung"
#define L_ALGN_STAR_ALIGN "Sternausrichtung"
#define L_ALGN_SHOW_MODEL "Modell zeigen"
#define L_ALGN_CLEAR_MODEL "Modell löschen"

#define L_ALGN_RESUME0 "Reset"
#define L_ALGN_RESUME1 "Zur Home-Pos."
#define L_ALGN_RESUME2 "Datum/Zeit"
#define L_ALGN_RESUME3 "Nicht gesetzt!"
#define L_ALGN_RESUME4 "Geschwindigkeit"
#define L_ALGN_RESUME5 "48X Einst."

#define L_ALGN_REFINE_MSG1 "Setup & 3+ Stern"
#define L_ALGN_REFINE_MSG2 "Montierung ausricht."
#define L_ALGN_REFINE_MSG3 "Zu hellem Stern"
#define L_ALGN_REFINE_MSG4 "nahe NCP/SCP mit"
#define L_ALGN_REFINE_MSG5 "DEC 50 bis 80"
#define L_ALGN_REFINE_MSG6 "Grad Ber. N/S."
#define L_ALGN_REFINE_MSG7 "Unten JA wählen."
#define L_ALGN_REFINE_MSG8 "Polarausricht."
#define L_ALGN_REFINE_MSG9 "Regler nutzen um"
#define L_ALGN_REFINE_MSG10 "Stern zu zentr."
#define L_ALGN_REFINE_MSG11 "Optional Mntg."
#define L_ALGN_REFINE_MSG12 "neu ausrichten."
#define L_ALGN_REFINE_MSG13 "PA verfeinern?"
#define L_ALGN_REFINE_MSG14 "Stern neu zentr."
#define L_ALGN_REFINE_MSG15 "mit PA-Reglern"

// ----------------------- menu, main ----------------------

// feature key menu
#define L_FKEY_GUIDE_RATE "Geschwindigkeit"
#define L_FKEY_PULSE_GUIDE_RATE "Puls-Rate"
#define L_FKEY_UTILITY_LIGHT "Hilfslicht"
#define L_FKEY_RETICLE "Fadenkreuz"
#define L_FKEY_FOCUSER "Fokussierer"
#define L_FKEY_ROTATOR "Rotator"
#define L_FKEY_FEATURE_KEYS "Funkt.-Tasten"

// main menu root
#define L_MM_GOTO "Goto"
#define L_MM_SYNC "Sync"
#define L_MM_ALIGN "Ausrichten"
#define L_MM_PARKING "Parkposition"
#define L_MM_TRACKING "Nachführung"
#define L_MM_PEC "PEC"
#define L_MM_SETTINGS "Einstellungen"
#define L_MM_MAIN_MENU "Hauptmenü"

// park menu
#define L_PARK "Parken"
#define L_SETPARK "Parkpos. setzen"
#define L_UNPARK "Entparken"
#define L_PARKING "Parken..."
#define L_UNPARKING "Entparken..."

// tracking menu
#define L_TRK_START "Start"
#define L_TRK_STOP "Stop"
#define L_TRK_SIDEREAL "Siderisch"
#define L_TRK_SOLAR "Solar"
#define L_TRK_LUNAR "Lunar"
#define L_TRK_RESET "Rate Reset"
#define L_TRK_FASTER "Rate +0.02Hz"
#define L_TRK_SLOWER "Rate -0.02Hz"
#define L_TRACKING "Nachführung"
#define L_TRK_CF "Komp. Voll"
#define L_TRK_CR "Komp. Refr."
#define L_TRK_CO "Komp. Aus"
#define L_TRK_CS "Komp. 1 Achse"
#define L_TRK_CD "Komp. 2 Achsen"

// PEC menu
#define L_PEC_PLAY "Abspielen"
#define L_PEC_STOP "Stop"
#define L_PEC_RECORD "Aufnahme"
#define L_PEC_WRITENV "In NV schreiben"
#define L_PEC "PEC"
#define L_PEC_PLAYING "Abspielen"
#define L_PEC_STOPPED "Gestoppt"
#define L_PEC_RECORDING "Aufnahme"

// ---------------------- menu, mount ----------------------

// root menu
#define L_MOUNT_SPEED "Goto-Geschw."
#define L_MOUNT_BL "Getriebespiel"
#define L_MOUNT_LIMITS "Grenzen"
#define L_MOUNT_PIER "Pier-Seite"
#define L_MOUNT_CONFIG "Konfiguration"

#define L_MOUNT_FASTEST "Schnellste"
#define L_MOUNT_FASTER "Schneller"
#define L_MOUNT_DEFAULT_SPEED "Std.-Geschw."
#define L_MOUNT_SLOWER "Langsamer"
#define L_MOUNT_SLOWEST "Langsamste"
#define L_MOUNT_SPEED "Goto-Geschw."

#define L_MOUNT_LIMIT_H "Horizont"
#define L_MOUNT_LIMIT_O "Zenit"
#define L_MOUNT_LIMIT_ME "Meridian Ost"
#define L_MOUNT_LIMIT_MW "Meridian West"

#define L_MOUNT_LIMITS "Grenzen"
#define L_MOUNT_LIMIT_HORIZON "Horizontgrenze"
#define L_MOUNT_LIMIT_OVERHEAD "Zenitgrenze"
#define L_MOUNT_LIMIT_MERIDIAN_EAST "Meridianlim. O"
#define L_MOUNT_LIMIT_MERIDIAN_WEST "Meridiaanlim. W"
#define L_MOUNT_PPS "Bevorz. Pier-Seite"
#define L_PPS_EAST "Ost"
#define L_PPS_WEST "West"
#define L_PPS_BEST "Beste"
#define L_PPS_AUTO "Auto"

// -------------------- menu, settings ---------------------

// root menu
#define L_SET_DATE_TIME "Datum/Zeit"
#define L_SET_SITE "Standort"
#define L_SET_FOCUSER "Fokussierer"
#define L_SET_FOCUSER1 "Fokussierer 1"
#define L_SET_FOCUSER2 "Fokussierer 2"
#define L_SET_ROTATOR "Rotator"
#define L_SET_DISPLAY "Display"
#define L_SET_BUZ "Signalton"
#define L_SET_MERIDIAN_FLIP "Meridianflip"
#define L_SET_CONFIG "Konfiguration"
#define L_SET_VERSION "Firmware"
#define L_SETTINGS "Einstellungen"

// date/time
#define L_SET_LOCAL_DATE "Lokales Datum"
#define L_SET_LOCAL_PM "Lokale Zeit PM"
#define L_SET_LOCAL_DST "Lokale Zeit DST"

// display
#define L_SET_DISP_OFF "Ausschalten"
#define L_SET_DISP_CONT "Kontrast"
#define L_SET_DISP_DIM_TO "Dimm-Timeout"
#define L_SET_DISP_BLANK_TO "Leer-Timeout"
#define L_DISPLAY "Display"
#define L_SET_DISP_MSG1 "Taste drücken"
#define L_SET_DISP_MSG2 "zum Einschalten"
#define L_SET_DISP_MIN "Minimal"
#define L_SET_DISP_LOW "Niedrig"
#define L_SET_DISP_HIGH "Hoch"
#define L_SET_DISP_MAX "Maximal"
#define L_SET_DISP_CONTRAST "Kontrast setzen"
#define L_SET_BUZZER "Signalton an?"

// meridian flips
#define L_SET_MF_AUTO "Automatisch"
#define L_SET_MF_PAUSE "Pause bei Home"
#define L_SET_MF "Meridianflip"
#define L_SET_MF_AF "Auto-Flip?"
#define L_SET_MF_PF "Pause Flip?"

// site
#define L_SET_SITE_SELECT "Standort wählen"
#define L_SET_SITE_LAT "Breitengrad"
#define L_SET_SITE_LONG "Längengrad"
#define L_SET_SITE_UTC "UTC Versatz"
#define L_SET_SITE_TITLE "Menü Standort"
#define L_SET_SITE_NUM "Standort"
#define L_SET_SITE_NUM_TITLE "Menü Standorte"

// rotator
#define L_ROT_RET_HOME "zur Home-Pos."
#define L_ROT_AT_HOME "Home setzen"
#define L_ROT_DEROT "Derotieren"
#define L_ROT_PA "zur PA-Pos."
#define L_ROT_REV "Umkehren"
#define L_ROTATOR "Rotator"
#define L_ROTATE "Rotiere"
#define L_ROT_AT_HOME_ZERO "Home Nullen?"
#define L_ROT_REVERSE "Umkehren"

// focuser
#define L_FOC_RET_HOME "Zur Home-Pos."
#define L_FOC_AT_HOME  "Home setzen"
#define L_FOCUSER "Fokussierer"
#define L_FOCUS "Fok"
#define L_AUX_FEATURE "Aux-Funktion"
#define L_FOC_AT_HALF "halb. Weg setz.?"
#define L_FOC_TC "Temp. Komp.?"
#define L_FOC_TC_COEF "TK-Koef."
#define L_FOC_TC_DEADBAND "TK-Totband"
#define L_FOC_TC_DB_UNITS "Mikron"
#define L_FOC_BACKLASH "Getriebespiel"
#define L_FOC_BL_UNITS "Mikron"

// dew heater  (DP = Dew Point = Taupunkt/TP)
#define L_AF_DEW_HEATER_ZERO "TP=0, max Lstg."
#define L_AF_DEW_HEATER_SPAN "TP-Span, 0% Lstg."

// intervalometer
#define L_AF_IV_COUNT "Bel. Anzahl"
#define L_AF_IV_EXPOS "Bel. Dauer"
#define L_AF_IV_DELAY "Bel. Verzög."

// -------------------- menu, sync/goto --------------------

// root menu
#define L_SG_SOLSYS "Sonnensystem"
#define L_SG_HERE "Hier"
#define L_SG_USER "Benutzer"
#define L_SG_FILTERS "Filter wählen"
#define L_SG_COORDS "Koordinaten"
#define L_SG_HOME "Home"
#define L_SG_SYNC "Sync"
#define L_SG_GOTO "Goto"
#define L_SG_SPIRAL "Spiralsuche"
#define L_SG_LAST "Letzter"
#define L_SG_GOTO_LAST "Goto Letzter"
#define L_SG_TARGET "Zielobjekt"

// return home or reset at home
#define L_SG_HOME1 "Goto Home"
#define L_SG_HOME2 "Reset bei"
#define L_SG_HOME3 "Goto"
#define L_SG_HOME4 "Home-Position"
#define L_SG_NO_OBJECT "Kein Objekt"
#define L_SG_NO_INIT "Nicht inititalisiert!"

// solsys
#define L_SG_SUN "Sonne"
#define L_SG_MER "Merkur"
#define L_SG_VEN "Venus"
#define L_SG_MAR "Mars"
#define L_SG_JUP "Jupiter"
#define L_SG_SAT "Saturn"
#define L_SG_URA "Uranus"
#define L_SG_NEP "Neptun"
#define L_SG_MOON "Mond"
#define L_SG_SSOL "Sync Sonnensys."
#define L_SG_GSOL "Goto Sonnensys."
#define L_SG_SOL_WARN1 "Auf Sonne zeigen"
#define L_SG_SOL_WARN2 "kann gefährl. sein"
#define L_SG_GSUN "Goto Sonne"

// user catalogs
#define L_SG_USER_MSG1 "Benutzerkat. wähl."
#define L_SG_USER_MSG2 "Keine Kataloge"
#define L_SG_SYNC_USER "Sync Benutzer"
#define L_SG_GOTO_USER "Goto Benutzer"
#define L_SG_SYNC_USER_ITEM "Sync Ben.-Obj."
#define L_SG_GOTO_USER_ITEM "Goto Ben.-Obj."

// --------------------- menu, filters ---------------------

// root menu
#define L_SG_FILT_RESET "Filter zurücks."
#define L_SG_FILT_HOR "Über Horizont"
#define L_SG_FILT_CON "Sternbild"
#define L_SG_FILT_TYP "Typ"
#define L_SG_FILT_MAG "Helligkeit"
#define L_SG_FILT_NEAR "In der Nähe"
#define L_SG_FILT_VAR_MAX "Verä.* Max Per."
#define L_SG_FILT_DBL_MIN "Dopp.* Min Sep."
#define L_SG_FILT_DBL_MAX "Dopp.* Max Sep."
#define L_SG_FILT_ALLOW "Filter verwenden"
#define L_SG_FILT_MSG1 "Filter"
#define L_SG_FILT_MSG2 "Reset"
#define L_SG_FILT_MSG3 "Nur über Horzt."
#define L_SG_FILTER "Filter"

// filter constellation
#define L_SG_FILT_BY_CON "Filter: Sternbild"

// filter type
#define L_SG_FILT_BY_TYPE "Filter nach Typ"

// filter magn
#define L_SG_FILT_BY_MAG "Filter: Helligkeit"

// filter nearby
#define L_SG_FILT_BY_NEAR "Filter: Nähe"

// filter dbl min sep
#define L_SG_FILT_BY_SEP_MIN "Filter Dpp* Sep."
#define L_SG_SEP_MIN_MSG1 "Min Sep muss"
#define L_SG_SEP_MIN_MSG2 "< Max Sep sein."

// filter dbl max sep
#define L_SG_FILT_BY_SEP_MAX "Filter Dpp* Sep."
#define L_SG_SEP_MAX_MSG1 "Max Sep muss"
#define L_SG_SEP_MAX_MSG2 "> Min Sep sein."

// filter var max per
#define L_SG_FILT_BY_PER_MAX "Filter Verä.* Per."

// ------------------- SmartController.h -----------------------
#define L_WIFI_SELECT "Verbindung wählen"
#define L_WIFI_SELECT_EDIT "Verbindung bearb.:"
#define L_WIFI_CONNECTION "WiFi starten:"
#define L_BT_CONNECTION "BT starten:"
#define L_LOOKING "Suche nach"
#define L_WARNING "Warnung"
#define L_CONNECTION "Verbindung"
#define L_CONNECTING "Verbinden..."
#define L_WARNING "Warnung"
#define L_COORDINATES "Koordinaten"
#define L_OBSERVED_PLACE "Beobachtungsort."
#define L_WARNING "Warnung"
#define L_REBOOT "NEUSTART"
#define L_DEVICE "GERÄT"
#define L_STAR "Stern"
#define L_ALIGN_MSG1 "Stern auswählen"
#define L_ALIGN_MSG2 "Aus flgd. Liste"
#define L_ABORTED "Abgebrochen"
#define L_LOST_MSG "Verloren"
#define L_SLEW_MSG1 "Fahre zum Ziel"
#define L_SLEW_MSG2 "Abgebrochen"
#define L_FKEY_GUIDE_DN "Geschw. langs."
#define L_FKEY_GUIDE_UP "Geschw. schn."
#define L_FKEY_PGUIDE_DN "PGeschw. langsmr."
#define L_FKEY_PGUIDE_UP "PGeschw. schn."
#define L_FKEY_LAMP_DN "Hilfsl. dunkler"
#define L_FKEY_LAMP_UP "Hilfsl. heller"
#define L_FKEY_RETI_DN "Fadenk. dunkler"
#define L_FKEY_RETI_UP "Fadenk. heller"
#define L_SUCCESS "Erfolg"
#define L_ADD_STAR "Stern hinzufüg."
#define L_SUCCESS "Erfolg"
#define L_FAILED "Fehlgeschlagen"
#define L_SLEWING_TO_STAR "Fahre zum Stern"
#define L_RECENTER_STAR "Stern zentrieren"
#define L_SELECT_STAR "Stern auswählen"
#define L_CMD_NOTOK_1 "LX200 Befehl"
#define L_CMD_NOTOK_2 "fehlgeschlagen!"
#define L_CMD_SETVF_1 "Wert setzen"
#define L_CMD_SETVF_2 "fehlgeschlagen!"
#define L_CMD_GETVF_1 "Wert abrufen"
#define L_CMD_GETVF_2 "fehlgeschlagen!"
#define L_CMD_SETTG_1 "Ziel setzen"
#define L_CMD_SETTG_2 "fehlgeschlagen!"
#define L_CMD_OBJSE_1 "Kein Objekt"
#define L_CMD_OBJSE_2 "ausgewählt!"
#define L_CMD_TGHOR_1 "Ziel ist"
#define L_CMD_TGHOR_2 "Unter Horizont!"
#define L_CMD_TGOVH_1 "Ziel ist"
#define L_CMD_TGOVH_2 "Über Grenze!"
#define L_CMD_STNBF_1 "Teleskop"
#define L_CMD_STNBF_2 "im Standby!"
#define L_CMD_PARKF_1 "Teleskop"
#define L_CMD_PARKF_2 "ist geparkt!"
#define L_CMD_GOGOF_1 "Goto bereits"
#define L_CMD_GOGOF_2 "in Ausführung!"
#define L_CMD_LIMTF_1 "Ziel"
#define L_CMD_LIMTF_2 "außerh. Grenz.!"
#define L_CMD_HARDF_1 "Teleskop"
#define L_CMD_HARDF_2 "Hardware-Fehler!"
#define L_CMD_GOMOF_1 "Teleskop"
#define L_CMD_GOMOF_2 "in Bewegung!"
#define L_CMD_UNSPF_1 "Goto unbekannt"
#define L_CMD_UNSPF_2 "Fehler!"
#define L_CMD_ERROR   "Fehler"
#define L_CMD_ISAOK_1 "LX200 Befehl"
#define L_CMD_ISAOK_2 "Fertig!"
#define L_CMD_SETOK_1 "Wert"
#define L_CMD_SETOK_2 "Gesetzt!"
#define L_CMD_GETOK_1 "Wert"
#define L_CMD_GETOK_2 "Abgerufen!"
#define L_CMD_SNCOK_1 "Teleskop"
#define L_CMD_SNCOK_2 "Synchronisiert!"
#define L_CMD_GOTOK_1 "Fahre zu"
#define L_CMD_GOTOK_2 "Zielobjekt"

// ----------------------- u8g2_ext_catalog.cpp -------------------------

#define L_CAT_PER_UNK "Periode unbek."
#define L_CAT_PER_IRR "Periode unregelm."
#define L_CAT_PER "Periode"
#define L_CAT_UNK "Unbekannt"
#define L_CAT_OC "Offener Haufen"
#define L_CAT_GC "Kugelsternhaufen"
#define L_CAT_PN "Planet. Nebel"
#define L_CAT_SG "Spiralgalaxie"
#define L_CAT_EG "Elliptische Gal."
#define L_CAT_IG "Irreg. Galaxie"
#define L_CAT_KNT "Knoten"
#define L_CAT_SNR "Supernova-Überr."
#define L_CAT_GAL "Galaxie"
#define L_CAT_CN "Haufen + Nebel"
#define L_CAT_STR "Stern"
#define L_CAT_PLA "Planet"
#define L_CAT_CMT "Komet"
#define L_CAT_AST "Asteroid"

// ----------------------- u8g2_ext_input.cpp -------------------------

#define L_RIGHT_ASC "Rektasz."
#define L_DECLINATION "Deklination"
#define L_LOCAL_TIME "Lokale Zeit"
#define L_LATITUDE "Breitengrad"
#define L_LONGITUDE "Längengrad"
