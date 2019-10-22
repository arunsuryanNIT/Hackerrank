import java.util.*;
import java.text.*;
public class NumFormat {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        String us, india, china, france;
       NumberFormat nf1 = NumberFormat.getCurrencyInstance(Locale.US);
       Locale indiaLocale = new Locale("en", "IN");
        us = nf1.format(payment);

        NumberFormat nf2 = NumberFormat.getCurrencyInstance(Locale.CHINA);
        china = nf2.format(payment);

        NumberFormat nf3 = NumberFormat.getCurrencyInstance(indiaLocale);
        india = nf3.format(payment);

        NumberFormat nf4 = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        france = nf4.format(payment);

        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}

