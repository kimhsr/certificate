class A1{
  static void f() { System.out.print("1 "); }
  void g() { System.out.print("2 "); }
}

class B1 extends A1 {
  static void f() { System.out.println("3 "); }
  void g() { System.out.print("4 "); }
}

public class Overriding2 {
  public static void main(String[] args){
    A1 a = new B1();
    a.f();
    a.g();
  }
}
