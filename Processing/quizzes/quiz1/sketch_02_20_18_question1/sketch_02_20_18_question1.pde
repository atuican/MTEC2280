float rand = round(random(255));

void setup() {
  size(500, 500);
  println(rand);
}

void draw() {
  fill(0, 0, 0);
  rect(0, 0, 250, 500);

  fill(255, 255, 0);
  rect(250, 0, 250, 500);
}