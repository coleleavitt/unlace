unsigned __int64 __fastcall sub_2AEE30(__int64 a1, __int64 *a2, unsigned __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int8 (*v10)(void); // rax
  __int64 v11; // rsi
  char *v12; // rbx
  char *v13; // rax
  signed __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  char *v19; // rax
  char *v20; // rsi
  __m128i v21; // xmm0
  char *v22; // rdi
  const void *v23; // r13
  __int64 v24; // r15
  const char *v25; // rdi
  size_t v26; // rax
  __m128 v27; // xmm0
  size_t v28; // r8
  __int64 v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rax
  char *v35; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-A0h]
  __m128i v42; // [rsp+10h] [rbp-98h] BYREF
  char **p_s; // [rsp+20h] [rbp-88h]
  size_t v44; // [rsp+28h] [rbp-80h]
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __m128i v46; // [rsp+38h] [rbp-70h]
  __int64 v47; // [rsp+50h] [rbp-58h] BYREF
  __m128i v48; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v8 = 80 * a3;
    v9 = 80 * a3 + *(_QWORD *)(a1 + 40);
    v10 = **(unsigned __int8 (***)(void))v9;
    if ( (char *)v10 == (char *)sub_2A7D40 )
    {
      if ( *(_QWORD *)(v9 + 8) == *(_QWORD *)(v9 + 56) && *(_DWORD *)(v9 + 16) == *(_DWORD *)(v9 + 64) )
        return v49 - __readfsqword(0x28u);
    }
    else if ( !v10() )
    {
      return v49 - __readfsqword(0x28u);
    }
    switch_dbctx();
    v11 = *(_QWORD *)(a1 + 40) + v8 + 24;
    p_s = &s;
    s = nullptr;
    v46 = 0;
    sub_2A8F60(&s, v11);
    while ( v46.m128i_i64[0] )
    {
      v12 = s;
      v13 = strchr(s, 10);
      if ( !v13 )
        break;
      v14 = v13 - v12;
      if ( v13 - v12 == -1 )
        break;
      v15 = a2[1];
      v16 = *a2;
      if ( a2[2] < (unsigned __int64)(v15 + 1) )
      {
        v38 = qvector_reserve();
        *a2 = v38;
        v15 = a2[1];
        v16 = v38;
      }
      v17 = v14 + 1;
      v18 = v16 + 24 * v15;
      *(_QWORD *)v18 = 0;
      v19 = s;
      *(_OWORD *)(v18 + 8) = 0;
      ++a2[1];
      v20 = *(char **)v18;
      *(_QWORD *)v18 = v19;
      v21 = _mm_loadu_si128((const __m128i *)(v18 + 8));
      s = v20;
      *(__m128i *)(v18 + 8) = v46;
      v46 = v21;
      v22 = *(char **)v18;
      v23 = (const void *)(v14 + 1 + *(_QWORD *)v18);
      if ( v23 )
      {
        v24 = v21.m128i_i64[0];
        v25 = (const char *)(v14 + 1 + *(_QWORD *)v18);
        v42 = v21;
        v26 = strlen(v25);
        v27 = (__m128)_mm_load_si128(&v42);
        v28 = v26;
        v29 = v26;
        if ( v24 )
        {
          --v24;
          v29 = v26 + v24;
        }
        a6 = _mm_movehl_ps(a6, v27);
        v30 = v29 + 1;
        if ( a6.m128_u64[0] < v29 + 1 )
        {
          v44 = v26;
          v42.m128i_i64[0] = v29;
          v41 = v29 + 1;
          s = (char *)qvector_reserve();
          v28 = v44;
          v20 = s;
          v29 = v42.m128i_i64[0];
          v30 = v41;
        }
        v46.m128i_i64[0] = v30;
        v20[v29] = 0;
        memmove(&s[v24], v23, v28);
        v22 = *(char **)v18;
      }
      if ( v14 )
      {
        v37 = *(_QWORD *)(v18 + 8);
        if ( v37 < v17 )
        {
          if ( *(_QWORD *)(v18 + 16) < v17 )
          {
            v39 = qvector_reserve();
            *(_QWORD *)v18 = v39;
            v22 = (char *)v39;
            v37 = *(_QWORD *)(v18 + 8);
          }
          memset(&v22[v37], 0, v17 - v37);
          *(_QWORD *)(v18 + 8) = v17;
          v22 = *(char **)v18;
        }
        else if ( v17 != v37 )
        {
          *(_QWORD *)(v18 + 8) = v17;
        }
        v22[v14] = 0;
      }
      else if ( v22 )
      {
        *(_QWORD *)(v18 + 8) = 0;
        qfree();
        *(_QWORD *)v18 = 0;
        *(_QWORD *)(v18 + 16) = 0;
      }
    }
    v47 = 0;
    v48 = 0;
    sub_2A8F60(&v47, (__int64)p_s);
    v31 = a2[1];
    v32 = *a2;
    if ( a2[2] < (unsigned __int64)(v31 + 1) )
    {
      v40 = qvector_reserve();
      *a2 = v40;
      v31 = a2[1];
      v32 = v40;
    }
    v33 = _mm_loadu_si128(&v48);
    v34 = v32 + 24 * v31;
    *(_QWORD *)v34 = v47;
    v35 = s;
    *(__m128i *)(v34 + 8) = v33;
    ++a2[1];
    if ( v35 )
    {
      v46.m128i_i64[0] = 0;
      qfree();
    }
  }
  return v49 - __readfsqword(0x28u);
}

