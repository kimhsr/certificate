public class Main {

  public static void main(String[] args) {
    // 생성자 파라미터(매개변수)에 맞게 인자를 삽입해준다.
    User user = new User("김현성", 28, "프로그래밍"); // 클래스 생성  

    System.out.println(user.name);
    System.out.println(user.age);
    System.out.println(user.hobby);
  }
}
