unsigned __int64 __fastcall sub_3B6D50(
        __int64 a1,
        __int64 ii,
        __int64 a3,
        __int64 *a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  __int64 v7; // r15
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 *v11; // rdi
  __int64 *v12; // r14
  bool v13; // zf
  __int64 *v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 i; // rdx
  _QWORD *v18; // r8
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 j; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 *v26; // r13
  unsigned int v27; // eax
  __int64 v28; // r15
  _QWORD *v29; // r14
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 n; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // dl
  __m128i v39; // xmm0
  __int64 v41; // r13
  __int64 v42; // rbp
  __int64 v43; // r15
  __int64 *v44; // rcx
  __int64 *v45; // r14
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 k; // rdx
  _QWORD *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 m; // rcx
  _QWORD *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // [rsp+0h] [rbp-A8h]
  __int64 v56; // [rsp+0h] [rbp-A8h]
  __int64 v57; // [rsp+0h] [rbp-A8h]
  __int64 v58; // [rsp+8h] [rbp-A0h]
  __int64 v59; // [rsp+10h] [rbp-98h]
  __int64 v60; // [rsp+10h] [rbp-98h]
  __int64 v61; // [rsp+10h] [rbp-98h]
  __int64 v62; // [rsp+10h] [rbp-98h]
  __int64 v63; // [rsp+10h] [rbp-98h]
  __int64 v64; // [rsp+18h] [rbp-90h]
  __int64 v65; // [rsp+18h] [rbp-90h]
  __int64 v66; // [rsp+18h] [rbp-90h]
  __int64 v67; // [rsp+18h] [rbp-90h]
  __int64 v70; // [rsp+30h] [rbp-78h] BYREF
  __m128i v71; // [rsp+38h] [rbp-70h] BYREF
  __m128i v72; // [rsp+48h] [rbp-60h] BYREF
  __int64 v73; // [rsp+58h] [rbp-50h]
  unsigned __int64 v74; // [rsp+68h] [rbp-40h]

  v58 = ii;
  v74 = __readfsqword(0x28u);
  v55 = (a3 - 1) / 2;
  if ( ii >= v55 )
  {
    v7 = ii;
  }
  else
  {
    v7 = ii;
    do
    {
      v8 = a5(a1 + 96 * (v7 + 1), a1 + 96 * (v7 + 1) - 48);
      v9 = v7;
      v7 = 2 * (v7 + 1) - v8;
      v10 = a1 + 48 * v9;
      ii = 48 * v7;
      v11 = *(__int64 **)v10;
      v12 = (__int64 *)(a1 + 48 * v7);
      if ( *(_QWORD *)v10 )
      {
        v13 = (*((_DWORD *)v11 + 26))-- == 1;
        if ( v13 )
        {
          v14 = *(__int64 **)v10;
          if ( *(_QWORD *)v10 )
          {
            sub_258D30(*(__int64 **)v10);
            v15 = v14[23];
            if ( v15 )
            {
              v16 = v14[24];
              if ( v16 )
              {
                for ( i = 0; i != v16; ++i )
                {
                  v18 = (_QWORD *)(v15 + 24 * i);
                  if ( *v18 )
                  {
                    v18[1] = 0;
                    v64 = i;
                    v59 = v16;
                    qfree();
                    i = v64;
                    v16 = v59;
                    v15 = v14[23];
                  }
                }
              }
              v14[24] = 0;
              qfree();
            }
            if ( v14[20] )
            {
              v14[21] = 0;
              qfree();
            }
            v19 = v14[16];
            if ( v19 )
            {
              v20 = v14[17];
              if ( v20 )
              {
                for ( j = 0; j != v20; ++j )
                {
                  v22 = (_QWORD *)(v19 + 32 * j);
                  if ( *v22 )
                  {
                    v22[1] = 0;
                    v65 = v20;
                    v60 = j;
                    qfree();
                    v20 = v65;
                    j = v60;
                    v19 = v14[16];
                  }
                }
              }
              v14[17] = 0;
              qfree();
            }
            sub_255410((__int64)(v14 + 2));
            j__qfree();
          }
        }
      }
      v23 = *v12;
      *(_QWORD *)v10 = *v12;
      if ( v23 )
        ++*(_DWORD *)(v23 + 104);
      *(__m128i *)(v10 + 8) = _mm_loadu_si128((const __m128i *)(v12 + 1));
      *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v12 + 3));
      *(_BYTE *)(v10 + 40) = *((_BYTE *)v12 + 40);
    }
    while ( v7 < v55 );
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v7 )
  {
    v41 = 2 * (v7 + 1);
    v42 = a1 + 96 * (v7 + 1) - 48;
    v43 = a1 + 48 * v7;
    v44 = *(__int64 **)v43;
    if ( *(_QWORD *)v43 )
    {
      v13 = (*((_DWORD *)v44 + 26))-- == 1;
      if ( v13 )
      {
        v45 = *(__int64 **)v43;
        if ( *(_QWORD *)v43 )
        {
          sub_258D30(*(__int64 **)v43);
          v46 = v45[23];
          if ( v46 )
          {
            v47 = v45[24];
            if ( v47 )
            {
              for ( k = 0; k != v47; ++k )
              {
                v49 = (_QWORD *)(v46 + 24 * k);
                if ( *v49 )
                {
                  v49[1] = 0;
                  v62 = v47;
                  v56 = k;
                  qfree();
                  v46 = v45[23];
                  v47 = v62;
                  k = v56;
                }
              }
            }
            v45[24] = 0;
            qfree();
          }
          if ( v45[20] )
          {
            v45[21] = 0;
            qfree();
          }
          v50 = v45[16];
          if ( v50 )
          {
            v51 = v45[17];
            if ( v51 )
            {
              for ( m = 0; m != v51; ++m )
              {
                v53 = (_QWORD *)(v50 + 32 * m);
                if ( *v53 )
                {
                  v53[1] = 0;
                  v63 = m;
                  v57 = v51;
                  qfree();
                  v50 = v45[16];
                  m = v63;
                  v51 = v57;
                }
              }
            }
            v45[17] = 0;
            qfree();
          }
          sub_255410((__int64)(v45 + 2));
          j__qfree();
        }
      }
    }
    v54 = *(_QWORD *)v42;
    *(_QWORD *)v43 = *(_QWORD *)v42;
    if ( v54 )
      ++*(_DWORD *)(v54 + 104);
    *(__m128i *)(v43 + 8) = _mm_loadu_si128((const __m128i *)(v42 + 8));
    *(__m128i *)(v43 + 24) = _mm_loadu_si128((const __m128i *)(v42 + 24));
    *(_BYTE *)(v43 + 40) = *(_BYTE *)(v42 + 40);
    v7 = v41 - 1;
  }
  v24 = *a4;
  v70 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 104);
  v71 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  v73 = a4[5];
  v72 = _mm_loadu_si128((const __m128i *)(a4 + 3));
  v25 = (v7 - 1) / 2;
  if ( v7 <= v58 )
  {
    v28 = a1 + 48 * v7;
  }
  else
  {
    while ( 1 )
    {
      v26 = (__int64 *)(a1 + 48 * v25);
      v27 = a5((__int64)v26, (__int64)&v70);
      ii = v27;
      v28 = a1 + 48 * v7;
      if ( !(_BYTE)v27 )
        break;
      ii = *(_QWORD *)v28;
      if ( *(_QWORD *)v28 )
      {
        v13 = (*(_DWORD *)(ii + 104))-- == 1;
        if ( v13 )
        {
          v29 = *(_QWORD **)v28;
          if ( *(_QWORD *)v28 )
          {
            sub_258D30(*(__int64 **)v28);
            v30 = v29[23];
            if ( v30 )
            {
              v31 = v29[24];
              if ( v31 )
              {
                for ( n = 0; n != v31; ++n )
                {
                  ii = v30 + 24 * n;
                  if ( *(_QWORD *)ii )
                  {
                    *(_QWORD *)(ii + 8) = 0;
                    v66 = v31;
                    v61 = n;
                    qfree();
                    v31 = v66;
                    n = v61;
                    v30 = v29[23];
                  }
                }
              }
              v29[24] = 0;
              qfree();
            }
            if ( v29[20] )
            {
              v29[21] = 0;
              qfree();
            }
            v33 = v29[16];
            if ( v33 )
            {
              v34 = v29[17];
              if ( v34 )
              {
                for ( ii = 0; ii != v34; ++ii )
                {
                  v35 = (_QWORD *)(v33 + 32 * ii);
                  if ( *v35 )
                  {
                    v35[1] = 0;
                    v67 = v34;
                    qfree();
                    v34 = v67;
                    v33 = v29[16];
                  }
                }
              }
              v29[17] = 0;
              qfree();
            }
            sub_255410((__int64)(v29 + 2));
            j__qfree();
          }
        }
      }
      v36 = *v26;
      *(_QWORD *)v28 = *v26;
      if ( v36 )
        ++*(_DWORD *)(v36 + 104);
      *(__m128i *)(v28 + 8) = _mm_loadu_si128((const __m128i *)(v26 + 1));
      *(__m128i *)(v28 + 24) = _mm_loadu_si128((const __m128i *)(v26 + 3));
      *(_BYTE *)(v28 + 40) = *((_BYTE *)v26 + 40);
      v7 = v25;
      if ( v58 >= v25 )
      {
        v28 = a1 + 48 * v25;
        break;
      }
      v25 = (v25 - 1) / 2;
    }
  }
  sub_13FB80((_QWORD *)v28, ii);
  v37 = v70;
  *(_QWORD *)v28 = v70;
  if ( v37 )
    ++*(_DWORD *)(v37 + 104);
  v38 = v73;
  *(__m128i *)(v28 + 8) = _mm_loadu_si128(&v71);
  v39 = _mm_loadu_si128(&v72);
  *(_BYTE *)(v28 + 40) = v38;
  *(__m128i *)(v28 + 24) = v39;
  sub_13FB80(&v70, ii);
  return v74 - __readfsqword(0x28u);
}

