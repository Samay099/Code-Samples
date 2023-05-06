import java.util.*;

class ArrayList1
{
    public static void main(String arg[])
    {
        ArrayList <String> aobj = new ArrayList <String>();

        aobj.add("First");
        aobj.add("Second");
        aobj.add("Third");
        aobj.add("Fourth");
        aobj.add("Fifth");
        System.out.println("Contents of ArrayList :\n"+aobj);

        aobj.add(3,"new");
        System.out.println("Contents of ArrayList :\n"+aobj);

        aobj.add("Two");
        System.out.println("Contents of ArrayList :\n"+aobj);

        aobj.remove(3);
        System.out.println("Contents of ArrayList :\n"+aobj);

        aobj.set(3,"New_Data");
        System.out.println("Contents of ArrayList :\n"+aobj);

        System.out.println("Number of elements in ArrayList :\n"+aobj.size());

        System.out.println("First occurance of Third is :\n"+aobj.indexOf("Third"));

        System.out.println("Last occurance of Third is :\n"+aobj.lastIndexOf("Third"));

        System.out.println("Iterating the ArrayList \n");
        Iterator iobj = aobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next()+"");
        }
    }
     
}