<?php
function init_baza() {
	global $db, $dbfile, $kom;
	if (!file_exists($dbfile)) $kom[] = 'Brak pliku bazy. Tworzę nowy.';

	$db = new PDO("sqlite:$dbfile");
	$db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

}


function init_tables() {
	global $db;
	if (file_exists(DBASE.'baza.sql')) {
		$sql = file_get_contents(DBASE.'baza.sql', 'r');
		if ($db->exec($sql)) {
			$kom[] = "Utworzono tabele!";
		}
	}
}
?>