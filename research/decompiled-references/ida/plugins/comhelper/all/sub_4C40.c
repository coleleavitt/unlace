__int64 __fastcall sub_4C40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 i; // rbx
  __int64 v12; // rax

  v7 = a1 - 13;
  *v7 = off_7C38;
  v7[13] = off_7C68;
  sub_47B0((__int64)v7, 0, a3, a4, a5, a6);
  clr_module_data();
  a1[18] = &off_7D40;
  remove_event_listener();
  a1[15] = &off_7D40;
  result = remove_event_listener();
  v9 = a1[1];
  if ( v9 )
  {
    v10 = a1[2];
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v12 = v9 + 40 * i;
        if ( *(_QWORD *)(v12 + 16) )
        {
          *(_QWORD *)(v12 + 24) = 0;
          qfree();
          v9 = a1[1];
        }
      }
    }
    a1[2] = 0;
    return qfree();
  }
  return result;
}

