__int64 __fastcall sub_314020(__m128i *a1, __int64 a2, int a3, __int64 a4, double a5, __m128 a6)
{
  __int32 v6; // eax
  char v7; // r12
  int v8; // eax
  unsigned int v9; // edx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  __int64 i; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  char v20; // r12
  __int64 v21; // rdx
  __int32 v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 *v27; // r9
  __int64 v28; // r14
  __int64 *v29; // r15
  unsigned __int64 k; // r14
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  void *v37; // rbp
  unsigned __int64 v38; // rax
  __m128i *v39; // rax
  __m128i v40; // xmm2
  size_t v41; // rbx
  __m128i v42; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 j; // [rsp+10h] [rbp-98h]
  _QWORD *v44; // [rsp+18h] [rbp-90h]
  __int64 v45; // [rsp+20h] [rbp-88h]
  __int64 v46; // [rsp+28h] [rbp-80h]
  __m128i *v47; // [rsp+30h] [rbp-78h]
  _QWORD *v48; // [rsp+38h] [rbp-70h]
  __m128i v49; // [rsp+40h] [rbp-68h] BYREF
  __int64 v50; // [rsp+50h] [rbp-58h] BYREF
  __m128i v51; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v6 = a1->m128i_i32[0];
  v47 = a1;
  v45 = a2;
  v52 = __readfsqword(0x28u);
  v7 = a3;
  v42.m128i_i32[0] = v6;
  v8 = v6 & 0xF;
  if ( a3 )
  {
    if ( v8 != 2 )
      return 0;
    v11 = v47[1].m128i_i64[0];
    if ( !v11 )
    {
      v13 = 0;
LABEL_15:
      v42.m128i_i32[0] = *(_DWORD *)v45;
      if ( (v42.m128i_i8[0] & 0xF) != 2 )
        return 0;
LABEL_16:
      v15 = *(_QWORD *)(v45 + 16);
      if ( !v15 )
        goto LABEL_26;
      v16 = 0;
      for ( i = 0; i != v15; ++i )
      {
        v16 += *(_QWORD *)(*(_QWORD *)(v45 + 8) + 16LL * (int)i + 8);
        if ( v16 > 0x10 )
          return 0;
      }
      if ( v13 * v16 <= 0x10 )
      {
LABEL_26:
        v20 = 8 * v7;
        v50 = 0;
        v51 = 0;
        v21 = -1;
        v22 = v47->m128i_i32[1];
        if ( v22 != 8 )
          v21 = (1LL << (8 * (unsigned __int8)v22)) - 1;
        v23 = *(_DWORD *)(v45 + 4);
        v24 = -1;
        if ( v23 != 8 )
          v24 = (1LL << (8 * (unsigned __int8)v23)) - 1;
        v25 = 2 * v11;
        v46 = v21 - (v24 << v20);
        v44 = (_QWORD *)v47->m128i_i64[1];
        v48 = &v44[v25];
        if ( v44 == &v44[v25] )
        {
          v32 = 0;
          v33 = 0;
        }
        else
        {
          do
          {
            for ( j = 0; j < v44[1]; ++j )
            {
              v26 = v46 & (*v44 + j);
              v27 = *(__int64 **)(v45 + 8);
              v28 = 2LL * *(_QWORD *)(v45 + 16);
              v42.m128i_i64[0] = (__int64)&v27[v28];
              if ( v27 != &v27[v28] )
              {
                v29 = v27;
                do
                {
                  for ( k = 0; k < v29[1]; ++k )
                  {
                    v31 = *v29;
                    v49.m128i_i64[1] = 1;
                    v49.m128i_i64[0] = v26 + ((k + v31) << v20);
                    sub_316BB0(&v50, &v49, 0.0, a6);
                  }
                  v29 += 2;
                }
                while ( (__int64 *)v42.m128i_i64[0] != v29 );
              }
            }
            v44 += 2;
          }
          while ( v48 != v44 );
          v32 = _mm_loadu_si128(&v51);
          v48 = (_QWORD *)v47->m128i_i64[1];
          v33 = v50;
        }
        v34 = v47;
        v35 = v47[1].m128i_i64[1];
        v47->m128i_i64[1] = v33;
        v36 = (__int64)v48;
        v34[1] = v32;
        v51.m128i_i64[1] = v35;
        v50 = v36;
        if ( v36 )
        {
          v51.m128i_i64[0] = 0;
          qfree(v36);
        }
        return 1;
      }
      return 0;
    }
    v12 = v47->m128i_i64[1];
LABEL_10:
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v13 += *(_QWORD *)(v12 + 16LL * (int)v14 + 8);
      if ( v13 > 0x10 )
        return 0;
      if ( v11 == ++v14 )
        goto LABEL_15;
    }
  }
  v9 = 0;
  if ( v8 == 2 )
  {
    v11 = a1[1].m128i_i64[0];
    v42.m128i_i32[0] = *(_DWORD *)v45;
    if ( (v42.m128i_i8[0] & 0xF) != 2 )
    {
      if ( !v11 )
        return v9;
      v12 = v47->m128i_i64[1];
      goto LABEL_10;
    }
    v12 = a1->m128i_i64[1];
    v18 = v12;
    v19 = *(unsigned int *)(v45 + 4);
    if ( (_DWORD)v19 == 8
      || (a4 = (unsigned int)(8 * v19),
          v19 = (1LL << (8 * (unsigned __int8)v19)) - 1,
          v19 >= *(_QWORD *)(v12 + 16 * v11 - 16 + 8) + *(_QWORD *)(v12 + 16 * v11 - 16) - 1LL) )
    {
      v37 = nullptr;
      v38 = *(_QWORD *)(v45 + 16);
      v42 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
      if ( v38 )
      {
        v41 = 16 * v38;
        v37 = (void *)qalloc_or_throw(16 * v38, v11, v19, a4);
        memcpy(v37, *(const void **)(v45 + 8), v41);
        v18 = v47->m128i_i64[1];
      }
      if ( v18 )
      {
        v47[1].m128i_i64[0] = 0;
        qfree(v18);
      }
      v39 = v47;
      v40 = _mm_load_si128(&v42);
      v47->m128i_i64[1] = (__int64)v37;
      v39[1] = v40;
      return 1;
    }
    v13 = 0;
    if ( !v11 )
      goto LABEL_16;
    goto LABEL_10;
  }
  return v9;
}

