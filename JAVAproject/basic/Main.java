class A{
  int a;
  A(int a){
    this.a = a;
  }
  void display(){
    System.out.println("a="+a);
  }
}

class B extends A{
  B(int a){
    super(a);
    super.display();
  }
}

public class Main {
  public static void main(String[] args){
    B obj = new B(10);
  }
}
