__int64 __fastcall sub_40FAA0(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v6; // rdx
  int v7; // eax

  v3 = *(_QWORD *)(a1[1] + 920LL);
  if ( (*(_BYTE *)(v3 + 176) & 0x20) == 0 )
  {
    v4 = a1[5];
    if ( *(_QWORD *)(v3 + 112) )
      return sub_3E9AE0((__int64 *)(v3 + 104), v4);
    if ( (unsigned __int8)sub_40F2C0(a1, a2, a3) )
    {
      sub_3F5050((__int64)a1);
      v6 = a1[2];
      v7 = *(_DWORD *)(v6 + 24);
      BYTE1(v7) &= ~2u;
      LOBYTE(v7) = v7 | 0x80;
      *(_DWORD *)(v6 + 24) = v7;
      return sub_3E9AE0((__int64 *)(v3 + 104), v4);
    }
    *(_DWORD *)(v3 + 176) |= 0x20u;
    sub_3311F0((_QWORD *)a1[1], v4, 0x12u);
  }
  return 0xFFFFFFFFLL;
}

