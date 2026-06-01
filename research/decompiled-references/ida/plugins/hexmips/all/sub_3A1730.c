__m128i **__fastcall sub_3A1730(__m128i **a1, const __m128i *a2)
{
  __m128i *v2; // r12
  bool v3; // zf
  __int64 func; // rax
  __int64 v7; // rsi
  __m128i *v8; // rax
  __m128i *v9; // r13
  __m128i v10; // xmm0
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 i; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 j; // rbp
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 k; // rbp
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 m; // rbp
  _QWORD *v28; // rax
  __int64 v29; // rax
  __m128i *v30; // [rsp+8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  __int64 v32; // [rsp+18h] [rbp-50h]
  __int128 v33; // [rsp+20h] [rbp-48h]
  unsigned __int64 v34; // [rsp+38h] [rbp-30h]

  v2 = nullptr;
  v3 = a2[2].m128i_i32[0] == 2;
  v34 = __readfsqword(0x28u);
  if ( v3 )
  {
    func = get_func();
    v7 = a2[1].m128i_i64[0];
    v31 = func;
    v32 = 0;
    v33 = 0;
    sub_148BC0(&v30, v7, &v31, nullptr, 0);
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree();
    }
    v2 = v30;
    if ( v30 )
    {
      v8 = (__m128i *)operator new(0x28u);
      v9 = v30;
      v2 = v8;
      if ( !v30 )
      {
        v29 = a2[1].m128i_i64[0];
        v2->m128i_i32[2] = 1;
        v2->m128i_i64[0] = (__int64)&off_4C7570;
        v2[1].m128i_i64[0] = v29;
        v2[1].m128i_i64[1] = 0;
        v2[2].m128i_i32[0] = -1;
        goto LABEL_2;
      }
      ++v30[6].m128i_i32[2];
      v10 = _mm_loadl_epi64(a2 + 1);
      v8->m128i_i32[2] = 1;
      v8->m128i_i64[0] = (__int64)&off_4C7570;
      v8[1] = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)v9);
      ++v9[6].m128i_i32[2];
      v8[2].m128i_i32[0] = -1;
      v11 = v9[6].m128i_i32[2] - 1;
      v9[6].m128i_i32[2] = v11;
      if ( v11 )
        goto LABEL_26;
      sub_2540F0(v9->m128i_i64);
      v12 = v9[11].m128i_i64[1];
      if ( v12 )
      {
        v13 = v9[12].m128i_i64[0];
        if ( v13 )
        {
          for ( i = 0; i != v13; ++i )
          {
            v15 = (_QWORD *)(v12 + 24 * i);
            if ( *v15 )
            {
              v15[1] = 0;
              qfree();
              v12 = v9[11].m128i_i64[1];
            }
          }
        }
        v9[12].m128i_i64[0] = 0;
        qfree();
      }
      if ( v9[10].m128i_i64[0] )
      {
        v9[10].m128i_i64[1] = 0;
        qfree();
      }
      v16 = v9[8].m128i_i64[0];
      if ( v16 )
      {
        v17 = v9[8].m128i_i64[1];
        if ( v17 )
        {
          for ( j = 0; j != v17; ++j )
          {
            v19 = (_QWORD *)(v16 + 32 * j);
            if ( *v19 )
            {
              v19[1] = 0;
              qfree();
              v16 = v9[8].m128i_i64[0];
            }
          }
        }
        v9[8].m128i_i64[1] = 0;
        qfree();
      }
      sub_2507D0((__int64)v9[1].m128i_i64);
      j__qfree();
      v9 = v30;
      if ( v30 )
      {
        v11 = v30[6].m128i_i32[2];
LABEL_26:
        v20 = v11 - 1;
        v9[6].m128i_i32[2] = v20;
        if ( !v20 )
        {
          sub_2540F0(v9->m128i_i64);
          v21 = v9[11].m128i_i64[1];
          if ( v21 )
          {
            v22 = v9[12].m128i_i64[0];
            if ( v22 )
            {
              for ( k = 0; k != v22; ++k )
              {
                v24 = (_QWORD *)(v21 + 24 * k);
                if ( *v24 )
                {
                  v24[1] = 0;
                  qfree();
                  v21 = v9[11].m128i_i64[1];
                }
              }
            }
            v9[12].m128i_i64[0] = 0;
            qfree();
          }
          if ( v9[10].m128i_i64[0] )
          {
            v9[10].m128i_i64[1] = 0;
            qfree();
          }
          v25 = v9[8].m128i_i64[0];
          if ( v25 )
          {
            v26 = v9[8].m128i_i64[1];
            if ( v26 )
            {
              for ( m = 0; m != v26; ++m )
              {
                v28 = (_QWORD *)(v25 + 32 * m);
                if ( *v28 )
                {
                  v28[1] = 0;
                  qfree();
                  v25 = v9[8].m128i_i64[0];
                }
              }
            }
            v9[8].m128i_i64[1] = 0;
            qfree();
          }
          sub_2507D0((__int64)v9[1].m128i_i64);
          j__qfree();
        }
      }
    }
  }
LABEL_2:
  *a1 = v2;
  return a1;
}

