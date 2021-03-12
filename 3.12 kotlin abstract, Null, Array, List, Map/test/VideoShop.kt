package kr.multicampus.kotlin.test

import kr.multicampus.kotlin.test.Content
import kr.multicampus.kotlin.test.Book
import kr.multicampus.kotlin.test.Video

fun main()
{
    var myarr = arrayOfNulls<Content>(5)
    myarr[0] = Video("변호인", "new")
    myarr[1] = Video("탐정", "comic")
    myarr[2] = Video("헬로카봇", "child")
    myarr[3] = Book("감자(책)", 1976);
    myarr[4] = Book("삼국지(책)", 2015);



    for(element in myarr)
    {
        element?.totlaPrice();
        element?.show();
    }

}