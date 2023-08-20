import java.io.*;
import java.util.Scanner;

// Define an abstract class Staff
abstract class Staff {
    String name, address;

    public Staff(String name, String address) {
        this.name = name;
        this.address = address;
    }

    // Abstract method to calculate salary
    public abstract double calculateSalary();
}

// Define FullTimeStaff class
class FullTimeStaff extends Staff {
    String department;
    double salary;

    public FullTimeStaff(String name, String address, String department, double salary) {
        super(name, address);
        this.department = department;
        this.salary = salary;
    }

    // Calculate salary for full-time staff including HRA and DA
    public double calculateSalary() {
        double hra = 0.08 * salary;
        double da = 0.05 * salary;
        return salary + hra + da;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("Department: " + department);
        System.out.println("Salary: " + salary);
        System.out.println("Calculated Salary: " + calculateSalary());
        System.out.println("----------------------");
    }
}

// Define PartTimeStaff class
class PartTimeStaff extends Staff {
    int hours;
    double rate;

    public PartTimeStaff(String name, String address, int hours, double rate) {
        super(name, address);
        this.hours = hours;
        this.rate = rate;
    }

    // Calculate salary for part-time staff
    public double calculateSalary() {
        return hours * rate;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("Hours Worked: " + hours);
        System.out.println("Rate per Hour: " + rate);
        System.out.println("Calculated Salary: " + calculateSalary());
        System.out.println("----------------------");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of staff members: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        Staff[] staffMembers = new Staff[n];

        for (int i = 0; i < n; i++) {
            System.out.println("Select Staff Type for Member " + (i + 1) + ":");
            System.out.println("1. Full Time Staff");
            System.out.println("2. Part Time Staff");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline character

            System.out.println("Enter Name: ");
            String name = scanner.nextLine();

            System.out.println("Enter Address: ");
            String address = scanner.nextLine();

            if (choice == 1) {
                System.out.println("Enter Department: ");
                String department = scanner.nextLine();

                System.out.println("Enter Salary: ");
                double salary = scanner.nextDouble();

                staffMembers[i] = new FullTimeStaff(name, address, department, salary);
            } else if (choice == 2) {
                System.out.println("Enter Hours Worked: ");
                int hours = scanner.nextInt();

                System.out.println("Enter Rate per Hour: ");
                double rate = scanner.nextDouble();

                staffMembers[i] = new PartTimeStaff(name, address, hours, rate);
            } else {
                System.out.println("Invalid choice. Skipping staff member.");
            }
             System.out.println("\nStaff Details:");
        for (int i = 0; i < n; i++) {
            staffMembers[i].display();
        }

        scanner.close();
    }
        }

        // Display details and calculated salaries for all staff members
       
}
