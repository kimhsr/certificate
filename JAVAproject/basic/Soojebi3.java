class Parent{   
  String classname = "Parent";
  public void info(){
     System.out.print(classname);
  }
}

class Child extends Parent{
  public void info(){
     super.info();
     System.out.print(classname);
  }
}
public class Soojebi3{
  public static void main(String[] args){
     Parent p = new Child();
     p.info();
  }
}
