__int64 __fastcall sub_16D10(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, int a7)
{
  __int64 *v7; // r14
  __int64 *v8; // r13
  __int64 v9; // r12
  __int64 *v10; // rbx
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 *v13; // rbp
  __int64 *v14; // r15
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // r15
  __m128i v22; // xmm0
  __int64 v23; // r15
  __m128i v24; // xmm0
  int v25; // eax
  int v26; // edx
  char v27; // al
  __int64 v28; // r15
  __m128i v29; // xmm0
  __int64 v30; // r15
  __m128i v31; // xmm0
  __int64 v32; // rsi
  __int64 *v33; // r15
  __int64 *v34; // rbp
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rbp
  __int64 *v40; // rbp
  __int64 *v41; // rbx
  __int64 i; // r12
  char v43; // al
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // r15
  __int64 v47; // rax
  __m128i v48; // xmm0
  int v49; // eax
  int v50; // edx
  __int64 v51; // r15
  __m128i v52; // xmm0
  __int64 v53; // r15
  __m128i v54; // xmm0
  __int64 v55; // rbp
  __int64 v56; // rbx
  __int64 v57; // rbp
  __m128i v58; // xmm0
  __int64 v59; // rbp
  __m128i v60; // xmm0
  __int64 *v61; // rbp
  __int64 v62; // rbx
  __int64 v63; // r12
  __m128i v64; // xmm0
  __int64 v65; // r12
  __m128i v66; // xmm0
  __int64 v67; // r13
  __int64 *v68; // rbx
  __int128 v69; // xmm0
  __int64 v70; // r14
  __m128i v71; // xmm1
  __int64 *v72; // rbp
  __int64 v73; // r14
  __m128i v74; // xmm1
  __m128i v75; // [rsp+0h] [rbp-78h] BYREF
  __m128i v76; // [rsp+10h] [rbp-68h] BYREF
  __m128i v77; // [rsp+20h] [rbp-58h] BYREF
  __int64 v78; // [rsp+38h] [rbp-40h]

  v7 = a1;
  v8 = a6;
  v9 = a3;
  v10 = (__int64 *)a2;
  if ( a4 <= a5 )
  {
    result = a2 - (char *)a1;
    v12 = (a2 - (char *)a1) >> 6;
    v78 = v12;
    if ( result <= 0 )
      return result;
    v75.m128i_i64[0] = v12;
    v13 = a1;
    v14 = a6;
    do
    {
      v15 = *v13;
      v16 = _mm_loadu_si128((const __m128i *)(v13 + 1));
      *v13 = 0;
      *(_OWORD *)(v13 + 1) = 0;
      if ( *v14 )
      {
        v14[1] = 0;
        v76.m128i_i64[0] = v15;
        v77 = v16;
        qfree();
        v16 = _mm_load_si128(&v77);
        v15 = v76.m128i_i64[0];
      }
      *v14 = v15;
      *(__m128i *)(v14 + 1) = v16;
      v17 = v13[3];
      v18 = _mm_loadu_si128((const __m128i *)v13 + 2);
      v13[3] = 0;
      *((_OWORD *)v13 + 2) = 0;
      if ( v14[3] )
      {
        v14[4] = 0;
        v76.m128i_i64[0] = v17;
        v77 = v18;
        qfree();
        v18 = _mm_load_si128(&v77);
        v17 = v76.m128i_i64[0];
      }
      v14[3] = v17;
      v13 += 8;
      v14 += 8;
      *((__m128i *)v14 - 2) = v18;
      *((_DWORD *)v14 - 4) = *((_DWORD *)v13 - 4);
      *((_DWORD *)v14 - 3) = *((_DWORD *)v13 - 3);
      *((_BYTE *)v14 - 8) = *((_BYTE *)v13 - 8);
      --v75.m128i_i64[0];
    }
    while ( v75.m128i_i64[0] );
    result = 0;
    v19 = v78 - 1;
    if ( v78 - 1 < 0 )
      v19 = 0;
    v20 = (__int64)&v8[8 * v19 + 8];
    if ( v8 == (__int64 *)v20 )
      return result;
    if ( v10 == (__int64 *)v9 )
    {
LABEL_66:
      if ( v8 != (__int64 *)v20 )
      {
        v55 = v20 - (_QWORD)v8;
        v56 = v55 >> 6;
        if ( v55 > 0 )
        {
          do
          {
            v57 = *v8;
            v58 = _mm_loadu_si128((const __m128i *)(v8 + 1));
            *v8 = 0;
            *(_OWORD *)(v8 + 1) = 0;
            if ( *v7 )
            {
              v7[1] = 0;
              v75 = v58;
              qfree();
              v58 = _mm_load_si128(&v75);
            }
            *v7 = v57;
            *(__m128i *)(v7 + 1) = v58;
            v59 = v8[3];
            v60 = _mm_loadu_si128((const __m128i *)v8 + 2);
            v8[3] = 0;
            *((_OWORD *)v8 + 2) = 0;
            if ( v7[3] )
            {
              v7[4] = 0;
              v75 = v60;
              qfree();
              v60 = _mm_load_si128(&v75);
            }
            v7[3] = v59;
            v8 += 8;
            v7 += 8;
            *((__m128i *)v7 - 2) = v60;
            *((_DWORD *)v7 - 4) = *((_DWORD *)v8 - 4);
            *((_DWORD *)v7 - 3) = *((_DWORD *)v8 - 3);
            result = *((unsigned __int8 *)v8 - 8);
            *((_BYTE *)v7 - 8) = result;
            --v56;
          }
          while ( v56 );
        }
      }
      return result;
    }
    while ( 1 )
    {
      v25 = *((_DWORD *)v10 + 12);
      v26 = *((_DWORD *)v8 + 12);
      if ( v25 == v26 )
      {
        v27 = *((_BYTE *)v10 + 56);
        if ( v27 == *((_BYTE *)v8 + 56) )
        {
          if ( *((_DWORD *)v10 + 13) < *((_DWORD *)v8 + 13) )
            goto LABEL_26;
        }
        else if ( v27 )
        {
          goto LABEL_26;
        }
      }
      else if ( v25 == a7 || v26 != a7 && v25 < v26 )
      {
LABEL_26:
        v28 = *v10;
        v29 = _mm_loadu_si128((const __m128i *)(v10 + 1));
        *v10 = 0;
        *(_OWORD *)(v10 + 1) = 0;
        if ( *v7 )
        {
          v7[1] = 0;
          v75 = v29;
          qfree();
          v29 = _mm_load_si128(&v75);
        }
        *v7 = v28;
        *(__m128i *)(v7 + 1) = v29;
        v30 = v10[3];
        v31 = _mm_loadu_si128((const __m128i *)v10 + 2);
        v10[3] = 0;
        *((_OWORD *)v10 + 2) = 0;
        if ( v7[3] )
        {
          v7[4] = 0;
          v75 = v31;
          qfree();
          v31 = _mm_load_si128(&v75);
        }
        v7[3] = v30;
        v10 += 8;
        v7 += 8;
        *((__m128i *)v7 - 2) = v31;
        *((_DWORD *)v7 - 4) = *((_DWORD *)v10 - 4);
        *((_DWORD *)v7 - 3) = *((_DWORD *)v10 - 3);
        result = *((unsigned __int8 *)v10 - 8);
        *((_BYTE *)v7 - 8) = result;
        if ( v8 == (__int64 *)v20 )
          return result;
        goto LABEL_22;
      }
      v21 = *v8;
      v22 = _mm_loadu_si128((const __m128i *)(v8 + 1));
      *v8 = 0;
      *(_OWORD *)(v8 + 1) = 0;
      if ( *v7 )
      {
        v7[1] = 0;
        v75 = v22;
        qfree();
        v22 = _mm_load_si128(&v75);
      }
      *v7 = v21;
      *(__m128i *)(v7 + 1) = v22;
      v23 = v8[3];
      v24 = _mm_loadu_si128((const __m128i *)v8 + 2);
      v8[3] = 0;
      *((_OWORD *)v8 + 2) = 0;
      if ( v7[3] )
      {
        v7[4] = 0;
        v75 = v24;
        qfree();
        v24 = _mm_load_si128(&v75);
      }
      v7[3] = v23;
      v8 += 8;
      v7 += 8;
      *((__m128i *)v7 - 2) = v24;
      *((_DWORD *)v7 - 4) = *((_DWORD *)v8 - 4);
      *((_DWORD *)v7 - 3) = *((_DWORD *)v8 - 3);
      result = *((unsigned __int8 *)v8 - 8);
      *((_BYTE *)v7 - 8) = result;
      if ( v8 == (__int64 *)v20 )
        return result;
LABEL_22:
      if ( (__int64 *)v9 == v10 )
        goto LABEL_66;
    }
  }
  result = a3 - (_QWORD)a2;
  v32 = (a3 - (__int64)a2) >> 6;
  v78 = v32;
  if ( result <= 0 )
    return result;
  v75.m128i_i64[0] = v32;
  v33 = v10;
  v34 = a6;
  do
  {
    v35 = *v33;
    v36 = _mm_loadu_si128((const __m128i *)(v33 + 1));
    *v33 = 0;
    *(_OWORD *)(v33 + 1) = 0;
    if ( *v34 )
    {
      v34[1] = 0;
      v76.m128i_i64[0] = v35;
      v77 = v36;
      qfree();
      v36 = _mm_load_si128(&v77);
      v35 = v76.m128i_i64[0];
    }
    *v34 = v35;
    *(__m128i *)(v34 + 1) = v36;
    v37 = v33[3];
    v38 = _mm_loadu_si128((const __m128i *)v33 + 2);
    v33[3] = 0;
    *((_OWORD *)v33 + 2) = 0;
    if ( v34[3] )
    {
      v34[4] = 0;
      v77.m128i_i64[0] = v37;
      v76 = v38;
      qfree();
      v37 = v77.m128i_i64[0];
      v38 = _mm_load_si128(&v76);
    }
    v34[3] = v37;
    v33 += 8;
    v34 += 8;
    *((__m128i *)v34 - 2) = v38;
    *((_DWORD *)v34 - 4) = *((_DWORD *)v33 - 4);
    *((_DWORD *)v34 - 3) = *((_DWORD *)v33 - 3);
    *((_BYTE *)v34 - 8) = *((_BYTE *)v33 - 8);
    --v75.m128i_i64[0];
  }
  while ( v75.m128i_i64[0] );
  v39 = v78 - 1;
  if ( v78 - 1 < 0 )
    v39 = 0;
  v40 = &v8[8 * v39];
  result = (__int64)(v40 + 8);
  if ( v10 != a1 )
  {
    if ( v8 == (__int64 *)result )
      return result;
    v41 = v10 - 8;
    for ( i = v9 - 64; ; i -= 64 )
    {
      v49 = *((_DWORD *)v40 + 12);
      v50 = *((_DWORD *)v41 + 12);
      if ( v49 != v50 )
        break;
      v43 = *((_BYTE *)v40 + 56);
      if ( v43 != *((_BYTE *)v41 + 56) )
        goto LABEL_47;
      if ( *((_DWORD *)v40 + 13) >= *((_DWORD *)v41 + 13) )
      {
LABEL_58:
        v51 = *v40;
        v52 = _mm_loadu_si128((const __m128i *)(v40 + 1));
        *v40 = 0;
        *(_OWORD *)(v40 + 1) = 0;
        if ( *(_QWORD *)i )
        {
          *(_QWORD *)(i + 8) = 0;
          v75 = v52;
          qfree();
          v52 = _mm_load_si128(&v75);
        }
        *(_QWORD *)i = v51;
        *(__m128i *)(i + 8) = v52;
        v53 = v40[3];
        v54 = _mm_loadu_si128((const __m128i *)v40 + 2);
        v40[3] = 0;
        *((_OWORD *)v40 + 2) = 0;
        if ( *(_QWORD *)(i + 24) )
        {
          *(_QWORD *)(i + 32) = 0;
          v75 = v54;
          qfree();
          v54 = _mm_load_si128(&v75);
        }
        *(_QWORD *)(i + 24) = v53;
        *(__m128i *)(i + 32) = v54;
        *(_DWORD *)(i + 48) = *((_DWORD *)v40 + 12);
        *(_DWORD *)(i + 52) = *((_DWORD *)v40 + 13);
        result = *((unsigned __int8 *)v40 + 56);
        *(_BYTE *)(i + 56) = result;
        if ( v8 == v40 )
          return result;
        v40 -= 8;
        continue;
      }
LABEL_48:
      v44 = *v41;
      v45 = _mm_loadu_si128((const __m128i *)(v41 + 1));
      v46 = i;
      *v41 = 0;
      *(_OWORD *)(v41 + 1) = 0;
      if ( *(_QWORD *)i )
      {
        *(_QWORD *)(i + 8) = 0;
        v76.m128i_i64[0] = v44;
        v75 = v45;
        qfree();
        v44 = v76.m128i_i64[0];
        v45 = _mm_load_si128(&v75);
      }
      *(_QWORD *)i = v44;
      *(__m128i *)(i + 8) = v45;
      v47 = v41[3];
      v48 = _mm_loadu_si128((const __m128i *)v41 + 2);
      v41[3] = 0;
      *((_OWORD *)v41 + 2) = 0;
      if ( *(_QWORD *)(i + 24) )
      {
        *(_QWORD *)(i + 32) = 0;
        v76.m128i_i64[0] = v47;
        v75 = v48;
        qfree();
        v47 = v76.m128i_i64[0];
        v48 = _mm_load_si128(&v75);
      }
      *(_QWORD *)(i + 24) = v47;
      *(__m128i *)(i + 32) = v48;
      *(_DWORD *)(i + 48) = *((_DWORD *)v41 + 12);
      *(_DWORD *)(i + 52) = *((_DWORD *)v41 + 13);
      *(_BYTE *)(i + 56) = *((_BYTE *)v41 + 56);
      if ( a1 == v41 )
      {
        v61 = v40 + 8;
        result = (char *)v61 - (char *)v8;
        v62 = ((char *)v61 - (char *)v8) >> 6;
        if ( (char *)v61 - (char *)v8 > 0 )
        {
          do
          {
            v46 -= 64;
            v63 = *(v61 - 8);
            v61 -= 8;
            *v61 = 0;
            v64 = _mm_loadu_si128((const __m128i *)(v61 + 1));
            *(_OWORD *)(v61 + 1) = 0;
            if ( *(_QWORD *)v46 )
            {
              *(_QWORD *)(v46 + 8) = 0;
              v75 = v64;
              qfree();
              v64 = _mm_load_si128(&v75);
            }
            *(_QWORD *)v46 = v63;
            *(__m128i *)(v46 + 8) = v64;
            v65 = v61[3];
            v66 = _mm_loadu_si128((const __m128i *)v61 + 2);
            v61[3] = 0;
            *((_OWORD *)v61 + 2) = 0;
            if ( *(_QWORD *)(v46 + 24) )
            {
              *(_QWORD *)(v46 + 32) = 0;
              v75 = v66;
              qfree();
              v66 = _mm_load_si128(&v75);
            }
            *(_QWORD *)(v46 + 24) = v65;
            *(__m128i *)(v46 + 32) = v66;
            *(_DWORD *)(v46 + 48) = *((_DWORD *)v61 + 12);
            *(_DWORD *)(v46 + 52) = *((_DWORD *)v61 + 13);
            result = *((unsigned __int8 *)v61 + 56);
            *(_BYTE *)(v46 + 56) = result;
            --v62;
          }
          while ( v62 );
        }
        return result;
      }
      v41 -= 8;
    }
    if ( v49 == a7 )
      goto LABEL_48;
    if ( v50 == a7 )
      goto LABEL_58;
    v43 = v49 < v50;
LABEL_47:
    if ( !v43 )
      goto LABEL_58;
    goto LABEL_48;
  }
  result -= (__int64)v8;
  v67 = result >> 6;
  if ( result > 0 )
  {
    v68 = v40 + 1;
    v69 = 0;
    do
    {
      v9 -= 64;
      v70 = *(v68 - 1);
      v71 = _mm_loadu_si128((const __m128i *)v68);
      *(_OWORD *)v68 = v69;
      *(v68 - 1) = 0;
      v72 = v68 - 1;
      if ( *(_QWORD *)v9 )
      {
        *(_QWORD *)(v9 + 8) = 0;
        v75 = v71;
        qfree();
        v71 = _mm_load_si128(&v75);
        v69 = 0;
      }
      *(_QWORD *)v9 = v70;
      *(__m128i *)(v9 + 8) = v71;
      v73 = v72[3];
      v72[3] = 0;
      v74 = _mm_loadu_si128((const __m128i *)(v68 + 3));
      *(_OWORD *)(v68 + 3) = v69;
      if ( *(_QWORD *)(v9 + 24) )
      {
        *(_QWORD *)(v9 + 32) = 0;
        v75 = v74;
        qfree();
        v74 = _mm_load_si128(&v75);
        v69 = 0;
      }
      *(_QWORD *)(v9 + 24) = v73;
      v68 -= 8;
      *(__m128i *)(v9 + 32) = v74;
      *(_DWORD *)(v9 + 48) = *((_DWORD *)v72 + 12);
      *(_DWORD *)(v9 + 52) = *((_DWORD *)v72 + 13);
      result = *((unsigned __int8 *)v72 + 56);
      *(_BYTE *)(v9 + 56) = result;
      --v67;
    }
    while ( v67 );
  }
  return result;
}

