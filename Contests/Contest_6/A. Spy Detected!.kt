import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    repeat(t) {
        val n = scanner.nextInt()
        val a = IntArray(n)
        for (i in 0 until n) {
            a[i] = scanner.nextInt()
        }

        val majority = if (a[0] == a[1] || a[0] == a[2]) a[0] else a[1]

        for (i in 0 until n) {
            if (a[i] != majority) {
                println(i + 1)
                break
            }
        }
    }
}