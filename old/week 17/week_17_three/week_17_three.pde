void setup(){
  size(400,400);
  background(#6AF5DC);
}
void draw(){
  if(mousePressed){
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed(){
  if(key=='1')stroke(255,0,0);//red
  if(key=='2')stroke(0,255,0);//green
}
