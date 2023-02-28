package rw.rca.except;

public class Ex {
    public static void main(String[] args) {
        Ex x= new Ex();
        try{
        x.doStuff();}
        catch(Exception e){
           throw new RuntimeException(e) ;
        }
    }


        void doStuff() throws myException {
            int x=6;
            throw new myException();
        }

}
