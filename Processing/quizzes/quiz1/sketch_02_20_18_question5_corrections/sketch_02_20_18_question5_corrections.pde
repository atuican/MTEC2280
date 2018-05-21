float diameter = 1;
float speed = 5;

void setup() {
  size(500, 500);
  fill(255, 0, 0);
}

void draw() {
  diameter = diameter + speed;
  if (diameter > width) {
    speed = speed * -1;
  } 
  if (diameter < 0) {
    speed = speed * -1;
  }
  ellipse(width/2, height/2, diameter, diameter);
}