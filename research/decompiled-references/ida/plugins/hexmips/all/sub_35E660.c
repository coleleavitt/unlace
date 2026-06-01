unsigned __int64 __fastcall sub_35E660(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __m128i si128; // xmm4
  __m128i v7; // xmm1
  __m128i v8; // xmm3
  __m128i v9; // xmm2
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // r13
  __int64 **v16; // r14
  __int64 *v17; // rdx
  __int64 *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 i; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 j; // rdx
  _QWORD *v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  int v32; // ecx
  __m128i v33; // xmm4
  __m128i v34; // xmm3
  __m128i v35; // xmm2
  __int64 v36; // rdx
  __int64 v37; // rax
  __m128i v38; // [rsp+0h] [rbp-158h] BYREF
  __int64 v39; // [rsp+18h] [rbp-140h]
  _OWORD v40[2]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v41; // [rsp+40h] [rbp-118h]
  __int128 v42; // [rsp+48h] [rbp-110h] BYREF
  __int128 v43; // [rsp+58h] [rbp-100h] BYREF
  __int128 v44; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v45; // [rsp+78h] [rbp-E0h]
  __int128 v46; // [rsp+88h] [rbp-D0h]
  __int128 v47; // [rsp+A0h] [rbp-B8h]
  __int128 v48; // [rsp+B0h] [rbp-A8h]
  __m128i v49; // [rsp+C0h] [rbp-98h]
  __m128i v50; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v51; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v52; // [rsp+F0h] [rbp-68h] BYREF
  int v53; // [rsp+100h] [rbp-58h]
  __int64 v54; // [rsp+104h] [rbp-54h]
  __int64 v55; // [rsp+10Ch] [rbp-4Ch]
  unsigned __int64 v56; // [rsp+118h] [rbp-40h]

  v2 = a2;
  v56 = __readfsqword(0x28u);
  sub_631C0((__int64)a1, a2);
  v3 = a1[23];
  if ( a2 != v3 )
  {
    v41 = -1;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    memset(v40, 0, sizeof(v40));
    if ( a2 < v3 )
    {
      v14 = a2;
      v15 = 120LL * a2;
      do
      {
        v16 = (__int64 **)(v15 + a1[22]);
        if ( v16[1] )
        {
          v16[2] = nullptr;
          qfree();
        }
        v17 = *v16;
        if ( *v16 )
        {
          if ( (*((_DWORD *)v17 + 26))-- == 1 )
          {
            v19 = *v16;
            if ( v19 )
            {
              sub_2540F0(v19);
              v20 = v19[23];
              if ( v20 )
              {
                v21 = v19[24];
                if ( v21 )
                {
                  for ( i = 0; i != v21; ++i )
                  {
                    v23 = (_QWORD *)(v20 + 24 * i);
                    if ( *v23 )
                    {
                      v23[1] = 0;
                      v39 = i;
                      v38.m128i_i64[0] = v21;
                      qfree();
                      v20 = v19[23];
                      i = v39;
                    }
                  }
                }
                v19[24] = 0;
                qfree();
              }
              if ( v19[20] )
              {
                v19[21] = 0;
                qfree();
              }
              v24 = v19[16];
              if ( v24 )
              {
                v25 = v19[17];
                if ( v25 )
                {
                  for ( j = 0; j != v25; ++j )
                  {
                    v27 = (_QWORD *)(v24 + 32 * j);
                    if ( *v27 )
                    {
                      v27[1] = 0;
                      v39 = v25;
                      v38.m128i_i64[0] = j;
                      qfree();
                      v24 = v19[16];
                      j = v38.m128i_i64[0];
                    }
                  }
                }
                v19[17] = 0;
                qfree();
              }
              sub_2507D0((__int64)(v19 + 2));
              j__qfree();
            }
          }
        }
        ++v14;
        v15 += 120;
      }
      while ( v14 < v3 );
      a1[23] = v2;
    }
    else
    {
      v4 = a1[22];
      v5 = a1[24];
      if ( (unsigned __int64)v40 < v4 || (unsigned __int64)v40 >= v4 + 120 * v5 )
      {
        if ( v5 < v2 )
        {
          a1[22] = qvector_reserve();
          v3 = a1[23];
        }
        if ( v3 < v2 )
        {
          si128 = _mm_load_si128((const __m128i *)((char *)&v42 + 8));
          v7 = _mm_load_si128((const __m128i *)&xmmword_407230);
          v8 = _mm_load_si128((const __m128i *)((char *)&v43 + 8));
          v9 = _mm_load_si128((const __m128i *)((char *)&v44 + 8));
          v10 = DWORD2(v45);
          v11 = 120 * v3;
          do
          {
            ++v3;
            v12 = v11 + a1[22];
            v11 += 120;
            *(_DWORD *)(v12 + 96) = v10;
            *(_QWORD *)(v12 + 100) = 0;
            *(_QWORD *)(v12 + 108) = 0;
            *(_OWORD *)v12 = 0;
            *(_OWORD *)(v12 + 16) = 0;
            *(__m128i *)(v12 + 32) = v7;
            *(__m128i *)(v12 + 48) = si128;
            *(__m128i *)(v12 + 64) = v8;
            *(__m128i *)(v12 + 80) = v9;
          }
          while ( v2 != v3 );
        }
      }
      else
      {
        v47 = 0;
        v28 = _mm_load_si128((const __m128i *)&xmmword_407230);
        v48 = 0;
        v29 = _mm_load_si128((const __m128i *)((char *)&v42 + 8));
        v53 = DWORD2(v45);
        v50 = v29;
        v30 = _mm_load_si128((const __m128i *)((char *)&v43 + 8));
        v54 = 0;
        v51 = v30;
        v31 = _mm_load_si128((const __m128i *)((char *)&v44 + 8));
        v55 = 0;
        v49 = v28;
        v52 = v31;
        if ( v5 < v2 )
        {
          v38 = v28;
          a1[22] = qvector_reserve();
          v3 = a1[23];
          v28 = _mm_load_si128(&v38);
        }
        if ( v3 < v2 )
        {
          v32 = v53;
          v33 = _mm_load_si128(&v50);
          v34 = _mm_load_si128(&v51);
          v35 = _mm_load_si128(&v52);
          v36 = 120 * v3;
          do
          {
            ++v3;
            v37 = v36 + a1[22];
            v36 += 120;
            *(_DWORD *)(v37 + 96) = v32;
            *(_QWORD *)(v37 + 100) = 0;
            *(_QWORD *)(v37 + 108) = 0;
            *(_OWORD *)v37 = 0;
            *(_OWORD *)(v37 + 16) = 0;
            *(__m128i *)(v37 + 32) = v28;
            *(__m128i *)(v37 + 48) = v33;
            *(__m128i *)(v37 + 64) = v34;
            *(__m128i *)(v37 + 80) = v35;
          }
          while ( v2 != v3 );
        }
      }
      a1[23] = v2;
    }
  }
  return v56 - __readfsqword(0x28u);
}

