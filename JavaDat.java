import java.util.Scanner;
public class JavaDat{
    public static boolean checkShort(String s){
        try{
            short i = Short.parseShort(s);
            return true;
        }
        catch (Exception e)
        {
            return false;
        }
    }
    public static boolean checkByte(String s){
        try{
            byte i = Byte.parseByte(s);
            return true;
        }
        catch (Exception e)
        {
            return false;
        }
    }
    public static boolean checkInt(String s){
        try{
            int i = Integer.parseInt(s);
            return true;
        }
        catch (Exception e)
        {
            return false;
        }
    }
    public static boolean checkLong(String s){
        try{
            long i = Long.parseLong(s);
            return true;
        }
        catch (Exception e)
        {
            return false;
        }
    }
    public static void main(String [] args){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();
        while(n-- > 0){
            String s;
            boolean a1, a2, a3, a4;
            a1 = a2 = a3 = a4 = false;
            s = sc.nextLine();
            a1 = checkByte(s);
            a2 = checkShort(s);
            a3 = checkInt(s);
            a4 = checkLong(s);
            
            if(a1||a2||a3||a4)
            {
                System.out.println(s + " can be fitted in:");
                if(a1)
                    System.out.println("* byte");
                if(a2)
                    System.out.println("* short");
                if(a3)
                    System.out.println("* int");
                if(a4)
                    System.out.println("* long");
            }
            else
            {
                System.out.println(s + " can't be fitted anywhere.");
            }

        }
    }
}