import java.util.*;

class Stack1
{
    public static void main(String arg[])
    {
        Stack <Integer> st = new Stack <Integer>();

        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);

        Integer element = st.pop();
        System.out.println("Poped element is "+element);

        int position = 0;
        position = st.search(30);
        if(position == -1)
        {
            System.out.println("There is no such element is stack");
        }
        System.out.println("Element is found at position "+position+"\n");

        System.out.println("Stack Contains :"+st);
    }
}