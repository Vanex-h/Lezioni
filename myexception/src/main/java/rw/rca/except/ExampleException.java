package rw.rca.except;

public class ExampleException  {
    public static void main(String[] args){
        myMethod();
    }
    static void myMethod() {

        try{
            int x=8/0;
            System.out.println("inside try ");

        }
        catch ( Exception e){
            System.err.println(e.toString());
            System.err.println(e.getMessage());
            e.printStackTrace();
        }
//        finally{
//            System.out.println("inside finally");
//        }
    }
}
