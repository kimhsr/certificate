class Super {
  Super(){
    System.out.print('A');
  }
  Super(char x){
    System.out.print(x);
  }
}

class Sub extends Super{
  Sub() {
    super();
    System.out.print('B');
  }

  Sub(char x){
    this();
    System.out.print(x);
  }
}

public class Test3 {
  public static void main(String[] args){
    Super s1 = new Super('C');
    Super s2 = new Sub('D');
  }
}
