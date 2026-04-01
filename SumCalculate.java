class  SumCalculate{

        static void CalculateSum(int num){
           int sum =0;
        for(int i= 1; i<=num; i++)
        {
             sum =sum + i;
        }
          System.out.println("Sum = "+ sum);
      }
      
      public static void main(String args[]){
   
       CalculateSum(5);
    }
}