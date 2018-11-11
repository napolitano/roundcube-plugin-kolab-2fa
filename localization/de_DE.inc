<?php

/**
 * Localizations for the Kolab 2-Factor-Auth plugin
 *
 * Copyright (C) 2015, Kolab Systems AG
 *
 * For translation see https://www.transifex.com/projects/p/kolab/resource/kolab_2fa/
 */

$labels['factor'] = 'Faktor';
$labels['secret'] = 'Geheimer Schlüssel';
$labels['created'] = 'Erstellungsdatum';
$labels['remove'] = 'Löschen';
$labels['continue'] = 'Fortfahren';

$labels['settingslist'] = 'Multifaktor Auth';
$labels['settingstitle'] = 'Authentifizierungsfaktoren';

$labels['totp'] = 'Mobil App (TOTP)';
$labels['hotp'] = 'Mobil App (HOTP)';
$labels['yubikey'] = 'Yubikey';

$labels['or'] = 'oder';
$labels['yes'] = 'Ja';
$labels['no'] = 'Nein';

$labels['label'] = 'Name';
$labels['qrcode'] = 'QR-Code';
$labels['showqrcode'] = 'QR-Code anzeigen';
$labels['qrcodeexplaintotp'] = 'Laden Sie eine Authentifizierungs-App auf Ihr Handy herunter. Zwei gut funktionierende Apps sind <strong>FreeOTP</strong> und <strong>Google Authenticator</strong>, aber jede andere TOTP-App sollte ebenfalls funktionieren.<br/><br/>
Starten Sie die App auf Ihrem Smartphone und fügen Sie einen neuen Eintrag für diesen Dienst hinzu. Scannen Sie den QR-Code, wenn Sie dazu aufgefordert werden, um Ihre mobile App zu konfigurieren.';
$labels['qrcodeexplainhotp'] = 'Laden Sie eine Authentifizierungs-App auf Ihr Handy herunter. Eine bekanntermaßen gut funktionierende App ist <strong>Google Authenticator</strong>, jede andere HOTP-App sollte jedoch ebenfalls funktionieren.<br/><br/>
Starten Sie die App auf Ihrem Smartphone und fügen Sie einen neuen Eintrag für diesen Dienst hinzu. Scannen Sie den QR-Code, wenn Sie dazu aufgefordert werden, um Ihre mobile App zu konfigurieren.';

$labels['yubikeyid'] = 'Ihre Yubikey-ID';
$labels['yubikeyidexplainyubikey'] = 'Berühren Sie Ihren Yubikey einmalig und übermitteln Sie den generierten Code';

$labels['addfactor'] = 'Authentifizierungsfaktor hinzufügen';
$labels['testfactor'] = 'Diesen Faktor prüfen';
$labels['verifycode'] = 'Code überprüfen';
$labels['verifycodeexplaintotp'] = 'Nachdem Sie den QR Code gescannt haben, geben Sie bitte den 6 stelligen Code aus Ihrer Authentifizierungs-App ein.';
$labels['verifycodeexplainhotp'] = $labels['verifycodeexplaintotp'];

$labels['loginexpired'] = 'Login-Anfrage abgelaufen! Bitte versuchen Sie es erneut.';
$labels['authremoveconfirm'] = 'Möchten Sie diesen Authentifizierungsfaktor wirklich aus Ihrem Konto entfernen?';
$labels['verifycodemissing'] = 'Bitte geben Sie den Bestätigungscode aus Ihrer Authentifizierungs-App ein';

$labels['factorsavesuccess'] = 'Der Authentifizierungsfaktor wurde erfolgreich gespeichert';
$labels['factorremovesuccess'] = 'Der Authetifizierungsfaktor wurde erfolgreich gelöscht';
$labels['factorsaveerror'] = 'Das Speichern der Einstellungen für den Authentifizierungsfaktor ist fehlgeschlagen';
$labels['codeverificationpassed'] = 'Die Überprüfung des Codes für $method war erfolgreich';
$labels['codeverificationfailed'] = 'Die Überprüfung des Codes für $method ist fehlgeschlagen';

$labels['highsecurityrequired'] = 'Sicherheitsbereich - Überprüfung erforderlich';
$labels['highsecuritydialog'] = 'Der Modus für hohe Sicherheit schützt Ihr Konto vor Sicherheitsbedrohungen, z. B. Sitzungsdiebstahl oder jemandem, der sich während Ihrer Abwesenheit mit Ihren Daten beschäftigt. Um den Sicherheitsmodus zu aktivieren, bestätigen Sie Ihre Anmeldeinformationen mit dem zusätzlichen Authentifizierungsfaktor:';
$labels['enterhighsecurity'] = 'Bestätigen';

$labels['uniquenames'] = 'Sie sollten Ihren Authentifizierungsfaktoren <strong>individuelle</strong> und <strong>eindeutige</strong> Namen geben, damit es bei der Abfrage eines Codes nicht zu Missverständnissen kommt.';
