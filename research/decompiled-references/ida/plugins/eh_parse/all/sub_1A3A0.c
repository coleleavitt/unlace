__int64 __fastcall sub_1A3A0(_DWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // r13
  __int64 v5; // r14
  char v6; // [rsp+1h] [rbp-49h]
  _QWORD v7[9]; // [rsp+2h] [rbp-48h] BYREF

  v2 = *a2;
  v7[1] = __readfsqword(0x28u);
  v7[0] = 0;
  if ( v2 <= 2 )
    return 0;
  if ( get_bytes(v7, 8, v2 - 3, 0, 0) != 8 )
    return 0;
  v4 = BYTE3(v7[0]) & 0xF;
  v5 = byte_277D0[v4];
  if ( __CFADD__(v5, v2) )
    return 0;
  create_data(v2, 2048, byte_277D0[v4], -1);
  *a2 = v5 + v2;
  if ( a1 )
    *a1 = *(_DWORD *)(&v6 + v5) >> byte_277C0[v4];
  return 1;
}

