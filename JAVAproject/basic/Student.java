public class Student {
  int id;
  char name;
  static int count = 0;
  Student() {
    count ++;
  }
}

class StudentTest{
  public static void main(String[] args){
    Student man1 = new Student();
    Student man2 = new Student();
    Student man3 = new Student();
    Student man4 = new Student();

    System.out.println(Student.count);
  }
}