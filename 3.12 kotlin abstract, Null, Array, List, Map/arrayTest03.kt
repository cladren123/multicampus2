package kr.multicampus.kotlin.basic



// 배열을 제어할 수 있는 제공 메소드 - 배열의 원본을 변경하지 않고 해당 메소드를 적용한 결과로 배열을 만들어서 리턴
fun main()
{
    val myarr = intArrayOf(10,20,30,40,50);

    // plut : 요소를 추가
    
    val myarr1 =  myarr.plus(60); // 새로운 배열을 만들어서 리턴, 원본은 변하지 않음

   
    println("**************************************************");
    println("myarr:$myarr");
    println("myarr:${myarr.contentToString()}");

    println("**************************************************");
    println("myarr1:${myarr1.contentToString()}");

    // sliceArray : 지정한 범위의 요소를 추출해서 새로운 배열을 만들어서 리턴
    val myarr2 = myarr.sliceArray(1..3);
    println("**************************************************");
    println("myarr:${myarr2.contentToString()}");

    println("**************************************************");
    println("myarr.first():${myarr.first()}"); // 첫번째 요소
    println("myarr.last():${myarr.last()}"); // 마지막 요소
    println("myarr.indexOf():${myarr.indexOf(20)}"); //20의 index
    println("myarr.average():${myarr.average()}"); // 평균
    println("myarr.sum():${myarr.sum()}"); // 총합
    println("myarr.count():${myarr.count()}"); // 갯수
    println("myarr.contains():${myarr.contains(100)}"); // 100이 배열에 있는지?
    println("myarr.contains():${myarr.contains(50)}");
    println("200 in myarr:${100 in myarr}"); // 100이 배열에 있는지?
    println("10 in myarr:${10 in myarr}"); // 100이 배열에 있는지?


    println("**************************************************");
    val myarr3 = arrayOf(50, 100, 98, 77, 23);
    val myarr4 = myarr3.sortedArray(); // 배열의 요소를 정렬(기본 : 오름차순)
    println("myarr4:${myarr4.contentToString()}");

    println("**************************************************");
    val myarr5 = myarr3.sortedArrayDescending(); // 배열의 요소를 정렬(기본 : 내림차순)
    println("myarr5:${myarr5.contentToString()}");









}