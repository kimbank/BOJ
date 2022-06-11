import java.util.Scanner;

public class Main {
    public static Scanner sc = new Scanner(System.in);
    public static boolean m [] = new boolean[30];
    
    public static void main(String [] args) {

        for (short i = 0; i < 28; i++)
            m[sc.nextShort() - 1] = true;

        for (short i = 0; i < 30; i++)
            if (!m[i]) System.out.println(i + 1);

        sc.close();
    }
}