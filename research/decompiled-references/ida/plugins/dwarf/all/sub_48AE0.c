unsigned __int64 __fastcall sub_48AE0(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7,
        __int64 (__fastcall *a8)(__m128i *, __m128i *, double, double))
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 *v13; // r14
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int128 v20; // xmm1
  __int64 v21; // rbx
  __int64 *v22; // rbp
  __m128i *v23; // r12
  __int64 v24; // r13
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int128 v31; // xmm1
  __m128i *v32; // rbp
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // r13
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int128 v38; // xmm1
  __int64 v39; // rbp
  __m128i *v40; // r12
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // r13
  __m128i v44; // xmm0
  __int64 v45; // rdi
  __int64 v46; // rax
  __int128 v47; // xmm1
  __m128i *v48; // rbp
  __int64 v49; // r12
  __int64 v50; // r13
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int128 v56; // xmm1
  __int64 v57; // rbp
  __int64 v58; // r12
  __m128i *v59; // rbx
  __int64 v60; // rsi
  __int64 v61; // r13
  __m128i v62; // xmm0
  __int64 v63; // rdi
  __m128i *v64; // rbx
  __m128i v65; // xmm1
  __m128i *v66; // rbp
  __int64 v67; // r12
  __int64 v68; // r13
  __m128i v69; // xmm0
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // [rsp+0h] [rbp-A8h]
  __m128i *v73; // [rsp+8h] [rbp-A0h]
  __m128i v75; // [rsp+20h] [rbp-88h] BYREF
  __int64 v76; // [rsp+30h] [rbp-78h]
  __int64 v77; // [rsp+38h] [rbp-70h]
  __int64 v78; // [rsp+40h] [rbp-68h]
  __int64 v79; // [rsp+48h] [rbp-60h]
  __int64 v80; // [rsp+50h] [rbp-58h]
  __int64 v81; // [rsp+58h] [rbp-50h]
  __int64 v82; // [rsp+60h] [rbp-48h]
  __int64 v83; // [rsp+68h] [rbp-40h]

  v8 = a4;
  v9 = a5;
  v10 = a4;
  v11 = (__int64)a2;
  if ( a5 <= a4 )
    v8 = a5;
  v72 = (__int64)a1;
  v76 = a3;
  if ( a7 >= v8 )
    return sub_44690(a1, a2, v76, a4, a5, a6, a8);
  v12 = a7;
  if ( a5 >= a4 )
    goto LABEL_13;
LABEL_5:
  v75.m128i_i64[0] = v10 / 2;
  v13 = (__int64 *)(v72 + 8 * (v10 / 2 + 4 * (v10 / 2 + ((v10 + ((unsigned __int64)v10 >> 63)) & 0xFFFFFFFFFFFFFFFELL))));
  v14 = sub_47F70(v11, v76, (__int64)v13, (__int64 (__fastcall *)(__m128i *, __m128i *))a8);
  v15 = v75.m128i_i64[0];
  v73 = (__m128i *)v14;
  v10 -= v75.m128i_i64[0];
  v16 = 0x4EC4EC4EC4EC4EC5LL * ((v14 - v11) >> 3);
  if ( v10 <= v16 )
    goto LABEL_14;
