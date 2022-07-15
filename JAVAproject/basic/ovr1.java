public class ovr1 {
  public static void main(String[] args){
    ovr1 a1 = new ovr1();
    ovr2 a2 = new ovr2();
    System.out.println(a1.sum(3,2) + a2.sum(3,2));
  }
  int sum(int x, int y){
    return x + y;
  }
}

class ovr2 extends ovr1{
  int sum(int x, int y){
    return x-y + super.sum(x,y);
  }
}