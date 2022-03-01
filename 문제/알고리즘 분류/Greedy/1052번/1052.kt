import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    var N = nextInt()
    val K = nextInt()

    var count = 0

    while(true) {
        var n = N
        var k = 0

        while(n > 0) {
            if (n % 2 > 0) {
                k++
            }

            n /= 2
        }

        if (k <= K) {
            break
        }

        N++
        count++
    }

    println(count)
}
