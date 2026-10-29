_QWORD *__fastcall sub_10E50(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 sort; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  int error_code; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // r15d
  __m128 v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax
  _BYTE *v27; // rsi
  _QWORD *v29; // rbp
  const char *v30; // rax
  _QWORD *v31; // rbp
  const char *v32; // rax
  _QWORD *exception; // rbx
  const char *error_msg; // rax
  _BYTE *v35; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+10h] [rbp-A8h]
  _BYTE *v37; // [rsp+18h] [rbp-A0h]
  _UNKNOWN **v38; // [rsp+20h] [rbp-98h]
  __m128i v39; // [rsp+28h] [rbp-90h]
  _UNKNOWN **v40; // [rsp+40h] [rbp-78h]
  __m128 v41; // [rsp+48h] [rbp-70h]
  __m128 v42; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v43 = __readfsqword(0x28u);
  sort = Z3_get_sort(*(_QWORD *)(v5 + 8), v6);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = sort;
  error_code = Z3_get_error_code(*(_QWORD *)(v9 + 8));
  if ( error_code && *(_BYTE *)v9 )
  {
    LODWORD(v35) = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v9 + 8), (unsigned int)v35);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD *)(v12 + 8);
  v39 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)(unsigned __int64)v10);
  Z3_inc_ref(v13, v10);
  v14 = *(_QWORD *)(v5 + 8);
  v38 = &off_4D870;
  v15 = Z3_mk_int(v14, a3, v10);
  v16 = *(_QWORD *)(v5 + 8);
  v35 = (_BYTE *)v15;
  v17 = Z3_get_error_code(v16);
  v18 = _mm_loadh_ps((const double *)&v35);
  if ( v17 && *(_BYTE *)v5 )
  {
    v29 = __cxa_allocate_exception(0x10u);
    v30 = (const char *)Z3_get_error_msg(*(_QWORD *)(v5 + 8), v17);
    sub_105D0(v29, v30);
    __cxa_throw(v29, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v19 = *(_QWORD *)(v5 + 8);
  v41 = v18;
  Z3_inc_ref(v19, v35);
  v20 = *(_QWORD *)(a2 + 8);
  v40 = &off_4D890;
  v42 = _mm_loadh_ps((const double *)&v35);
  v21 = Z3_mk_distinct(*(_QWORD *)(v20 + 8), 2, &v42);
  v22 = *(_QWORD *)(a2 + 8);
  v36 = v21;
  v23 = *(_QWORD *)(v22 + 8);
  v37 = (_BYTE *)v22;
  v24 = Z3_get_error_code(v23);
  v25 = v36;
  if ( v24 && *v37 )
  {
    v35 = v37;
    LODWORD(v36) = v24;
    v31 = __cxa_allocate_exception(0x10u);
    v32 = (const char *)Z3_get_error_msg(*((_QWORD *)v35 + 1), (unsigned int)v36);
    sub_105D0(v31, v32);
    __cxa_throw(v31, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v26 = *(_QWORD *)(a2 + 8);
  a1[2] = v36;
  *a1 = &off_4D850;
  a1[1] = v26;
  Z3_inc_ref(*(_QWORD *)(v26 + 8), v25);
  v27 = v35;
  *a1 = &off_4D890;
  if ( v27 )
    Z3_dec_ref(*(_QWORD *)(v5 + 8));
  if ( v10 )
    Z3_dec_ref(*(_QWORD *)(v12 + 8));
  return a1;
}

