class BB extends AA {
  int d2;
  int t;
  BB(int s1, int t1){
    super(s1);
    t = t1;
    d2 = t * t;
  }
}

class AA {
  int d1;
  int s;
  AA(int s1){
    s = s1;
    d1 = s * s;
  }
}

public class Test2 {
  public static void main(String args[]){
    BB myTest = new BB(10, 20);
    System.out.println("Result1 : " + myTest.d1);
    System.out.println("Result2 : " + myTest.d2);
  }
}
