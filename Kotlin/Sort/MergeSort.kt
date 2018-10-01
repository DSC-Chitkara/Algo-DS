package Sort

class MergeSort {
    companion object {
        fun <T : Comparable<T>> sort(collection : List<T>) : List<T> {
            if (collection.isEmpty()) return collection
            val middleIndex = (collection.size / 2)
            val xs = collection.subList(0, middleIndex)
            val ys = collection.subList(middleIndex, collection.lastIndex)
            return merge(sort(xs), sort(ys))
        }

        fun <T : Comparable<T>> merge(xs: List<T>, ys: List<T>): List<T> {
            if (xs.isEmpty()) return ys
            if (ys.isEmpty()) return xs
            val x = xs.first()
            val xTail = xs.drop(1)
            val y = ys.first()
            val yTail = ys.drop(1)
            return when {
                x <= y -> listOf(x) + merge(xTail, ys)
                else -> listOf(y) + merge(xs, yTail)
            }
        }

    }
}
