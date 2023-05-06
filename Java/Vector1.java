import java.util.*;

class Vector1
{
    public static void main(String arg[])
    {
        Vector <Integer> vobj1 = new Vector <Integer>();

        Vector <Integer> vobj2 = new Vector <Integer>(50);

        Vector <Integer> vobj3 = new Vector <Integer>(50,10);

        vobj1.add(10);
        vobj1.add(20);
        vobj1.add(30);
        vobj1.add(40);
        vobj1.add(50);
        System.out.println("Contents of Vector :\n"+vobj1);

        vobj1.add(3,11);
        System.out.println("Contents of Vector :\n"+vobj1);

        vobj1.remove(3);
        System.out.println("Contents of Vector :\n"+vobj1);

        vobj1.set(3,21);
        System.out.println("Contents of Vector :\n"+vobj1);

        System.out.println("number of elements inVector are :\n"+vobj1.size());

        System.out.println("First occurance of third is :\n"+vobj1.indexOf(21));

        System.out.println("First occurance of third is :\n"+vobj1.lastIndexOf(21));

        System.out.println("Iterating the Vector \n");
        Iterator iobj = vobj1.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next()+"");
        }

    }
}