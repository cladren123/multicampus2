package com.example.intent.exam

import android.os.Parcel
import android.os.Parcelable

class Person2() : Parcelable {
    var myimage = 0
    var myname:String? = null
    var mydate:String? = null
    var myinfo:String? = null

    constructor(parcel: Parcel) : this() {
        myimage = parcel.readInt()
        myname = parcel.readString()
        mydate = parcel.readString()
        myinfo = parcel.readString()
    }

    override fun writeToParcel(parcel: Parcel, flags: Int) {
        parcel.writeInt(myimage)
        parcel.writeString(myname)
        parcel.writeString(mydate)
        parcel.writeString(myinfo)
    }

    override fun describeContents(): Int {
        return 0
    }

    companion object CREATOR : Parcelable.Creator<Person2> {
        override fun createFromParcel(parcel: Parcel): Person2 {
            return Person2(parcel)
        }

        override fun newArray(size: Int): Array<Person2?> {
            return arrayOfNulls(size)
        }
    }


}