import java.util.Scanner;

public class Main {
    public static Scanner sc = new Scanner(System.in);
    
    public static void main(String [] args) {
        
        System.out.println(
            (sc.next().length() >= sc.next().length()) ? "go" : "no"
        );
        
        sc.close();
    }
}