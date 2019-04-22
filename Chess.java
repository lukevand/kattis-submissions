import java.util.ArrayList;
import java.io.*;

public class Point {
    int x;
    int y;

    public Point() {
        x = 0;
        y = 0;
    }
}

class Chess {

    private static boolean onDiagonal(Point a, Point b) {
        return (Math.abs(a.y - b.y) == Math.abs(a.x - b.x));
    }

    // private static Point intersection(Point a, Point b) {
    //     int x;
    //     ArrayList<Point> as;
    //     ArrayList<Point> bs;
    //     for (int i = 0; i < as.length; i++) {
    //         for (int j = i; j < bs.length; j++) {
    //             apoint = as.get(i);
    //             bpoint = bs.get(i);
    //             if (apoint.equals(bpoint)) {
    //                 return apoint;
    //             }
    //         }
    //     }
    // }

    private boolean inBoardp(int x, int y) {
        return (0 <= x && x <= 8 && y <= 0 && y <= 8);
    }

    public static void main(String[] args) {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int numLines = Integer.parseInt(in.readLine());
        String line;
        Point start = Point();
        Point end = Point();
        while (numLines-- > 0) {
            line = in.readLine();
            String[] things = line.split(" ");
            start.x = 'A' - things[0].charAt(0);
            start.y = Integer.parseInt(things[1]);
        }

    }

}




