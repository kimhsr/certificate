class A3 {
  A3() { System.out.printf("%d ", 10);}
}
class B3 extends A3 {
  B3(int a) { System.out.printf("%d ", a);}
}

class C3 extends B3 {
  C3(int a){
    super(a/10);
    System.out.printf("%d ", a);
  }
}

class Test1 {
  public static void main(String args[]) {
    A3 b = new C3(1000);
  }
}