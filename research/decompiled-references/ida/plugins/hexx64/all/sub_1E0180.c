__int64 __fastcall sub_1E0180(__int64 a1, __m128i *a2, __int64 a3, char a4)
{
  char v5; // r14
  unsigned __int8 v7; // dl
  _QWORD *v10; // rsi
  __int64 v11; // r11
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int8 v15; // bl
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  _QWORD *v19; // r9
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  char v23; // al
  _QWORD *v24; // r9
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm2
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // rbp
  __int64 v36; // rax
  unsigned int *v37; // rsi
  char v38; // al
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rbx
  __m128i v44; // xmm0
  __m128i v45; // xmm2
  __m128i v46; // xmm2
  __m128i v47; // xmm1
  __m128i v48; // xmm0
  __m128i v49; // xmm2
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __m128i v52; // xmm2
  __m128i v53; // xmm1
  __m128i v54; // xmm0
  __m128i si128; // xmm2
  __m128i v56; // xmm1
  __m128i v57; // xmm0
  __m128i v58; // xmm2
  __int64 v59; // [rsp+0h] [rbp-F8h]
  _QWORD *v60; // [rsp+8h] [rbp-F0h]
  _QWORD *v61; // [rsp+8h] [rbp-F0h]
  _QWORD *v62; // [rsp+8h] [rbp-F0h]
  __int64 *v63; // [rsp+10h] [rbp-E8h]
  _QWORD *v64; // [rsp+10h] [rbp-E8h]
  _QWORD *v65; // [rsp+10h] [rbp-E8h]
  _QWORD *v66; // [rsp+10h] [rbp-E8h]
  __int32 v67; // [rsp+24h] [rbp-D4h]
  __m128i v68; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v69; // [rsp+40h] [rbp-B8h] BYREF
  __m256i v70; // [rsp+50h] [rbp-A8h] BYREF
  __m256i v71; // [rsp+70h] [rbp-88h] BYREF
  __m128i v72; // [rsp+90h] [rbp-68h]
  __m128i v73; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v74; // [rsp+B8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v5 = *(_BYTE *)(a1 + 24);
  if ( v5 )
    return 0;
  v7 = *(_BYTE *)(a3 + 8);
  if ( v7 == 5 )
    v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1504LL) + 96LL) + 145LL);
  v10 = *(_QWORD **)(a1 + 8);
  if ( !v10 )
    return 0;
  v11 = *(_QWORD *)a3;
  v12 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v12 & 2) != 0 )
      goto LABEL_7;
    do
    {
      v15 = *(_BYTE *)(v12 + 32);
      if ( v15 < v7 || v7 >= v15 && v11 > *(_QWORD *)(v12 + 24) )
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
      else
      {
        v13 = v12;
        v12 = *(_QWORD *)(v12 + 8);
      }
    }
    while ( (*(_BYTE *)v12 & 2) == 0 );
    if ( (_QWORD *)v13 == v10 )
    {
LABEL_7:
      v13 = *(_QWORD *)(a1 + 8);
      if ( !*(_QWORD *)(a1 + 16) )
        return 0;
LABEL_29:
      if ( v10[1] == v13 )
        return 0;
      v17 = *(_QWORD *)v13;
      if ( (*(_QWORD *)v13 & 2) != 0 )
        goto LABEL_18;
LABEL_33:
      v29 = *(_QWORD *)(v13 + 8);
      if ( (*(_BYTE *)v29 & 2) != 0 )
      {
        v30 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
        v31 = *v30;
        if ( (*v30 & 2) != 0 || v30[1] != v13 )
        {
LABEL_35:
          v13 = (unsigned __int64)v30;
        }
        else
        {
          while ( 1 )
          {
            v13 = v31 & 0xFFFFFFFFFFFFFFFCLL;
            v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v31 & 2) != 0 )
              break;
            v43 = v30;
            v30 = (_QWORD *)v13;
            if ( *(_QWORD **)(v13 + 8) != v43 )
              goto LABEL_35;
          }
        }
      }
      else
      {
        do
        {
          v13 = v29;
          v29 = *(_QWORD *)(v29 + 16);
        }
        while ( (*(_BYTE *)v29 & 2) == 0 );
      }
      goto LABEL_19;
    }
    v16 = v13 + 24;
    if ( v7 >= *(_BYTE *)(v13 + 32) && v11 >= *(_QWORD *)(v13 + 24) )
      goto LABEL_21;
  }
  else
  {
    v13 = 0;
    if ( v7 >= 0x40u )
    {
      v16 = 24;
      if ( v11 >= 0 )
        goto LABEL_21;
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
    goto LABEL_29;
  v17 = *(_QWORD *)v13;
  if ( (*(_QWORD *)v13 & 2) == 0 )
    goto LABEL_33;
LABEL_18:
  v13 = *(_QWORD *)(v13 + 16);
LABEL_19:
  v16 = v13 + 24;
  if ( *(_BYTE *)(v13 + 32) != v7 || v11 >= *(_QWORD *)(v13 + 24) + *(int *)(v13 + 44) )
    return 0;
LABEL_21:
  v63 = (__int64 *)v16;
  v60 = (_QWORD *)a3;
  v18 = *(_QWORD *)(v13 + 24) + *(int *)(v16 + 20);
  v67 = a2->m128i_i32[1];
  v59 = v67 + v11;
  if ( a4 )
  {
    if ( *(_QWORD *)(v13 + 24) != v11 || a2->m128i_i32[1] + v11 != v18 )
      return 0;
    sub_312D90((__int64)a2, v13 + 40);
    v19 = v60;
    v20 = v63;
    v21 = *v60;
    if ( *v60 <= *(_QWORD *)(v13 + 24) )
      return 1;
LABEL_25:
    v64 = v19;
    v71.m256i_i64[0] = 0x800000000LL;
    memset(&v71.m256i_u64[1], 0, 24);
    v22 = *v20;
    if ( v5 )
    {
      if ( !(unsigned __int8)sub_314D00(a2, (__m128i *)&v71, (unsigned int)(a2->m128i_i32[1] + v22 - v21), (__int64)v20) )
        goto LABEL_86;
      v53 = _mm_loadu_si128(a2);
      v54 = _mm_loadu_si128(a2 + 1);
      v24 = v64;
      *a2 = _mm_load_si128((const __m128i *)&v71);
      si128 = _mm_load_si128((const __m128i *)&v71.m256i_u64[2]);
      v72 = v53;
      v73 = v54;
      a2[1] = si128;
      *(__m128i *)v71.m256i_i8 = v53;
      *(__m128i *)&v71.m256i_u64[2] = v54;
    }
    else
    {
      v23 = sub_314D00(a2, (__m128i *)&v71, (unsigned int)(v21 - v22), (__int64)v20);
      v24 = v64;
      if ( !v23 )
        goto LABEL_86;
    }
    v65 = v24;
    if ( v71.m256i_i32[0] != 1 )
    {
      v25 = _mm_loadu_si128(a2);
      v26 = _mm_loadu_si128(a2 + 1);
      *a2 = _mm_load_si128((const __m128i *)&v71);
      v27 = _mm_load_si128((const __m128i *)&v71.m256i_u64[2]);
      v72 = v25;
      a2[1] = v27;
      v73 = v26;
      *(__m128i *)v71.m256i_i8 = v25;
      *(__m128i *)&v71.m256i_u64[2] = v26;
      sub_312B80((__int64)&v71);
      v19 = v65;
      goto LABEL_42;
    }
LABEL_86:
    sub_312B80((__int64)&v71);
    return 0;
  }
  sub_312D90((__int64)a2, v13 + 40);
  v19 = v60;
  v20 = v63;
  v21 = *v60;
  if ( *(_QWORD *)(v13 + 24) < *v60 )
    goto LABEL_25;
LABEL_42:
  if ( v59 <= v18 )
    goto LABEL_62;
  while ( 1 )
  {
    v32 = *(_QWORD *)v13;
    v33 = v13;
    if ( (*(_QWORD *)v13 & 2) == 0 )
    {
      v28 = *(_QWORD *)(v13 + 16);
      if ( (*(_BYTE *)v28 & 2) != 0 )
      {
        v33 = v32 & 0xFFFFFFFFFFFFFFFCLL;
        v39 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v39 & 2) == 0 )
        {
          v40 = v13;
          do
          {
            if ( v40 != *(_QWORD *)(v33 + 16) )
              break;
            v40 = v33;
            v28 = v39 & 0xFFFFFFFFFFFFFFFCLL;
            v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
            v33 = v28;
          }
          while ( (v39 & 2) == 0 );
        }
      }
      else
      {
        do
        {
          v33 = v28;
          v28 = *(_QWORD *)(v28 + 8);
        }
        while ( (*(_BYTE *)v28 & 2) == 0 );
      }
    }
    if ( *(_QWORD *)(a1 + 8) == v33 )
      break;
    v20 = (__int64 *)(v33 + 24);
    if ( *(_BYTE *)(v33 + 32) != *(_BYTE *)(v13 + 32) )
      break;
    if ( *(_QWORD *)(v33 + 24) >= v59 )
      break;
    v34 = *(_QWORD *)(v33 + 24);
    if ( v34 != *(_QWORD *)(v13 + 24) + *(int *)(v13 + 44) )
      break;
    v35 = *(_DWORD *)(v33 + 44) + (int)v34;
    if ( v35 <= v59 )
    {
      v37 = (unsigned int *)(v33 + 40);
      if ( !v5 )
        goto LABEL_55;
    }
    else
    {
      v61 = v19;
      sub_312C40((__int64)&v68, v33 + 40, v28, (__int64)v20);
      v70.m256i_i64[0] = 0x800000000LL;
      memset(&v70.m256i_u64[1], 0, 24);
      v36 = *(_QWORD *)(v33 + 24);
      if ( !v5 )
      {
        if ( (unsigned __int8)sub_314D00(&v68, (__m128i *)&v70, (unsigned int)(v59 - v36), (__int64)&v70)
          && (unsigned __int8)sub_313C40((__int64)a2, (unsigned int *)&v68) )
        {
          goto LABEL_84;
        }
        sub_312B80((__int64)&v70);
        sub_312B80((__int64)&v68);
        v19 = v61;
        v37 = (unsigned int *)(v33 + 40);
LABEL_55:
        v62 = v19;
        v38 = sub_313C40((__int64)a2, v37);
        v19 = v62;
        if ( !v38 )
          goto LABEL_60;
        goto LABEL_56;
      }
      if ( (unsigned __int8)sub_314D00(
                              &v68,
                              (__m128i *)&v70,
                              (unsigned int)(v36 + v68.m128i_i32[1] - v59),
                              (unsigned int)v59) )
      {
        v47 = _mm_load_si128(&v68);
        v48 = _mm_load_si128(&v69);
        v68 = _mm_load_si128((const __m128i *)&v70);
        v49 = _mm_load_si128((const __m128i *)&v70.m256i_u64[2]);
        v72 = v47;
        v73 = v48;
        v69 = v49;
        *(__m128i *)v70.m256i_i8 = v47;
        *(__m128i *)&v70.m256i_u64[2] = v48;
        sub_312C40((__int64)&v71, (__int64)&v68, v41, v42);
        if ( (unsigned __int8)sub_313C40((__int64)&v71, (unsigned int *)a2) )
        {
          v50 = _mm_loadu_si128(a2);
          v51 = _mm_loadu_si128(a2 + 1);
          *a2 = _mm_load_si128((const __m128i *)&v71);
          v52 = _mm_load_si128((const __m128i *)&v71.m256i_u64[2]);
          v72 = v50;
          a2[1] = v52;
          v73 = v51;
          *(__m128i *)v71.m256i_i8 = v50;
          *(__m128i *)&v71.m256i_u64[2] = v51;
          sub_312B80((__int64)&v71);
LABEL_84:
          sub_312B80((__int64)&v70);
          sub_312B80((__int64)&v68);
          return 1;
        }
        sub_312B80((__int64)&v71);
        sub_312B80((__int64)&v70);
        sub_312B80((__int64)&v68);
        v19 = v61;
        v37 = (unsigned int *)(v33 + 40);
      }
      else
      {
        sub_312B80((__int64)&v70);
        sub_312B80((__int64)&v68);
        v19 = v61;
        v37 = (unsigned int *)(v33 + 40);
      }
    }
    v66 = v19;
    sub_312C40((__int64)&v71, (__int64)v37, v28, (__int64)v20);
    if ( !(unsigned __int8)sub_313C40((__int64)&v71, (unsigned int *)a2) )
    {
      sub_312B80((__int64)&v71);
      v19 = v66;
LABEL_60:
      if ( v35 >= v59 )
      {
        v71.m256i_i32[0] = 0;
        v71.m256i_i32[1] = v67;
        memset(&v71.m256i_u64[1], 0, 24);
        sub_312D90((__int64)a2, (__int64)&v71);
        sub_312B80((__int64)&v71);
        sub_312B80((__int64)a2);
        a2->m128i_i32[0] = 8;
        return 1;
      }
      break;
    }
    v44 = _mm_loadu_si128(a2 + 1);
    v45 = _mm_load_si128((const __m128i *)&v71);
    *(__m128i *)v71.m256i_i8 = _mm_loadu_si128(a2);
    v72 = *(__m128i *)v71.m256i_i8;
    *a2 = v45;
    v46 = _mm_load_si128((const __m128i *)&v71.m256i_u64[2]);
    *(__m128i *)&v71.m256i_u64[2] = v44;
    a2[1] = v46;
    v73 = v44;
    sub_312B80((__int64)&v71);
    v19 = v66;
LABEL_56:
    v13 = v33;
  }
  v18 = *v19 + a2->m128i_i32[1];
  if ( v59 > v18 )
    return 0;
