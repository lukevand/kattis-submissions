import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.io.IOException;

public class CountingStars {

    public void flood(char picture[][], int m, int n, int i, int j) {
        if (i < 0 || i >= m || j < 0 || j >= n) {
            return;
        } else if (picture[i][j] == '#') {
            return;
        } else {
            picture[i][j] = '#';
            flood(picture, m, n, i+1, j);
            flood(picture, m, n, i, j+1);
            flood(picture, m, n, i-1, j);
            flood(picture, m, n, i, j-1);
        }
    }


    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String line;
        line = reader.readLine();
        String[] tmp = line.split(" ");
        int m = Integer.parseInt(tmp[0]);
        int n = Integer.parseInt(tmp[1]);
        // System.out.println(line);
        // char c;
        // int m, n;
        // int count = 0;
        // cin >> m;
        // cin >> n;
        // char picture[m][n];
        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cin >> c; picture[i][j] = c;
        //     }
        // }
        // /* for (int i = 0; i < m; i++) { */
        // /*     for (int j = 0; j < n; j++) { */
        // /*         cout << picture[i][j]; */
        // /*     } */
        // /*     cout << endl; */
        // /* } */

        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (picture[i][j] == '-') {
        //             count++;
        //             /* cout << "flood(picture, m, n, i, j);" << endl; */
        //             flood(picture, m, n, i, j);
        //         }
        //     }
        // }

    }
}
