__int64 *__fastcall sub_3A6630(__int64 *a1, const __m128i *a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v6; // r12
  bool v7; // zf
  __int64 *func; // rax
  __int64 v12; // rsi
  __m128i *v13; // rax
  __int64 v14; // r13
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 i; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 j; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 k; // rbp
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 m; // rbp
  __int64 *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-60h] BYREF
  __int64 *v43; // [rsp+10h] [rbp-58h] BYREF
  __int64 v44; // [rsp+18h] [rbp-50h]
  __int128 v45; // [rsp+20h] [rbp-48h]
  unsigned __int64 v46; // [rsp+38h] [rbp-30h]

  v6 = 0;
  v7 = a2[2].m128i_i32[0] == 2;
  v46 = __readfsqword(0x28u);
  if ( v7 )
  {
    func = (__int64 *)get_func();
    v12 = a2[1].m128i_i64[0];
    v43 = func;
    v44 = 0;
    v45 = 0;
    sub_14CDC0(&v42, v12, &v43, nullptr, 0, 0.0, a4, a5, a6);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44);
    }
    v6 = v42;
    if ( v42 )
    {
      v13 = (__m128i *)operator new(0x28u);
      v14 = v42;
      v6 = (__int64)v13;
      if ( !v42 )
      {
        v41 = a2[1].m128i_i64[0];
        *(_DWORD *)(v6 + 8) = 1;
        *(_QWORD *)v6 = &off_4E6E50;
        *(_QWORD *)(v6 + 16) = v41;
        *(_QWORD *)(v6 + 24) = 0;
        *(_DWORD *)(v6 + 32) = -1;
        goto LABEL_2;
      }
      ++*(_DWORD *)(v42 + 104);
      v15 = _mm_loadl_epi64(a2 + 1);
      v13->m128i_i32[2] = 1;
      v16 = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)v14);
      v13->m128i_i64[0] = (__int64)&off_4E6E50;
      v13[1] = v16;
      ++*(_DWORD *)(v14 + 104);
      v13[2].m128i_i32[0] = -1;
      v17 = *(_DWORD *)(v14 + 104) - 1;
      *(_DWORD *)(v14 + 104) = v17;
      if ( v17 )
        goto LABEL_26;
      sub_258970((__int64 *)v14);
      v18 = *(_QWORD *)(v14 + 184);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v14 + 192);
        if ( v19 )
        {
          for ( i = 0; i != v19; ++i )
          {
            v21 = (__int64 *)(v18 + 24 * i);
            v22 = *v21;
            if ( *v21 )
            {
              v21[1] = 0;
              qfree(v22);
              v18 = *(_QWORD *)(v14 + 184);
            }
          }
        }
        *(_QWORD *)(v14 + 192) = 0;
        qfree(v18);
      }
      v23 = *(_QWORD *)(v14 + 160);
      if ( v23 )
      {
        *(_QWORD *)(v14 + 168) = 0;
        qfree(v23);
      }
      v24 = *(_QWORD *)(v14 + 128);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v14 + 136);
        if ( v25 )
        {
          for ( j = 0; j != v25; ++j )
          {
            v27 = (__int64 *)(v24 + 32 * j);
            v28 = *v27;
            if ( *v27 )
            {
              v27[1] = 0;
              qfree(v28);
              v24 = *(_QWORD *)(v14 + 128);
            }
          }
        }
        *(_QWORD *)(v14 + 136) = 0;
        qfree(v24);
      }
      sub_255050(v14 + 16, *(double *)v16.m128i_i64);
      j__qfree(v14);
      v14 = v42;
      if ( v42 )
      {
        v17 = *(_DWORD *)(v42 + 104);
LABEL_26:
        v29 = v17 - 1;
        *(_DWORD *)(v14 + 104) = v29;
        if ( !v29 )
        {
          sub_258970((__int64 *)v14);
          v30 = *(_QWORD *)(v14 + 184);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v14 + 192);
            if ( v31 )
            {
              for ( k = 0; k != v31; ++k )
              {
                v33 = (__int64 *)(v30 + 24 * k);
                v34 = *v33;
                if ( *v33 )
                {
                  v33[1] = 0;
                  qfree(v34);
                  v30 = *(_QWORD *)(v14 + 184);
                }
              }
            }
            *(_QWORD *)(v14 + 192) = 0;
            qfree(v30);
          }
          v35 = *(_QWORD *)(v14 + 160);
          if ( v35 )
          {
            *(_QWORD *)(v14 + 168) = 0;
            qfree(v35);
          }
          v36 = *(_QWORD *)(v14 + 128);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v14 + 136);
            if ( v37 )
            {
              for ( m = 0; m != v37; ++m )
              {
                v39 = (__int64 *)(v36 + 32 * m);
                v40 = *v39;
                if ( *v39 )
                {
                  v39[1] = 0;
                  qfree(v40);
                  v36 = *(_QWORD *)(v14 + 128);
                }
              }
            }
            *(_QWORD *)(v14 + 136) = 0;
            qfree(v36);
          }
          sub_255050(v14 + 16, *(double *)v16.m128i_i64);
          j__qfree(v14);
        }
      }
    }
  }
LABEL_2:
  *a1 = v6;
  return a1;
}

