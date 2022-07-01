class Shape {
  void draw(){
    System.out.println("Shape");
  }
}

class Circle extends Shape {
  void draw(){
    System.out.println("Circle");
  }
}

class Square extends Shape {
  void draw() {
    System.out.println("Square");
  }
}

public class Overriding {
  public static void main(String[] args) {
    Shape s1 = new Shape();
    Circle s2 = new Circle();
    Square s3 = new Square();
    Shape s;
    s = s1; s.draw();
    s = s2; s.draw();
    s = s3; s.draw();
  }
}