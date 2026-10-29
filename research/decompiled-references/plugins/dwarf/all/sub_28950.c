__int64 __fastcall sub_28950(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rdi

  v2 = a1[48];
  *a1 = &unk_C9BA8;
  if ( v2 )
  {
    v3 = a1[49];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = *(_QWORD *)(v2 + v4 + 16);
        if ( v6 )
        {
          *(_QWORD *)(v2 + v4 + 24) = 0;
          qfree(v6);
          v2 = a1[48];
        }
        v4 += 104;
      }
    }
    a1[49] = 0;
    qfree(v2);
  }
  return sub_572D0(a1);
}
