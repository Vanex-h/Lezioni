package rw.rca.except;
import java.util.*;
import java.sql.*;
public class Connecting {

    public static void main(String[] args)  {
        String url= "jdbc:mysql://localhost:3306/advanced";
        String uname="VANESSA";
        String password="password";
        String query= "Select * from title";
        Connection con=null;
        try{
            Class.forName("com.mysql.jdbc.Driver");
            con= DriverManager.getConnection(url, uname,password);
            Statement st= con.createStatement();
            ResultSet rs= st.executeQuery(query);
            while(rs.next()){
                int code= rs.getInt("Workid");

                System.out.println( code);
            }
            st.close();
            con.close();
            System.out.println("Ciao");}
        catch (SQLException e){
            throw new RuntimeException(e);
        }
        catch(ClassNotFoundException e){
            throw new RuntimeException(e);
        }
    }
}

