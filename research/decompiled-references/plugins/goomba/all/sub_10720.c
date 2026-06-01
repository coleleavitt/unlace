_QWORD *__fastcall sub_10720(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  const char *v4; // rax
  _QWORD *v5; // rbp
  const char *v6; // rax
  unsigned int v7; // r15d
  _QWORD *exception; // rbp
  const char *error_msg; // rax
  int v11; // ecx
  __int64 v13; // r12
  unsigned int error_code; // eax
  __int64 v15; // r15
  unsigned int v16; // r13d
  __int64 v17; // r13
  unsigned int v18; // r15d
  __int64 v19; // rdi

  v11 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = v11 + 1;
  qsnprintf(a2 + 8, 12, "y%d", v11);
  v13 = Z3_mk_bv_sort(*(_QWORD *)(a2 + 32), (unsigned int)(8 * *(_DWORD *)(a3 + 4)));
  error_code = Z3_get_error_code(*(_QWORD *)(a2 + 32));
  if ( error_code && *(_BYTE *)(a2 + 24) )
  {
    v7 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v7);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  Z3_inc_ref(*(_QWORD *)(a2 + 32), v13);
  v15 = Z3_mk_string_symbol(*(_QWORD *)(a2 + 32), a2 + 8);
  v16 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
  if ( v16 && *(_BYTE *)(a2 + 24) )
  {
    v5 = __cxa_allocate_exception(0x10u);
    v6 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v16);
    sub_105D0(v5, v6);
    __cxa_throw(v5, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v17 = Z3_mk_const(*(_QWORD *)(a2 + 32), v15, v13);
  v18 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
  if ( v18 && *(_BYTE *)(a2 + 24) )
  {
    v3 = __cxa_allocate_exception(0x10u);
    v4 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v18);
    sub_105D0(v3, v4);
    __cxa_throw(v3, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  a1[1] = a2 + 24;
  v19 = *(_QWORD *)(a2 + 32);
  *a1 = &off_4D850;
  a1[2] = v17;
  Z3_inc_ref(v19, v17);
  *a1 = &off_4D890;
  if ( v13 )
    Z3_dec_ref(*(_QWORD *)(a2 + 32));
  return a1;
}
