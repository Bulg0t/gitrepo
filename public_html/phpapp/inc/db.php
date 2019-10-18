<?php
function init_baza($dbfile){
	global $db, $dbfile;
	if(!file_exists(DBASE.$dbfile)){
		$kom[] = 'Brak pliku bazy. Tworzę nowy.';
		$db = new PDO("sqlite:DBASE.$dbfile");
	}
		$db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
}
;
?>