import Sort.QuickSort
import kotlin.system.measureTimeMillis

fun quicksort(sortableNumbers : List<Int>, sortableString : List<Char>) {
    val sortingNumbersTime = measureTimeMillis {
        QuickSort.sort(sortableNumbers)
    }
    val sortingStringTime = measureTimeMillis {
        QuickSort.sort(sortableString)
    }
    println("QuickSort numbers: " + QuickSort.sort(sortableNumbers) + " (" + sortingNumbersTime + "ms)")
    println("QuickSort strings: " + QuickSort.sort(sortableString) + " (" + sortingStringTime + "ms)")
}

fun main(args: Array<String>) {
    val sortableNumbers = listOf(10,2,5,3,1,6,7,4,2,3,4,8,9)
    val sortableString  = "the quick brown fox jumps over the lazy dog".toList()
    quicksort(sortableNumbers, sortableString)

}
