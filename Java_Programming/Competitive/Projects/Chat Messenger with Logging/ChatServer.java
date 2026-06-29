import java.io.*;
import java.net.*;

class ChatServer
{
    public static void main(String A[]) throws Exception
    {
        // Start the server on port 5200
        ServerSocket ssobj = new ServerSocket(5200);
        System.out.println("Server is waiting at port 5200...");

        // Accept the client connection
        Socket sobj = ssobj.accept();
        System.out.println("Client request accepted successfully!");

        // Set up input and output streams
        PrintStream pobj = new PrintStream(sobj.getOutputStream());
        BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream())); // From Client
        BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));          // From Keyboard

        System.out.println("-------------------------------------------------------");
        System.out.println("------------------ Marvellous Server ------------------");
        System.out.println("-------------------------------------------------------");

        String str1 = null, str2 = null;

        // Loop runs as long as client is sending messages
        while ((str1 = bobj1.readLine()) != null) 
        {
            // If client types "end", break out of the loop immediately
            if (str1.equalsIgnoreCase("end")) {
                System.out.println("Client requested to close connection.");
                break;
            }

            System.out.println("Client says: " + str1);
            
            // Get reply from server keyboard
            System.out.print("Enter message for client: ");
            str2 = bobj2.readLine();
            
            // Send reply back to client
            pobj.println(str2);
        }    

        // Clean up and close connections
        System.out.println("Closing server connection...");
        bobj1.close();
        bobj2.close();
        pobj.close();
        sobj.close();
        ssobj.close(); 
    }
}