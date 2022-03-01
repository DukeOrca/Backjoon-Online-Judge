import java.util.*

/**
 * Nested while 문에서, 나머지가 존재한다는 것은, 남은 물병이 있다는 것이고, 남은 물병 수가 K 이하인 경우는 한 번에 처리될 수 있으므로, 종료 조건을 충족한다.
 * 그렇지 않은 경우에는 상점에서 추가로 물병을 구매해야 하므로, 전체 개수(N)에 +1을 하고 과정을 반복한다.
 * 결과적으로 구매한 물병 수 count 가 정답이 된다.
 **/

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
