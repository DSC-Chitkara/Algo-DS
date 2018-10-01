package Sort

class ShellSort {
    companion object {
        fun <T : Comparable<T>> sort(collection : List<T>) : List<T> {
            val gaps = listOf(701, 301, 132, 57, 23, 10, 4, 1) // Ciuras sequence https://oeis.org/A102549
            return gaps.foldRight(collection, { e, a -> shellSortPhase(e, a)})
        }

        fun <T : Any> transpose(collection: List<List<T>>) : List<List<T>> {
            if (collection.isEmpty()) return collection
            val xxs = collection.first()
            val xss = collection.drop(1)
            if (xxs.isEmpty()) return transpose(xss)
            val x = xxs.first()
            val xs = xxs.drop(1)
            val headPart = listOf(x) + xss.mapNotNull { h -> h.firstOrNull() }
            val tailPart = transpose(listOf(xs) + xss.map { t -> t.drop(1) })
            return listOf(headPart) + tailPart
        }

        fun <T : Any> decolumnize(collection: List<List<T>>): List<T> {
            return transpose(collection).flatten()
        }

        fun <T : Any> columnize(index : Int, collection: List<T>): List<List<T>> {
            val f = { b : List<T> ->
                when {
                    b.isEmpty() -> null
                    b.size <= index -> Pair(b, listOf())
                    else -> Pair(b.subList(0, index), b.subList(index, b.lastIndex))
                }
            }
            val unfolded = unfoldRight(f, collection)
            return transpose(unfolded.takeLastWhile { e : List<T> -> e.isNotEmpty() })
        }

        fun <T,R> unfoldRight(f: (T) -> Pair<R, T>?, b: T): List<R> {
            val maybePair: Pair<R, T>? = f(b)
            return if ( maybePair == null) {
                listOf()
            } else {
                listOf(maybePair.first) + unfoldRight(f, maybePair.second)
            }
        }

        fun <T : Comparable<T>> shellSortPhase(gap: Int, collection: List<T>) : List<T> {
            return decolumnize(columnize(gap, collection).map { e -> InsertionSort.sort(e)})

        }
    }
}
