package Sort

class QuickSort {
    // Companion objects work similarly to how static methods work in Java or other languages.
    // See https://kotlinlang.org/docs/reference/object-declarations.html#companion-objects
    companion object {
        fun <T : Comparable<T>> sort(collection : List<T>) : List<T> {
            if (collection.isEmpty()) return collection // Recursion ends when `collection` is empty. Otherwise we might create an infinite recursion.
            val head = collection.first()
            val tail = collection.drop(1)
            val itemsSmallerThanHead = sort(tail.filter { x -> x < head }) // Recursively sort all items smaller than head item
            val itemsEqualToHead = tail.filter { y -> y == head } // Gather items equal to head
            val itemsLargerThanHead = sort(tail.filter { z -> z > head }) // Recursively sort all items larger than head item
            return itemsSmallerThanHead + itemsEqualToHead + head + itemsLargerThanHead // Merge lists into one
        }
    }
}
