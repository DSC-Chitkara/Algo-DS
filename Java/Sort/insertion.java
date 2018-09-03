
import java.util.Scanner;


public class insertion {
    public static void main(String []args)
    {
        int i, j;
        int temp;
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int []arr = new int[n];
        for(i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }
        for(i = 0 ; i < arr.length; i++)
        {
            for(j = 0; j < i; j++)
            {
                if(arr[j] > arr[i])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        System.out.println("output");
        for(i = 0; i < n; i++)
        {
            System.out.println(arr[i]);
        }
    }
}
