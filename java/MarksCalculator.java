import java.util.Scanner;
public class MarksCalculator
{
    public static void main(String args[])
    {
        int markArray[] = new int[4];
        int i;
        float sum=0;
        float average, percentage;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter marks for 4 Subjects : ");
        for(i=0; i<4; i++){
            markArray[i] = scan.nextInt();
            sum = sum + markArray[i];
        }

        average = sum/4;
        percentage = (sum/400) * 100;

        System.out.print("Average Marks = " +average);
        System.out.print("\nPercentage = " +percentage+ "%");
    }
}
