import java.util.*;
import java.io.*;

class Main {

    private static void flood(int picture[][], int cpicture[][], int m, int n, int i, int j, int color, int startchar) {
        if (i < 0 || i >= m || j < 0 || j >= n) {
            return;
        } else if (cpicture[i][j] == color) {
            return;
        } else if (picture[i][j] != startchar) {
            return;
        } else {
            cpicture[i][j] = color;
            flood(picture, cpicture, m, n, i+1, j, color, startchar);
            flood(picture, cpicture, m, n, i, j+1, color, startchar);
            flood(picture, cpicture, m, n, i-1, j, color, startchar);
            flood(picture, cpicture, m, n, i, j-1, color, startchar);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String[] parts = in.readLine().split(" ");
        int r = Integer.parseInt(parts[0]);
        int c = Integer.parseInt(parts[1]);
        int[][] grid = new int[r][c];
        int[][] cgrid = new int[r][c];
        String line;

        for (int i=0; i < r; i++) {
            line = in.readLine();
            for (int j=0; j < c; j++) {
                grid[i][j] = line.charAt(j)-'0';
            }
        }

        int color = 2;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (cgrid[i][j] <= 1) {
                    flood(grid, cgrid, r, c, i, j, color++, grid[i][j]);
                }
            }
        }

        int n = Integer.parseInt(in.readLine());
        while (n-- > 0) {
            String[] cs = in.readLine().split(" ");
            int start_y = Integer.parseInt(cs[0])-1;
            int start_x = Integer.parseInt(cs[1])-1;
            int end_y = Integer.parseInt(cs[2])-1;
            int end_x = Integer.parseInt(cs[3])-1;
            int startchar = grid[start_y][start_x];
            int endchar = grid[end_y][end_x];
            int avoidchar = (startchar == 1) ? 0 : 1;
            if (cgrid[start_y][start_x] != cgrid[end_y][end_x]) {
                System.out.println("neither");
            } else if (grid[start_y][start_x] == 1) {
                System.out.println("decimal");
            } else {
                System.out.println("binary");
            }

        }

        in.close();
    }
}

