size(500, 500);

for (int i = 0; i < 100; i++) {
  float x1 = random(width);
  float y1 = random(height);
  
  float x2 = x1 + 10;
  float y2 = y1 + 10;
  
  translate(x1, y1);
  rotate(random(TWO_PI));
  
  line(x1, y1, x2, y2);


}