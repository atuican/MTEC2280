size(500, 500);
colorMode(RGB, 500);


for (int i = 0; i < width; i = i + 1) {
  println(i);
  stroke(i);
  line (i, 0, i, height);
}