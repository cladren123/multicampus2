package com.example.firstpro

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.firstpro)
    }

    fun btnOk(view: View)
    {
        Toast.makeText(this, "Ok", Toast.LENGTH_LONG).show();
    }

    fun btnCancel(view:View)
    {
        Toast.makeText(this, "Cancel", Toast.LENGTH_LONG).show();
    }
}