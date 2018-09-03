<script>
var a,rev=0;
a=parseint(prompt("enter a no:"));
 while(a>0){
 rev=rev*10;
 rev=rev+(a%10);
 a=parseint(a/10);
 }
 document.write(rev);
 </script>