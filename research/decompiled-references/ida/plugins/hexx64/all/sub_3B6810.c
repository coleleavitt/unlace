unsigned __int64 __fastcall sub_3B6810(
        __int64 a1,
        __int64 ii,
        __int64 a3,
        __int64 *a4,
        __int64 (__fastcall *a5)(__int64, __int64),
        __m128 a6)
{
  __int64 v8; // r15
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 *v12; // rdi
  __int64 *v13; // r14
  bool v14; // zf
  __int64 *v15; // rbp
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 i; // rdx
  __int64 *v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 j; // r8
  __int64 *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // r15
  __int64 *v33; // rsi
  __int64 *v34; // r14
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 n; // rcx
  __int64 *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 jj; // rsi
  __int64 *v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 *v47; // rdx
  char v48; // dl
  __m128i v49; // xmm0
  __int64 v51; // r13
  __int64 v52; // rbp
  __int64 v53; // r15
  __int64 *v54; // rcx
  __int64 *v55; // r14
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 k; // rdx
  __int64 *v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 m; // rcx
  __int64 *v65; // rdx
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // [rsp+0h] [rbp-A8h]
  __int64 v69; // [rsp+0h] [rbp-A8h]
  __int64 v70; // [rsp+0h] [rbp-A8h]
  __int64 v72; // [rsp+10h] [rbp-98h]
  __int64 v73; // [rsp+10h] [rbp-98h]
  __int64 v74; // [rsp+10h] [rbp-98h]
  __int64 v75; // [rsp+10h] [rbp-98h]
  __int64 v76; // [rsp+10h] [rbp-98h]
  __int64 v77; // [rsp+18h] [rbp-90h]
  __int64 v78; // [rsp+18h] [rbp-90h]
  __int64 v79; // [rsp+18h] [rbp-90h]
  __int64 v80; // [rsp+18h] [rbp-90h]
  __int64 *v83; // [rsp+30h] [rbp-78h] BYREF
  __m128i v84; // [rsp+38h] [rbp-70h] BYREF
  __m128i v85; // [rsp+48h] [rbp-60h] BYREF
  __int64 v86; // [rsp+58h] [rbp-50h]
  unsigned __int64 v87; // [rsp+68h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v68 = (a3 - 1) / 2;
  if ( ii >= v68 )
  {
    v8 = ii;
  }
  else
  {
    v8 = ii;
    do
    {
      v9 = a5(a1 + 96 * (v8 + 1), a1 + 96 * (v8 + 1) - 48);
      v10 = v8;
      v8 = 2 * (v8 + 1) - v9;
      v11 = a1 + 48 * v10;
      v12 = *(__int64 **)v11;
      v13 = (__int64 *)(a1 + 48 * v8);
      if ( *(_QWORD *)v11 )
      {
        v14 = (*((_DWORD *)v12 + 26))-- == 1;
        if ( v14 )
        {
          v15 = *(__int64 **)v11;
          if ( *(_QWORD *)v11 )
          {
            sub_258970(*(__int64 **)v11);
            v16 = v15[23];
            if ( v16 )
            {
              v17 = v15[24];
              if ( v17 )
              {
                for ( i = 0; i != v17; ++i )
                {
                  v19 = (__int64 *)(v16 + 24 * i);
                  v20 = *v19;
                  if ( *v19 )
                  {
                    v19[1] = 0;
                    v77 = i;
                    v72 = v17;
                    qfree(v20);
                    i = v77;
                    v17 = v72;
                    v16 = v15[23];
                  }
                }
              }
              v15[24] = 0;
              qfree(v16);
            }
            v21 = v15[20];
            if ( v21 )
            {
              v15[21] = 0;
              qfree(v21);
            }
            v22 = v15[16];
            if ( v22 )
            {
              v23 = v15[17];
              if ( v23 )
              {
                for ( j = 0; j != v23; ++j )
                {
                  v25 = (__int64 *)(v22 + 32 * j);
                  v26 = *v25;
                  if ( *v25 )
                  {
                    v25[1] = 0;
                    v78 = v23;
                    v73 = j;
                    qfree(v26);
                    v23 = v78;
                    j = v73;
                    v22 = v15[16];
                  }
                }
              }
              v15[17] = 0;
              qfree(v22);
            }
            sub_255050((__int64)(v15 + 2), *(double *)a6.m128_u64);
            j__qfree((__int64)v15);
          }
        }
      }
      v27 = *v13;
      *(_QWORD *)v11 = *v13;
      if ( v27 )
        ++*(_DWORD *)(v27 + 104);
      *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v13 + 1));
      a6 = (__m128)_mm_loadu_si128((const __m128i *)(v13 + 3));
      *(__m128 *)(v11 + 24) = a6;
      *(_BYTE *)(v11 + 40) = *((_BYTE *)v13 + 40);
    }
    while ( v8 < v68 );
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v8 )
  {
    v51 = 2 * (v8 + 1);
    v52 = a1 + 96 * (v8 + 1) - 48;
    v53 = a1 + 48 * v8;
    v54 = *(__int64 **)v53;
    if ( *(_QWORD *)v53 )
    {
      v14 = (*((_DWORD *)v54 + 26))-- == 1;
      if ( v14 )
      {
        v55 = *(__int64 **)v53;
        if ( *(_QWORD *)v53 )
        {
          sub_258970(*(__int64 **)v53);
          v56 = v55[23];
          if ( v56 )
          {
            v57 = v55[24];
            if ( v57 )
            {
              for ( k = 0; k != v57; ++k )
              {
                v59 = (__int64 *)(v56 + 24 * k);
                v60 = *v59;
                if ( *v59 )
                {
                  v59[1] = 0;
                  v75 = v57;
                  v69 = k;
                  qfree(v60);
                  v56 = v55[23];
                  v57 = v75;
                  k = v69;
                }
              }
            }
            v55[24] = 0;
            qfree(v56);
          }
          v61 = v55[20];
          if ( v61 )
          {
            v55[21] = 0;
            qfree(v61);
          }
          v62 = v55[16];
          if ( v62 )
          {
            v63 = v55[17];
            if ( v63 )
            {
              for ( m = 0; m != v63; ++m )
              {
                v65 = (__int64 *)(v62 + 32 * m);
                v66 = *v65;
                if ( *v65 )
                {
                  v65[1] = 0;
                  v76 = m;
                  v70 = v63;
                  qfree(v66);
                  v62 = v55[16];
                  m = v76;
                  v63 = v70;
                }
              }
            }
            v55[17] = 0;
            qfree(v62);
          }
          sub_255050((__int64)(v55 + 2), *(double *)a6.m128_u64);
          j__qfree((__int64)v55);
        }
      }
    }
    v67 = *(_QWORD *)v52;
    *(_QWORD *)v53 = *(_QWORD *)v52;
    if ( v67 )
      ++*(_DWORD *)(v67 + 104);
    *(__m128i *)(v53 + 8) = _mm_loadu_si128((const __m128i *)(v52 + 8));
    *(__m128i *)(v53 + 24) = _mm_loadu_si128((const __m128i *)(v52 + 24));
    *(_BYTE *)(v53 + 40) = *(_BYTE *)(v52 + 40);
    v8 = v51 - 1;
  }
  v28 = *a4;
  v83 = (__int64 *)v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 104);
  v84 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  v29 = _mm_loadu_si128((const __m128i *)(a4 + 3));
  v86 = a4[5];
  v85 = v29;
  v30 = (v8 - 1) / 2;
  if ( v8 <= ii )
  {
    v32 = a1 + 48 * v8;
  }
  else
  {
    while ( 1 )
    {
      v31 = a1 + 48 * v30;
      v32 = a1 + 48 * v8;
      if ( !(unsigned __int8)a5(v31, (__int64)&v83) )
        break;
      v33 = *(__int64 **)v32;
      if ( *(_QWORD *)v32 )
      {
        v14 = (*((_DWORD *)v33 + 26))-- == 1;
        if ( v14 )
        {
          v34 = *(__int64 **)v32;
          if ( *(_QWORD *)v32 )
          {
            sub_258970(*(__int64 **)v32);
            v35 = v34[23];
            if ( v35 )
            {
              v36 = v34[24];
              if ( v36 )
              {
                for ( n = 0; n != v36; ++n )
                {
                  v38 = (__int64 *)(v35 + 24 * n);
                  v39 = *v38;
                  if ( *v38 )
                  {
                    v38[1] = 0;
                    v79 = v36;
                    v74 = n;
                    qfree(v39);
                    v36 = v79;
                    n = v74;
                    v35 = v34[23];
                  }
                }
              }
              v34[24] = 0;
              qfree(v35);
            }
            v40 = v34[20];
            if ( v40 )
            {
              v34[21] = 0;
              qfree(v40);
            }
            v41 = v34[16];
            if ( v41 )
            {
              v42 = v34[17];
              if ( v42 )
              {
                for ( jj = 0; jj != v42; ++jj )
                {
                  v44 = (__int64 *)(v41 + 32 * jj);
                  v45 = *v44;
                  if ( *v44 )
                  {
                    v44[1] = 0;
                    v80 = v42;
                    qfree(v45);
                    v42 = v80;
                    v41 = v34[16];
                  }
                }
              }
              v34[17] = 0;
              qfree(v41);
            }
            sub_255050((__int64)(v34 + 2), *(double *)v29.m128i_i64);
            j__qfree((__int64)v34);
          }
        }
      }
      v46 = *(_QWORD *)v31;
      *(_QWORD *)v32 = *(_QWORD *)v31;
      if ( v46 )
        ++*(_DWORD *)(v46 + 104);
      *(__m128i *)(v32 + 8) = _mm_loadu_si128((const __m128i *)(v31 + 8));
      v29 = _mm_loadu_si128((const __m128i *)(v31 + 24));
      *(__m128i *)(v32 + 24) = v29;
      *(_BYTE *)(v32 + 40) = *(_BYTE *)(v31 + 40);
      v8 = v30;
      if ( ii >= v30 )
      {
        v32 = a1 + 48 * v30;
        break;
      }
      v30 = (v30 - 1) / 2;
    }
  }
  sub_140140((__int64 **)v32);
  v47 = v83;
  *(_QWORD *)v32 = v83;
  if ( v47 )
    ++*((_DWORD *)v47 + 26);
  v48 = v86;
  *(__m128i *)(v32 + 8) = _mm_loadu_si128(&v84);
  v49 = _mm_loadu_si128(&v85);
  *(_BYTE *)(v32 + 40) = v48;
  *(__m128i *)(v32 + 24) = v49;
  sub_140140(&v83);
  return v87 - __readfsqword(0x28u);
}

