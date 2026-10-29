__int64 __fastcall sub_4B90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 v10; // rax

  *a1 = off_7C38;
  a1[13] = off_7C68;
  sub_47B0((__int64)a1, 0, a3, a4, a5, a6);
  clr_module_data();
  a1[31] = &off_7D40;
  remove_event_listener();
  a1[28] = &off_7D40;
  result = remove_event_listener();
  v7 = a1[14];
  if ( v7 )
  {
    v8 = a1[15];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = v7 + 40 * i;
        if ( *(_QWORD *)(v10 + 16) )
        {
          *(_QWORD *)(v10 + 24) = 0;
          qfree();
          v7 = a1[14];
        }
      }
    }
    a1[15] = 0;
    return qfree();
  }
  return result;
}

