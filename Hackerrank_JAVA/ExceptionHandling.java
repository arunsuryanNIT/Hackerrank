import java.util.Scanner;
class MyCalculator {
    long power (int n, int p) throws Exception{
        if(p < 0 || n < 0)
            throw new Exception("n or p should not be negative.");
        else if(p == 0 && n == 0)
            throw new Exception("n and p should not be zero.");
        int ans = 1;
            for(int i = 1; i <= p; i++){
                ans = ans * n;
                }
        return ans;
    }
}

public class Solution {
    public static final MyCalculator my_calculator = new MyCalculator();
    public static final Scanner in = new Scanner(System.in);
    
    public static void main(String[] args) {
        while (in .hasNextInt()) {
            int n = in .nextInt();
            int p = in .nextInt();
            
            try {
                System.out.println(my_calculator.power(n, p));
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}