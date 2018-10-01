import Sort.InsertionSort
import Sort.MergeSort
import Sort.QuickSort
import Sort.ShellSort
import java.util.*
import kotlin.system.measureTimeMillis

fun quicksort(sortableNumbers : List<Int>, sortableString : List<Char>) {
    val sortingNumbersTime = measureTimeMillis {
        QuickSort.sort(sortableNumbers)
    }
    val sortingStringTime = measureTimeMillis {
        QuickSort.sort(sortableString)
    }
    println("QuickSort numbers: (" + sortingNumbersTime + "ms)")
    println("QuickSort strings: (" + sortingStringTime + "ms)")
    assert(QuickSort.sort(sortableNumbers) == sortableNumbers.sorted())
    assert(QuickSort.sort(sortableString) == sortableString.sorted())
}

fun insertionsort(sortableNumbers : List<Int>, sortableString : List<Char>) {
    val sortingNumbersTime = measureTimeMillis {
        InsertionSort.sort(sortableNumbers)
    }
    val sortingStringTime = measureTimeMillis {
        InsertionSort.sort(sortableString)
    }
    println("InsertionSort numbers (" + sortingNumbersTime + "ms)")
    println("InsertionSort strings (" + sortingStringTime + "ms)")
    assert(InsertionSort.sort(sortableNumbers) == sortableNumbers.sorted())
    assert(InsertionSort.sort(sortableString) == sortableString.sorted())

}

fun shellsort(sortableNumbers : List<Int>, sortableString : List<Char>) {
    val sortingNumbersTime = measureTimeMillis {
        ShellSort.sort(sortableNumbers)
    }
    val sortingStringTime = measureTimeMillis {
        ShellSort.sort(sortableString)
    }
    println("ShellSort numbers (" + sortingNumbersTime + "ms)")
    println("ShellSort strings (" + sortingStringTime + "ms)")
    assert(ShellSort.sort(sortableNumbers) == sortableNumbers.sorted())
    assert(ShellSort.sort(sortableString) == sortableString.sorted())

}

fun mergesort(sortableNumbers : List<Int>, sortableString : List<Char>) {
    val sortingNumbersTime = measureTimeMillis {
        MergeSort.sort(sortableNumbers)
    }
    val sortingStringTime = measureTimeMillis {
        MergeSort.sort(sortableString)
    }
    println("MergeSort numbers (" + sortingNumbersTime + "ms)")
    println("MergeSort strings (" + sortingStringTime + "ms)")
    assert(MergeSort.sort(sortableNumbers) == sortableNumbers.sorted())
    assert(MergeSort.sort(sortableString) == sortableString.sorted())

}

fun main(args: Array<String>) {
    val sortableNumbers = List(1500) { Random().nextInt(Int.MAX_VALUE)}
    val sortableString  = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.".toList()
    quicksort(sortableNumbers, sortableString)
    mergesort(sortableNumbers, sortableString)
    shellsort(sortableNumbers, sortableString)
    insertionsort(sortableNumbers, sortableString)

}
