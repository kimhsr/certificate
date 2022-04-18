public class ifelse {
  
  public static void main(String[] args){

    String kim = "반갑습니다";
    int a = 1;

    if(kim == "반갑습니다"){
      System.out.println("안녕하세요.");
    }
    else {
      System.out.println("누구세요?");
    }

    if(a == 0){
      System.out.println("a는 0 입니다.");
    }
    else if(a == 1) {
      System.out.println("a는 1 입니다.");
    }

    if(a == 0 && a == 1) {
      System.out.println("Test");
    }

    if(a == 0 || a == 1) {
      System.out.println("Test2");
    }
  }
}
