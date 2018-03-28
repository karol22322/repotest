szerokosc = 640;
wysokosc = 480;

punktX0 = szerokosc / 2;
punktY0 = wysokosc / 2;

n = 50;
x = y = 0;

lx = [0];
ly = [0];


function getRnd(min, max) {
  return Math.random() * (max - min) + min;
}



for (i = 0; i < n; i++) {
  kat = getRnd(0, 360);
  rad = Math.floor(getRnd(0, 360)) * Math.PI / 180;
  console.log(rad);
  x = x + Math.cos(rad) * r;
  y = y + Math.sin(rad) * r;
  lx[i+1] = x;
  ly[i+1] = y;
}

console.log(x);



function setup() {
  // put setup code here
  createCanvas(szerokosc, wysokosc);
  background('#ffffff');
}

function draw() {
  stroke('#666');
  fill('#fff');
  line(szerokosc / 2, 0, szerokosc / 2, wysokosc);
  line(0, wysokosc / 2, szerokosc, wysokosc / 2);
}