LABEL_62:
  if ( v18 <= v59 )
    return 1;
  memset(&v71.m256i_u64[1], 0, 24);
  v71.m256i_i64[0] = 0x800000000LL;
  if ( !v5 )
  {
    if ( (unsigned __int8)sub_314D00(a2, (__m128i *)&v71, (unsigned int)v67, (__int64)v20) )
      goto LABEL_65;
    goto LABEL_89;
  }
  if ( (unsigned __int8)sub_314D00(a2, (__m128i *)&v71, (unsigned int)(a2->m128i_i32[1] - v67), (__int64)v20) )
  {
    v56 = _mm_loadu_si128(a2);
    v57 = _mm_loadu_si128(a2 + 1);
    *a2 = _mm_load_si128((const __m128i *)&v71);
    v58 = _mm_load_si128((const __m128i *)&v71.m256i_u64[2]);
    v72 = v56;
    v73 = v57;
    a2[1] = v58;
    *(__m128i *)v71.m256i_i8 = v56;
    *(__m128i *)&v71.m256i_u64[2] = v57;
LABEL_65:
    if ( a2->m128i_i32[0] != 1 )
    {
      sub_312B80((__int64)&v71);
      return 1;
    }
  }
LABEL_89:
  sub_312B80((__int64)&v71);
  return 0;
}

