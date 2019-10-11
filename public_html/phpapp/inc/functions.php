<?php
function get_page_content($id){
if (file_exists($id.'.html'))
	include($id.'.html');
else
	include('404.html'); 

}
?>