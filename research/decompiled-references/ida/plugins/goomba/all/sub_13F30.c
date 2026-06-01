_QWORD *__fastcall sub_13F30(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r12
  unsigned int error_code; // eax
  unsigned int v8; // eax
  __int64 v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rax
  _QWORD *v19; // rbp
  const char *v20; // rax
  _QWORD *v21; // rbp
  const char *v22; // rax
  _QWORD *v23; // rbp
  const char *v24; // rax
  _QWORD *exception; // rbp
  const char *error_msg; // rax
  _QWORD *v27; // rbp
  const char *v28; // rax
  __int64 v29; // [rsp+8h] [rbp-A0h]
  unsigned int v30; // [rsp+8h] [rbp-A0h]
  unsigned int v31; // [rsp+8h] [rbp-A0h]
  unsigned int v32; // [rsp+8h] [rbp-A0h]
  unsigned int v33; // [rsp+8h] [rbp-A0h]

  v6 = Z3_mk_bv_sort(*(_QWORD *)(a2 + 32), a4);
  error_code = Z3_get_error_code(*(_QWORD *)(a2 + 32));
  if ( error_code && *(_BYTE *)(a2 + 24) )
  {
    v33 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v33);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  Z3_inc_ref(*(_QWORD *)(a2 + 32), v6);
  v29 = Z3_mk_int(*(_QWORD *)(a2 + 32), 0, v6);
  v8 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
  if ( v8 && *(_BYTE *)(a2 + 24) )
  {
    v32 = v8;
    v23 = __cxa_allocate_exception(0x10u);
    v24 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v32);
    sub_105D0(v23, v24);
    __cxa_throw(v23, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  Z3_inc_ref(*(_QWORD *)(a2 + 32), v29);
  if ( v6 )
    Z3_dec_ref(*(_QWORD *)(a2 + 32));
  v9 = Z3_mk_bv_sort(*(_QWORD *)(a2 + 32), a4);
  v10 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
  if ( v10 && *(_BYTE *)(a2 + 24) )
  {
    v27 = __cxa_allocate_exception(0x10u);
    v28 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v10);
    sub_105D0(v27, v28);
    __cxa_throw(v27, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  Z3_inc_ref(*(_QWORD *)(a2 + 32), v9);
  v11 = Z3_mk_int(*(_QWORD *)(a2 + 32), 1, v9);
  v12 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
  if ( v12 && *(_BYTE *)(a2 + 24) )
  {
    v31 = v12;
    v21 = __cxa_allocate_exception(0x10u);
    v22 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v31);
    sub_105D0(v21, v22);
    __cxa_throw(v21, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  Z3_inc_ref(*(_QWORD *)(a2 + 32), v11);
  if ( v9 )
    Z3_dec_ref(*(_QWORD *)(a2 + 32));
  v13 = Z3_mk_ite(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16), v11, v29);
  v14 = *(_QWORD *)(a3 + 8);
  v15 = v13;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 && *(_BYTE *)v14 )
  {
    v30 = v16;
    v19 = __cxa_allocate_exception(0x10u);
    v20 = (const char *)Z3_get_error_msg(*(_QWORD *)(v14 + 8), v30);
    sub_105D0(v19, v20);
    __cxa_throw(v19, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v17 = *(_QWORD *)(a3 + 8);
  a1[2] = v15;
  *a1 = &off_4D850;
  a1[1] = v17;
  Z3_inc_ref(*(_QWORD *)(v17 + 8), v15);
  *a1 = &off_4D890;
  if ( v11 )
    Z3_dec_ref(*(_QWORD *)(a2 + 32));
  if ( v29 )
    Z3_dec_ref(*(_QWORD *)(a2 + 32));
  return a1;
}

