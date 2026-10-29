void __fastcall sub_28F00(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // rdi

  v1 = a1[5];
  *a1 = &off_AA200;
  while ( v1 )
  {
    v2 = (_QWORD *)v1;
    sub_28C40(*(_QWORD **)(v1 + 24));
    v3 = *(_QWORD *)(v1 + 40);
    v1 = *(_QWORD *)(v1 + 16);
    if ( v3 )
    {
      v2[6] = 0;
      qfree(v3);
    }
    operator delete(v2, 0x40u);
  }
}

