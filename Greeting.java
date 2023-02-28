public class Greeting {
    public static void main(String args[]){
        Greeting gr= new Greeting();
        String asay="Hello RCA student";
        gr.speech(asay);
    }
    public void speech(String xyz){
        System.out.println("You say: " + xyz);
    }
}
