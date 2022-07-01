class Overloading {
  void f() { System.out.println("0"); }
  void f(int i) { System.out.println(i); }
  void f(int i, int j) { System.out.println(i + j); }
  public static void main(String[] args){
    Overloading a = new Overloading(); {
    a.f(25, 25);
    }
  }
}
