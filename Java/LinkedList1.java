import java.util.*;

class LinkedList1
{
    public static void main(String arg[])
    {
        LinkedList <String> aobj = new LinkedList <String>();

        aobj.add("First");
        aobj.add("Second");
        aobj.add("Third");
        aobj.add("Fourth");
        aobj.add("Fifth");
        System.out.println("Contents of LinkedList :\n"+aobj);

        aobj.add(3,"new");
        System.out.println("Contents of LinkedList :\n"+aobj);

        aobj.add("Two");
        System.out.println("Contents of LinkedList :\n"+aobj);

        aobj.remove(3);
        System.out.println("Contents of LinkedList :\n"+aobj);

        aobj.set(3,"New_Data");
        System.out.println("Contents of LinkedList :\n"+aobj);

        System.out.println("Number of elements in LinkedList :\n"+aobj.size());

        System.out.println("First occurance of Third is :\n"+aobj.indexOf("Third"));

        System.out.println("Last occurance of Third is :\n"+aobj.lastIndexOf("Third"));

        System.out.println("Iterating the LinkedList \n");
        Iterator iobj = aobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next()+"");
        }
    }
     
}