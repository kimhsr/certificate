class Parent{   
  String classname = "Parent";
  public void info(){
     System.out.print(classname);
  }
}

class Child extends Parent{
  String classname = "gamsa";
  public void info(){
     super.info();
     System.out.print(super.classname);
  }
}
public class Soojebi5{
  public static void main(String[] args){
     Parent p = new Child();
     p.info();
  }
}