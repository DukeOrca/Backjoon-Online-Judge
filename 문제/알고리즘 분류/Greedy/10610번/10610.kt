import java.util.*

fun main(): Unit = with(Scanner(System.`in`)) {
    readLine()?.let { N ->
        with(N.map { it.digitToInt() }) {
            when {
                contains(0).not() -> println(-1)
                sum() % 3 == 0 -> sortedDescending().forEach(System.out::print)
                else -> println(-1)
            }
        }
    }
}
