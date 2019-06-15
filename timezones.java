import java.util.*;
import java.io.*;
// import java.time.*;

class Main {
    static Map<String, Integer> times = new HashMap<>();

    public static void ptimes(int hour, int minute, String from, String to, boolean pmp) {
        if (pmp && hour != 12) {
            hour += 12;
        } else if (!pmp && hour == 12) {
            hour -= 12;
        }
        minute += (hour*60);
        int diff = times.get(to) - times.get(from);
        int newtime = Math.floorMod(minute + diff, 60*24);
        int newhour = newtime/60;
        int newmin = newtime%60;
        boolean pm = false;
        // System.out.printf("%d %d %d\n", newhour, newmin, newtime);
        if (newhour == 0 && newmin == 0) {
            System.out.println("midnight");
            return;
        } else if (newhour == 12 && newmin == 0) {
            System.out.println("noon");
            return;
        }
        if (12 <= newhour) {
            pm = true;
        }
        newhour %= 12;
        if (newhour == 0) newhour += 12;
        System.out.printf("%d:%02d %s\n", newhour, newmin, (pm) ? "p.m." : "a.m.");
    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

        times.put("UTC", 0);
        times.put("GMT", 0);
        times.put("BST", 60);
        times.put("IST", 60);
        times.put("WET", 0);
        times.put("WEST", 60);
        times.put("CET", 60);
        times.put("CEST", 120);
        times.put("EET", 120);
        times.put("EEST", 180);
        times.put("MSK", 180);
        times.put("MSD", 240);
        times.put("AST", -240);
        times.put("ADT", -180);
        times.put("NST", -210);
        times.put("NDT", -150);
        times.put("EST", -5 *60);
        times.put("EDT", -4 *60);
        times.put("CST", -6 *60);
        times.put("CDT", -5 *60);
        times.put("MST", -7 *60);
        times.put("MDT", -6 *60);
        times.put("PST", -8 *60);
        times.put("PDT", -7 *60);
        times.put("HST", -10 *60);
        times.put("AKST", -9 *60);
        times.put("AKDT", -8 *60);
        times.put("AEST", 10 *60);
        times.put("AEDT", 11 *60);
        times.put("ACST", 570);
        times.put("ACDT", 630);
        times.put("AWST", 8 *60);

        int n = Integer.parseInt(in.readLine());
        int hour, minute;
        String from, to;
        while (n-- > 0) {
            String[] line = in.readLine().split(" ");
            if (line[0].equals("noon")) {
                from = line[1];
                to = line[2];
                ptimes(12, 0, from, to, true);
            } else if (line[0].equals("midnight")) {
                from = line[1];
                to = line[2];
                ptimes(0, 0, from, to, false);
            } else {
                String[] time = line[0].split(":");
                hour = Integer.parseInt(time[0]);
                minute = Integer.parseInt(time[1]);
                from = line[2];
                to = line[3];
                // ZonedDateTime.now(ZoneId.of(from)).withZoneSameInstant(ZoneId.of(to));
                ptimes(hour, minute, from, to, line[1].equals("p.m."));
            }
        }

        in.close();
        out.flush();
    }
}

