import java.io.*;
import java.net.*;

class ChatClient
{
    public static void main(String A[]) throws Exception
    {
        // Connect to the server running on localhost at port 5200
        Socket sobj = new Socket("localhost", 5200);
        System.out.println("Client connected successfully!");

        // Set up input and output streams
        PrintStream pobj = new PrintStream(sobj.getOutputStream());
        BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream())); // From Server
        BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));          // From Keyboard

        System.out.println("-------------------------------------------------------");
        System.out.println("------------------ Marvellous Client ------------------");
        System.out.println("-------------------------------------------------------");

        String str1 = null, str2 = null;
        
        while (true) 
        {
            // Get message from client keyboard
            System.out.print("Enter MSG for Server (type 'end' to exit): ");
            str1 = bobj2.readLine();

            // Safe check for exit condition
            if (str1 == null || str1.equalsIgnoreCase("end")) {
                pobj.println("end"); // Inform server we are leaving
                break;
            }

            // Send message to server
            pobj.println(str1);
            
            // Read response from server
            str2 = bobj1.readLine();
            if (str2 == null) {
                System.out.println("Server disconnected abruptly.");
                break;
            }
            
            System.out.println("Server Says: " + str2);
        } 

        // Clean up and close connections
        System.out.println("Closing client connection...");
        bobj1.close();
        bobj2.close();
        pobj.close();
        sobj.close();
    }    
}