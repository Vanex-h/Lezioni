package rw.ac.rca.connect;
import java.io.*;
import java.sql.*;
public class ConnectingDb {
    public static void main(String[] args) {
        String url="jdbc:mysql://localhost:3306/advanced";
        String username="VANESSA";
        String password="password";
        String query = "insert into worker (WorkId, Fname, Lname, Salary, Joining_date, department) values (7,'Dady', 'Tim', 400000, '2022-11-14', 'IT' )";
        Connection con= null;
        try {
            Class.forName("com.mysql.jdbc.Driver");
            con = DriverManager.getConnection(url, username,password);
            System.out.println("Connection established successfully");
            Statement st= con.createStatement();
            int rs= st.executeUpdate(query);
            System.out.println("Finally bishh");
//            while(rs.next()){
//                int code= rs.getInt("Workid");
//                String name= rs.getString("Fname");
//                String lname= rs.getString("Lname");
//                System.out.println(code + " "+ lname+" "+ name);
//            }

            st.close();
            con.close();
            System.out.println("Connection closed.....");

        }
        catch (SQLException e) {
            throw new RuntimeException(e);

        }
        catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        }


    }
}
