const char *__fastcall sub_35740(const __m128i *a1, __int64 a2)
{
  bool v2; // cc
  __int64 v5; // rax
  __m128i v6; // xmm0
  _QWORD *v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 *v10; // r13
  const void *v11; // r8
  void *v12; // rdi
  size_t v13; // r9
  __int64 regvar; // rax
  const void *v15; // r12
  size_t v16; // rax
  size_t v17; // r15
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  struct _Unwind_Exception *v23; // rbx
  unsigned __int64 v24; // [rsp+0h] [rbp-88h]
  unsigned __int64 v25; // [rsp+0h] [rbp-88h]
  size_t v26; // [rsp+0h] [rbp-88h]
  __int64 v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+8h] [rbp-80h]
  const void *v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+18h] [rbp-70h] BYREF
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __m128i v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v2 = a1[1].m128i_i64[0] <= 1uLL;
  v34 = __readfsqword(0x28u);
  if ( !v2 )
    return (const char *)a1->m128i_i64[1];
  v5 = sub_135E0(a1, a2);
  v6 = _mm_loadu_si128(a1 + 2);
  v7 = (_QWORD *)(v5 + 1040);
  LOBYTE(v31) = 1;
  v32 = v6;
  v33 = 0;
  v30 = -1;
  if ( !(unsigned __int8)sub_2CA10((_QWORD *)(v5 + 1040), &v30, &v31)
    || !get_func()
    || (v8 = a1[3].m128i_i64[0], v9 = *(_QWORD *)(v8 + 16), v9 <= 1) )
  {
LABEL_21:
    v18 = a1[1].m128i_u64[0];
    goto LABEL_22;
  }
  v10 = &a1->m128i_i64[1];
  if ( &a1->m128i_u64[1] != (unsigned __int64 *)(v8 + 8) )
  {
    v11 = *(const void **)(v8 + 8);
    v12 = (void *)a1->m128i_i64[1];
    v13 = v9 - 1;
    if ( a1[1].m128i_i64[1] < v9 )
    {
      v29 = *(const void **)(v8 + 8);
      v19 = qvector_reserve();
      v11 = v29;
      v13 = v9 - 1;
      a1->m128i_i64[1] = v19;
      v12 = (void *)v19;
    }
    a1[1].m128i_i64[0] = v9;
    memmove(v12, v11, v13);
    *(_BYTE *)(a1->m128i_i64[1] + v9 - 1) = 0;
  }
  regvar = find_regvar();
  if ( regvar )
  {
    v15 = *(const void **)(regvar + 16);
    if ( v15 )
    {
      v16 = strlen(*(const char **)(regvar + 16));
      v17 = v16;
      if ( !v16 )
      {
        a1[1].m128i_i64[0] = 0;
        goto LABEL_14;
      }
      v20 = (void *)a1->m128i_i64[1];
      v21 = v16 + 1;
      if ( a1[1].m128i_i64[1] < v16 + 1 )
      {
        v26 = v16 + 1;
        v22 = qvector_reserve();
        v21 = v26;
        a1->m128i_i64[1] = v22;
        v20 = (void *)v22;
      }
      a1[1].m128i_i64[0] = v21;
      memmove(v20, v15, v17);
      *(_BYTE *)(a1->m128i_i64[1] + v17) = 0;
      v18 = a1[1].m128i_u64[0];
      goto LABEL_22;
    }
  }
  v18 = a1[1].m128i_u64[0];
  if ( !v18 )
    goto LABEL_14;
  if ( !strcmp((const char *)a1->m128i_i64[1], "retval") )
  {
    v28 = a1[2].m128i_i64[1];
    v25 = a1[2].m128i_u64[0];
    qmutex_lock();
    if ( !sub_2C930(v7, v25, v28) )
      goto LABEL_30;
    qmutex_unlock();
    sub_13B20(&a1->m128i_i64[1]);
    goto LABEL_21;
  }
LABEL_22:
  if ( v18 > 1 )
    return (const char *)a1->m128i_i64[1];
  v10 = &a1->m128i_i64[1];
LABEL_14:
  v27 = a1[2].m128i_i64[1];
  v24 = a1[2].m128i_u64[0];
  qmutex_lock();
  if ( !sub_2C930(v7, v24, v27) )
  {
    if ( under_debugger )
      goto LABEL_32;
    interr();
LABEL_30:
    if ( !under_debugger )
    {
      v23 = (struct _Unwind_Exception *)interr();
      qmutex_unlock();
      _Unwind_Resume(v23);
    }
LABEL_32:
    BUG();
  }
  qmutex_unlock();
  sub_13B20(v10);
  if ( a1[1].m128i_i64[0] )
    return (const char *)a1->m128i_i64[1];
  return nptr;
}

