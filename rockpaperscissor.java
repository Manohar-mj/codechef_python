package JavaCourse;
import java.lang.Math;
import java.util.Scanner;

public class rock_paper_scissor {
    public static void main(String[] args) {
        System.out.println("\t\t0 -> rock, 1 -> paper, 2 -> scissor\n");
        Scanner sc = new Scanner(System.in);
        int i=0;
        int u=0;
        int c=0;
        while(i!=5) {
            double r = 3*Math.random();
            int com = (int)r;

            System.out.printf("Enter your turn : ");
            int user = sc.nextInt();
            System.out.printf("Computer Choose %d\n",com);
            if((com == 0 && user==1) || (com==1 && user==2) || (com==2 && user==0)){
                u++;
                System.out.printf("User Win!! User have %d points & Computer have %d points\n\n",u,c);
                i++;
            }
            else if((com == 1 && user==0) || (com==2 && user==1) || (com==0 && user==2)){
                c++;
                System.out.printf("Computer Win!! User have %d points & Computer have %d points\n\n",u,c);
                i++;
            }
            else System.out.println("Game Tie !!!!\n\n");
        }
        if(u>c) System.out.println("\n\t\t***********      User Win The Game       *************");
        else System.out.println("\n\t\t************        Computer Win The Game        ************");
    }
}
