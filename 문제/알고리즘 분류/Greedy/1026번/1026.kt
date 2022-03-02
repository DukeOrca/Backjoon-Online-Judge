import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val N = nextInt()
    val A = Array(N) { nextInt() }.sortedArray()
    val B = Array(N) { nextInt() }.sortedDescending()
    val S = A.zip(B).fold(0) { acc, (a, b) -> acc.plus(a.times(b)) }

    println(S)
}
