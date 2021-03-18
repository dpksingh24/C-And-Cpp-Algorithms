
var array=[10, 23, 55, 2, 1, 78];

function linearSearch(arr, elToFind) {
    for (var i=0; i<arr.length; i++) {
    if (arr[i] == elToFind) {
        return i;
    }

} return -1 ;
}
console.log(linearSearch(array, 78)); //return index
console.log(linearSearch(array, 108)); //return -1