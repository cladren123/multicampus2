package kr.multicampus.kotlin.test

import kr.multicampus.kotlin.test.Content

class Video(title:String, var genre:String  ):Content(title)
{
    override fun totlaPrice()
    {
       when(genre)
       {
           "new" -> price = 2000;
           "comic" -> price = 1500;
           "child" -> price = 1000;
           else -> 500;
       }
    }
}