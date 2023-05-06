
class Base
{
    public int A;
    public int B;

    public Base()
    {
        System.out.println("Inside Base constructor");
        this.A = 11;
        this.B = 21;
    }

    public void fun()
    {
        System.out.println("Inside base fun");
    }

}

class Derived extends Base      //class Derived : public Base
{
    public int X;
    public int Y;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.X = 51;
        this.Y = 101;
    }

    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class Hierarchical extends Base
{
    public int Z;

    public DerivedX();
    {
        System.out.println("Inside DerivedX constructor");
        this.Z = 111;
    }
}

class Multilevel
{
    public static void main(String Arg[])
    {
        DerivedX dobj = new Derived();   //No Casting
        dobj.fun();
        dobj.gun();

        Systme.out.println(dobj.A);     //11
        Systme.out.println(dobj.B);     //21
        Systme.out.println(dobj.X);     //51    
        Systme.out.println(dobj.Y);     //101
        Systme.out.println(dobj.Z);     //111

    }
}







//        Base bobj = new Base();         //No Casting 
//        Base bobj2 = new Derived();     //Up Casting
//        Derived dobj = new Base();      //Down Casting