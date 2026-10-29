__int64 __fastcall sub_F7C10(int *a1, __int64 a2, double a3, __m128 a4)
{
  __m128 v4; // xmm0
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdi
  char v20; // r13
  __int64 v21; // rbx
  int v22; // eax
  __m128i v23; // rax
  __int64 *v24; // [rsp+0h] [rbp-80h]
  __int64 *v25; // [rsp+0h] [rbp-80h]
  __m128i v26; // [rsp+8h] [rbp-78h] BYREF
  __m128i v27; // [rsp+18h] [rbp-68h] BYREF
  __int64 v28; // [rsp+28h] [rbp-58h] BYREF
  __int128 v29; // [rsp+30h] [rbp-50h]
  unsigned __int64 v30; // [rsp+40h] [rbp-40h]

  v4.m128_u64[0] = 0;
  v6 = *(_QWORD *)(a2 + 64);
  v7 = a1[3];
  v30 = __readfsqword(0x28u);
  v29 = 0;
  v8 = *(_QWORD *)(v6 + 1440);
  v28 = 0;
  if ( v7 + v8 - 1 >= v8 )
  {
    a4 = (__m128)v7;
    v28 = qvector_reserve((__int64)&v28, 0, 1, 16);
    v4 = (__m128)_mm_unpacklo_epi64((__m128i)v8, (__m128i)v7);
    *(__m128 *)(v28 + 16 * v29) = v4;
    *(_QWORD *)&v29 = v29 + 1;
  }
  v9 = sub_F2C80(a2);
  v11 = a1[4];
  v12 = v9;
  v13 = v9 - v11;
  if ( v13 > 0 )
  {
    v14 = *(_QWORD *)(v6 + 1496);
    v15 = *(_QWORD *)(v6 + 1440) + v11;
    v26.m128i_i64[1] = v13;
    v26.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 16LL) & v15;
    sub_316BB0(&v28, &v26, *(double *)v4.m128_u64, a4);
  }
  sub_316CB0(&v28, (__int64 **)(*(_QWORD *)(a2 + 64) + 208LL), v11, v10);
  if ( (_QWORD)v29 )
  {
    v25 = (__int64 *)(a1 + 54);
    v4 = _mm_loadh_ps((const double *)(v6 + 128));
    v27 = (__m128i)v4;
    if ( (unsigned __int8)sub_317E70((_QWORD *)a1 + 27, &v27, 0) )
    {
      v4 = _mm_loadh_ps((const double *)(v6 + 128));
      v27 = (__m128i)v4;
      sub_316BB0(v25, &v27, *(double *)v4.m128_u64, a4);
      sub_317C60(v25, (__int64)&v28);
    }
    v24 = (__int64 *)(a1 + 38);
    sub_317C60((__int64 *)a1 + 19, (__int64)&v28);
    sub_317C60((__int64 *)a1 + 14, (__int64)&v28);
    sub_317C60((__int64 *)a1 + 32, (__int64)&v28);
    if ( (int)v12 > a1[3] )
      v12 = a1[3];
    v16 = a1[4] - v12;
    if ( v16 <= 0 )
      goto LABEL_16;
    v20 = 1;
  }
  else
  {
    if ( (int)v12 > a1[3] )
      v12 = a1[3];
    v16 = a1[4] - v12;
    if ( v16 <= 0 )
      goto LABEL_9;
    v20 = 0;
    v24 = (__int64 *)(a1 + 38);
  }
  v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v6 + 1440) + v12);
  v27.m128i_i64[1] = v16;
  v27.m128i_i64[0] = v21;
  if ( (unsigned __int8)sub_316BB0(v24, &v27, *(double *)v4.m128_u64, a4) )
  {
    v23.m128i_i64[0] = sub_32FA90((__int64)a1, *(_QWORD *)(a2 + 64));
    v27 = v23;
    sub_317BD0(v24, &v27);
  }
  else if ( !v20 )
  {
LABEL_9:
    v17 = 0;
    goto LABEL_10;
  }
LABEL_16:
  v22 = *(_DWORD *)(a2 + 24);
  v17 = 1;
  BYTE1(v22) &= ~2u;
  LOBYTE(v22) = v22 | 0x80;
  *(_DWORD *)(a2 + 24) = v22;
LABEL_10:
  v18 = v28;
  a1[70] |= 0x40u;
  if ( v18 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v18);
  }
  return v17;
}

