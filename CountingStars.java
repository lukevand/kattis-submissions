import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class CountingStars {
    private static void flood(char picture[][], int m, int n, int i, int j) {
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
        int case_num = 0;
        while ((line = reader.readLine()) != null) {
            int count = 0;
            case_num++;
            String[] tmp = line.split(" ");
            int m = Integer.parseInt(tmp[0]);
            int n = Integer.parseInt(tmp[1]);
            char[][] picture = new char[m][n];

            for (int i = 0; i < m; i++) {
                line = reader.readLine();
                // uncomment to print picture
                // System.out.println(line);
                for (int j = 0; j < n; j++) {
                    picture[i][j] = line.charAt(j);
                }
            }

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (picture[i][j] == '-') {
                        count++;
                        flood(picture, m, n, i, j);
                    }
                }
            }

            System.out.printf("Case %d: %d\n", case_num, count);
        }

    }
}
