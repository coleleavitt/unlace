_QWORD *__fastcall sub_12670(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 sort; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  unsigned int error_code; // eax
  char is_seq_sort; // r14
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  unsigned int v21; // eax
  char is_re_sort; // r14
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  _QWORD *exception; // rbx
  const char *v27; // rax
  const char *v28; // rax
  unsigned int v29; // r15d
  const char *error_msg; // rax
  __int64 v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+8h] [rbp-80h]
  unsigned int v33; // [rsp+8h] [rbp-80h]
  __m128i v34; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v35 = __readfsqword(0x28u);
  sort = Z3_get_sort(*(_QWORD *)(v4 + 8), v5);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = sort;
  error_code = Z3_get_error_code(*(_QWORD *)(v8 + 8));
  if ( error_code && *(_BYTE *)v8 )
  {
    v29 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v8 + 8), v29);
    sub_105D0(exception, error_msg);
LABEL_19:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v31 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v31 + 8), v9);
  is_seq_sort = Z3_is_seq_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), v9);
  if ( v9 )
    Z3_dec_ref(*(_QWORD *)(v31 + 8));
  if ( is_seq_sort )
  {
    v12 = *(_QWORD *)(a2 + 8);
    v34 = (__m128i)_mm_loadh_ps((const double *)(a3 + 16));
    v13 = Z3_mk_seq_concat(*(_QWORD *)(v12 + 8), 2, &v34);
  }
  else
  {
    v18 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
    v19 = *(_QWORD *)(a2 + 8);
    v20 = v18;
    v21 = Z3_get_error_code(*(_QWORD *)(v19 + 8));
    if ( v21 && *(_BYTE *)v19 )
    {
      v33 = v21;
      exception = __cxa_allocate_exception(0x10u);
      v27 = (const char *)Z3_get_error_msg(*(_QWORD *)(v19 + 8), v33);
      sub_105D0(exception, v27);
      goto LABEL_19;
    }
    v32 = *(_QWORD *)(a2 + 8);
    Z3_inc_ref(*(_QWORD *)(v32 + 8), v20);
    is_re_sort = Z3_is_re_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), v20);
    if ( v20 )
      Z3_dec_ref(*(_QWORD *)(v32 + 8));
    v23 = *(_QWORD *)(a3 + 16);
    v24 = *(_QWORD *)(a2 + 16);
    v25 = *(_QWORD *)(a2 + 8);
    if ( is_re_sort )
    {
      v34 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v23);
      v13 = Z3_mk_re_concat(*(_QWORD *)(v25 + 8), 2, &v34);
    }
    else
    {
      v13 = Z3_mk_concat(*(_QWORD *)(v25 + 8), v24, v23);
    }
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v15 && *(_BYTE *)v14 )
  {
    exception = __cxa_allocate_exception(0x10u);
    v28 = (const char *)Z3_get_error_msg(*(_QWORD *)(v14 + 8), v15);
    sub_105D0(exception, v28);
    goto LABEL_19;
  }
  v16 = *(_QWORD *)(a2 + 8);
  a1[2] = v13;
  *a1 = &off_4D850;
  a1[1] = v16;
  Z3_inc_ref(*(_QWORD *)(v16 + 8), v13);
  *a1 = &off_4D890;
  return a1;
}

