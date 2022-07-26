abstract class Animal{
  abstract void value();
  void key(){
    System.out.print("animal");
  }
}
class Dog extends Animal{
  void value(){
    System.out.print("dog");
  }
}
class Soojebi8 {
  public static void main(String[] args) {
    Animal d = new Dog();
    d.key();
    d.value();
  }
}
