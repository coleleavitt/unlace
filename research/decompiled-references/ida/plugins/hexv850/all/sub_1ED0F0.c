unsigned __int64 __fastcall sub_1ED0F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm7
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 j; // r15
  __int64 v24; // rdx
  __m128i v25; // xmm6
  char v26; // dl
  __int64 v27; // r14
  __int64 v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // r14
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  bool v37; // al
  __int64 v38; // rbp
  __int64 v39; // r12
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm3
  __int64 v43; // rdi
  __int64 v44; // r12
  __int64 m; // r15
  __int64 v46; // rdx
  __m128i v47; // xmm5
  char v48; // al
  __int64 v49; // rdi
  __int64 v50; // rbp
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __m128i v53; // xmm7
  __int64 v54; // r14
  __int64 v55; // r13
  __int64 n; // rbp
  __int64 v57; // r12
  __m128i v58; // xmm2
  __int64 v59; // rdi
  __int64 v60; // rax
  __m128i si128; // xmm0
  __int64 v62; // r12
  __int64 v63; // rbx
  __int64 v64; // rbp
  __int64 v66; // rax
  __m128i v67; // xmm3
  __m128i v68; // xmm0
  __int64 v69; // r12
  __int64 v70; // r15
  __int64 v71; // rbp
  __int64 v72; // r12
  __m128i v73; // xmm0
  __int64 v74; // rax
  __m128i v75; // xmm4
  __int64 v76; // rdi
  __int64 v77; // r12
  __int64 k; // r14
  __int64 v79; // rdx
  __m128i v80; // xmm5
  __m128i v81; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v82; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v83; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+30h] [rbp-C8h]
  __int64 v85; // [rsp+38h] [rbp-C0h]
  __int64 v86; // [rsp+40h] [rbp-B8h]
  __int64 v87; // [rsp+48h] [rbp-B0h]
  __int64 v88[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v89; // [rsp+60h] [rbp-98h]
  __m128i v90; // [rsp+68h] [rbp-90h] BYREF
  __int64 v91; // [rsp+78h] [rbp-80h]
  __m128i v92; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v93[24]; // [rsp+90h] [rbp-68h] BYREF
  char v94; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v95; // [rsp+B8h] [rbp-40h]

  v86 = a3;
  v84 = a2;
  v87 = a4;
  v95 = __readfsqword(0x28u);
  v85 = (a3 - 1) / 2;
  if ( a2 < v85 )
  {
    for ( i = a2; ; i = v14 )
    {
      v6 = 192 * (i + 1);
      v7 = a1 + v6 - 96;
      v8 = a1 + v6;
      v9 = *(_QWORD *)(v8 + 64);
      v10 = *(_QWORD *)(v7 + 64);
      if ( v9 != v10 )
      {
        v11 = *(_QWORD *)(v7 + 72);
        if ( !*(_QWORD *)(v8 + 72) || !v11 )
        {
          v13 = v11 == 0;
          goto LABEL_8;
        }
        v12 = *(_QWORD *)(v10 + 24);
        if ( *(_QWORD *)(v9 + 24) != v12 )
        {
          v13 = *(_QWORD *)(v9 + 24) < v12;
          goto LABEL_8;
        }
      }
      v26 = *(_BYTE *)(v8 + 84);
      if ( v26 == *(_BYTE *)(v7 + 84) )
        v13 = *(_DWORD *)(v8 + 80) < *(_DWORD *)(v7 + 80);
      else
        v13 = v26 ^ 1;
LABEL_8:
      v14 = 2 * (i + 1) - v13;
      v15 = a1 + 96 * i;
      v16 = a1 + 96 * v14;
      sub_5FE50((__int64 *)v15, (__int64 *)v16);
      v17 = *(_QWORD *)(v16 + 16);
      v18 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      if ( *(_QWORD *)(v15 + 16) )
      {
        *(_QWORD *)(v15 + 24) = 0;
        v81 = v18;
        qfree();
        v18 = _mm_load_si128(&v81);
      }
      *(_QWORD *)(v15 + 16) = v17;
      *(__m128i *)(v15 + 24) = v18;
      v19 = *(_QWORD *)(v16 + 40);
      v20 = _mm_loadu_si128((const __m128i *)(v16 + 48));
      *(_QWORD *)(v16 + 40) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      v21 = *(_QWORD *)(v15 + 40);
      v82.m128i_i64[0] = v19;
      v83 = v20;
      if ( v21 )
      {
        v22 = *(_QWORD *)(v15 + 48);
        if ( v22 )
        {
          for ( j = 0; j != v22; ++j )
          {
            v24 = v21 + 40 * j;
            if ( *(_QWORD *)(v24 + 16) )
            {
              *(_QWORD *)(v24 + 24) = 0;
              v81.m128i_i64[0] = v21 + 40 * j;
              qfree();
            }
            qfree();
            v21 = *(_QWORD *)(v15 + 40);
          }
        }
        *(_QWORD *)(v15 + 48) = 0;
        qfree();
      }
      v25 = _mm_load_si128(&v83);
      *(_QWORD *)(v15 + 40) = v82.m128i_i64[0];
      *(__m128i *)(v15 + 48) = v25;
      *(__m128i *)(v15 + 64) = _mm_loadu_si128((const __m128i *)(v16 + 64));
      *(_QWORD *)(v15 + 77) = *(_QWORD *)(v16 + 77);
      *(_BYTE *)(v15 + 88) = *(_BYTE *)(v16 + 88);
      if ( v85 <= v14 )
        goto LABEL_24;
    }
  }
  v14 = v84;
  v16 = a1 + 96 * v84;
LABEL_24:
  if ( (v86 & 1) == 0 && (v86 - 2) / 2 == v14 )
  {
    v69 = v14 + 1;
    v70 = 2 * v69;
    v71 = a1 + 192 * v69 - 96;
    sub_5FE50((__int64 *)v16, (__int64 *)v71);
    v72 = *(_QWORD *)(v71 + 16);
    v73 = _mm_loadu_si128((const __m128i *)(v71 + 24));
    *(_QWORD *)(v71 + 16) = 0;
    *(_OWORD *)(v71 + 24) = 0;
    if ( *(_QWORD *)(v16 + 16) )
    {
      *(_QWORD *)(v16 + 24) = 0;
      v81 = v73;
      qfree();
      v73 = _mm_load_si128(&v81);
    }
    *(__m128i *)(v16 + 24) = v73;
    *(_QWORD *)(v16 + 16) = v72;
    v74 = *(_QWORD *)(v71 + 40);
    v75 = _mm_loadu_si128((const __m128i *)(v71 + 48));
    *(_QWORD *)(v71 + 40) = 0;
    *(_OWORD *)(v71 + 48) = 0;
    v76 = *(_QWORD *)(v16 + 40);
    v83.m128i_i64[0] = v74;
    v82 = v75;
    if ( v76 )
    {
      v77 = *(_QWORD *)(v16 + 48);
      if ( v77 )
      {
        for ( k = 0; k != v77; ++k )
        {
          v79 = v76 + 40 * k;
          if ( *(_QWORD *)(v79 + 16) )
          {
            *(_QWORD *)(v79 + 24) = 0;
            v81.m128i_i64[0] = v76 + 40 * k;
            qfree();
          }
          qfree();
          v76 = *(_QWORD *)(v16 + 40);
        }
      }
      *(_QWORD *)(v16 + 48) = 0;
      qfree();
    }
    v80 = _mm_load_si128(&v82);
    v14 = v70 - 1;
    *(_QWORD *)(v16 + 40) = v83.m128i_i64[0];
    *(__m128i *)(v16 + 48) = v80;
    *(__m128i *)(v16 + 64) = _mm_loadu_si128((const __m128i *)(v71 + 64));
    *(_QWORD *)(v16 + 77) = *(_QWORD *)(v71 + 77);
    *(_BYTE *)(v16 + 88) = *(_BYTE *)(v71 + 88);
    v16 = a1 + 96 * (v70 - 1);
  }
  v27 = v87;
  v85 = (__int64)v88;
  sub_5F580(v88, v87);
  v28 = *(_QWORD *)(v27 + 16);
  v29 = _mm_loadu_si128((const __m128i *)(v27 + 24));
  *(_QWORD *)(v27 + 16) = 0;
  v30 = _mm_loadu_si128((const __m128i *)(v27 + 48));
  v89 = v28;
  v31 = *(_QWORD *)(v27 + 40);
  v90 = v29;
  v91 = v31;
  v32 = *(_QWORD *)(v27 + 80);
  *(_OWORD *)(v27 + 24) = 0;
  *(_QWORD *)&v93[16] = v32;
  LOBYTE(v32) = *(_BYTE *)(v27 + 88);
  *(_OWORD *)(v27 + 48) = 0;
  v33 = _mm_loadu_si128((const __m128i *)(v27 + 64));
  v94 = v32;
  *(_QWORD *)(v27 + 40) = 0;
  v92 = v30;
  *(__m128i *)v93 = v33;
  v34 = (v14 - 1) / 2;
  if ( v14 > v84 )
  {
    while ( 1 )
    {
      v16 = a1 + 96 * v34;
      v35 = *(_QWORD *)(v16 + 64);
      if ( v35 != *(_QWORD *)v93 )
      {
        if ( !*(_QWORD *)(v16 + 72) )
        {
          v37 = *(_QWORD *)&v93[8] == 0;
LABEL_32:
          if ( !v37 )
            goto LABEL_46;
          goto LABEL_33;
        }
        if ( !*(_QWORD *)&v93[8] )
          goto LABEL_33;
        v36 = *(_QWORD *)(*(_QWORD *)v93 + 24LL);
        if ( *(_QWORD *)(v35 + 24) != v36 )
        {
          v37 = *(_QWORD *)(v35 + 24) < v36;
          goto LABEL_32;
        }
      }
      v48 = *(_BYTE *)(v16 + 84);
      if ( v48 == v93[20] )
      {
        if ( *(_DWORD *)(v16 + 80) >= *(int *)&v93[16] )
        {
          v16 = a1 + 96 * v14;
          break;
        }
      }
      else if ( v48 )
      {
LABEL_46:
        v16 = a1 + 96 * v14;
        break;
      }
LABEL_33:
      v38 = a1 + 96 * v14;
      sub_5FE50((__int64 *)v38, (__int64 *)(a1 + 96 * v34));
      v39 = *(_QWORD *)(v16 + 16);
      v40 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      if ( *(_QWORD *)(v38 + 16) )
      {
        *(_QWORD *)(v38 + 24) = 0;
        v81 = v40;
        qfree();
        v40 = _mm_load_si128(&v81);
      }
      *(_QWORD *)(v38 + 16) = v39;
      *(__m128i *)(v38 + 24) = v40;
      v41 = *(_QWORD *)(v16 + 40);
      v42 = _mm_loadu_si128((const __m128i *)(v16 + 48));
      *(_QWORD *)(v16 + 40) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      v43 = *(_QWORD *)(v38 + 40);
      v83.m128i_i64[0] = v41;
      v82 = v42;
      if ( v43 )
      {
        v44 = *(_QWORD *)(v38 + 48);
        if ( v44 )
        {
          for ( m = 0; m != v44; ++m )
          {
            v46 = v43 + 40 * m;
            if ( *(_QWORD *)(v46 + 16) )
            {
              *(_QWORD *)(v46 + 24) = 0;
              v81.m128i_i64[0] = v43 + 40 * m;
              qfree();
            }
            qfree();
            v43 = *(_QWORD *)(v38 + 40);
          }
        }
        *(_QWORD *)(v38 + 48) = 0;
        qfree();
      }
      v47 = _mm_load_si128(&v82);
      v14 = v34;
      *(_QWORD *)(v38 + 40) = v83.m128i_i64[0];
      *(__m128i *)(v38 + 48) = v47;
      *(__m128i *)(v38 + 64) = _mm_loadu_si128((const __m128i *)(v16 + 64));
      *(_QWORD *)(v38 + 77) = *(_QWORD *)(v16 + 77);
      *(_BYTE *)(v38 + 88) = *(_BYTE *)(v16 + 88);
      if ( v84 >= v34 )
        break;
      v34 = (v34 - 1) / 2;
    }
  }
  sub_5FE50((__int64 *)v16, (__int64 *)v85);
  v49 = *(_QWORD *)(v16 + 16);
  v50 = v89;
  v89 = 0;
  v51 = _mm_loadu_si128(&v90);
  v90 = 0;
  if ( v49 )
  {
    *(_QWORD *)(v16 + 24) = 0;
    v81 = v51;
    qfree();
    v51 = _mm_load_si128(&v81);
  }
  v52 = *(_QWORD *)(v16 + 40);
  *(__m128i *)(v16 + 24) = v51;
  v53 = _mm_load_si128(&v92);
  v54 = v91;
  *(_QWORD *)(v16 + 16) = v50;
  v91 = 0;
  v81 = v53;
  v92 = 0;
  if ( v52 )
  {
    v55 = *(_QWORD *)(v16 + 48);
    if ( v55 )
    {
      for ( n = 0; n != v55; ++n )
      {
        v57 = v52 + 40 * n;
        if ( *(_QWORD *)(v57 + 16) )
        {
          *(_QWORD *)(v57 + 24) = 0;
          qfree();
        }
        qfree();
        v52 = *(_QWORD *)(v16 + 40);
      }
    }
    *(_QWORD *)(v16 + 48) = 0;
    qfree();
    v58 = _mm_load_si128(&v81);
    v59 = v91;
    *(_QWORD *)(v16 + 40) = v54;
    v60 = *(_QWORD *)&v93[13];
    si128 = _mm_load_si128((const __m128i *)v93);
    *(__m128i *)(v16 + 48) = v58;
    *(__m128i *)(v16 + 64) = si128;
    *(_QWORD *)(v16 + 77) = v60;
    *(_BYTE *)(v16 + 88) = v94;
    if ( v59 )
    {
      v62 = v92.m128i_i64[0];
      if ( v92.m128i_i64[0] )
      {
        v63 = 0;
        do
        {
          v64 = v59 + 40 * v63;
          if ( *(_QWORD *)(v64 + 16) )
          {
            *(_QWORD *)(v64 + 24) = 0;
            qfree();
          }
          ++v63;
          qfree();
          v59 = v91;
        }
        while ( v62 != v63 );
      }
      v92.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v66 = *(_QWORD *)&v93[13];
    v67 = _mm_load_si128(&v81);
    *(_QWORD *)(v16 + 40) = v54;
    v68 = _mm_load_si128((const __m128i *)v93);
    *(__m128i *)(v16 + 48) = v67;
    *(__m128i *)(v16 + 64) = v68;
    *(_QWORD *)(v16 + 77) = v66;
    *(_BYTE *)(v16 + 88) = v94;
  }
  if ( v89 )
  {
    v90.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v95 - __readfsqword(0x28u);
}

