import java.util.Scanner;

public class SubStrComp {
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        String str;
        int k;
        str = sc.nextLine();
        k = sc.nextInt();
        String largest = str.substring(0, k);
        String lowest = str.substring(0, k);
        for(int i = 1; i < str.length() - k + 1; i++){
            if(str.substring(i, i + k).compareTo(largest) > 0)
                largest = str.substring(i, i + k);
        }
        for(int i = 1; i < str.length() - k + 1; i++){
            if(str.substring(i, i + k).compareTo(lowest) < 0)
                lowest = str.substring(i, i + k);
        }
        System.out.println(lowest);
        System.out.println(largest);
        sc.close();
    }
}