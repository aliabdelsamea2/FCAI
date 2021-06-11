package com.company;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/**
 * author Ali
 */
public class Main {
    static void menu(){
        System.out.println("1- Register");
        System.out.println("2- Login");
    }
    static void menuCase_1(){
        System.out.println("1- Player");
        System.out.println("2- PlaygroundOwner");
        System.out.println("3- Admin");
        System.out.println("4- exit");
    }
    static void options1_1(){
        System.out.println("1- Create eWallet");
        System.out.println("2- Display Playgrounds");
        System.out.println("3- Book Playground");
        System.out.println("4- ViewBookings");
        System.out.println("5- Access eWallet");
        System.out.println("6- Return back");
    }
    static void options1_1_2(){
        System.out.println("1- Display all");
        System.out.println("2- Filter using playground name");
        System.out.println("3- Filter using playground number");
        System.out.println("4- Return back");
    }
    static void menuCase_2(){
        System.out.println("1- Create eWallet");
        System.out.println("2- Display myPlaygrounds");
        System.out.println("3- Add Playground");
        System.out.println("4- Add slot");
        System.out.println("5- Update Slots");
        System.out.println("6- Access eWallet");
        System.out.println("7- Return back");

    }

    private static void info(Scanner input) {
        System.out.print("Enter Fname: ");
        String fname = input.next();

        System.out.print("Enter Lname: ");
        String lname = input.next();

        System.out.print("Enter NationalId: ");
        String NationalId = input.next();

        System.out.print("Enter city: ");
        String city = input.next();

        System.out.print("Enter Phone: ");
        String Phone = input.next();

        System.out.println("The registration process has been completed successfully\n");
    }
    public static void main(String[] args) {
        boolean stat1=true;
        while (stat1)
        {
            System.out.println("Welcome To GoFo");
            System.out.println("-----------------");
            menu();
            Scanner input =new Scanner(System.in);
            int choice1=input.nextInt();
            switch (choice1) {
                /*---------------- Register -----------------*/
                case 1 -> {
                    boolean stat2 = true;
                    while (stat2) {
                        menuCase_1();
                        int choice2 = input.nextInt();
                        switch (choice2) {
                            /*---------------- Player -----------------*/
                            case 1 -> {
                                info(input); //Take the information.

                                boolean stat3 = true;
                                while (stat3) {
                                    options1_1();
                                    int choice3 = input.nextInt();
                                    switch (choice3) {
                                        case 1 -> {
                                            System.out.print("Enter Id: ");
                                            int id = input.nextInt();

                                            System.out.print("Enter balance: ");
                                            double balance = input.nextDouble();
                                        }
                                        case 2 -> {
                                            options1_1_2();
                                            int choice4 = input.nextInt();
                                            switch (choice4) {
                                                case 1 -> {
                                                    ///Display all
                                                }
                                                case 2 -> {
                                                    System.out.print("Enter playground name: ");
                                                    String name = input.next();
                                                }
                                                case 3 -> {
                                                    System.out.print("Enter playground slot: ");
                                                    String date= input.next();
                                                }
                                            }
                                        }
                                        case 3 -> {
                                            ///display Booking
                                        }
                                        case 4 -> {
                                            ///ViewBookings
                                        }
                                        case 5 -> {
                                            int eWallet_Id;
                                            double amount1, amount2;
                                            System.out.println("1- Withdraw");
                                            amount1 = input.nextDouble();

                                            System.out.println("2 -Deposit");
                                            amount2 = input.nextDouble();

                                            System.out.print("3- transfer");
                                            eWallet_Id = input.nextInt();
                                        }
                                        default -> {
                                            stat3 = false;
                                        }
                                    }
                                }
                            }

                            /*---------------- PlaygroundOwner -----------------*/
                            case 2 -> {
                                info(input);
                                boolean stat4 = true;
                                while (stat4) {
                                    menuCase_2();
                                    int choice4 = input.nextInt();
                                    switch (choice4) {
                                        case 1 -> {
                                            System.out.print("Enter Id: ");
                                            int id = input.nextInt();

                                            System.out.print("Enter balance: ");
                                            double balance = input.nextDouble();
                                        }
                                        case 2 -> {
                                            /// Display myPlaygrounds
                                        }
                                        case 3 -> {
                                            System.out.print("Enter name: ");
                                            String name=input.next();

                                            System.out.print("Enter location: ");
                                            String location=input.next();

                                            System.out.print("Enter Neighbourhood: ");
                                            String Neighbourhood=input.next();

                                            System.out.print("Enter city: ");
                                            String city=input.next();

                                            System.out.print("Enter capacity: ");
                                            String capacity=input.next();

                                            System.out.print("Enter Type: ");
                                            String type=input.next();
                                        }
                                        case 4 -> {
                                            System.out.print("Enter playground name: ");
                                            String name = input.next();
                                            System.out.println("\nEnter slot information");
                                            System.out.print("Enter price: ");
                                            int price=input.nextInt();
                                            System.out.print("Enter start date: ");
                                            String date1= input.next();
                                            System.out.print("Enter end date: ");
                                            String date2= input.next();
                                        }
                                        case 5 -> {
                                            System.out.print("Enter playground name: ");
                                            String name=input.next();

                                            System.out.println("Delete slots");
                                            System.out.print("Enter start date: ");
                                            String date1= input.next();
                                            System.out.print("Enter end date: ");
                                            String date2= input.next();

                                        }
                                        case 6->{
                                            System.out.println("1- Withdraw");
                                            double amount1 = input.nextDouble();

                                            System.out.println("2 -Deposit");
                                            double amount2 = input.nextDouble();

                                            System.out.print("3- transfer");
                                            int eWallet_Id = input.nextInt();
                                        }
                                        default -> stat4 = false;
                                    }
                                }
                            }

                            /*------------------------ Admin ---------------------*/
                            case 3 -> {
                                ////////////////////
                            }
                            default -> stat2 = false;
                        }
                    }
                }

                /*---------------- Login -----------------*/
                case 2 -> {
                    /////////////////////////////
                }
                default -> stat1=false;
            }
        }
    }
}
