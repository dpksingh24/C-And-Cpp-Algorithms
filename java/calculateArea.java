import java.util.Scanner;

public class calculateArea {
    public static double AreaOfCircle(double radius) {
        return 3.14 * radius * radius;
    }

    public static double AreaOfRectangle(double length, double width) {
        return length * width;
    }

    public static double AreaOfTriangle(double base, double height) {
        return (base * height) / 2;
    }

    public static double AreaofSquare(double side) {
        return side * side;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Enter the inputs
        System.out.print("Enter the radius of Circle:");
        double radius = sc.nextDouble();

        System.out.print("Enter the length of Rectangle:");
        double length = sc.nextDouble();
        System.out.print("Enter the width of Rectangle:");
        double width = sc.nextDouble();

        System.out.print("Enter the base of Triangle:");
        double base = sc.nextDouble();
        System.out.print("Enter the height of Triangle:");
        double height = sc.nextDouble();

        System.out.print("Enter the side of Square:");
        double side = sc.nextDouble();

        System.out.println("-------------------------------");

        // Print the Outputs
        double areaofcircle = AreaOfCircle(radius);
        System.out.println("Area of Circle is: " + areaofcircle);

        double areaofrectangle = AreaOfRectangle(length, width);
        System.out.println("Area of Rectangle is: " + areaofrectangle);

        double areaoftriangle = AreaOfTriangle(base, height);
        System.out.println("Area of Triangle is: " + areaoftriangle);

        double areaofsquare = AreaofSquare(side);
        System.out.println("Area of Square is: " + areaofsquare);
    }
}