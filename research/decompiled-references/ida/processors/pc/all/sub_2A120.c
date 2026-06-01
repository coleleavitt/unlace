__int64 __fastcall sub_2A120(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int16 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax

  if ( *(_WORD *)(a2 + 24) != 143 )
    return -1;
  if ( !(unsigned __int8)equal_bytes() )
    return -1;
  *(_DWORD *)a1 |= 8u;
  v4 = sub_22C00(a2);
  v5 = *(_WORD *)(a2 + 46);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = v4;
  v8 = sub_22F00(a1);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = v8;
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v11 + 1) )
  {
    v13 = qvector_reserve();
    *(_QWORD *)(a1 + 8) = v13;
    v9 = v13;
    v11 = *(_QWORD *)(a1 + 16);
  }
  v12 = 32 * v11 + v9;
  *(_QWORD *)v12 = v6;
  *(_QWORD *)(v12 + 8) = v10;
  *(_QWORD *)(v12 + 16) = v7;
  *(_WORD *)(v12 + 24) = v5;
  *(_WORD *)(v12 + 26) = 0;
  ++*(_QWORD *)(a1 + 16);
  add_auto_stkpnt();
  sub_29980(a1, *(_QWORD *)(a2 + 16), 10, 1);
  return *(_QWORD *)(a2 + 16) + 10LL;
}
