public class MethodExample {
  public static void main(String[] args) {
    
    // String a = "hello";
    // String b = "����ó�����";

    // System.out.println(a + b);

    MethodExample methodExample = new MethodExample(); // Ŭ���� ����
    methodExample.StrCombine("hello", "����ó�����"); // �޼ҵ� ���� (String Ÿ���� 2���� �Ѱ� ��.)

    System.out.println(methodExample.Strjungbo("jung", "bo"));
  }

  // �޼ҵ� ���� ��
  // �޼ҵ带 ����� ����
  // 1. ���������� ���ؼ�
  // 2. �������� �������ϱ�
  // 3. ĸ��ȭ (���� ������ �ߺ��� �ڵ带 �ۼ��� �ʿ䰡 ������)
  public void StrCombine (String a, String b) { // void�� ������ �޼ҵ�.
    String result = a + b;
    System.out.println(result);

  }

  public String Strjungbo (String jung, String bo) { // return ������ �޼ҵ�
    String result = jung + bo;
    return result;

  }
}
