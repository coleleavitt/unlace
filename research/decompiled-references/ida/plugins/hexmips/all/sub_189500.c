unsigned __int64 __fastcall sub_189500(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 i; // rax
  __int64 v12; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax

  sub_189100((__int64)a1, a2, a3);
  v10 = a2[1];
  if ( a1[185] < v10 )
  {
    if ( !under_debugger )
      sub_37E160(52712);
    BUG();
  }
  LOBYTE(v9) = a1[21] != a3;
  if ( v10 )
  {
    v7 = 0;
    for ( i = 0; i != v10; ++i )
    {
      v12 = v7 + a1[184];
      v8 = *(_QWORD *)(*a2 + 8 * i);
      if ( *(_QWORD *)(v12 + 24) != v8 )
      {
        *(_QWORD *)(v12 + 24) = v8;
        v9 = 1;
      }
      v7 += 40;
    }
  }
  if ( !(_BYTE)v9 )
    return sub_F3D40((__int64)a1, v10, v6, v7, v8, v9);
  sub_135920((__int64)a1);
  v18 = a1[98];
  if ( v18 )
    *(_DWORD *)(v18 + 48) = 63;
  v19 = a1[184];
  a1[21] = a3;
  a1[19] = *(_QWORD *)(v19 + 24);
  return sub_F3D40((__int64)a1, v10, v14, v15, v16, v17);
}

