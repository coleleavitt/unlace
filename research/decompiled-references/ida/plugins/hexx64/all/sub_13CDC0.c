__int64 __fastcall sub_13CDC0(__int64 a1)
{
  __m128i v1; // xmm0
  unsigned __int8 *v3; // rdi
  int *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  _QWORD v11[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v1 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v12[3] = __readfsqword(0x28u);
  *(__m128i *)(a1 + 56) = v1;
  v3 = *(unsigned __int8 **)(a1 + 32);
  *(_QWORD *)(a1 + 80) = v3;
  if ( v3[48] != 2 || (unsigned int)(*(_DWORD *)v3 - 12) > 1 )
    goto LABEL_3;
  v11[0] = 0xFFFFFFFF00000000LL;
  v11[1] = 0;
  sub_1262E0((__int64)v11, v3, *(double *)v1.m128i_i64);
  v12[0] = 0xFFFFFFFF00000000LL;
  v5 = *(int **)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 64);
  v12[1] = 0;
  if ( !(unsigned __int8)sub_13C7E0(v6, (__int64)v12, v5, a1 + 112, (__int64)v11, 0xFFFFFFFF, v1) )
  {
    sub_11CDA0((__int64)v12);
    sub_11CDA0((__int64)v11);
    v3 = *(unsigned __int8 **)(a1 + 32);
LABEL_3:
    sub_11E900(v3, a1 + 48);
    return 0;
  }
  sub_11CA10((char *)v11, (char *)v12);
  sub_11C950((unsigned __int8 *)v11, *(_QWORD *)(a1 + 96), v7, v8, *(double *)v1.m128i_i64);
  if ( SHIDWORD(v11[0]) < SHIDWORD(v12[0]) )
    sub_1207E0(
      (char *)v11,
      *(unsigned __int64 **)(a1 + 96),
      9,
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL),
      SHIDWORD(v12[0]),
      v1);
  v9 = *(_QWORD *)(a1 + 64);
  v10 = *(_DWORD *)(v9 + 24);
  BYTE1(v10) &= ~2u;
  LOBYTE(v10) = v10 | 0x80;
  *(_DWORD *)(v9 + 24) = v10;
  ++*(_DWORD *)(a1 + 104);
  sub_11CDA0((__int64)v12);
  **(_DWORD **)(a1 + 32) = 4;
  sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v11);
  sub_11CDA0(*(_QWORD *)(a1 + 32) + 48LL);
  sub_11CDA0((__int64)v11);
  return 0;
}

