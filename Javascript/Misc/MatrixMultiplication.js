function multiplyMatrixes(mA, mB) {
  /* Matrices must be 2-D Arrays [[1,3], [2,4]]
   * if mA is i x j (row x column)
   * mB must be j x k                           */
  if (mA[0].length !== mB.length) return console.log('Array dimensions don\'t match (m x n • n x k)!');
  var resultMatrix = [];
  for (var i = 0; i < mA.length; i++) {
    resultMatrix.push([])
  }
  // First loop for every row, i, in mA
  for (var i = 0; i < mA.length; i++) {
    // Then loop through every column, j, in mB
    for (var j = 0; j < mB[0].length; j++) {
      var tempSum = 0;
      // The last loop through every input in a column in mA to multiply by a row in mB
      for (var k = 0; k < mA[0].length; k++) {
        tempSum += mA[i][k] * mB[k][j];
      }
      resultMatrix[i][j] = tempSum;
    }
  }
  return resultMatrix
}
