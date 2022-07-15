public class D {
  private int a;
  public void set(int a) { this.a = a; }
  public void add(int d) { a += d; }
  public void print() { System.out.println(a); }
  public static void main(String args[]){
    D p = new D();
    D q;
    p.set(10);
    q=p;
    p.add(10);
    q.set(30);
    p.print();
  }
}
