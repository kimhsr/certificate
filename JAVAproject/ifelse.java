public class ifelse {
  
  public static void main(String[] args){

    String kim = "�ݰ����ϴ�";
    int a = 1;

    if(kim == "�ݰ����ϴ�"){
      System.out.println("�ȳ��ϼ���.");
    }
    else {
      System.out.println("��������?");
    }

    if(a == 0){
      System.out.println("a�� 0 �Դϴ�.");
    }
    else if(a == 1) {
      System.out.println("a�� 1 �Դϴ�.");
    }

    if(a == 0 && a == 1) {
      System.out.println("Test");
    }

    if(a == 0 || a == 1) {
      System.out.println("Test2");
    }
  }
}
