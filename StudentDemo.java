class Student {
   
     int id;
     String name;
     int age;
     float mark;
    
     Student(){
       id = 25;
       name = "kunal";
       age = 23;
       mark = 98.0f;
     }
    
     Student(int id, String name, int age, float mark){
   
             this.id =id;
             this.name = name;
             this.age = age;
             this.mark = mark;
     }
}
  class StudentDemo{
    
            public static void main(String args[]){

          Student s1 = new Student(25,"harshal",35,87.0f);
          System.out.println(s1.name);

          Student s2 = new Student();
       System.out.println(s2.id);
        System.out.println(s2.name);
        System.out.println(s2.age);
         System.out.println(s2.mark);





	   
}
}