class Divistion {
  public static void main(String[] args){
    int a, b, result;
    a = 3;
    b = 0;
    try{
      result = a / b;
      System.out.print("A");
    }
    catch(ArithmeticException e){
      System.out.print("B");
    }
    finally{
      System.out.print("C");
    }
    System.out.print("D");
  }
}
