import java.io.*;
import java.util.*;

public class StrRev {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        char ch[] = A.toCharArray();
        int i = 0, j = A.length() - 1;
        while(i <= j){
            char temp = ch[i];
            ch[i] = ch[j];
            ch[j] = temp;
            i++;
            j--;
        }
        String str = new String(ch);
        if(str.equals(A)) System.out.println("Yes");
        else System.out.println("No");
        sc.close();
    }
}



