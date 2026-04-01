import java.util.Scanner;
class Sum{
      
    public static void main(String args[]){
     int a , b, sum=0;

    Scanner in = new Scanner(System.in);
        
       System.out.println("Enter first number" );
          a = in.nextInt();
       System.out.println("Enter second nummber");
         b = in.nextInt();
      
        sum = a + b;
       System.out.println("Sum: "+sum);
   }
}