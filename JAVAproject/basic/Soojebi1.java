class Parent{   
  String name = "Parent";
  public Parent(){
     System.out.print(this.name);
  }
}

class Child extends Parent{
  String name = "Child";
  public Child(String name){
     System.out.print(this.name);
  }
}
public class Soojebi1{
  public static void main(String[] args){
     Child c = new Child("Soojebi");
  }
}
