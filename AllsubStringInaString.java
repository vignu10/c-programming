import java.util.*;
public class Main
{
    
    public static void SubString(String str,int len)
    {
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<=len;j++)
            {
                System.out.println(str.substring(i,j));
            }
        }
    }
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       String str=sc.nextLine();
       SubString(str,str.length()); 
    }
}
