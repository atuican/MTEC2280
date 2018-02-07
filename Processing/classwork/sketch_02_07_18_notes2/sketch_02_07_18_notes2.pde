void setup() {
  size(600, 600);
  textAlign(CENTER, CENTER);
  textSize(30);
}

void draw() {
}

void keyPressed() {
  background(0);
  
  //create a variable of type INTEGER (int)
  //name it coin, and assign it a random value 0 to 1
  //convert random(2) to INTEGER since it usually returns FLOAT

  int coin = int(random(2));

  if (coin == 0) {

    text("Heads", width/2, height/2);
  } 
  
  else if (coin == 1) {
    text("Tails", width/2, height/2);
  }
  
}