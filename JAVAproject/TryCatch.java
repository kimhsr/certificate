public class TryCatch {
  
  public static void main(String[] args) {
    int intArray[] = new int[5]; // intArray��� �������ٰ� 5�� ������ŭ�� �迭�� ����. (0, 1, 2, 3, 4)

    try
    {
      intArray[3] = 10;
      intArray[5] = 1;
    }
    catch(Exception e)
    {
      e.printStackTrace(); // ���� �������� ���
      System.out.println("�迭 ���� �ʰ�");
      // System.exit(0); // ������ ���α׷��� ����
    }

    System.out.println("���α׷��� �������");

  }
}
