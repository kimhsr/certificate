public class data {
  
  public static void main(String[] args) {
    char var1 = '정'; // 한 글자의 한글 or 영문 가능 '' 로 함
    String var2 = "정보처리기사"; // 여러글자의 문자열 가능 "" 로 함

    byte var3 = -128; // `128 ~ + 127까지 숫자가 가능하다.
    short var4 = -32768; // -32768 ~ +32767까지 숫자가 가능하다.
    int var5 = 999999999; // -21억 ~ +21억까지 숫자가 가능하다.
    long var6 = 999999999; // 여러숫자의 입력가능

    float var7 = 0.1f; // 소수점 선언 후 뒤에 f를 까먹지 말고 붙이기
    double var8 = 0.000005; // 소수점 선언

    boolean isStart = false; // treu or false 조건식에서 많이 사용

    System.out.println(var1);
    System.out.println(var2);

    System.out.println(var3);
    System.out.println(var4);
    System.out.println(var5);
    System.out.println(var6);

    System.out.println(var7);
    System.out.println(var8);
    
    System.out.println(isStart);



  }

}
