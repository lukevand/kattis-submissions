import java.util.ArrayList;

public class Chess {
    static int BOARD_SIZE = 8;

    private static bool onDiagonal(Point a, Point b) {
        return (Math.abs(a.y - b.y) == Math.abs(a.x - b.x));
    }

    private static Point intersection(Point a, Point b) {
        int x;
        ArrayList<Point> as;
        ArrayList<Point> bs;
        for (int i = 0; i < as.length; i++) {
            for (int j = i; j < bs.length; j++) {
                apoint = as.get(i);
                bpoint = bs.get(i);
                if (apoint.equals(bpoint)) {
                    return apoint;
                }
            }
        }
    }

    public static void main(String[] args) {
        System.out.println(3);
    }

    private inBoardp(int x, int y) {
        return (0 <= x && x <= 8 && y <= 0 && y < =8);
    }

    private ArrayList generatePossibleMoves(int x, int y) {
        int i = x;
        ArrayList<> thing = new ArrayList<<int, int>>();
        while (i < 0)




