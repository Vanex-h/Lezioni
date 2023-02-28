package rw.ac.rca.connect;
import java.sql.*;
import java.util.*;
public class Connect {
    public static void main(String[] args)  throws Exception{
        String url= "jdbc:mysql://localhost:3306/advanced";
        String uname="VANESSA";
        String password="password";
        String query= "INSERT INTO title VALUES(9,'noo',2002-02-15)";
        Connection con=null;
        try{
        Class.forName("com.mysql.jdbc.Driver");
        con= DriverManager.getConnection(url, uname,password);
        Statement st= con.createStatement();
        int rs= st.executeUpdate(query);
//        while(rs.next()){
//                int code= rs.getInt("Workid");
//
//                System.out.println( code);
//                    }
            System.out.println("Worked");
        st.close();
        con.close();
        System.out.println("Ciao");}
        catch (SQLException e){
            throw new RuntimeException(e);
        }
        catch(Exception e){
            System.out.println(e.toString());
        }
    }

}
