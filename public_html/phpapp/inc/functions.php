<?php

$pages = array(
	'witam' => 'Witamy',
	'formularz' => 'Formularz',
	'klasa' => 'Klasy'
);

function get_menu($id){
	global $pages;
	foreach ($pages as $p => $t) {
echo'
	<li class="nav-item">
		<a class="nav-link" href="?id='.$id.'">'.$t.'</a>
	</li>
';
	}
}
function get_page_title($id){
global $pages;
if(array_key_exists($id, $pages))
	echo $pages[$id];
else
	echo 'Jakiś tytuł domyślny';
}

function get_page_content($id){
if (file_exists($id.'.html'))
	include($id.'.html');
else
	include('404.html'); 

}

?>