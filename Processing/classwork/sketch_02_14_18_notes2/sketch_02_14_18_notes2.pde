//store ball coordinates
//can define global variables now, and give them values later
float x1;
float y1;
float x2;
float y2;
float x1Speed;
float x2Speed;
float y1Speed;
float y2Speed;
float red;
float green;
float blue;

void setup() {
  size(500, 500);

  //give values to global variables
  x1 = width/random(1, 10);
  y1 = height/random(1, 10);
  x2 = width/random(1, 10);
  y2 = height/random(1, 10);

  //give xSpeed a value
  x1Speed = random(2, 5);
  x2Speed = random(2, 5);
  y1Speed = random(2, 5);
  y2Speed = random(2, 5);
}

void draw() {
  //variable scope - float var. can only work in void draw()
  //float x = random(200);
  background(red, green, blue);
  //change the position of x every time the void draw() function runs
  x1 = x1 + x1Speed;
  x2 = x2 + x2Speed;
  y1 = y1 + y1Speed;
  y2 = y2 + y2Speed;

  //control the ball from moving off the side
  if (x1 >= width) {
    x1Speed = x1Speed * -1;
    red = random(255);
    green = random(255);
    blue = random(255);
  } else if (x1 <= 0) {
    x1Speed = x1Speed * -1;
    red = random(255);
    green = random(255);
    blue = random(255);
  }

  if (y1 >= height) {
    y1Speed = y1Speed * -1;
    red = random(255);
    green = random(255);
    blue = random(255);
  } else if (y1 <= 0) {
    y1Speed = y1Speed * -1;
    red = random(255);
    green = random(255);
    blue = random(255);
  }
  ellipse(x1, y1, 20, 20);



  if (x2 >= width) {
    x2Speed = x2Speed * -1;
    red = random(255);
    green = random(255);
    blue = random(255);
  } else if (x2 <= 0) {
    x2Speed = x2Speed * -1;
    red = random(255);
    green = random(255);
    blue = random(255);
  }

  if (y2 >= height) {
    y2Speed = y2Speed * -1;
    red = random(255);
    green = random(255);
    blue = random(255);
  } else if (y2 <= 0) {
    y2Speed = y2Speed * -1;
    red = random(255);
    green = random(255);
    blue = random(255);
  }
  ellipse(x2, y2, 20, 20);
}