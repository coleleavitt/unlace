unsigned __int64 __fastcall sub_3B3450(__int64 a1, __int64 *a2, unsigned __int8 (__fastcall *a3)(__int64 *, __int64))
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
  __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 j; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdx
  char v28; // dl
  __int64 *v29; // rdx
  __int64 *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 k; // rbp
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 m; // rbp
  __int64 *v40; // rax
  __int64 v41; // rdi
  __m128i v42; // xmm0
  char v43; // al
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 n; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rbp
  __int64 ii; // rbx
  __int64 *v54; // rax
  __int64 v55; // rdi
  char v57; // al
  __m128i v58; // xmm0
  __int64 v59; // [rsp+0h] [rbp-98h]
  __int64 v60; // [rsp+0h] [rbp-98h]
  __int64 v61; // [rsp+0h] [rbp-98h]
  __int64 v62; // [rsp+0h] [rbp-98h]
  __int64 v63; // [rsp+8h] [rbp-90h]
  __int64 v64; // [rsp+8h] [rbp-90h]
  __m128i v67; // [rsp+28h] [rbp-70h] BYREF
  __m128i v68; // [rsp+38h] [rbp-60h] BYREF
  __int64 v69; // [rsp+48h] [rbp-50h]
  unsigned __int64 v70; // [rsp+58h] [rbp-40h]

  v70 = __readfsqword(0x28u);
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
        v67 = _mm_loadu_si128((const __m128i *)(v3 - 5));
        v11 = _mm_loadu_si128((const __m128i *)(v3 - 3));
        v69 = v8;
        v12 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 4);
        v68 = v11;
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
                  sub_258970((__int64 *)*v10);
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
                          v63 = v17;
                          v59 = i;
                          qfree(v20);
                          v16 = v15[23];
                          v17 = v63;
                          i = v59;
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
                          v64 = j;
                          v60 = v23;
                          qfree(v26);
                          v22 = v15[16];
                          j = v64;
                          v23 = v60;
                        }
                      }
                    }
                    v15[17] = 0;
                    qfree(v22);
                  }
                  sub_255050((__int64)(v15 + 2), *(double *)v11.m128i_i64);
                  j__qfree((__int64)v15);
                }
              }
            }
            v27 = *(v10 - 6);
            *v10 = v27;
            if ( v27 )
              ++*(_DWORD *)(v27 + 104);
            v28 = *((_BYTE *)v10 - 8);
            *(__m128i *)(v10 + 1) = _mm_loadu_si128((const __m128i *)(v10 - 5));
            v11 = _mm_loadu_si128((const __m128i *)(v10 - 3));
            *((_BYTE *)v10 + 40) = v28;
            *(__m128i *)(v10 + 3) = v11;
            --v12;
          }
          while ( v12 );
        }
        v29 = *(__int64 **)a1;
        if ( *(_QWORD *)a1 )
        {
          v14 = (*((_DWORD *)v29 + 26))-- == 1;
          if ( v14 )
          {
            v30 = *(__int64 **)a1;
            if ( *(_QWORD *)a1 )
            {
              sub_258970(*(__int64 **)a1);
              v31 = v30[23];
              if ( v31 )
              {
                v32 = v30[24];
                if ( v32 )
                {
                  for ( k = 0; k != v32; ++k )
                  {
                    v34 = (__int64 *)(v31 + 24 * k);
                    v35 = *v34;
                    if ( *v34 )
                    {
                      v34[1] = 0;
                      v61 = v32;
                      qfree(v35);
                      v31 = v30[23];
                      v32 = v61;
                    }
                  }
                }
                v30[24] = 0;
                qfree(v31);
              }
              v36 = v30[20];
              if ( v36 )
              {
                v30[21] = 0;
                qfree(v36);
              }
              v37 = v30[16];
              if ( v37 )
              {
                v38 = v30[17];
                if ( v38 )
                {
                  for ( m = 0; m != v38; ++m )
                  {
                    v40 = (__int64 *)(v37 + 32 * m);
                    v41 = *v40;
                    if ( *v40 )
                    {
                      v40[1] = 0;
                      v62 = v38;
                      qfree(v41);
                      v37 = v30[16];
                      v38 = v62;
                    }
                  }
                }
                v30[17] = 0;
                qfree(v37);
              }
              sub_255050((__int64)(v30 + 2), *(double *)v11.m128i_i64);
              j__qfree((__int64)v30);
            }
          }
        }
        *(_QWORD *)a1 = v7;
        if ( v7 )
        {
          v42 = _mm_loadu_si128(&v67);
          ++*(_DWORD *)(v7 + 104);
          v43 = v69;
          *(__m128i *)(a1 + 8) = v42;
          v44 = _mm_loadu_si128(&v68);
          *(_BYTE *)(a1 + 40) = v43;
          *(__m128i *)(a1 + 24) = v44;
          v14 = (*(_DWORD *)(v7 + 104))-- == 1;
          if ( v14 )
          {
            sub_258970((__int64 *)v7);
            v45 = *(_QWORD *)(v7 + 184);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v7 + 192);
              if ( v46 )
              {
                for ( n = 0; n != v46; ++n )
                {
                  v48 = (__int64 *)(v45 + 24 * n);
                  v49 = *v48;
                  if ( *v48 )
                  {
                    v48[1] = 0;
                    qfree(v49);
                    v45 = *(_QWORD *)(v7 + 184);
                  }
                }
              }
              *(_QWORD *)(v7 + 192) = 0;
              qfree(v45);
            }
            v50 = *(_QWORD *)(v7 + 160);
            if ( v50 )
            {
              *(_QWORD *)(v7 + 168) = 0;
              qfree(v50);
            }
            v51 = *(_QWORD *)(v7 + 128);
            if ( v51 )
            {
              v52 = *(_QWORD *)(v7 + 136);
              if ( v52 )
              {
                for ( ii = 0; ii != v52; ++ii )
                {
                  v54 = (__int64 *)(v51 + 32 * ii);
                  v55 = *v54;
                  if ( *v54 )
                  {
                    v54[1] = 0;
                    qfree(v55);
                    v51 = *(_QWORD *)(v7 + 128);
                  }
                }
              }
              *(_QWORD *)(v7 + 136) = 0;
              qfree(v51);
            }
            sub_255050(v7 + 16, *(double *)v44.m128i_i64);
            j__qfree(v7);
          }
        }
        else
        {
          v57 = v69;
          *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v67);
          v58 = _mm_loadu_si128(&v68);
          *(_BYTE *)(a1 + 40) = v57;
          *(__m128i *)(a1 + 24) = v58;
        }
      }
      else
      {
        sub_3B31E0(v6, a3);
      }
    }
  }
  return v70 - __readfsqword(0x28u);
}

