void setup() {
  size(500, 500);
}

void draw() {
  line(0, 0, pmouseX, pmouseY);
  line(0, 500, pmouseX, pmouseY);
  line(500, 0, pmouseX, pmouseY);
  line(500, 500, pmouseX, pmouseY);
}