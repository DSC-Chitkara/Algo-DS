package Sort

class QuickSort {
    companion object {
        fun <T : Comparable<T>> sort(collection : List<T>) : List<T> {
            if (collection.isEmpty()) return collection
            val head = collection.first()
            val tail = collection.drop(1)
            val smaller = sort(tail.filter { x -> x < head })
            val same = tail.filter { y -> y == head }
            val bigger = sort(tail.filter { z -> z > head })
            return smaller + same + head + bigger
        }
    }
}
