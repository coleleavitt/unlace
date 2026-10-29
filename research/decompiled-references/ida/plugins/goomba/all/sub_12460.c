_QWORD *__fastcall sub_12460(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 sort; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned int error_code; // eax
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int sort_kind; // r15d
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // r13
  unsigned int v20; // r14d
  __int64 v21; // rax
  _QWORD *exception; // rbx
  const char *v24; // rax
  unsigned int v25; // r15d
  const char *error_msg; // rax
  __m128i v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  sort = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v7 = *(_QWORD *)(a2 + 8);
  v8 = sort;
  error_code = Z3_get_error_code(*(_QWORD *)(v7 + 8));
  if ( error_code && *(_BYTE *)v7 )
  {
    v25 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v7 + 8), v25);
    sub_105D0(exception, error_msg);
LABEL_12:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v10 = *(_QWORD *)(a2 + 8);
  v27 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)(unsigned __int64)v8);
  Z3_inc_ref(*(_QWORD *)(v10 + 8), v8);
  sort_kind = Z3_get_sort_kind(*(_QWORD *)(v10 + 8), v8);
  if ( v8 )
    Z3_dec_ref(*(_QWORD *)(v10 + 8));
  v15 = *(_QWORD *)(a3 + 16);
  v16 = *(_QWORD *)(a2 + 16);
  v17 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  if ( sort_kind == 1 )
    v18 = Z3_mk_xor(v17, v16, v15, v11, v12, v13, &off_4D870, v27.m128i_i64[0], v27.m128i_i64[1], v28);
  else
    v18 = Z3_mk_bvxor(v17, v16, v15, v11, v12, v13, &off_4D870, v27.m128i_i64[0], v27.m128i_i64[1], v28);
  v19 = *(_QWORD *)(a2 + 8);
  v20 = Z3_get_error_code(*(_QWORD *)(v19 + 8));
  if ( v20 && *(_BYTE *)v19 )
  {
    exception = __cxa_allocate_exception(0x10u);
    v24 = (const char *)Z3_get_error_msg(*(_QWORD *)(v19 + 8), v20);
    sub_105D0(exception, v24);
    goto LABEL_12;
  }
  v21 = *(_QWORD *)(a2 + 8);
  a1[2] = v18;
  *a1 = &off_4D850;
  a1[1] = v21;
  Z3_inc_ref(*(_QWORD *)(v21 + 8), v18);
  *a1 = &off_4D890;
  return a1;
}

