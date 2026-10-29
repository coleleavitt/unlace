__int64 __fastcall sub_10A10(__int64 a1)
{
  __int64 sort; // rbx
  __int64 v2; // r12
  unsigned int error_code; // eax
  __int64 v4; // rbp
  unsigned int v5; // r12d
  _QWORD *exception; // rbx
  const char *error_msg; // rax
  unsigned int v9; // [rsp+Ch] [rbp-3Ch]

  sort = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), *(_QWORD *)(a1 + 16));
  v2 = *(_QWORD *)(a1 + 8);
  error_code = Z3_get_error_code(*(_QWORD *)(v2 + 8));
  if ( error_code && *(_BYTE *)v2 )
  {
    v9 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v2 + 8), v9);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v4 = *(_QWORD *)(a1 + 8);
  Z3_inc_ref(*(_QWORD *)(v4 + 8), sort);
  v5 = 1;
  if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v4 + 8), sort) != 2 )
    LOBYTE(v5) = (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v4 + 8), sort) == 3;
  if ( sort )
    Z3_dec_ref(*(_QWORD *)(v4 + 8));
  return v5;
}

