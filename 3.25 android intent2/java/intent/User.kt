package com.example.intent

import android.os.Parcel
import android.os.Parcelable

// 안드로이드에서는 객체를 인텐트에 공유하고 싶으면 Parcelable 타입으로 정의
// 자동으로 메소드가 오버라이딩되고 생성자가 추가


class User() : Parcelable {
    var myname:String? = null
    var telNum:String? = null
//null, "" 빈문자열 둘 다 상관없다.
    constructor(parcel: Parcel) : this() {
        myname = parcel.readString()
        telNum = parcel.readString()
    }

    override fun writeToParcel(parcel: Parcel, flags: Int) {
        parcel.writeString(myname)
        parcel.writeString(telNum)
    }

    override fun describeContents(): Int {
        return 0
    }

    companion object CREATOR : Parcelable.Creator<User> {
        override fun createFromParcel(parcel: Parcel): User {
            // 가공을 해야할 때는 이런식으로 코딩이 가능하다
            val obj = User()
            obj.myname = parcel.readString() + "test2"
            obj.telNum = parcel.readString() + "test2"
            return obj


            //return User(parcel)
        }

        override fun newArray(size: Int): Array<User?> {
            return arrayOfNulls(size)
        }
    }


}