$(document).ready(function(){
	$(".wynik").text("Nowa treść")
	console.log($("p").text());
	$("#przycisk").click(function(){
		var vnk = parseInt($('#vnk').val());
		var nk = parseInt($('#nk').val());
		var R = vnk / nk * 100;
		var div2 = '<div class="wynik">'+R+'</div>';
		$("div.wynik").after(div2);
	});
			$('input').mouseover(function(){
				$(this).addClass("tloBlue");
			});
			$('input').mouseleave(function(){
				$(this).removeClass("tloBlue");
			});
			// podczas opuszczania myszy z obszaru input
			//przywróć poprzedni kolor tła

	});
