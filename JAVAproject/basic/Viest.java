import java.util.*;
public class Viest {
  public static void main (String[] arg){
    Vector v1 = new Vector();
    Vector v2 = new Vector();
    v1.addElement("java_book");
    v2.addElement("java_book");
    System.out.println(v1.equals(v2));
    System.out.println(v1==v2);
  }
}
