var mergesort = function (array,  cmp) {
    
    if (cmp === undefined) {
        cmp = function (a, b) {
            'use asm';
            return a < b ? -1 : a === b ? 0 : 1;
        };
    }

    function merge (begin, begin_right, end) {
        'use asm';
           var left_size = begin_right - begin, right_size = end - begin_right;
        var left = array.slice(begin, begin_right), right = array.slice(begin_right, end);
            var i = begin, j = 0, k = 0;
        while (j < left_size && k < right_size)
            if (cmp(left[j], right[k]) <= 0)
                array[i++] = left[j++];
            else
                array[i++] = right[k++];
        while (j < left_size) array[i++] = left[j++];
        while (k < right_size) array[i++] = right[k++];
        return;
    }

    function msort (begin, end) {
        'use asm';
        var size = end - begin;
        if (size <= 8) {
            var sub_array = array.slice(begin, end);
            sub_array.sort(cmp);
    
            for (var i = 0; i < size; ++i)
                array[begin + i] = sub_array[i];
            return;
        }

        var begin_right = begin + (size >> 1);

        msort(begin, begin_right);
        msort(begin_right, end);
        merge(begin, begin_right, end);
    }
//
    msort(0, array.length);

    return array;
};
