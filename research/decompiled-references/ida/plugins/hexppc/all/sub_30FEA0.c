__int64 __fastcall sub_30FEA0(__m128i *a1, __int64 a2, int a3)
{
  __int32 v3; // eax
  int v5; // eax
  unsigned int v6; // edx
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 i; // rax
  __int64 v15; // r8
  int v16; // edx
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int32 v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rbp
  __int64 *v26; // r9
  __int64 v27; // r14
  __int64 *v28; // r15
  unsigned __int64 k; // r14
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i *v33; // rsi
  __int64 v34; // rdx
  _QWORD *v35; // rax
  void *v36; // rbp
  unsigned __int64 v37; // rax
  __m128i *v38; // rax
  __m128i v39; // xmm2
  size_t v40; // rbx
  __m128i v41; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 j; // [rsp+10h] [rbp-98h]
  _QWORD *v43; // [rsp+18h] [rbp-90h]
  __int64 v44; // [rsp+20h] [rbp-88h]
  __int64 v45; // [rsp+28h] [rbp-80h]
  __m128i *v46; // [rsp+30h] [rbp-78h]
  _QWORD *v47; // [rsp+38h] [rbp-70h]
  _QWORD v48[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v49; // [rsp+50h] [rbp-58h] BYREF
  __m128i v50; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp-40h]

  v3 = a1->m128i_i32[0];
  v46 = a1;
  v44 = a2;
  v51 = __readfsqword(0x28u);
  v41.m128i_i32[0] = v3;
  v5 = v3 & 0xF;
  if ( a3 )
  {
    if ( v5 != 2 )
      return 0;
    v8 = v46[1].m128i_i64[0];
    if ( !v8 )
    {
      v10 = 0;
LABEL_15:
      v41.m128i_i32[0] = *(_DWORD *)v44;
      if ( (v41.m128i_i8[0] & 0xF) != 2 )
        return 0;
LABEL_16:
      v12 = *(_QWORD *)(v44 + 16);
      if ( !v12 )
        goto LABEL_26;
      v13 = 0;
      for ( i = 0; i != v12; ++i )
      {
        v13 += *(_QWORD *)(*(_QWORD *)(v44 + 8) + 16LL * (int)i + 8);
        if ( v13 > 0x10 )
          return 0;
      }
      if ( v10 * v13 <= 0x10 )
      {
LABEL_26:
        v17 = 8 * a3;
        v49 = nullptr;
        v50 = 0;
        v18 = -1;
        v19 = v46->m128i_i32[1];
        if ( v19 != 8 )
          v18 = (1LL << (8 * (unsigned __int8)v19)) - 1;
        v20 = *(_DWORD *)(v44 + 4);
        v21 = -1;
        if ( v20 != 8 )
          v21 = (1LL << (8 * (unsigned __int8)v20)) - 1;
        v22 = 2 * v8;
        v45 = v18 - (v21 << v17);
        v23 = (_QWORD *)v46->m128i_i64[1];
        v24 = &v23[v22];
        v43 = v23;
        v47 = &v23[v22];
        if ( v23 == &v23[v22] )
        {
          v31 = 0;
          v32 = 0;
        }
        else
        {
          do
          {
            for ( j = 0; j < v43[1]; ++j )
            {
              v25 = v45 & (*v43 + j);
              v26 = *(__int64 **)(v44 + 8);
              v27 = 2LL * *(_QWORD *)(v44 + 16);
              v41.m128i_i64[0] = (__int64)&v26[v27];
              if ( v26 != &v26[v27] )
              {
                v28 = v26;
                do
                {
                  for ( k = 0; k < v28[1]; ++k )
                  {
                    v30 = *v28;
                    v48[1] = 1;
                    v48[0] = v25 + ((k + v30) << v17);
                    sub_312A30(&v49, v48, v24, v17, v12, v26);
                  }
                  v28 += 2;
                }
                while ( (__int64 *)v41.m128i_i64[0] != v28 );
              }
              v24 = v43;
            }
            v43 += 2;
          }
          while ( v47 != v43 );
          v31 = _mm_loadu_si128(&v50);
          v47 = (_QWORD *)v46->m128i_i64[1];
          v32 = (__int64)v49;
        }
        v33 = v46;
        v34 = v46[1].m128i_i64[1];
        v46->m128i_i64[1] = v32;
        v35 = v47;
        v33[1] = v31;
        v50.m128i_i64[1] = v34;
        v49 = v35;
        if ( v35 )
        {
          v50.m128i_i64[0] = 0;
          qfree();
        }
        return 1;
      }
      return 0;
    }
    v9 = v46->m128i_i64[1];
LABEL_10:
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v10 += *(_QWORD *)(v9 + 16LL * (int)v11 + 8);
      if ( v10 > 0x10 )
        return 0;
      if ( v8 == ++v11 )
        goto LABEL_15;
    }
  }
  v6 = 0;
  if ( v5 == 2 )
  {
    v8 = a1[1].m128i_i64[0];
    v41.m128i_i32[0] = *(_DWORD *)v44;
    if ( (v41.m128i_i8[0] & 0xF) != 2 )
    {
      if ( !v8 )
        return v6;
      v9 = v46->m128i_i64[1];
      goto LABEL_10;
    }
    v9 = a1->m128i_i64[1];
    v15 = v9;
    v16 = *(_DWORD *)(v44 + 4);
    if ( v16 == 8
      || (1LL << (8 * (unsigned __int8)v16)) - 1 >= (unsigned __int64)(*(_QWORD *)(v9 + 16 * v8 - 16 + 8)
                                                                     + *(_QWORD *)(v9 + 16 * v8 - 16)
                                                                     - 1LL) )
    {
      v36 = nullptr;
      v37 = *(_QWORD *)(v44 + 16);
      v41 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
      if ( v37 )
      {
        v40 = 16 * v37;
        v36 = (void *)qalloc_or_throw();
        memcpy(v36, *(const void **)(v44 + 8), v40);
        v15 = v46->m128i_i64[1];
      }
      if ( v15 )
      {
        v46[1].m128i_i64[0] = 0;
        qfree();
      }
      v38 = v46;
      v39 = _mm_load_si128(&v41);
      v46->m128i_i64[1] = (__int64)v36;
      v38[1] = v39;
      return 1;
    }
    v10 = 0;
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_10;
  }
  return v6;
}

