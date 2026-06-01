__int64 __fastcall sub_232090(__int64 a1, __int64 a2, __int64 a3, int a4, _BYTE *a5, char a6, __m128 a7, __m128 a8)
{
  _QWORD *v11; // rsi
  __int64 result; // rax
  int v13; // r13d
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __m128 v16; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  char v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v11 = *(_QWORD **)(a1 + 1504);
  v21 = __readfsqword(0x28u);
  if ( a5 )
    sub_1EF8F0(a3, (__int64)v11, a5, 0, *(double *)a7.m128_u64);
  else
    sub_1EF680((_DWORD *)a3, v11, a4, 0, *(double *)a7.m128_u64);
  result = 0;
  if ( (a6 & 2) == 0 )
  {
    if ( !*(_QWORD *)(a2 + 40) )
      goto LABEL_5;
LABEL_9:
    v16.m128_u64[1] = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v16.m128_u64[0] = (unsigned __int64)&off_4DF7E8;
    sub_11FBB0(a1, (__int64)&v16);
    sub_1F5400(a1, a2, *(double *)a7.m128_u64, a8);
    result = 1;
    goto LABEL_5;
  }
  v13 = *(_DWORD *)(a3 + 88);
  if ( *(_DWORD *)a3 == 1 )
    v14 = *(_QWORD *)(a3 + 8);
  else
    v14 = -1;
  v15 = *(_QWORD *)(a1 + 816);
  a7 = _mm_loadh_ps((const double *)(a1 + 816));
  v16 = a7;
  v17 = v15;
  sub_227740((__int64)&v16, v14, v13, *(double *)a7.m128_u64);
  result = sub_2304B0((__int64)&v16, v14, v13);
  if ( *(_QWORD *)(a2 + 40) )
    goto LABEL_9;
LABEL_5:
  *(_DWORD *)a1 |= 0x20000u;
  return result;
}

