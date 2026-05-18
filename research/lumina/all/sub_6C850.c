__int64 __fastcall sub_6C850(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int8 *v7; // rax
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax

  v1 = *(__int64 **)(a1 + 40);
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v11 = sub_1987B0(*(_QWORD *)(a1 + 40), v3, v2 + 1, 2192);
    v2 = v1[1];
    *v1 = v11;
    v3 = v11;
  }
  v4 = 2192 * v2;
  v5 = v3 + v4;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 2184) = 0;
  memset(
    (void *)((v3 + v4 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v3 + (_DWORD)v4 - (((_DWORD)v3 + (_DWORD)v4 + 8) & 0xFFFFFFF8) + 2192) >> 3));
  ++v1[1];
  *(_DWORD *)v5 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v5 + 4) = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(unsigned __int8 **)(a1 + 8);
  if ( (unsigned __int64)v7 >= v6 )
    return 1;
  v9 = *v7;
  *(_QWORD *)(a1 + 8) = v7 + 1;
  v10 = v9 << 20;
  *(_QWORD *)(v5 + 8) = v10;
  if ( (v10 & 0xF00000) != 0 )
  {
    if ( !(unsigned __int8)sub_6C720(v5 + 16, v10, 0, (unsigned __int64 *)(a1 + 8), v6) )
      return 1;
    v10 = *(_QWORD *)(v5 + 8);
    result = 0;
    if ( (v10 & 0xF000000) != 0 )
      return (unsigned __int8)sub_6C720(v5 + 288, v10, 1, (unsigned __int64 *)(a1 + 8), v6) ^ 1u;
  }
  else
  {
    result = 0;
    if ( (v10 & 0xF000000) != 0 )
      return (unsigned __int8)sub_6C720(v5 + 288, v10, 1, (unsigned __int64 *)(a1 + 8), v6) ^ 1u;
  }
  return result;
}
