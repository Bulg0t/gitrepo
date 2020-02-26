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
			$('#1').dblclick(function(){
				$(this).hide();
			});
			$('#2').mouseover(function(){
				$(this).hide();
			});
			$('#3').mouseover(function(){
				$('#4').hide(10);
			});
			$('#3').mouseleave(function(){
				$('#4').show(10);
			});
			$('#4').mouseover(function(){
				$('#3').hide(10);
			});
			$('#4').mouseleave(function(){
				$('#3').show(10);
			});

	});
