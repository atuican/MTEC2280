  void setup() {
    size(500,500);
  }
  // Draw a circle wherever the mouse position is
  void draw() {

    // Circle drawing mode
    // ellipse(mouseX,mouseY,10,10);
    
    //where is my mouse?
    //println(mouseX,mouseY);
  }
  
  void mouseDragged() {
    // Line drawing mode
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
  
 void keyPressed() {
   println(key);
   //strokeWeight(10);
   
   if (key == 'a') {
     strokeWeight(10);
 }
   if (key == 's') {
     strokeWeight(1);
     
   if (key == 'c') {
     stroke
 }
 }