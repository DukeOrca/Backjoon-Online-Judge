import java.util.*

fun main(): Unit = with(Scanner(System.`in`)) {
    var document = nextLine()
    val word = nextLine()
    var count = 0

    while(document.length >= word.length) {
        if (word == document.take(word.length)) {
            document = document.drop(word.length)
            count++
        } else {
            document = document.drop(1)
        }
    }

    println(count)
}
