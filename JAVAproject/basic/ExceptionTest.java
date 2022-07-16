class ExceptionTest {
  ExceptionTest() {
    try {
      method();
      System.out.println("A");
    }
    catch(Exception e){
      System.out.println("B");
    }
    finally{
      System.out.println("C");
    }
    System.out.println("D");
  } 
  void method(){}
  public static void main(String[] args){
    ExceptionTest t = new ExceptionTest();
  }
}
