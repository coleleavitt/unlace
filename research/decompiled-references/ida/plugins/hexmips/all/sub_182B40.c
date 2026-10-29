unsigned __int64 __fastcall sub_182B40(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  clear_tinfo_t();
  v1 = a1[8];
  if ( v1 )
  {
    v2 = a1[9];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 40 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[8];
        }
      }
    }
    a1[9] = 0;
    qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  sub_118BA0((__int64)(a1 + 3));
  return sub_118BA0((__int64)a1);
}

