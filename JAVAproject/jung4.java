public class jung4 {
  int a = 10;
  int funcAdd(int x, int y) {
    return x + y + a;
  }
  public static void main(String[] args) {
    int x = 3, y = 6, r;
    jung4 cal = new jung4();
    r = cal.funcAdd(x, y);
    System.out.print(r);
  }
}
