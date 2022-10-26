import java.util.*;
import java.io.*;

public class dayfinder{

    public static String findDay(int month, int date, int year) {
        String day = new String();
        int base = year/100*100;
        int leapyears = (year-base-1)/4;
        int normalyears = (year-base-1) - (year-base-1)/4;
        int extra = (leapyears)*2 + normalyears;
        
        if((base/100)%4==1){
            extra+=5;
        }
        else if((base/100)%4==2){
            extra+=3;
        }
        else if((base/100)%4==3){
            extra+=1;
        }
        int[] extraInMonth = {3,0,3,2,3,2,3,3,2,3,2,3};
        if(year%4==0 && year%100!=0 || base==year && (base/100)%4==0){
            extraInMonth[1]=1;
        }
        
        for(int i=0;i<month-1;i++){
            extra+=extraInMonth[i];
        }
        
        extra+=date;
        extra=extra%7;
        switch(extra){
            case 0 -> day="Sunday";
            case 1 -> day="Monday";
            case 2 -> day="Tuesday";
            case 3 -> day="Wednesday";
            case 4 -> day="Thursday";
            case 5 -> day="Friday";
            case 6 -> day="Saturday";
        }
        return day.toUpperCase();
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Date in DD MM YYYY format: ");
        int date = Integer.parseInt(sc.next());
        int month = Integer.parseInt(sc.next());
        int year = Integer.parseInt(sc.next());
        System.out.println("The day is " + findDay(month,date,year));
    }
}
