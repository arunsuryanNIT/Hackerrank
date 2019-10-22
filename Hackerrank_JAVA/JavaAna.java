import java.util.Scanner;

public class JavaAna {

    static boolean isAnagram(String str1, String str2) {
        str1=str1.toLowerCase();
        str2=str2.toLowerCase();
        char ch1[] = str1.toCharArray();
        char ch2[] = str2.toCharArray();
        int hash1[] = new int[26];
        int hash2[] = new int[26];
        for(int i = 0; i < 26; i++) hash1[i] = 0;
        for(int i = 0; i < 26; i++) hash2[i] = 0;
        for(int i = 0; i < str1.length(); i++){
            if(ch1[i] >= 'a' && ch1[i] <= 'z'){
                hash1[(int)(ch1[i] - 'a')]++;
            }
        }
        for(int i = 0; i < str2.length(); i++){
            if(ch2[i] >= 'a' && ch2[i] <= 'z'){
                hash2[(int)(ch2[i] - 'a')]++;
            }
        }
        for(int i = 0; i < 26; i++){
            if(hash1[i] != hash2[i]){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}