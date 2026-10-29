_QWORD *__fastcall sub_13D50(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // r12
  unsigned int error_code; // eax
  __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdi
  _QWORD *v12; // rbp
  const char *v13; // rax
  _QWORD *exception; // rbp
  const char *error_msg; // rax
  unsigned int v16; // [rsp+Ch] [rbp-4Ch]
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]

  v6 = Z3_mk_bv_sort(*(_QWORD *)(a2 + 8), a4);
  error_code = Z3_get_error_code(*(_QWORD *)(a2 + 8));
  if ( error_code && *(_BYTE *)a2 )
  {
    v17 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 8), v17);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  Z3_inc_ref(*(_QWORD *)(a2 + 8), v6);
  v8 = Z3_mk_int(*(_QWORD *)(a2 + 8), a3, v6);
  v9 = Z3_get_error_code(*(_QWORD *)(a2 + 8));
  if ( v9 && *(_BYTE *)a2 )
  {
    v16 = v9;
    v12 = __cxa_allocate_exception(0x10u);
    v13 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 8), v16);
    sub_105D0(v12, v13);
    __cxa_throw(v12, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  a1[1] = a2;
  v10 = *(_QWORD *)(a2 + 8);
  *a1 = &off_4D850;
  a1[2] = v8;
  Z3_inc_ref(v10, v8);
  *a1 = &off_4D890;
  if ( v6 )
    Z3_dec_ref(*(_QWORD *)(a2 + 8));
  return a1;
}

