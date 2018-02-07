  void setup() {
    size(500,500);
    fill(0,0,0);
    text("Press a, s, or c to change stroke/color, press d to save, press ESC to exit", 15, 30);
  }
  
  void draw() {
    
  }
  
  void mouseDragged() {
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
  
 void keyPressed() {
   println(key);
   
   if (key == 'a') {
     strokeWeight(1);
     stroke(255,0,0);
 }
 
   if (key == 's') {
     strokeWeight(10);
     stroke(0,255,0);
   }
     
   if (key == 'c') {
     stroke(0,0,255);
   }
   if (key == 'd') {
     save("020518.jpg");
   }
   if (key == 27) {
     //loadImage("sketch_02_05_18_homework/020518", "jpg");
     exit();
   }
 }