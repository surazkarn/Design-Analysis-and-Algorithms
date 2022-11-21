import java.util.LinkedList;
import java.util.Queue;

// java program to count all binary digit
// numbers smaller than N
public class GFG {

    // method returns count of binary digit
    // numbers smaller than N
    static int countOfBinaryNumberLessThanN(int N) {
        // queue to store all intermediate binary
        // digit numbers
        Queue<Integer> q = new LinkedList<>();

        // binary digits start with 1
        q.add(1);
        int cnt = 0;
        int t;

        // loop until we have element in queue
        while (q.size() > 0) {
            t = q.peek();
            q.remove();

            // push next binary digit numbers only if
            // current popped element is N
            if (t <= N) {
                cnt++;

                // uncomment below line to print actual
                // number in sorted order
                // cout << t << " ";
                q.add(t * 10);
                q.add(t * 10 + 1);
            }
        }

        return cnt;
    }

    // Driver code to test above methods
    static public void main(String[] args) {
        int N = 200;
        System.out.println(countOfBinaryNumberLessThanN(N));
    }
}