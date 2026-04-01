import java.util.Scanner;
class Multiplication{

      static void printMultiplicationTable(int num){
  
    
          for(int i=1; i<=10; i++){
                
           System.out.println(num + "x"+ i +" = "+(num * i));

        }
    }
        public static void main(String args[]){
             
            Scanner in = new Scanner(System.in);
               System.out.println("Enter a number");
                int num = in.nextInt();
                  
            printMultiplicationTable(num);
   } 
}     
            