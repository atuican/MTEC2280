float black = color(0, 0, 0);
int slant;

size(500, 500);
slant = 300;
noFill();

int i = 0;
while (i < width) {
  for (int Q1 = 0; Q1 < width; Q1 = Q1 + 10) {
    stroke(black);
    line(Q1, 0, Q1, height);
  }
  for (int Q2 = 0; Q2 < height/2; Q2 = Q2 + 10) {
    stroke(black);
    line(width/2, Q2, width, Q2);
  }

  for (int Q3 = height/2; Q3 >= height/2; Q3 = Q3 + 10) {
    stroke(black);
    line(0, Q3, width, Q3);
  }
  i = i + 10;
}