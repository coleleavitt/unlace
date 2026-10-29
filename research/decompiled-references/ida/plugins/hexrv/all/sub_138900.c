__int64 __fastcall sub_138900(__int64 a1)
{
  unsigned __int8 *v2; // rdi
  int *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  _QWORD v8[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[3] = __readfsqword(0x28u);
  *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v2 = *(unsigned __int8 **)(a1 + 32);
  *(_QWORD *)(a1 + 80) = v2;
  if ( v2[48] != 2 || (unsigned int)(*(_DWORD *)v2 - 12) > 1 )
    goto LABEL_3;
  v8[0] = 0xFFFFFFFF00000000LL;
  v8[1] = 0;
  sub_121E20((__int64)v8, v2);
  v9[0] = 0xFFFFFFFF00000000LL;
  v4 = *(int **)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 64);
  v9[1] = 0;
  if ( !(unsigned __int8)sub_138320(v5, (__int64)v9, v4, a1 + 112, (__int64)v8, 0xFFFFFFFF) )
  {
    sub_1188E0((__int64)v9);
    sub_1188E0((__int64)v8);
    v2 = *(unsigned __int8 **)(a1 + 32);
LABEL_3:
    sub_11A440(v2, a1 + 48);
    return 0;
  }
  sub_118550((char *)v8, (char *)v9);
  sub_118490((char *)v8, *(_QWORD *)(a1 + 96));
  if ( SHIDWORD(v8[0]) < SHIDWORD(v9[0]) )
    sub_11C320((char *)v8, *(_QWORD *)(a1 + 96), 9, *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL), SHIDWORD(v9[0]));
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_DWORD *)(v6 + 24);
  BYTE1(v7) &= ~2u;
  LOBYTE(v7) = v7 | 0x80;
  *(_DWORD *)(v6 + 24) = v7;
  ++*(_DWORD *)(a1 + 104);
  sub_1188E0((__int64)v9);
  **(_DWORD **)(a1 + 32) = 4;
  sub_118550((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v8);
  sub_1188E0(*(_QWORD *)(a1 + 32) + 48LL);
  sub_1188E0((__int64)v8);
  return 0;
}

