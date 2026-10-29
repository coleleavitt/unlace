__int64 __fastcall sub_4760(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx

  *(a1 - 13) = off_A870;
  *a1 = off_A8A0;
  v2 = a1[2];
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        if ( v5[6] )
        {
          v5[7] = 0;
          qfree();
        }
        if ( v5[3] )
        {
          v5[4] = 0;
          qfree();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        v2 = a1[2];
      }
    }
    a1[3] = 0;
    qfree();
  }
  *a1 = &off_ACB0;
  remove_event_listener();
  return qfree();
}

