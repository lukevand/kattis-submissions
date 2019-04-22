import java.util.*;
import java.io.*;

class bank {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line = in.readLine();
        String[] nums = line.split(" ");
        int N = Integer.parseInt(nums[0]);
        int T = Integer.parseInt(nums[1]);
        HashMap<Integer,PriorityQueue<Integer>> hash = new HashMap<>();
        while (N-- > 0) {
            line = in.readLine();
            nums = line.split(" ");
            int key = Integer.parseInt(nums[1]);
            int val = Integer.parseInt(nums[0]);
            if (hash.containsKey(key)) {
                hash.get(key).add(val);
            } else {
                hash.put(key, new PriorityQueue<Integer>(Collections.reverseOrder()));
                hash.get(key).add(val);
            }
        }
        int total = 0;
        for (int i = 0; i <= T; i++) {
            if (hash.containsKey(i)) {
                total += hash.get(i).peek();
            }
        }
        System.out.println(total);
    }
}

