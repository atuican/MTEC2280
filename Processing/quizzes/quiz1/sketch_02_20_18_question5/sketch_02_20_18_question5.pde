//incomplete, could not figure out how to make circle shrink after growing; may need help understanding the code where we got the balls to move back and forth

float x = 1;
float y = 1;

void setup() {
  size(500, 500);
  frameRate(120);
  fill(255, 0, 0);
}

void draw() {
  if (x < width && y < height) {
    x = x + 1;
    y = y + 1;
  } 
  if (x >= width && y >= height) {
    x = x - 1;
    y = y - 1;
  }
  ellipse(width/2, height/2, x, y);
}