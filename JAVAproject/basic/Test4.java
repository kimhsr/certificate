public class Test4 {
  public static void main(String[] args){
    int x=1, y=2;
    double m=3.4, n=5.6;
    int[] p ={10,20,30,40};

    System.out.print(sum(m,n)+" ");
    System.out.print(sum(x,y)+" ");
    System.out.print(sum(p));
  }
  public static int sum(int a, int b)
  {
    return a+b;
  }
  public static double sum(double a, double b)
  {
    return a+b;
  }
  public static int sum(int a[])
  {
    int total=0;

    for(int i=0; i<a.length; i++)
      total += a[i];

      return total;
  }
}
