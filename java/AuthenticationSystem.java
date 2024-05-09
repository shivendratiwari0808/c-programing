import java.util.Scanner;

public class AuthenticationSystem {
    // Define a fixed username and password
    private static final String USERNAME = "admin";
    private static final String PASSWORD = "password";

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to the Authentication System!");

        // Prompt the user to enter their username
        System.out.print("Enter your username: ");
        String enteredUsername = scanner.nextLine();

        // Prompt the user to enter their password
        System.out.print("Enter your password: ");
        String enteredPassword = scanner.nextLine();

        // Check if the entered username and password match the predefined ones
        if (isValidCredentials(enteredUsername, enteredPassword)) {
            System.out.println("Login successful! Welcome, " + enteredUsername + "!");
        } else {
            System.out.println("Invalid username or password. Please try again.");
        }
    }

    // Method to validate the entered username and password
    private static boolean isValidCredentials(String username, String password) {
        return username.equals(USERNAME) && password.equals(PASSWORD);
    }
}
