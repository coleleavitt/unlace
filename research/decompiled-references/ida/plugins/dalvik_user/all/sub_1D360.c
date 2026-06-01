unsigned __int64 __fastcall sub_1D360(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 i; // rbx
  _QWORD *v6; // rax
  const char *v7; // rbp
  char *v8; // rax
  char *v9; // r12
  const char *v10; // r13
  size_t v11; // rax
  size_t v12; // rbx
  void *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  _BYTE *v19; // rbx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  _BYTE *v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // rax
  __int64 v30; // r12
  size_t v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  _BYTE *v36; // rbx
  __int64 v37; // rbp
  __m128i v38; // xmm0
  __int64 v39; // rax
  _BYTE *v40; // rdi
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-68h] BYREF
  _BYTE *v46; // [rsp+10h] [rbp-58h] BYREF
  __m128i v47; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v3 = *a1;
  v48 = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 24 * i);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    v7 = *(const char **)a2;
    if ( **(_BYTE **)a2 )
    {
      while ( 1 )
      {
        v8 = strchr(v7, 10);
        v9 = v8;
        if ( !v8 )
          break;
        v10 = v8 + 1;
        if ( v7 < v8 )
        {
          while ( *(v8 - 1) == 13 )
          {
            if ( --v8 == v7 )
            {
              v46 = nullptr;
              v47 = 0;
              goto LABEL_19;
            }
          }
        }
        v46 = nullptr;
        v11 = v8 - v7;
        v47 = 0;
        v12 = v11;
        if ( v11 )
        {
          v13 = nullptr;
          v14 = v11 + 1;
          if ( v11 != -1 )
          {
            v45.m128i_i64[0] = v11 + 1;
            v46 = (_BYTE *)qvector_reserve();
            v14 = v45.m128i_i64[0];
            v13 = v46;
          }
          v47.m128i_i64[0] = v14;
          memmove(v13, v7, v12);
          v46[v12] = 0;
        }
LABEL_19:
        v15 = a1[1];
        v16 = *a1;
        v17 = a1[2];
        v18 = v15 + 1;
        if ( (unsigned __int64)&v46 < *a1 || (unsigned __int64)&v46 >= v16 + 24 * v17 )
        {
          if ( v17 < v18 )
          {
            v27 = qvector_reserve();
            *a1 = v27;
            v16 = v27;
            v15 = a1[1];
          }
          v24 = _mm_loadu_si128(&v47);
          v25 = v16 + 24 * v15;
          *(_QWORD *)v25 = v46;
          *(__m128i *)(v25 + 8) = v24;
          ++a1[1];
          if ( !v9[1] )
            return v48 - __readfsqword(0x28u);
        }
        else
        {
          v19 = v46;
          v20 = _mm_loadl_epi64(&v47);
          v46 = nullptr;
          v21 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
          v47 = 0;
          if ( v17 < v18 )
          {
            v45.m128i_i64[1] = v21.m128i_i64[0];
            v45.m128i_i64[0] = v20.m128i_i64[0];
            v28 = qvector_reserve();
            *a1 = v28;
            v16 = v28;
            v15 = a1[1];
            v21 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
            v20 = _mm_loadl_epi64(&v45);
          }
          v22 = v16 + 24 * v15;
          *(_QWORD *)v22 = v19;
          *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
          v23 = v46;
          ++a1[1];
          if ( v23 )
          {
            v47.m128i_i64[0] = 0;
            qfree();
          }
          if ( !v9[1] )
            return v48 - __readfsqword(0x28u);
        }
        v7 = v10;
      }
      v46 = nullptr;
      v47 = 0;
      if ( v7 )
      {
        v29 = strlen(v7);
        v30 = v29 + 1;
        v31 = v29;
        v46 = (_BYTE *)qvector_reserve();
        v47.m128i_i64[0] = v30;
        memmove(v46, v7, v31);
        v46[v31] = 0;
      }
      v32 = a1[1];
      v33 = *a1;
      v34 = a1[2];
      v35 = v32 + 1;
      if ( (unsigned __int64)&v46 < *a1 || (unsigned __int64)&v46 >= v33 + 24 * v34 )
      {
        if ( v34 < v35 )
        {
          v43 = qvector_reserve();
          *a1 = v43;
          v33 = v43;
          v32 = a1[1];
        }
        v41 = _mm_loadu_si128(&v47);
        v42 = v33 + 24 * v32;
        *(_QWORD *)v42 = v46;
        *(__m128i *)(v42 + 8) = v41;
        ++a1[1];
      }
      else
      {
        v36 = v46;
        v37 = v47.m128i_i64[1];
        v46 = nullptr;
        v38 = _mm_loadl_epi64(&v47);
        v47 = 0;
        if ( v34 < v35 )
        {
          v45.m128i_i64[0] = v38.m128i_i64[0];
          v44 = qvector_reserve();
          *a1 = v44;
          v33 = v44;
          v38 = _mm_loadl_epi64(&v45);
          v32 = a1[1];
        }
        v39 = v33 + 24 * v32;
        *(_QWORD *)v39 = v36;
        *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64(v38, (__m128i)(unsigned __int64)v37);
        v40 = v46;
        ++a1[1];
        if ( v40 )
        {
          v47.m128i_i64[0] = 0;
          qfree();
        }
      }
    }
  }
  return v48 - __readfsqword(0x28u);
}

