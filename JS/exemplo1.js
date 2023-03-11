
    function search(arr , n , x) {
      var i;
      for (i = 0; i < n; i++) {
          if (arr[i] == x) {
              return i;
          }
      }
      return -1;
  }


      var arr = [ 1, 10, 30, 15 ];
      var x = 30;
      var n = arr.length;
      document.write(x+" is present at index "+ search(arr, n, x));