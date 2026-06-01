void __fastcall sub_28F60(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rdi

  v2 = a1[5];
  *a1 = &off_AA200;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_28C40(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x40u);
  }
  operator delete(a1, 0x60u);
}

