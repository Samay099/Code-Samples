import java.util.*;

class ArrayListUserDefined
{
    public static void main(String arg[])
    {
        Student s1 = new Student(101,"A",23);
        Student s2 = new Student(102,"B",21);
        Student s3 = new Student(103,"C",25);

        ArrayList<Student> aobj = new ArrayList<Student>();

        aobj.add(s1);
        aobj.add(s2);
        aobj.add(s3);

        Iterator iobj = aobj.iterator();
        while(iobj.hasNext())
        {
            Student st = (Student)iobj.next();
            if(st.age >= 20)
            {
                System.out.println(st.rollno+","+st.name+","+st.age);
            }
        }
    }
}

class Student
{
    int rollno;
    String name;
    int age;

    Student(int rollno,String name, int age)
    {
        this.rollno = rollno;
        this.name = name;
        this.age = age;
    }
}

