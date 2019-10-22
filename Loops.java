import java.util.*;
public class Loops{
    static long pow (long a, int b){
    if ( b == 0)        return 1;
    if ( b == 1)        return a;
    if (b % 2 == 0)    return     pow ( a * a, b/2); //even a=(a^2)^b/2
    else                return a * pow ( a * a, b/2); //odd  a=a*(a^2)^b/2
}
    public static void main(String [] args){
        int T;
        Scanner in = new Scanner(System.in);
        T = in.nextInt();
        while(T != 0){
            long  a, b, n, sum = 0;
            a = in.nextLong();
            b = in.nextLong();
            n = in.nextLong();
            for(int i = 0; i < n; i++){
                if(i == 0)sum = sum + a + (pow(2, i) * b);
                else sum = sum + (pow(2, i) * b);
                System.out.println(sum + " ");
            }
            T--;
        }
        in.close();
    }
}