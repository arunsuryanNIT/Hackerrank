import java.util.*;
import java.util.regex.Pattern;
import java.util.regex.Matcher;
public class ValidGmail{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enetr email address");
        String email = sc.nextLine();
        Pattern pattern = Pattern.compile(".....@gmail.com");
        Matcher matcher = pattern.matcher(email);
        System.out.println(matcher.matches());
        sc.close();
    }
}