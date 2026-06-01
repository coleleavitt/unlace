__int64 __fastcall sub_3FACB0(__int64 a1, __m128i a2, __m128 a3, __m128 a4)
{
  unsigned int v4; // ebp
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // r13

  v4 = sub_3FA4D0((__int64 *)a1);
  if ( !(_BYTE)v4 )
    return v4;
  v6 = *(_QWORD *)a1;
  v7 = *(int *)(a1 + 8);
  v8 = *(_QWORD *)a1 + 40 * v7 + 64;
  v9 = sub_3F9DC0(*(_QWORD *)a1, v7, *(_DWORD *)(a1 + 12), a2, a3, a4);
  if ( v9 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 832LL) + 468LL) )
  {
    if ( !under_debugger )
      sub_383060(0xC8C0u, *(double *)a2.m128i_i64);
    BUG();
  }
  *(_QWORD *)(*(_QWORD *)a1 + 880LL) = *(_QWORD *)(v6 + 40);
  v10 = *(_QWORD *)a1;
  sub_3FA390(*(_QWORD *)a1, v8);
  sub_3F7230(v10, v9, *(_DWORD *)(a1 + 12), a2, a3, a4);
  *(_BYTE *)(a1 + 16) = 1;
  return v4;
}

