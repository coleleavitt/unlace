void __fastcall sub_E100(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v4 + v2);
        ++v5;
        v4 += 208;
        sub_C3C0(v6);
        v2 = *a1;
      }
      while ( v3 != v5 );
    }
    a1[1] = 0;
    qfree(v2);
  }
}

