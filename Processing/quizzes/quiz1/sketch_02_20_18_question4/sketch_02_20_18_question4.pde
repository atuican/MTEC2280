float red;
float green;
float blue;
float x;
float y;



void setup() {
  size(500, 500);
}

void draw() {
  red = random(255);
  green = random(255);
  blue = random(255);

  x = random(width);
  y = random(height);
}

void keyPressed() {
  if (key == 'x') {
    fill(red, green, blue);
    ellipse(x, y, 15, 15);
  } 
  
  else if (key == 'b') {
    background(red, green, blue);
  }
}