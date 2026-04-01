import java.util.Scanner;
class Age{

    static void ageChecker(int age){     
        
        if(age < 18)
       
         {
            System.out.println("your the minor");
         }
         
         else if(age >=18 &&  age< 60)
         {   
             System.out.println(" Adult");
         }
          
         else
         {
              System.out.println("Senior citizen");
         }
    }

         public static void main (String args[]){

           Scanner in = new Scanner(System.in);
             
           System.out.println("Enter the age");
          
          int age = in.nextInt();
           ageChecker(age);

         }
}
     
        