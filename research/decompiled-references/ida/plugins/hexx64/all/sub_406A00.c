__int64 __fastcall sub_406A00(__int64 a1, double a2, double a3, __m128 a4)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rsi
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __int64 v10; // rax
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  unsigned __int8 v18; // bl
  int v19; // edx
  char v20; // r15
  __int64 v21; // rbx
  int v22; // eax
  unsigned int v23; // ebx
  __int16 v24; // ax
  __int64 v25; // r8
  unsigned __int64 *v26; // rsi
  _BOOL4 v27; // ebx
  __int64 v28; // rcx
  __int64 v30; // r15
  int dtype_size; // eax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r14
  int v39; // eax
  int v40; // r14d
  __int64 v41; // r13
  int v42; // eax
  int v43; // eax
  int v44; // eax
  char v45; // [rsp+3h] [rbp-10Dh]
  int v46; // [rsp+4h] [rbp-10Ch]
  __int64 flags; // [rsp+8h] [rbp-108h]
  unsigned __int64 v48; // [rsp+10h] [rbp-100h] BYREF
  __int64 v49; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v50; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v51; // [rsp+28h] [rbp-E8h]
  _BYTE v52[12]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v53; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v54; // [rsp+48h] [rbp-C8h]
  char v55; // [rsp+50h] [rbp-C0h]
  __int64 v56; // [rsp+60h] [rbp-B0h] BYREF
  unsigned __int64 v57; // [rsp+68h] [rbp-A8h]
  char v58; // [rsp+70h] [rbp-A0h]
  __int64 v59; // [rsp+80h] [rbp-90h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-88h]
  char v61; // [rsp+90h] [rbp-80h]
  __int64 v62; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-68h]
  char v64; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v65; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v66; // [rsp+C8h] [rbp-48h]
  char v67; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v68; // [rsp+D8h] [rbp-38h]

  v68 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 52);
  if ( (v4 & 1) != 0 )
    return (unsigned int)-2;
  v49 = 0;
  v5 = v4 & 0x1018;
  v48 = 0xFFFFFFFF00000000LL;
  v50 = 0xFFFFFFFF00000000LL;
  v6 = 8;
  v51 = 0;
  if ( (_DWORD)v5 != 4112 )
  {
    if ( (v4 & 0x1008) == 0 || (v6 = 2, (_DWORD)v5 == 4104) )
      v6 = 4;
  }
  v7 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v52 = 1;
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 388));
  v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), v8);
  *(_QWORD *)&v52[4] = v9.m128i_i64[0];
  if ( (v4 & 6) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v10 + 48) )
    {
      v10 = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 0, v5, *(double *)v9.m128i_i64);
      *(_QWORD *)(a1 + 16) = v10;
      v7 = *(_QWORD *)(a1 + 832);
      v6 = *(_DWORD *)&v52[4];
    }
    v11 = *(_DWORD *)(v10 + 72);
    v12 = *(_DWORD *)(v7 + 84);
    LOBYTE(v48) = 7;
    v13 = *(_QWORD *)(a1 + 40);
    LOBYTE(v50) = 6;
    LODWORD(v49) = v11;
    v14 = 8 * v12;
    v15 = v13 + *(unsigned __int16 *)(a1 + 50);
    if ( (unsigned __int64)v14 <= 0x3F )
      v15 &= ~(-1LL << v14);
    v51 = v15;
    v66 = 0;
    v65 = 0xFFFFFFFF00000000LL;
    sub_120A10((__int64)&v65, (unsigned __int64 *)v7, 0, v6, v13, 0);
    sub_1D6450(a1, 44, v52, (unsigned __int8 *)&v65, (unsigned __int8 *)&v50, v9, (__m128)v8, a4);
    *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2, v16, *(double *)v9.m128i_i64);
    sub_11CDA0((__int64)&v65);
  }
  v17 = *(_WORD *)(a1 + 48);
  v18 = *(_BYTE *)(a1 + 69);
  if ( v17 != 124 )
  {
    if ( v17 <= 0x7Cu )
    {
      if ( v17 != 28 )
      {
        if ( v17 != 107 )
        {
LABEL_39:
          v45 = 1;
          v20 = 1;
          goto LABEL_17;
        }
        v62 = a1;
        v64 = 0;
        v63 = 0xFFFFFFFF00000001LL;
        sub_3FA580((int *)&v62, 1, 0, v9, (__m128)v8, a4);
        if ( !v64 && !(unsigned __int8)sub_3FACB0((__int64)&v62, v9, (__m128)v8, a4) )
          sub_3EB430(*(double *)v9.m128i_i64);
        v30 = SHIDWORD(v63);
        dtype_size = get_dtype_size();
        sub_1D6310(a1, 4u, dtype_size, v30, 0x3BEA45E214ADDC55LL, 8, *(double *)v9.m128i_i64, 0);
        v20 = 0;
        v45 = 1;
LABEL_17:
        v46 = get_dtype_size();
        do
        {
          if ( prev_head() == -1 )
            break;
          flags = get_flags_ex();
          if ( (~BYTE1(flags) & 6) != 0 || (unsigned __int8)get_byte() == 0xFC )
            break;
          if ( (unsigned __int8)get_byte() == 0xFD )
          {
            v46 = -v46;
            break;
          }
        }
        while ( (flags & 0x1000) == 0 );
        v21 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
        v22 = get_dtype_size();
        sub_1D6310(a1, 3u, v22, v46, 0x3BEA45E214ADDC55LL, v21, *(double *)v9.m128i_i64, 0);
        if ( v45 )
        {
          v36 = *(_QWORD *)(a1 + 832);
          v37 = *(int *)(v36 + 408);
          v38 = *(int *)(v36 + 464);
          v39 = get_dtype_size();
          sub_1D6310(a1, 0xCu, v39, v37, v38, v37, *(double *)v9.m128i_i64, 0);
        }
        if ( v20 )
        {
          v32 = *(_QWORD *)(a1 + 832);
          v33 = *(int *)(v32 + 404);
          v34 = *(int *)(v32 + 464);
          v35 = get_dtype_size();
          sub_1D6310(a1, 0xCu, v35, v33, v34, v33, *(double *)v9.m128i_i64, 0);
        }
        v23 = 0;
        if ( (*(_BYTE *)(a1 + 52) & 6) != 0 )
        {
          sub_3FC6F0(a1, *(double *)v9.m128i_i64, *(double *)v8.m128i_i64, a4);
          v24 = *(_WORD *)(a1 + 48);
          if ( v24 == 28 || v24 == 167 )
          {
            v25 = *(_QWORD *)(a1 + 40);
            v26 = *(unsigned __int64 **)(a1 + 832);
            v27 = (*(_BYTE *)(a1 + 52) & 4) == 0;
            v62 = 0x100000001LL;
            v65 = 0xFFFFFFFF00000000LL;
            v63 = 1;
            v66 = 0;
            sub_120A10((__int64)&v65, v26, 0, 1, v25, 0);
            sub_1D6450(
              a1,
              (unsigned int)(v27 + 43),
              (unsigned __int8 *)&v62,
              (unsigned __int8 *)&v65,
              (unsigned __int8 *)&v50,
              v9,
              (__m128)v8,
              a4);
            *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2, v28, *(double *)v9.m128i_i64);
            sub_11CDA0((__int64)&v65);
            sub_11CDA0((__int64)&v62);
          }
          sub_1D6450(a1, 55, (unsigned __int8 *)&v48, nullptr, nullptr, v9, (__m128)v8, a4);
          v23 = 1;
        }
        goto LABEL_32;
      }
      v56 = a1;
      v58 = 0;
      v57 = 0xFFFFFFFF00000000LL;
      sub_3FA580((int *)&v56, 1, 0, v9, (__m128)v8, a4);
      if ( !v58 && !(unsigned __int8)sub_3FACB0((__int64)&v56, v9, (__m128)v8, a4) )
        sub_3EB430(*(double *)v9.m128i_i64);
      v61 = 0;
      v59 = a1;
      v40 = HIDWORD(v57);
      *(_QWORD *)(a1 + 880) = -1;
      v60 = 0xFFFFFFFF00000001LL;
      sub_3FA580((int *)&v59, 1, 0, v9, (__m128)v8, a4);
      if ( !v61 && !(unsigned __int8)sub_3FACB0((__int64)&v59, v9, (__m128)v8, a4) )
        sub_3EB430(*(double *)v9.m128i_i64);
      v45 = 1;
      v41 = SHIDWORD(v60);
    }
    else
    {
      if ( v17 != 167 )
      {
        v45 = 0;
        v19 = 8;
        if ( v17 == 207 )
          goto LABEL_16;
        goto LABEL_39;
      }
      v65 = a1;
      v67 = 0;
      v66 = 0xFFFFFFFF00000000LL;
      sub_3FA580((int *)&v65, 1, 0, v9, (__m128)v8, a4);
      if ( !v67 && !(unsigned __int8)sub_3FACB0((__int64)&v65, v9, (__m128)v8, a4) )
        sub_3EB430(*(double *)v9.m128i_i64);
      v45 = 0;
      v40 = HIDWORD(v66);
      v41 = 8;
    }
    v42 = get_dtype_size();
    sub_1D6310(a1, 0x23u, v42, v40, v41, 0, *(double *)v9.m128i_i64, 0);
    v43 = get_dtype_size();
    sub_1D6310(a1, 0x1Eu, v43, v40, v41, 3, *(double *)v9.m128i_i64, 0);
    v44 = get_dtype_size();
    sub_1D6310(a1, 0xDu, v44, v40, v41, v40, *(double *)v9.m128i_i64, 0);
    sub_3FD520(a1, v40, v18, v9, (__m128)v8, a4);
    v20 = 1;
    goto LABEL_17;
  }
  v53 = a1;
  v54 = 0xFFFFFFFF00000001LL;
  v55 = 0;
  sub_3FA580((int *)&v53, 1, 0, v9, (__m128)v8, a4);
  if ( !v55 && !(unsigned __int8)sub_3FACB0((__int64)&v53, v9, (__m128)v8, a4) )
    sub_3EB430(*(double *)v9.m128i_i64);
  v45 = 1;
  v19 = HIDWORD(v54);
  *(_QWORD *)(a1 + 880) = -1;
LABEL_16:
  v20 = sub_3FB270(a1, 0, v19, 1, v9, (__m128)v8, a4);
  if ( v20 )
    goto LABEL_17;
  v23 = -2;
LABEL_32:
  sub_11CDA0((__int64)v52);
  sub_11CDA0((__int64)&v50);
  sub_11CDA0((__int64)&v48);
  return v23;
}

