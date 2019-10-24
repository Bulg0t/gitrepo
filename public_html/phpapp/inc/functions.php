<?php
$pages = array(
	'witam' => 'Witamy',
	'formularz' => 'Formularz',
	'klasa' => 'Klasa'
);
function get_menu($id){
	global $pages;
	foreach ($pages as $p => $t) {
		echo'
					<li class="nav-item">
              <a class="nav-link" href="?id='.$p.'">'.$t.'</a>
          </li>
				';
	}
}
function get_page_title($id){
	global $pages;
	if (array_key_exists($id, $pages))
		echo $pages[$id];
	else
		echo 'Aplikacja PHP';
}
function get_page_content($id){
if (file_exists($id.'.html'))
	include($id.'.html');
else
	include('404.html');
}
?>