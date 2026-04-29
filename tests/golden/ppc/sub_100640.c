__int64 __fastcall sub_100640(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 j; // rbp
  __int64 v9; // rax

  sub_63240(a1 + 72);
  sub_63240(a1 + 68);
  a1[56] = &unk_4D8D80;
  qfree(a1[63]);
  qfree(a1[60]);
  v2 = a1[57];
  if ( v2 )
  {
    v3 = a1[58];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = 3 * i;
        qfree(*(_QWORD *)(v2 + 8 * v5));
        v2 = a1[57];
      }
    }
    a1[58] = 0;
    qfree(v2);
  }
  a1[44] = &unk_4D8D80;
  qfree(a1[51]);
  qfree(a1[48]);
  v6 = a1[45];
  if ( v6 )
  {
    v7 = a1[46];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = 3 * j;
        qfree(*(_QWORD *)(v6 + 8 * v9));
        v6 = a1[45];
      }
    }
    a1[46] = 0;
    qfree(v6);
  }
  return sub_FF7B0(a1);
}
