unsigned __int64 __fastcall sub_18D700(_QWORD *a1, _QWORD *a2, __int64 a3, double a4)
{
  unsigned __int64 v7; // rsi
  bool v8; // r9
  __int64 v9; // rcx
  __int64 i; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rax

  sub_18D300((__int64)a1, a2, a3);
  v7 = a2[1];
  if ( a1[185] < v7 )
  {
    if ( !under_debugger )
      sub_383060(0xCDE8u, a4);
    BUG();
  }
  v8 = a1[21] != a3;
  if ( v7 )
  {
    v9 = 0;
    for ( i = 0; i != v7; ++i )
    {
      v11 = v9 + a1[184];
      v12 = *(_QWORD *)(*a2 + 8 * i);
      if ( *(_QWORD *)(v11 + 24) != v12 )
      {
        *(_QWORD *)(v11 + 24) = v12;
        v8 = 1;
      }
      v9 += 40;
    }
  }
  if ( !v8 )
    return sub_F7F40((__int64)a1);
  sub_139B20((__int64)a1, a4);
  v14 = a1[98];
  if ( v14 )
    *(_DWORD *)(v14 + 48) = 63;
  v15 = a1[184];
  a1[21] = a3;
  a1[19] = *(_QWORD *)(v15 + 24);
  return sub_F7F40((__int64)a1);
}

