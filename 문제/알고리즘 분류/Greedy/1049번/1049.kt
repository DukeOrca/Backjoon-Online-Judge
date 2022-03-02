import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var N = nextInt()
    val M = nextInt()

    val A = Array(M) { nextInt() to nextInt() }.sortedBy { it.first }
    val B = A.sortedBy { it.second }

    val a = A.first().first
    val b = B.first().second
    var c = 0

    if (a > b.times(6)) {
        c = b.times(N)
    } else {
        while(N > 0) {
            if (N >= 6) {
                c += a
                N -= 6
            } else {
                if (N > 0) {
                    c += if (a > b.times(N)) {
                        b.times(N)
                    } else {
                        a
                    }
                }
                break
            }
        }
    }

    println(c)
}
