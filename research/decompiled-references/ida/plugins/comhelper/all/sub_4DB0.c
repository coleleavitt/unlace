__int64 __fastcall sub_4DB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 i; // rbx
  __int64 v9; // rax

  *(a1 - 13) = off_7C38;
  *a1 = off_7C68;
  sub_47B0((__int64)(a1 - 13), 0, a3, a4, a5, a6);
  clr_module_data();
  a1[18] = &off_7D40;
  remove_event_listener();
  a1[15] = &off_7D40;
  remove_event_listener();
  v6 = a1[1];
  if ( v6 )
  {
    v7 = a1[2];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = v6 + 40 * i;
        if ( *(_QWORD *)(v9 + 16) )
        {
          *(_QWORD *)(v9 + 24) = 0;
          qfree();
          v6 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree();
  }
  return qfree();
}

