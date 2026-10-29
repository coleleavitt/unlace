__int64 __fastcall sub_3C2D00(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __int64 a9,
        int *a10,
        unsigned int a11)
{
  unsigned int v13; // ecx
  __int64 v15; // rdx
  __int64 v16; // r12
  int *v17; // r13
  const __m128i *outctx; // rbx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ebp
  int v23; // r14d
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // r14
  _QWORD *v31; // rdx
  __m128i v32; // [rsp+10h] [rbp-498h] BYREF
  __int64 v33; // [rsp+20h] [rbp-488h]
  __m256i v34; // [rsp+30h] [rbp-478h] BYREF
  int v35; // [rsp+50h] [rbp-458h]
  const __m128i *v36; // [rsp+58h] [rbp-450h]
  char v37[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v38; // [rsp+468h] [rbp-40h]

  v13 = *(_DWORD *)(a1 + 12);
  v38 = __readfsqword(0x28u);
  if ( v13 >= a10[16] )
  {
    v16 = 0;
    v17 = nullptr;
  }
  else
  {
    v15 = *((_QWORD *)a10 + 66);
    v16 = *(_QWORD *)(v15 + 8LL * v13);
    if ( v16 )
      v17 = (int *)sub_32BE00(*(_QWORD *)(v15 + 8LL * v13), *(_DWORD *)(a1 + 16));
    else
      v17 = nullptr;
  }
  qsnprintf();
  outctx = (const __m128i *)create_outctx();
  (*(void (__fastcall **)(const __m128i *, __int64, _QWORD))(outctx->m128i_i64[0] + 224))(outctx, a2, a11);
  (*(void (__fastcall **)(const __m128i *, char *, _QWORD))(outctx->m128i_i64[0] + 192))(outctx, v37, 0);
  *a4 = 6;
  *a3 = 0;
  if ( !v16 )
  {
    (*(void (__fastcall **)(const __m128i *, char *, _QWORD))(outctx->m128i_i64[0] + 136))(outctx, "empty block", 0);
    goto LABEL_14;
  }
  if ( *(int **)(v16 + 48) == v17 && (*((_BYTE *)a10 + 2) & 0x40) == 0 )
  {
    memset(&v34, 0, 24);
    sub_1B2740(v16, v34.m256i_i64, 0.0, a6, a7, a8);
    if ( v34.m256i_i64[1] )
    {
      v23 = 0;
      v24 = 0;
      do
      {
        v25 = _mm_loadu_si128(outctx + 2);
        v26 = (__int64 *)(v34.m256i_i64[0] + 24 * v24);
        v27 = outctx[1].m128i_i64[1];
        outctx[1].m128i_i64[1] = *v26;
        outctx[2].m128i_i64[0] = v26[1];
        outctx[2].m128i_i64[1] = v26[2];
        *v26 = v27;
        *(__m128i *)(v26 + 1) = v25;
        (*(void (__fastcall **)(const __m128i *, _QWORD))(outctx->m128i_i64[0] + 128))(outctx, 0);
        ++v23;
        v28 = v34.m256i_i64[1];
        v24 = v23;
      }
      while ( (unsigned __int64)v23 < v34.m256i_i64[1] );
      v29 = v34.m256i_i64[0];
      if ( !v34.m256i_i64[0] )
        goto LABEL_6;
      if ( v34.m256i_i64[1] )
      {
        v30 = 0;
        do
        {
          v31 = (_QWORD *)(v29 + 24 * v30);
          if ( *v31 )
          {
            v31[1] = 0;
            qfree();
            v29 = v34.m256i_i64[0];
          }
          ++v30;
        }
        while ( v28 != v30 );
      }
    }
    else if ( !v34.m256i_i64[0] )
    {
      goto LABEL_6;
    }
    v34.m256i_i64[1] = 0;
    qfree();
  }
LABEL_6:
  v33 = 0;
  v32 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a10 + 374)), (__m128i)(unsigned __int64)a10);
  if ( v17 )
  {
    v34.m256i_i64[0] = (__int64)&off_4C9360;
    v19 = *a10;
    memset(&v34.m256i_u64[1], 0, 24);
    v35 = 0;
    v36 = outctx;
    v20 = (v19 >> 20) & 4;
    if ( (v19 & 0x40000000) != 0 )
      v20 = (v19 >> 20) & 4 | 2;
    if ( (v19 & 0x20000000) != 0 )
      v20 |= 1u;
    sub_1B1760(v17, &v34, (__int64)&v32, v20);
    v34.m256i_i64[0] = (__int64)&off_4C3D58;
    if ( v34.m256i_i64[1] )
    {
      v34.m256i_i64[2] = 0;
      qfree();
    }
  }
  if ( *(int **)(v16 + 56) == v17 && (*a10 & 0x400000) == 0 )
    (*(void (__fastcall **)(const __m128i *))(outctx->m128i_i64[0] + 160))(outctx);
LABEL_14:
  v21 = (*(__int64 (__fastcall **)(const __m128i *, _QWORD))(outctx->m128i_i64[0] + 144))(outctx, 0);
  if ( outctx )
    (*(void (__fastcall **)(const __m128i *))(outctx->m128i_i64[0] + 8))(outctx);
  return v21;
}

