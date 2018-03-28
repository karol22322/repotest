szerokosc = 640;
wysokosc = 480;

punktX0 = szerokosc / 2;
punktY0 = wysokosc / 2;


ileKw = prompt("Podaj ilość punktów: ", 1000000);
ileKo = 0;
r = prompt("Podaj promień: ", 100);

lx = [];
ly = [];

function getRnd(min, max) {
  return Math.random() * (max - min) + min;
}



for (i = 0; i < ileKw; i++) {
  x = Math.floor(getRnd(-r, r));
  y = Math.floor(getRnd(-r, r));
  lx[i] = x;
  ly[i] = y;
  if (x*x + y*y <= r*r){
    ileKo++;
  }
}


pi = 4 * ileKo / ileKw;
alert("Przybliżona wartość pi: " + pi);
console.log(pi);

function setup() {
  // put setup code here
  createCanvas(szerokosc, wysokosc);
  background('#ffffff');
}

function draw() {
  stroke('#666');

  ellipse(szerokosc / 2, wysokosc / 2, 2 * r, 2 * r);
  line(szerokosc / 2, 0, szerokosc / 2, wysokosc);
  line(0, wysokosc / 2, szerokosc, wysokosc / 2);
  fill('#fff');
  for (i = 0; i < ileKw; i++) {
    if (lx[i]*lx[i] + ly[i]*ly[i] < r*r){
      stroke('#f00');
    } else {
      stroke('#000');
    }
    point(lx[i] + punktX0, ly[i] + punktY0);
  }
}
