class Parent{
  int compute(int num){
    if(num <= 1) return num;
    return compute( num - 1 ) + compute( num - 2 );
  }
}
class Child extends Parent {
  int compute(int num){
    if( num <= 1 ) return num;
    return compute( num - 1 ) + compute( num - 3 );
  }
}

class Test5 {
  public static void main(String arg[]){
    Parent obj = new Child();
    System.out.print(obj.compute(4));
  }
}
