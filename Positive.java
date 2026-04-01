import java.util.Scanner;
class Positive{
   
       static void PositiveNumber(){
 
     
           Scanner in = new Scanner(System.in);
             
            int num;
 
         do {
             System.out.println("Enter number : ");
   
                     num = in.nextInt();
           
             } while (num <=0);
               
              System.out.println("The Positive number is : "+num);
          }
            
       public static void main(String args[]){
   
            PositiveNumber();
         }
}