import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] line = in.readLine().split(" ");
        int dayOfMonth = Integer.parseInt(line[0]);
        String month = line[1];
        String dayOfWeek = in.readLine().trim();
        Calendar date = GregorianCalendar(2000, month



        in.close();
        out.flush();
    }
}

