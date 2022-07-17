class Parent{
  String name = "t";
  void print(){
      System.out.print("Fi");
  }
}

class Child extends Parent{
  String name = "gh";
  Child(){}
  Child(String name){
      super.print();
      System.out.print(this.name);
      System.out.print(super.name);
      System.out.print(name);
  }
  void print(){
      new Child("i");
      System.out.print("ng");
  }
}


public class Soojebi6{
  public static void main(String[] args){
      Parent pa = new Child();
      pa.print();
  }
}