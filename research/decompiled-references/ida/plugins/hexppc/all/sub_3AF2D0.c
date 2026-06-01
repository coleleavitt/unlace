unsigned __int64 __fastcall sub_3AF2D0(__int64 a1, __int64 *a2, unsigned __int8 (__fastcall *a3)(__int64 *, __int64))
{
  __int64 *v3; // r12
  unsigned __int8 v5; // al
  __int64 *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // r15
  __m128i v11; // xmm0
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 i; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 j; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rdx
  char v25; // dl
  __m128i v26; // xmm0
  __int64 *v27; // rdx
  __int64 *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 k; // rbp
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 m; // rbp
  _QWORD *v36; // rax
  __m128i v37; // xmm0
  char v38; // al
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 n; // rbx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rbp
  __int64 ii; // rbx
  _QWORD *v47; // rax
  char v49; // al
  __m128i v50; // xmm0
  __int64 v51; // [rsp+0h] [rbp-98h]
  __int64 v52; // [rsp+0h] [rbp-98h]
  __int64 v53; // [rsp+0h] [rbp-98h]
  __int64 v54; // [rsp+0h] [rbp-98h]
  __int64 v55; // [rsp+8h] [rbp-90h]
  __int64 v56; // [rsp+8h] [rbp-90h]
  __m128i v59; // [rsp+28h] [rbp-70h] BYREF
  __m128i v60; // [rsp+38h] [rbp-60h] BYREF
  __int64 v61; // [rsp+48h] [rbp-50h]
  unsigned __int64 v62; // [rsp+58h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  if ( (__int64 *)a1 != a2 )
  {
    v3 = (__int64 *)(a1 + 48);
    while ( a2 != v3 )
    {
      v5 = a3(v3, a1);
      v6 = v3;
      v3 += 6;
      if ( v5 )
      {
        v7 = *(v3 - 6);
        if ( v7 )
          ++*(_DWORD *)(v7 + 104);
        v8 = *(v3 - 1);
        v9 = (__int64)v6 - a1;
        v10 = v3;
        v59 = _mm_loadu_si128((const __m128i *)(v3 - 5));
        v11 = _mm_loadu_si128((const __m128i *)(v3 - 3));
        v61 = v8;
        v12 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 4);
        v60 = v11;
        if ( v9 > 0 )
        {
          do
          {
            v13 = *(v10 - 6);
            v10 -= 6;
            if ( v13 )
            {
              v14 = (*(_DWORD *)(v13 + 104))-- == 1;
              if ( v14 )
              {
                v15 = (__int64 *)*v10;
                if ( *v10 )
                {
                  sub_254CF0((__int64 *)*v10);
                  v16 = v15[23];
                  if ( v16 )
                  {
                    v17 = v15[24];
                    if ( v17 )
                    {
                      for ( i = 0; i != v17; ++i )
                      {
                        v19 = (_QWORD *)(v16 + 24 * i);
                        if ( *v19 )
                        {
                          v19[1] = 0;
                          v55 = v17;
                          v51 = i;
                          qfree();
                          v16 = v15[23];
                          v17 = v55;
                          i = v51;
                        }
                      }
                    }
                    v15[24] = 0;
                    qfree();
                  }
                  if ( v15[20] )
                  {
                    v15[21] = 0;
                    qfree();
                  }
                  v20 = v15[16];
                  if ( v20 )
                  {
                    v21 = v15[17];
                    if ( v21 )
                    {
                      for ( j = 0; j != v21; ++j )
                      {
                        v23 = (_QWORD *)(v20 + 32 * j);
                        if ( *v23 )
                        {
                          v23[1] = 0;
                          v56 = j;
                          v52 = v21;
                          qfree();
                          v20 = v15[16];
                          j = v56;
                          v21 = v52;
                        }
                      }
                    }
                    v15[17] = 0;
                    qfree();
                  }
                  sub_2513D0((__int64)(v15 + 2));
                  j__qfree();
                }
              }
            }
            v24 = *(v10 - 6);
            *v10 = v24;
            if ( v24 )
              ++*(_DWORD *)(v24 + 104);
            v25 = *((_BYTE *)v10 - 8);
            *(__m128i *)(v10 + 1) = _mm_loadu_si128((const __m128i *)(v10 - 5));
            v26 = _mm_loadu_si128((const __m128i *)(v10 - 3));
            *((_BYTE *)v10 + 40) = v25;
            *(__m128i *)(v10 + 3) = v26;
            --v12;
          }
          while ( v12 );
        }
        v27 = *(__int64 **)a1;
        if ( *(_QWORD *)a1 )
        {
          v14 = (*((_DWORD *)v27 + 26))-- == 1;
          if ( v14 )
          {
            v28 = *(__int64 **)a1;
            if ( *(_QWORD *)a1 )
            {
              sub_254CF0(*(__int64 **)a1);
              v29 = v28[23];
              if ( v29 )
              {
                v30 = v28[24];
                if ( v30 )
                {
                  for ( k = 0; k != v30; ++k )
                  {
                    v32 = (_QWORD *)(v29 + 24 * k);
                    if ( *v32 )
                    {
                      v32[1] = 0;
                      v53 = v30;
                      qfree();
                      v29 = v28[23];
                      v30 = v53;
                    }
                  }
                }
                v28[24] = 0;
                qfree();
              }
              if ( v28[20] )
              {
                v28[21] = 0;
                qfree();
              }
              v33 = v28[16];
              if ( v33 )
              {
                v34 = v28[17];
                if ( v34 )
                {
                  for ( m = 0; m != v34; ++m )
                  {
                    v36 = (_QWORD *)(v33 + 32 * m);
                    if ( *v36 )
                    {
                      v36[1] = 0;
                      v54 = v34;
                      qfree();
                      v33 = v28[16];
                      v34 = v54;
                    }
                  }
                }
                v28[17] = 0;
                qfree();
              }
              sub_2513D0((__int64)(v28 + 2));
              j__qfree();
            }
          }
        }
        *(_QWORD *)a1 = v7;
        if ( v7 )
        {
          v37 = _mm_loadu_si128(&v59);
          ++*(_DWORD *)(v7 + 104);
          v38 = v61;
          *(__m128i *)(a1 + 8) = v37;
          v39 = _mm_loadu_si128(&v60);
          *(_BYTE *)(a1 + 40) = v38;
          *(__m128i *)(a1 + 24) = v39;
          v14 = (*(_DWORD *)(v7 + 104))-- == 1;
          if ( v14 )
          {
            sub_254CF0((__int64 *)v7);
            v40 = *(_QWORD *)(v7 + 184);
            if ( v40 )
            {
              v41 = *(_QWORD *)(v7 + 192);
              if ( v41 )
              {
                for ( n = 0; n != v41; ++n )
                {
                  v43 = (_QWORD *)(v40 + 24 * n);
                  if ( *v43 )
                  {
                    v43[1] = 0;
                    qfree();
                    v40 = *(_QWORD *)(v7 + 184);
                  }
                }
              }
              *(_QWORD *)(v7 + 192) = 0;
              qfree();
            }
            if ( *(_QWORD *)(v7 + 160) )
            {
              *(_QWORD *)(v7 + 168) = 0;
              qfree();
            }
            v44 = *(_QWORD *)(v7 + 128);
            if ( v44 )
            {
              v45 = *(_QWORD *)(v7 + 136);
              if ( v45 )
              {
                for ( ii = 0; ii != v45; ++ii )
                {
                  v47 = (_QWORD *)(v44 + 32 * ii);
                  if ( *v47 )
                  {
                    v47[1] = 0;
                    qfree();
                    v44 = *(_QWORD *)(v7 + 128);
                  }
                }
              }
              *(_QWORD *)(v7 + 136) = 0;
              qfree();
            }
            sub_2513D0(v7 + 16);
            j__qfree();
          }
        }
        else
        {
          v49 = v61;
          *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v59);
          v50 = _mm_loadu_si128(&v60);
          *(_BYTE *)(a1 + 40) = v49;
          *(__m128i *)(a1 + 24) = v50;
        }
      }
      else
      {
        sub_3AF060(v6, a3);
      }
    }
  }
  return v62 - __readfsqword(0x28u);
}