LABEL_6:
  if ( v16 <= v12 )
  {
    if ( !v16 )
      goto LABEL_8;
    v47 = 0;
    if ( (__int64)v73->m128i_i64 - v11 <= 0 )
    {
      v77 = 0;
      v54 = 0;
      v55 = 0x4EC4EC4EC4EC4EC5LL * ((v11 - (__int64)v13) >> 3);
      if ( v11 - (__int64)v13 <= 0 )
        goto LABEL_8;
    }
    else
    {
      v77 = v15;
      v78 = v11;
      v81 = v12;
      v82 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v73->m128i_i64 - v11) >> 3);
      v79 = v10;
      v48 = a6;
      v80 = v9;
      v49 = v82;
      do
      {
        v48->m128i_i64[0] = *(_QWORD *)v11;
        v48->m128i_i64[1] = *(_QWORD *)(v11 + 8);
        v50 = *(_QWORD *)(v11 + 16);
        v51 = _mm_loadu_si128((const __m128i *)(v11 + 24));
        *(_QWORD *)(v11 + 16) = 0;
        *(_OWORD *)(v11 + 24) = v47;
        v52 = v48[1].m128i_i64[0];
        if ( v52 )
        {
          v48[1].m128i_i64[1] = 0;
          v75 = v51;
          qfree(v52);
          v51 = _mm_load_si128(&v75);
          v47 = 0;
        }
        v48[1].m128i_i64[0] = v50;
        v11 += 104;
        v48 = (__m128i *)((char *)v48 + 104);
        v48[-5] = v51;
        v48[-4].m128i_i64[0] = *(_QWORD *)(v11 - 64);
        *(__m128i *)((char *)v48 - 56) = _mm_loadu_si128((const __m128i *)(v11 - 56));
        v48[-3].m128i_i64[1] = *(_QWORD *)(v11 - 40);
        v48[-2].m128i_i8[0] = *(_BYTE *)(v11 - 32);
        v48[-2].m128i_i64[1] = *(_QWORD *)(v11 - 24);
        v48[-1] = _mm_loadu_si128((const __m128i *)(v11 - 16));
        --v49;
      }
      while ( v49 );
      v11 = v78;
      v15 = v77;
      v10 = v79;
      v53 = v82 - 1;
      v9 = v80;
      v12 = v81;
      if ( v82 - 1 < 0 )
        v53 = 0;
      v54 = 104 * v53 + 104;
      v77 = 0x4EC4EC4EC4EC4EC5LL * (v54 >> 3);
      v55 = 0x4EC4EC4EC4EC4EC5LL * ((v78 - (__int64)v13) >> 3);
      if ( v78 - (__int64)v13 <= 0 )
      {
LABEL_53:
        v64 = a6;
        v65 = 0;
        if ( v54 > 0 )
        {
          v78 = v15;
          v81 = v12;
          v79 = v10;
          v66 = (__m128i *)v13;
          v80 = v9;
          v67 = v77;
          do
          {
            v66->m128i_i64[0] = v64->m128i_i64[0];
            v66->m128i_i64[1] = v64->m128i_i64[1];
            v68 = v64[1].m128i_i64[0];
            v69 = _mm_loadu_si128((__m128i *)((char *)v64 + 24));
            v64[1].m128i_i64[0] = 0;
            *(__m128i *)((char *)v64 + 24) = v65;
            v70 = v66[1].m128i_i64[0];
            if ( v70 )
            {
              v66[1].m128i_i64[1] = 0;
              v75 = v69;
              qfree(v70);
              v69 = _mm_load_si128(&v75);
              v65 = 0;
            }
            v66[1].m128i_i64[0] = v68;
            v64 = (__m128i *)((char *)v64 + 104);
            v66 = (__m128i *)((char *)v66 + 104);
            v66[-5] = v69;
            v66[-4].m128i_i64[0] = v64[-4].m128i_i64[0];
            *(__m128i *)((char *)v66 - 56) = _mm_loadu_si128((__m128i *)((char *)v64 - 56));
            v66[-3].m128i_i64[1] = v64[-3].m128i_i64[1];
            v66[-2].m128i_i8[0] = v64[-2].m128i_i8[0];
            v66[-2].m128i_i64[1] = v64[-2].m128i_i64[1];
            v66[-1] = _mm_loadu_si128(v64 - 1);
            --v67;
          }
          while ( v67 );
          LODWORD(v15) = v78;
          v10 = v79;
          v9 = v80;
          v71 = v77 - 1;
          v12 = v81;
          if ( v77 - 1 < 0 )
            v71 = 0;
          v17 = (__int64)&v13[13 * v71 + 13];
          goto LABEL_9;
        }
LABEL_8:
        v17 = (__int64)v13;
        goto LABEL_9;
      }
    }
    v78 = v15;
    v56 = 0;
    v79 = v54;
    v82 = v12;
    v80 = v10;
    v57 = v55;
    v81 = v9;
    v58 = v11;
    v59 = v73;
    do
    {
      v60 = *(_QWORD *)(v58 - 104);
      v58 -= 104;
      v59 = (__m128i *)((char *)v59 - 104);
      v59->m128i_i64[0] = v60;
      v59->m128i_i64[1] = *(_QWORD *)(v58 + 8);
      v61 = *(_QWORD *)(v58 + 16);
      *(_QWORD *)(v58 + 16) = 0;
      v62 = _mm_loadu_si128((const __m128i *)(v58 + 24));
      *(_OWORD *)(v58 + 24) = v56;
      v63 = v59[1].m128i_i64[0];
      if ( v63 )
      {
        v59[1].m128i_i64[1] = 0;
        v75 = v62;
        qfree(v63);
        v62 = _mm_load_si128(&v75);
        v56 = 0;
      }
      v59[1].m128i_i64[0] = v61;
      *(__m128i *)((char *)v59 + 24) = v62;
      v59[2].m128i_i64[1] = *(_QWORD *)(v58 + 40);
      v59[3] = _mm_loadu_si128((const __m128i *)(v58 + 48));
      v59[4].m128i_i64[0] = *(_QWORD *)(v58 + 64);
      v59[4].m128i_i8[8] = *(_BYTE *)(v58 + 72);
      v59[5].m128i_i64[0] = *(_QWORD *)(v58 + 80);
      *(__m128i *)((char *)v59 + 88) = _mm_loadu_si128((const __m128i *)(v58 + 88));
      --v57;
    }
    while ( v57 );
    v15 = v78;
    v54 = v79;
    v10 = v80;
    v9 = v81;
    v12 = v82;
    goto LABEL_53;
  }
  while ( 1 )
  {
LABEL_14:
    if ( v10 > v12 )
    {
      v75.m128i_i64[0] = v15;
      v17 = sub_295B0(v13, v11, (__int64)v73);
      LODWORD(v15) = v75.m128i_i32[0];
      goto LABEL_9;
    }
    if ( !v10 )
      goto LABEL_16;
    v20 = 0;
    if ( v11 - (__int64)v13 <= 0 )
    {
      v28 = (__int64)a6;
      v29 = 0;
      v77 = 0;
      v30 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v73->m128i_i64 - v11) >> 3);
      if ( (__int64)v73->m128i_i64 - v11 <= 0 )
      {
LABEL_16:
        v17 = (__int64)v73;
        goto LABEL_9;
      }
    }
    else
    {
      v77 = v15;
      v81 = v12;
      v82 = 0x4EC4EC4EC4EC4EC5LL * ((v11 - (__int64)v13) >> 3);
      v78 = v11;
      v21 = v82;
      v79 = v10;
      v22 = v13;
      v80 = v9;
      v23 = a6;
      do
      {
        v23->m128i_i64[0] = *v22;
        v23->m128i_i64[1] = v22[1];
        v24 = v22[2];
        v25 = _mm_loadu_si128((const __m128i *)(v22 + 3));
        v22[2] = 0;
        *(_OWORD *)(v22 + 3) = v20;
        v26 = v23[1].m128i_i64[0];
        if ( v26 )
        {
          v23[1].m128i_i64[1] = 0;
          v75 = v25;
          qfree(v26);
          v25 = _mm_load_si128(&v75);
          v20 = 0;
        }
        v23[1].m128i_i64[0] = v24;
        v22 += 13;
        v23 = (__m128i *)((char *)v23 + 104);
        v23[-5] = v25;
        v23[-4].m128i_i64[0] = *(v22 - 8);
        *(__m128i *)((char *)v23 - 56) = _mm_loadu_si128((const __m128i *)(v22 - 7));
        v23[-3].m128i_i64[1] = *(v22 - 5);
        v23[-2].m128i_i8[0] = *((_BYTE *)v22 - 32);
        v23[-2].m128i_i64[1] = *(v22 - 3);
        v23[-1] = _mm_loadu_si128((const __m128i *)v22 - 1);
        --v21;
      }
      while ( v21 );
      v15 = v77;
      v11 = v78;
      v27 = v82 - 1;
      v10 = v79;
      v9 = v80;
      if ( v82 - 1 < 0 )
        v27 = 0;
      v12 = v81;
      v28 = (__int64)&a6[6].m128i_i64[13 * v27 + 1];
      v29 = 104 * v27 + 104;
      v77 = 0x4EC4EC4EC4EC4EC5LL * (v29 >> 3);
      v30 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v73->m128i_i64 - v78) >> 3);
      if ( (__int64)v73->m128i_i64 - v78 <= 0 )
        goto LABEL_32;
    }
    v78 = v15;
    v31 = 0;
    v79 = v28;
    v80 = v29;
    v83 = v12;
    v81 = v10;
    v32 = (__m128i *)v13;
    v82 = v9;
    v33 = v11;
    v34 = v30;
    do
    {
      v32->m128i_i64[0] = *(_QWORD *)v33;
      v32->m128i_i64[1] = *(_QWORD *)(v33 + 8);
      v35 = *(_QWORD *)(v33 + 16);
      *(_QWORD *)(v33 + 16) = 0;
      v36 = _mm_loadu_si128((const __m128i *)(v33 + 24));
      *(_OWORD *)(v33 + 24) = v31;
      v37 = v32[1].m128i_i64[0];
      if ( v37 )
      {
        v32[1].m128i_i64[1] = 0;
        v75 = v36;
        qfree(v37);
        v36 = _mm_load_si128(&v75);
        v31 = 0;
      }
      v32[1].m128i_i64[0] = v35;
      v33 += 104;
      v32 = (__m128i *)((char *)v32 + 104);
      v32[-5] = v36;
      v32[-4].m128i_i64[0] = *(_QWORD *)(v33 - 64);
      *(__m128i *)((char *)v32 - 56) = _mm_loadu_si128((const __m128i *)(v33 - 56));
      v32[-3].m128i_i64[1] = *(_QWORD *)(v33 - 40);
      v32[-2].m128i_i8[0] = *(_BYTE *)(v33 - 32);
      v32[-2].m128i_i64[1] = *(_QWORD *)(v33 - 24);
      v32[-1] = _mm_loadu_si128((const __m128i *)(v33 - 16));
      --v34;
    }
    while ( v34 );
    v15 = v78;
    v28 = v79;
    v29 = v80;
    v10 = v81;
    v9 = v82;
    v12 = v83;
