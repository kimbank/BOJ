import java.util.*;

public class Main {
    public static Scanner sc = new Scanner(System.in);
    
    public static void main(String [] args) {
        
        System.out.println(
            ((sc.nextDouble() * (100 - sc.nextDouble())) >= 10000 ) 
            ? "0" : "1"
        );
        
        sc.close();
    }
}