__int64 __fastcall sub_3F57F0(__int64 a1)
{
  unsigned int v1; // ecx
  _DWORD *v3; // rdi
  __int16 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  __int64 (__fastcall *v7)(__int64, int); // rdx
  __int64 v8; // rsi
  int v9; // eax
  __int16 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // r13

  v1 = 0;
  v3 = *(_DWORD **)(a1 + 832);
  if ( v3[20] == 8 )
  {
    v4 = *(_WORD *)(a1 + 48);
    v5 = a1 + 104;
    if ( v4 != 26 )
      v5 = a1 + 64;
    v6 = (*(_WORD *)(v5 + 46) << 7) & 0x780
       | *(_DWORD *)(v5 + 128) & 7
       | (8 * (unsigned __int8)*(_WORD *)(v5 + 86)) & 0x78
       | ((unsigned __int16)*(_DWORD *)(v5 + 8) << 11) & 0x3800;
    BYTE1(v6) |= 0x40u;
    if ( v6 == 23056 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v3 + 168LL);
      v8 = *(unsigned __int16 *)(a1 + 160LL * (v4 != 26) + 70);
      if ( v7 == sub_3EA010 )
      {
        v9 = sub_3EA010((__int64)v3, v8);
      }
      else
      {
        v9 = v7((__int64)v3, v8);
        v3 = *(_DWORD **)(a1 + 832);
        v10 = *(_WORD *)(a1 + 48);
      }
      v11 = (int)v3[156];
      v12 = (int)v3[155];
      v13 = v9;
      if ( v10 == 26 )
      {
        sub_1D6180(a1, 0, 7, 2, v9, 0);
        sub_3F56D0(a1, 3u, 0, 31, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x16u, 7, v13, v12, v13, 0);
        sub_1D6180(a1, 0, 7, 1, v11, 0);
        sub_3F56D0(a1, 3u, 0, 30, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x16u, 7, v11, v12, v11, 0);
        sub_3F56D0(a1, 0x13u, 7, v11, v13, v13, 0);
        sub_1D6180(a1, 0, 7, 0, v11, 0);
        sub_3F56D0(a1, 3u, 0, 29, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x16u, 7, v11, v12, v11, 0);
        sub_3F56D0(a1, 0x13u, 7, v11, v13, v13, 0);
        sub_1D6180(a1, 0, 7, 3, v11, 0);
        sub_3F56D0(a1, 3u, 0, 28, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x16u, 7, v11, v12, v11, 0);
        sub_3F56D0(a1, 0x13u, 7, v11, v13, v13, 0);
      }
      else
      {
        if ( v3[120] == v9 )
          sub_3F56D0(a1, 3u, 7, 0, 0x3BEA45E214ADDC55LL, v9, 0);
        sub_3F56D0(a1, 3u, 0, 31, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x17u, 7, v13, v12, v11, 0);
        sub_3F56D0(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x14u, 0, v11, v12, 2, 0);
        sub_3F56D0(a1, 3u, 0, 30, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x17u, 7, v13, v12, v11, 0);
        sub_3F56D0(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x14u, 0, v11, v12, 1, 0);
        sub_3F56D0(a1, 3u, 0, 29, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x17u, 7, v13, v12, v11, 0);
        sub_3F56D0(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x14u, 0, v11, v12, 0, 0);
        sub_3F56D0(a1, 3u, 0, 28, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x17u, 7, v13, v12, v11, 0);
        sub_3F56D0(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, v12, 0);
        sub_3F56D0(a1, 0x14u, 0, v11, v12, 3, 0);
      }
      return 1;
    }
  }
  return v1;
}