LABEL_32:
    v38 = 0;
    if ( v29 <= 0 )
      goto LABEL_16;
    v78 = v15;
    v81 = v12;
    v79 = v10;
    v39 = v77;
    v80 = v9;
    v40 = v73;
    v41 = v28;
    do
    {
      v42 = *(_QWORD *)(v41 - 104);
      v41 -= 104;
      v40 = (__m128i *)((char *)v40 - 104);
      v40->m128i_i64[0] = v42;
      v40->m128i_i64[1] = *(_QWORD *)(v41 + 8);
      v43 = *(_QWORD *)(v41 + 16);
      v44 = _mm_loadu_si128((const __m128i *)(v41 + 24));
      *(_QWORD *)(v41 + 16) = 0;
      *(_OWORD *)(v41 + 24) = v38;
      v45 = v40[1].m128i_i64[0];
      if ( v45 )
      {
        v40[1].m128i_i64[1] = 0;
        v75 = v44;
        qfree(v45);
        v44 = _mm_load_si128(&v75);
        v38 = 0;
      }
      v40[1].m128i_i64[0] = v43;
      *(__m128i *)((char *)v40 + 24) = v44;
      v40[2].m128i_i64[1] = *(_QWORD *)(v41 + 40);
      v40[3] = _mm_loadu_si128((const __m128i *)(v41 + 48));
      v40[4].m128i_i64[0] = *(_QWORD *)(v41 + 64);
      v40[4].m128i_i8[8] = *(_BYTE *)(v41 + 72);
      v40[5].m128i_i64[0] = *(_QWORD *)(v41 + 80);
      *(__m128i *)((char *)v40 + 88) = _mm_loadu_si128((const __m128i *)(v41 + 88));
      --v39;
    }
    while ( v39 );
    LODWORD(v15) = v78;
    v10 = v79;
    v46 = v77 - 1;
    v9 = v80;
    v12 = v81;
    if ( v77 - 1 < 0 )
      v46 = 0;
    v17 = (__int64)&v73[-6] - 104 * v46 - 8;
LABEL_9:
    v9 -= v16;
    v75.m128i_i64[0] = v17;
    sub_48AE0(v72, (_DWORD)v13, v17, v15, v16, (_DWORD)a6, v12, (__int64)a8);
    v18 = v9;
    if ( v10 <= v9 )
      v18 = v10;
    if ( v12 >= v18 )
      return sub_44690((__m128i *)v75.m128i_i64[0], v73, v76, v10, v9, a6, a8);
    v72 = v75.m128i_i64[0];
    v11 = (__int64)v73;
    if ( v9 < v10 )
      goto LABEL_5;
LABEL_13:
    v16 = v9 / 2;
    v73 = (__m128i *)(v11 + 8 * (v9 / 2 + 4 * (v9 / 2 + ((v9 + ((unsigned __int64)v9 >> 63)) & 0xFFFFFFFFFFFFFFFELL))));
    v13 = (__int64 *)sub_48230(v72, v11, (__int64)v73, (__int64 (__fastcall *)(__m128i *, __m128i *))a8);
    v15 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v13 - v72) >> 3);
    v10 -= v15;
    if ( v10 > v9 / 2 )
      goto LABEL_6;
  }
}

