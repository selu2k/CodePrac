import java.util.*;

class MainClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the value of n");
        int n = sc.nextInt();
        float sum = 0;
        int ccount = 0, rcount = 0, ncount = 0, small = 9999, large = 0;
        float avg=0;
        String s = "";
        for (int i = 0; i < n; i++) {
            if (sc.hasNextInt()) {
                int rno = sc.nextInt();
                if (rno < small)
                    small = rno;
                if (rno > large)
                    large = rno;
                rcount++;
            } else if (sc.hasNextFloat()) {
                sum += sc.nextFloat();
                ccount++;
                sc.nextLine();
            } else {
                s += sc.nextLine() + " ,";
                ncount++;
            }
        }
        if (!(ccount == 0))
            avg = sum / ccount;
        System.out.println(rcount + "," + ccount + "," + ncount);
        if (small != 9999)
            System.out.println("small : " + small);
        if (large != 0)
            System.out.println("large : " + large);
        System.out.println("avg : "+ avg);
        System.out.println(s);

    }
}