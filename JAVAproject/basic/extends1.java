interface A {
  int a = 2;
}

class B implements A {
  int b;
  B(int i) {
    this.b = i * a;
  }

  public int getb() {
    return this.b;
  }
}

public class extends1{
  public static void main(String[] args) {
    int a = 3;
    B b1 = new B(1);
    System.out.println(b1.getb());
  }
}

