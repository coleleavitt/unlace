unsigned __int64 __fastcall sub_363560(_QWORD *a1, int a2, double a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  __m128i si128; // xmm4
  __m128i v10; // xmm1
  __m128i v11; // xmm3
  __m128i v12; // xmm2
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // r13
  __int64 **v19; // r14
  __int64 v20; // rdi
  __int64 *v21; // rdx
  __int64 *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 i; // rax
  __int64 *v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 j; // rdx
  __int64 *v33; // rax
  __int64 v34; // rdi
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  int v39; // ecx
  __m128i v40; // xmm4
  __m128i v41; // xmm3
  __m128i v42; // xmm2
  __int64 v43; // rdx
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-158h] BYREF
  __int64 v46; // [rsp+18h] [rbp-140h]
  _OWORD v47[2]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v48; // [rsp+40h] [rbp-118h]
  __int128 v49; // [rsp+48h] [rbp-110h] BYREF
  __int128 v50; // [rsp+58h] [rbp-100h] BYREF
  __int128 v51; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v52; // [rsp+78h] [rbp-E0h]
  __int128 v53; // [rsp+88h] [rbp-D0h]
  __int128 v54; // [rsp+A0h] [rbp-B8h]
  __int128 v55; // [rsp+B0h] [rbp-A8h]
  __m128i v56; // [rsp+C0h] [rbp-98h]
  __m128i v57; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v58; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v59; // [rsp+F0h] [rbp-68h] BYREF
  int v60; // [rsp+100h] [rbp-58h]
  __int64 v61; // [rsp+104h] [rbp-54h]
  __int64 v62; // [rsp+10Ch] [rbp-4Ch]
  unsigned __int64 v63; // [rsp+118h] [rbp-40h]

  v4 = a2;
  v63 = __readfsqword(0x28u);
  sub_673C0((__int64)a1, a2, a3);
  v5 = a1[23];
  if ( a2 != v5 )
  {
    v48 = -1;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    memset(v47, 0, sizeof(v47));
    if ( a2 < v5 )
    {
      v17 = a2;
      v18 = 120LL * a2;
      do
      {
        v19 = (__int64 **)(v18 + a1[22]);
        v20 = (__int64)v19[1];
        if ( v20 )
        {
          v19[2] = nullptr;
          qfree(v20);
        }
        v21 = *v19;
        if ( *v19 )
        {
          if ( (*((_DWORD *)v21 + 26))-- == 1 )
          {
            v23 = *v19;
            if ( v23 )
            {
              sub_258970(v23);
              v24 = v23[23];
              if ( v24 )
              {
                v25 = v23[24];
                if ( v25 )
                {
                  for ( i = 0; i != v25; ++i )
                  {
                    v27 = (__int64 *)(v24 + 24 * i);
                    v28 = *v27;
                    if ( *v27 )
                    {
                      v27[1] = 0;
                      v46 = i;
                      v45.m128i_i64[0] = v25;
                      qfree(v28);
                      v24 = v23[23];
                      i = v46;
                    }
                  }
                }
                v23[24] = 0;
                qfree(v24);
              }
              v29 = v23[20];
              if ( v29 )
              {
                v23[21] = 0;
                qfree(v29);
              }
              v30 = v23[16];
              if ( v30 )
              {
                v31 = v23[17];
                if ( v31 )
                {
                  for ( j = 0; j != v31; ++j )
                  {
                    v33 = (__int64 *)(v30 + 32 * j);
                    v34 = *v33;
                    if ( *v33 )
                    {
                      v33[1] = 0;
                      v46 = v31;
                      v45.m128i_i64[0] = j;
                      qfree(v34);
                      v30 = v23[16];
                      j = v45.m128i_i64[0];
                    }
                  }
                }
                v23[17] = 0;
                qfree(v30);
              }
              sub_255050((__int64)(v23 + 2), 0.0);
              j__qfree((__int64)v23);
            }
          }
        }
        ++v17;
        v18 += 120;
      }
      while ( v17 < v5 );
      a1[23] = v4;
    }
    else
    {
      v6 = a1[22];
      v7 = a1[24];
      v8 = a1 + 22;
      if ( (unsigned __int64)v47 < v6 || (unsigned __int64)v47 >= v6 + 120 * v7 )
      {
        if ( v7 < v4 )
        {
          a1[22] = qvector_reserve((__int64)v8, v6, v4, 120);
          v5 = a1[23];
        }
        if ( v5 < v4 )
        {
          si128 = _mm_load_si128((const __m128i *)((char *)&v49 + 8));
          v10 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
          v11 = _mm_load_si128((const __m128i *)((char *)&v50 + 8));
          v12 = _mm_load_si128((const __m128i *)((char *)&v51 + 8));
          v13 = DWORD2(v52);
          v14 = 120 * v5;
          do
          {
            ++v5;
            v15 = v14 + a1[22];
            v14 += 120;
            *(_DWORD *)(v15 + 96) = v13;
            *(_QWORD *)(v15 + 100) = 0;
            *(_QWORD *)(v15 + 108) = 0;
            *(_OWORD *)v15 = 0;
            *(_OWORD *)(v15 + 16) = 0;
            *(__m128i *)(v15 + 32) = v10;
            *(__m128i *)(v15 + 48) = si128;
            *(__m128i *)(v15 + 64) = v11;
            *(__m128i *)(v15 + 80) = v12;
          }
          while ( v4 != v5 );
        }
      }
      else
      {
        v54 = 0;
        v35 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
        v55 = 0;
        v36 = _mm_load_si128((const __m128i *)((char *)&v49 + 8));
        v60 = DWORD2(v52);
        v57 = v36;
        v37 = _mm_load_si128((const __m128i *)((char *)&v50 + 8));
        v61 = 0;
        v58 = v37;
        v38 = _mm_load_si128((const __m128i *)((char *)&v51 + 8));
        v62 = 0;
        v56 = v35;
        v59 = v38;
        if ( v7 < v4 )
        {
          v45 = v35;
          a1[22] = qvector_reserve((__int64)v8, v6, v4, 120);
          v5 = a1[23];
          v35 = _mm_load_si128(&v45);
        }
        if ( v5 < v4 )
        {
          v39 = v60;
          v40 = _mm_load_si128(&v57);
          v41 = _mm_load_si128(&v58);
          v42 = _mm_load_si128(&v59);
          v43 = 120 * v5;
          do
          {
            ++v5;
            v44 = v43 + a1[22];
            v43 += 120;
            *(_DWORD *)(v44 + 96) = v39;
            *(_QWORD *)(v44 + 100) = 0;
            *(_QWORD *)(v44 + 108) = 0;
            *(_OWORD *)v44 = 0;
            *(_OWORD *)(v44 + 16) = 0;
            *(__m128i *)(v44 + 32) = v35;
            *(__m128i *)(v44 + 48) = v40;
            *(__m128i *)(v44 + 64) = v41;
            *(__m128i *)(v44 + 80) = v42;
          }
          while ( v4 != v5 );
        }
      }
      a1[23] = v4;
    }
  }
  return v63 - __readfsqword(0x28u);
}

