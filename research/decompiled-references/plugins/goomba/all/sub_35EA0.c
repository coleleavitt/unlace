__int64 __fastcall sub_35EA0(__int64 a1, int *a2)
{
  int v3; // eax
  char *v5; // rsi
  char **v6; // rdi
  _DWORD *v7; // r13
  int v8; // r12d
  __int64 i; // rbx
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  const char *v11; // rax
  char *v12; // rbp
  size_t v13; // rax
  __int64 v14; // r8
  size_t v15; // r9
  size_t v16; // r10
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbp
  char *v23; // rsi
  __m128i v24; // xmm0
  __int64 (__fastcall *v26)(__int64, int *); // rax
  const char *v27; // rax
  const char *v28; // rbx
  size_t v29; // rax
  size_t v30; // r12
  size_t v31; // rbp
  void *v32; // rax
  struct _Unwind_Exception *v33; // rbx
  unsigned __int64 v34; // [rsp+0h] [rbp-78h]
  __int64 v35; // [rsp+0h] [rbp-78h]
  __int64 v36; // [rsp+8h] [rbp-70h]
  size_t v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+10h] [rbp-68h]
  size_t v39; // [rsp+18h] [rbp-60h]
  char *v40; // [rsp+20h] [rbp-58h] BYREF
  __m128i v41; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v3 = *a2;
  v42 = __readfsqword(0x28u);
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( !under_debugger )
      {
        v33 = (struct _Unwind_Exception *)interr(30825);
        if ( v40 )
        {
          v41.m128i_i64[0] = 0;
          qfree(v40);
        }
        _Unwind_Resume(v33);
      }
      BUG();
    }
    v5 = nullptr;
    v6 = &v40;
    v41 = 0;
    v40 = nullptr;
    v40 = (char *)qvector_reserve(&v40, 0, 5, 1);
    v7 = a2 + 4;
    v8 = 0;
    v41.m128i_i64[0] = 5;
    strcpy(v40, "AND(");
    for ( i = *((_QWORD *)v7 + 2); v7 != (_DWORD *)i; i = std::_Rb_tree_increment(i) )
    {
      if ( ++v8 > 1 )
      {
        v19 = v41.m128i_i64[0];
        v20 = 2;
        if ( v41.m128i_i64[0] )
        {
          v20 = v41.m128i_i64[0] + 1;
          v19 = v41.m128i_i64[0] - 1;
        }
        v5 = v40;
        if ( v41.m128i_i64[1] < v20 )
        {
          v6 = &v40;
          v36 = v19;
          v34 = v20;
          v40 = (char *)qvector_reserve(&v40, v40, v20, 1);
          v19 = v36;
          v5 = v40;
          v20 = v34;
        }
        v41.m128i_i64[0] = v20;
        v5[v19] = 44;
        v40[v19 + 1] = 0;
      }
      hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v6, v5);
      v5 = (char *)(i + 32);
      v11 = (const char *)hexdsp(278, i + 32);
      v12 = (char *)v11;
      if ( v11 )
      {
        v13 = strlen(v11);
        v14 = v41.m128i_i64[0];
        v15 = v13;
        v16 = v13;
        if ( v41.m128i_i64[0] )
        {
          v14 = v41.m128i_i64[0] - 1;
          v16 = v13 + v41.m128i_i64[0] - 1;
        }
        v17 = v40;
        v18 = v16 + 1;
        if ( v41.m128i_i64[1] < v16 + 1 )
        {
          v39 = v13;
          v38 = v14;
          v37 = v16;
          v35 = v16 + 1;
          v40 = (char *)qvector_reserve(&v40, v40, v18, 1);
          v15 = v39;
          v17 = v40;
          v14 = v38;
          v16 = v37;
          v18 = v35;
        }
        v41.m128i_i64[0] = v18;
        v17[v16] = 0;
        v5 = v12;
        memmove(&v40[v14], v12, v15);
      }
      v6 = (char **)i;
    }
    v21 = v41.m128i_i64[0];
    v22 = 2;
    if ( v41.m128i_i64[0] )
    {
      v22 = v41.m128i_i64[0] + 1;
      v23 = v40;
      v21 = v41.m128i_i64[0] - 1;
      if ( v41.m128i_i64[1] >= (unsigned __int64)(v41.m128i_i64[0] + 1) )
        goto LABEL_20;
    }
    else
    {
      v23 = v40;
      if ( v41.m128i_i64[1] >= 2uLL )
      {
LABEL_20:
        v41.m128i_i64[0] = v22;
        v23[v21] = 41;
        v40[v21 + 1] = 0;
        v24 = _mm_loadu_si128(&v41);
        *(_QWORD *)a1 = v40;
        *(__m128i *)(a1 + 8) = v24;
        return a1;
      }
    }
    v40 = (char *)qvector_reserve(&v40, v23, v22, 1);
    v23 = v40;
    goto LABEL_20;
  }
  v26 = (__int64 (__fastcall *)(__int64, int *))get_hexdsp(a1, a2);
  v27 = (const char *)v26(278, a2 + 14);
  *(_QWORD *)a1 = 0;
  v28 = v27;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v27 )
  {
    v29 = strlen(v27);
    v30 = v29 + 1;
    v31 = v29;
    v32 = (void *)qvector_reserve(a1, 0, v29 + 1, 1);
    *(_QWORD *)a1 = v32;
    *(_QWORD *)(a1 + 8) = v30;
    memmove(v32, v28, v31);
    *(_BYTE *)(*(_QWORD *)a1 + v31) = 0;
  }
  return a1;
}
