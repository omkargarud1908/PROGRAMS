import java.util.Scanner;

public class Person {
    private int id;
    private String name;
    private MyDate dob;
    private static int cnt = 1;

    public Person() {
        this.id = cnt++;
        this.name = "";
        this.dob = new MyDate(1, 1, 2000); // Default date of birth
    }

    public Person(String name, MyDate dob) {
        this.id = cnt++;
        this.name = name;
        this.dob = dob;
    }

    public void accept() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Name: ");
        name = sc.nextLine();
        System.out.print("Enter Date of Birth (date month year): ");
        dob.accept();
    }

    public void display() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.print("Date of Birth: ");
        dob.display();
    }

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of persons: ");
        n = sc.nextInt();

        Person[] persons = new Person[n];
        for (int i = 0; i < n; i++) {
            persons[i] = new Person();
            persons[i].accept();
        }

        System.out.println("Details of " + n + " Persons:");
        for (int i = 0; i < n; i++) {
            persons[i].display();
            System.out.println();
        }
    }
}
