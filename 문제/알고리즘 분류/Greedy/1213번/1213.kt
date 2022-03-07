import java.util.*

fun main(): Unit = with(Scanner(System.`in`)) {
    val mutableMap = mutableMapOf<Char, Int>()
    var char = '\u0000'

    next().forEach { key ->
        mutableMap[key]?.let {
            mutableMap[key] = it.inc()
        } ?: run {
            mutableMap[key] = 1
        }
    }

    mutableMap.forEach {
        if (it.value % 2 != 0) {
            if (char == '\u0000') {
                char = it.key
            } else {
                print("I'm Sorry Hansoo")

                return@with
            }
        }
    }

    mutableMap.keys.sorted().forEach { key ->
        mutableMap[key]?.let {
            repeat(it / 2) {
                print(key)
            }
        }
    }

    if (char != '\u0000') {
        print(char)
    }

    mutableMap.keys.sortedDescending().forEach { key ->
        mutableMap[key]?.let {
            repeat(it / 2) {
                print(key)
            }
        }
    }
}
