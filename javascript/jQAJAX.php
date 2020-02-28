<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8" />
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script>
$(document).ready(function(){
  $("#b1").click(function(){
    $("#div1").load("demo_text.txt");
  });
  $("#b2").click(function(){
    $.get("getinfo.php", function(data){
        $("#div1").HTML(data);
    });
  });
});
</script>
</head>
<body>

<div id="div1"><h2>Let jQuery AJAX Change This Text</h2></div>

<button id="b1">Metoda $.load()</button>
<button id="b1">Żądanie $.get()</button>


</body>
</html>
