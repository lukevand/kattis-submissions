import java.util.*;
import java.io.*;

class bank {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
        String line = in.readLine();
        String[] nums = line.split(" ");
        int N = Integer.parseInt(nums[0]);
        int T = Integer.parseInt(nums[1]);
        while (N-- > 0) {
            line = in.readLine();
            nums = line.split(" ");
            int key = Integer.parseInt(nums[1]);
            int val = Integer.parseInt(nums[0]);

        }
        in.close();
        out.flush();
    }
}

