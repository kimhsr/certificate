class Super {
  Super() {
    System.out.println("Default parent Constructor");
  }

  Super(char x){
    System.out.println(x);
  }
}

class Sub extends Super {
  Sub() {
    super();
    System.out.println("Defalut child constructor");
  }

  Sub(char x){
    System.out.println(x + "2");
  }
}

public class Test7 {
  public static void main(String args[]){
    Super s2 = new Sub('D');
  }
}
