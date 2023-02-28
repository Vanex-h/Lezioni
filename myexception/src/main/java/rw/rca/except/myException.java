package rw.rca.except;

import org.w3c.dom.Text;

public class myException extends Exception{
    public static void main(String[] args) {
    TextEx x= new TextEx();
        try {
            x.doStuff();
        } catch (Exception e) {
            throw new RuntimeException(e);
        }


    }


}

    class TextEx{
        void doStuff() throws myException {
            System.out.println("hello");
                throw new myException();



        }
    }


