__int64 __fastcall sub_112D0(__int64 a1, double a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  int v15; // eax
  _QWORD v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a1 + 672) + 32LL * a4;
  v16[3] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(v7 + 8) & 2) == 0 )
    return 0xFFFFFFFFLL;
  v13 = -1;
  if ( (unsigned __int8)sub_10780(a1, (__int64)v16, 1u, a5, a6, a7) )
    v13 = v16[1];
  v14 = *(_QWORD *)(a5 + 8);
  if ( v14 != v13 )
  {
    if ( v14 < *(_QWORD *)(a1 + 1008)
      || *(_QWORD *)(a1 + 1016) < v14
      || (v15 = sub_11210(a1, v13, v14, v10, v11, v12), v15 == -1) )
    {
      sub_9EE0((__int64)"dbg_write_memory: address %a not in recorded trace\n", a2);
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 1032) = v15;
    *(_BYTE *)(a1 + 1040) = 1;
  }
  return 1;
}

