public class Person {
  private String name;
  public int age;
  public void setAge(int age){
    this.age = age;
  }
  public String toString(){
    return ("name:" + this.name + ", age:" + this.age);
  }
}

public class PersonTest{
  public static void main(String[] args){
    Person a = new Person();
    a.setAge(27);
    a.name = "Gildong";
    System.out.println(a);
  }
}