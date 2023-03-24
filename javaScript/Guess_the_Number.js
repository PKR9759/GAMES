let rnum=Math.floor(Math.random()*10)+1;
console.log("I created a RAndom Number Between 1 t0 100 \n you can guess number is it or not !!! \n now let's enter Your guess Number")
let cnt=0;
let num;

do{
  num=prompt();
  if(num>rnum){
    console.log("Kya YARR thoda Chota!! Ae Badda Hai USssse \n");
  }
  else if (num<rnum){
    console.log("Kya YARR thoda Bada !! Ae Chotta Hai USssse \n");
  }
  else{
    console.log("Ae hui na Batt !! Shabbash !! you Win in \n",cnt+1,"guesses");
    break;
  }
    cnt++;
  
}while(1);
