void setup() {
  size(500, 500);

  noStroke();

  frameRate(60);
}

void draw() {

  //To create a variable, you have to give it a TYPE, a NAME, and a VALUE 

  float x = random(width);

  float y = random(height);

  float red = random(255);

  float green = random(255);

  float blue = random(255);

  println(x);


  fill(red, green, blue);
  ellipse(x, y, 20, 20);


  fill(red, green, blue);
  rect(x+10, y-10, 20, 20);

  fill(red, green, blue);
  rect(x-10, y+10, 20, 20);
}