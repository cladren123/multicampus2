package kr.multicampus.kotlin.basic

fun main()
{
    // 기본배열 만들고 사용하는 방법

    val myarr1 = arrayOf(10, 10.5, false, 'A', "문자열");
    val myarr2 = intArrayOf(10,20,30,40,50);

    // arrayOf<데이터타입> -> Generic
    val myarr3 = arrayOf<String>("python", "C", "kotlin", "android");

    println("myarr1:$myarr1");
    println("myarr1:${myarr1.contentToString()}");

    println("**************************************************");

    println("myarr2:$myarr2");
    println("myarr2:${myarr2.contentToString()}");

    println("**************************************************");

    println("myarr2:$myarr3");
    println("myarr2:${myarr3.contentToString()}");


    // 다차원배열
    val arr2D = arrayOf(
            arrayOf(10,20,30,40,50),
            arrayOf(60,70,80,90,100),
            arrayOf(1,2,3,4,5)
    )

    println("**************************************************");

    println("arr2D:$arr2D");
    println("arr2D:${arr2D.contentToString()}");
    println("arr2D:${arr2D.contentDeepToString()}");

    for(item in arr2D)
    {
        for(i in item)
        {
            print("$i")
        }
        println();
    }

    println("**************************************************");
    // 배열요소 엑세스
    println("myarr2의 0번 요소:${myarr2[0]}");
    println("myarr2의 1번 요소:${myarr2[1]}");

    println("myarr2의 2번 요소:${myarr2.get(2)}");
    println("myarr2의 3번 요소:${myarr2.get(3)}");

    println("**************************************************");
    myarr2[0] = 1000;
    myarr2.set(1, 2000); // (요소번호, 바꾸는 값)
    println("myarr2의 0번 요소:${myarr2[0]}");
    println("myarr2의 0번 요소:${myarr2.contentToString()}");

    println("**************************************************");
    println("myarr2의 크기:${myarr2.size}");






}