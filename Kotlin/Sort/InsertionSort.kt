package Sort

class InsertionSort {
    companion object {
        fun <T : Comparable<T>> sort(collection : List<T>) : List<T> {
            return collection.foldRight(listOf()) { element, acc -> insert(element, acc) }
        }

        private fun  <T : Comparable<T>> insert(element: T, collection: List<T>): List<T> {
            return insertBy(::compareValues, element, collection)
        }

        private fun <T : Comparable<T>> insertBy(cmp : (T?, T?) -> Int, element: T, collection: List<T>): List<T> {
            if ( collection.isEmpty() ) return collection.plus(element)
            val head = collection.first()
            val tail = collection.drop(1)
            val comparison = cmp(element, head)
            return when {
                comparison > 0 -> listOf(head) + insertBy(cmp, element, tail)
                else -> listOf(element) + collection
            }
        }
    }
}
