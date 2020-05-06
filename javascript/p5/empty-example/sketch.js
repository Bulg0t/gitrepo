function setup() {
  createCanvas(800, 600);
}

function draw() {

  // put drawing code here
  stroke('blue');
  rect(30, 20, 700, 500);
  var kolory = ['blue', 'black', 'red'];
  var kolory2 = ['yellow', 'green'];
  strokeWeight(10);
  noFill();
  var krok = 120;
  var szerokosc = 100;
  for(i = 0; i<kolory.length; i++){
    stroke(kolory[i]);
    ellipse(100+(i*krok), 100, szerokosc);
  }
  for(i = 0; i<kolory2.length; i++){
    stroke(kolory2[i]);
    ellipse(160+(i*krok), 150, szerokosc);
  }
}
