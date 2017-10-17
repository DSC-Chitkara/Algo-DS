package Sort

class BubbleSort {
    companion object {

        fun <T : Comparable<T>> sort(collection: List<T>) : List<T> {
            return bubbleHelper(collection, 0)
        }

        private fun <T : Comparable<T>> bubbleHelper(collection: List<T>, iteration: Int): List<T> {
            if (iteration == collection.size) return collection
            return bubbleHelper(bubbelIterator(collection), (iteration+1))
        }

        private fun <T : Comparable<T>> bubbelIterator(collection: List<T>): List<T> {
            if (collection.isEmpty() || collection.size == 1) return collection
            val head = collection.first()
            val headless = collection.drop(1)
            val next = headless.first()
            val tail = headless.drop(1)
            if ( head > next) {
                return listOf(next) + bubbelIterator(listOf(head) + tail)
            } else {
                return listOf(head) + bubbelIterator(listOf(next) + tail)
            }
        }
    }
}




