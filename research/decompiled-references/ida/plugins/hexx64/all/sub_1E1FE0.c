__int64 __fastcall sub_1E1FE0(__int64 *a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rax
  int v7; // r12d
  bool v8; // zf
  __int64 v9; // rbp
  unsigned int v10; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdi
  const char *v15; // rcx
  int v16; // [rsp+4h] [rbp-F4h]
  int v17; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v18; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+20h] [rbp-D8h] BYREF
  char v20; // [rsp+28h] [rbp-D0h]
  const char *v21; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C0h]
  int v23[2]; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v24; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-90h]
  _BYTE v26[32]; // [rsp+70h] [rbp-88h] BYREF
  _DWORD v27[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v28; // [rsp+98h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+B8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v5 = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 1496) + 728LL) & 1) == 0 || *((_BYTE *)a1 + 24) )
    return 0;
  v7 = 0;
  v8 = *(_BYTE *)(a2 + 32) == 4;
  v20 = 0;
  v19 = 0;
  v9 = a2 + 32;
  if ( v8 )
  {
    v14 = *(char **)(a2 + 40);
    v7 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 == 20 || v7 == 13 )
    {
      if ( !(unsigned __int8)sub_11FD80(v14 + 48, &v18, 0) )
        return 0;
      v9 = *(_QWORD *)(a2 + 40) + 32LL;
      v5 = *a1;
    }
  }
  if ( (unsigned __int8)sub_1DFF30((__int64)&v19, *(_QWORD *)(v5 + 1504), &v17, v9) )
  {
    v24 = 0;
    v16 = v17;
    v23[0] = 0;
    v23[1] = v17;
    v25 = 0;
    v10 = 0;
    if ( !(unsigned __int8)sub_1E0180((__int64)a1, (__m128i *)v23, (__int64)&v19, 0) )
    {
LABEL_14:
      sub_312B80((__int64)v23);
      return v10;
    }
    sub_312C40((__int64)v26, (__int64)v23, v12, v13);
    if ( v7 == 20 )
    {
      if ( !sub_314440((__int64)v23, (__int64)v23) )
        goto LABEL_30;
      a4 = (__m128)_mm_loadu_si128(&v24);
      if ( (v18 & ~_mm_or_si128(_mm_srli_si128((__m128i)a4, 8), (__m128i)a4).m128i_u64[0]) != 0 )
        goto LABEL_30;
      a5.m128_u64[0] = _mm_movehl_ps(a5, a4).m128_u64[0];
      sub_313160((__int64)v23, v18 & a5.m128_u64[0]);
    }
    else if ( v7 == 13 && !(unsigned __int8)sub_314690((__int64)v23, -v18) )
    {
LABEL_30:
      v10 = 0;
      goto LABEL_13;
    }
    v28 = 0;
    v27[0] = 0;
    v27[1] = v16;
    v29 = 0;
    if ( (unsigned __int8)sub_1E0AD0((__int64)v27, a2, a1, 0.0) )
    {
      sub_3147B0((__int64)v27, v23);
      if ( v27[0] != 8 )
      {
        if ( !v27[0] )
        {
          v10 = 2;
          goto LABEL_22;
        }
        v10 = 3;
        if ( !(unsigned int)sub_312DC0((__int64)v27, (__int64)v23) )
        {
LABEL_22:
          sub_3166B0((__int64)&v21, (__int64)v26, v9);
          v15 = s1;
          if ( v22 )
            v15 = v21;
          sub_3311F0(
            (_QWORD *)*a1,
            *(_QWORD *)(a2 + 24),
            0x2Eu,
            v15,
            0.0,
            *(double *)a4.m128_u64,
            *(double *)a5.m128_u64);
          if ( v21 )
          {
            v22 = 0;
            qfree((__int64)v21);
          }
          goto LABEL_12;
        }
      }
    }
    v10 = 0;
LABEL_12:
    sub_312B80((__int64)v27);
LABEL_13:
    sub_312B80((__int64)v26);
    goto LABEL_14;
  }
  return 0;
}

