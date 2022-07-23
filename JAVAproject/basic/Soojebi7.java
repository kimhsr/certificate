public class Soojebi7 {
  public static void main(String args[]){
    int a = 0, b = 0;
    try {
      System.out.print(a/b);
      System.out.print("A");
    }
    catch(ArithmeticException e){
      System.out.print("B");
    }
    catch(ArrayIndexOutOfBoundsException e){
      System.out.print("C");
    }
    finally{
      System.out.print("D");
    }
  }
}
