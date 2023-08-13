import java.util.Scanner;

public class Account {
    private String name;
    private String accountNumber;
    private double balance;

    public Account(String name, String accountNumber, double balance) {
        this.name = name;
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public void accept() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name of the Account Holder:");
        name = sc.nextLine();
        System.out.println("Enter Account number:");
        accountNumber = sc.nextLine();
        System.out.println("Enter Balance:");
        balance = sc.nextDouble();
    }

    public void display() {
        
        System.out.println(accountNumber + " \t " + name + " \t " + balance);
    }

    public static void sortAccount(Account[] accounts) {
        int n = accounts.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (accounts[j].balance > accounts[j + 1].balance) {
                    // Swap accounts[j] and accounts[j+1]
                    Account temp = accounts[j];
                    accounts[j] = accounts[j + 1];
                    accounts[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int n, i;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter how many account holders you want to store: ");
        n = sc.nextInt();
        Account[] a = new Account[n];
        
        for (i = 0; i < n; i++) {
            a[i] = new Account("", "", 0); // Create instances with default values
            a[i].accept();
        }

        System.out.println("Unsorted Account Details:");
        System.out.println("Ac.NO \t Name \t Balance");
        for (i = 0; i < n; i++) {
            a[i].display();
        }

        sortAccount(a);

        System.out.println("Sorted Account Details:");
        System.out.println("Ac.No. \t Name \t Balance");
        for (i = 0; i < n; i++) {
            a[i].display();
        }
    }
}
