import java.util.Scanner;

public class Main {
    public static Scanner sc = new Scanner(System.in);
    
    public static void main(String [] args) {

        while(true) {
            int F = sc.nextInt();
            int S = sc.nextInt();
            
            if (F == S && F == 0) break;
            
            System.out.println((F > S) ? "Yes" : "No");
        }

        sc.close();
    }
}