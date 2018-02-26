void setup() {
  size(500,500);
}

void draw() {
  println(abs(mouseX - width/2));
  background(0);
  ellipse(width/2, height/2, abs(mouseX - width/2) *2, abs(mouseX - width/2) *2);
}