void __fastcall sub_18CD0(__int64 a1, __int64 a2)
{
  void (*v2)(void); // rax

  if ( *(_BYTE *)(a2 + 9) == 10 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)a1 + 704LL);
    if ( (char *)v2 == (char *)sub_18630 )
      sub_15030();
    else
      v2();
  }
}

