unsigned __int64 __fastcall sub_3B7B50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v7; // r14
  __int64 *v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 *v14; // rdx
  __m128i v15; // xmm0
  __int64 *v17; // rbx
  __int64 v18; // rcx
  __int64 i; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 j; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  int v27; // eax
  __int64 v28; // rdi
  __int64 k; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rdi
  __int64 m; // rdx
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rdi
  __int64 n; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rdi
  __int64 ii; // rdx
  _QWORD *v40; // rax
  __int64 v42; // [rsp+0h] [rbp-B8h]
  __int64 v43; // [rsp+0h] [rbp-B8h]
  __int64 v44; // [rsp+0h] [rbp-B8h]
  __int64 v45; // [rsp+0h] [rbp-B8h]
  __int64 v46; // [rsp+0h] [rbp-B8h]
  __int64 v47; // [rsp+0h] [rbp-B8h]
  __int64 v48; // [rsp+8h] [rbp-B0h]
  __int64 v49; // [rsp+8h] [rbp-B0h]
  __int64 v50; // [rsp+8h] [rbp-B0h]
  __int64 v51; // [rsp+8h] [rbp-B0h]
  __int64 v52; // [rsp+8h] [rbp-B0h]
  __int64 v53; // [rsp+8h] [rbp-B0h]
  __m128i v54; // [rsp+18h] [rbp-A0h] BYREF
  __m128i v55; // [rsp+28h] [rbp-90h] BYREF
  __int64 v56; // [rsp+38h] [rbp-80h]
  unsigned __int8 (__fastcall *v57)(__int64, __int64); // [rsp+40h] [rbp-78h] BYREF
  __m128i v58; // [rsp+48h] [rbp-70h]
  __m128i v59; // [rsp+58h] [rbp-60h]
  __int64 v60; // [rsp+68h] [rbp-50h]
  unsigned __int64 v61; // [rsp+78h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v4 = a2 - a1;
  if ( a2 - a1 > 768 )
  {
    v5 = a3;
    v7 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v9 = (__int64 *)(a1 + 48);
        --v5;
        v10 = v7;
        sub_3B7AB0(
          (__int64 *)a1,
          a1 + 48,
          a1
        + 16
        * (((0xAAAAAAAAAAAAAAABLL * (v4 >> 4)) & 0xFFFFFFFFFFFFFFFELL)
         + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v4 >> 4)) >> 1)),
          v7 - 48,
          a4);
        while ( 1 )
        {
          while ( a4((__int64)v9, a1) )
            v9 += 6;
          do
            v10 -= 48LL;
          while ( a4(a1, v10) );
          if ( (unsigned __int64)v9 >= v10 )
            break;
          v11 = v9;
          v9 += 6;
          sub_3B7880(v11, v10);
        }
        sub_3B7B50(v9, v7, v5, a4);
        v4 = (__int64)v9 - a1;
        if ( (__int64)v9 - a1 <= 768 )
          break;
        v7 = (__int64)v9;
        if ( !v5 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      v57 = a4;
      sub_3B7430(a1, v7, (__int64 (__fastcall **)(__int64, __int64))&v57);
      while ( v7 - a1 > 48 )
      {
        v12 = *(_QWORD *)(v7 - 48);
        v7 -= 48;
        if ( v12 )
          ++*(_DWORD *)(v12 + 104);
        v13 = *(_QWORD *)(v7 + 40);
        v14 = *(__int64 **)v7;
        v54 = _mm_loadu_si128((const __m128i *)(v7 + 8));
        v15 = _mm_loadu_si128((const __m128i *)(v7 + 24));
        v56 = v13;
        v55 = v15;
        if ( v14 )
        {
          if ( (*((_DWORD *)v14 + 26))-- == 1 )
          {
            v17 = *(__int64 **)v7;
            if ( *(_QWORD *)v7 )
            {
              sub_258D30(*(__int64 **)v7);
              v18 = v17[23];
              if ( v18 )
              {
                v42 = v17[24];
                if ( v42 )
                {
                  for ( i = 0; i != v42; ++i )
                  {
                    v20 = (_QWORD *)(v18 + 24 * i);
                    if ( *v20 )
                    {
                      v20[1] = 0;
                      v48 = i;
                      qfree();
                      v18 = v17[23];
                      i = v48;
                    }
                  }
                }
                v17[24] = 0;
                qfree();
              }
              if ( v17[20] )
              {
                v17[21] = 0;
                qfree();
              }
              v21 = v17[16];
              if ( v21 )
              {
                v43 = v17[17];
                if ( v43 )
                {
                  for ( j = 0; j != v43; ++j )
                  {
                    v23 = (_QWORD *)(v21 + 32 * j);
                    if ( *v23 )
                    {
                      v23[1] = 0;
                      v49 = j;
                      qfree();
                      v21 = v17[16];
                      j = v49;
                    }
                  }
                }
                v17[17] = 0;
                qfree();
              }
              sub_255410((__int64)(v17 + 2));
              j__qfree();
            }
          }
        }
        v24 = *(_QWORD *)a1;
        *(_QWORD *)v7 = *(_QWORD *)a1;
        if ( v24 )
          ++*(_DWORD *)(v24 + 104);
        v25 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        v57 = (unsigned __int8 (__fastcall *)(__int64, __int64))v12;
        *(__m128i *)(v7 + 8) = v25;
        *(__m128i *)(v7 + 24) = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_BYTE *)(v7 + 40) = *(_BYTE *)(a1 + 40);
        if ( v12 )
          ++*(_DWORD *)(v12 + 104);
        v26 = _mm_loadu_si128(&v54);
        v60 = v56;
        v58 = v26;
        v59 = _mm_loadu_si128(&v55);
        sub_3B6D50(
          a1,
          0,
          0xAAAAAAAAAAAAAAABLL * ((v7 - a1) >> 4),
          (__int64 *)&v57,
          (__int64 (__fastcall *)(__int64, __int64))a4);
        if ( v12 )
        {
          v27 = *(_DWORD *)(v12 + 104) - 1;
          *(_DWORD *)(v12 + 104) = v27;
          if ( !v27 )
          {
            sub_258D30((__int64 *)v12);
            v28 = *(_QWORD *)(v12 + 184);
            if ( v28 )
            {
              v44 = *(_QWORD *)(v12 + 192);
              if ( v44 )
              {
                for ( k = 0; k != v44; ++k )
                {
                  v30 = (_QWORD *)(v28 + 24 * k);
                  if ( *v30 )
                  {
                    v30[1] = 0;
                    v50 = k;
                    qfree();
                    v28 = *(_QWORD *)(v12 + 184);
                    k = v50;
                  }
                }
              }
              *(_QWORD *)(v12 + 192) = 0;
              qfree();
            }
            if ( *(_QWORD *)(v12 + 160) )
            {
              *(_QWORD *)(v12 + 168) = 0;
              qfree();
            }
            v31 = *(_QWORD *)(v12 + 128);
            if ( v31 )
            {
              v45 = *(_QWORD *)(v12 + 136);
              if ( v45 )
              {
                for ( m = 0; m != v45; ++m )
                {
                  v33 = (_QWORD *)(v31 + 32 * m);
                  if ( *v33 )
                  {
                    v33[1] = 0;
                    v51 = m;
                    qfree();
                    v31 = *(_QWORD *)(v12 + 128);
                    m = v51;
                  }
                }
              }
              *(_QWORD *)(v12 + 136) = 0;
              qfree();
            }
            sub_255410(v12 + 16);
            j__qfree();
            v27 = *(_DWORD *)(v12 + 104);
          }
          v34 = v27 - 1;
          *(_DWORD *)(v12 + 104) = v34;
          if ( !v34 )
          {
            sub_258D30((__int64 *)v12);
            v35 = *(_QWORD *)(v12 + 184);
            if ( v35 )
            {
              v46 = *(_QWORD *)(v12 + 192);
              if ( v46 )
              {
                for ( n = 0; n != v46; ++n )
                {
                  v37 = (_QWORD *)(v35 + 24 * n);
                  if ( *v37 )
                  {
                    v37[1] = 0;
                    v52 = n;
                    qfree();
                    v35 = *(_QWORD *)(v12 + 184);
                    n = v52;
                  }
                }
              }
              *(_QWORD *)(v12 + 192) = 0;
              qfree();
            }
            if ( *(_QWORD *)(v12 + 160) )
            {
              *(_QWORD *)(v12 + 168) = 0;
              qfree();
            }
            v38 = *(_QWORD *)(v12 + 128);
            if ( v38 )
            {
              v47 = *(_QWORD *)(v12 + 136);
              if ( v47 )
              {
                for ( ii = 0; ii != v47; ++ii )
                {
                  v40 = (_QWORD *)(v38 + 32 * ii);
                  if ( *v40 )
                  {
                    v40[1] = 0;
                    v53 = ii;
                    qfree();
                    v38 = *(_QWORD *)(v12 + 128);
                    ii = v53;
                  }
                }
              }
              *(_QWORD *)(v12 + 136) = 0;
              qfree();
            }
            sub_255410(v12 + 16);
            j__qfree();
          }
        }
      }
    }
  }
  return v61 - __readfsqword(0x28u);
}

