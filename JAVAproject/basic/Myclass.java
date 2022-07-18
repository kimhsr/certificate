public class Myclass {
  public static void main(String args[]) {
   int i;
   i = 5;
   recursive(i);
  }
   
   static int recursive(int n){
   int i;
   if (n<1)
   return 2;
   
   else {
       i=(2*recursive(n-1)) +1;
       System.out.println(i);
       return i;
   }
  }
}