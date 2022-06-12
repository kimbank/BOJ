import java.util.Scanner;
import java.util.HashMap;

public class Main {
    public static Scanner sc = new Scanner(System.in);
    
    public static void main(String [] args) {

        int N = sc.nextInt();

        HashMap<Integer, Integer> m = new HashMap<Integer, Integer>();

        for (int i = 0; i < N; i++) {
            Integer k = sc.nextInt();
            
            try {
                m.put(k, m.get(k) + 1);
            } catch (NullPointerException e) {
                m.put(k, 1);
            }
        }
        
        Integer ans = m.get(sc.nextInt());
        System.out.println((ans == null) ? 0 : ans);
        
        sc.close();
    }
}