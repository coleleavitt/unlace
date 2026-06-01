_QWORD *__fastcall sub_13430(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  unsigned int error_code; // r12d
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r15
  unsigned int v17; // r14d
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r14
  unsigned int v22; // ebp
  __int64 v23; // r15
  __int64 sort; // r12
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned int v28; // ebx
  __int64 v29; // rdi
  _QWORD *v31; // rbp
  const char *v32; // rax
  _QWORD *v33; // r13
  const char *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // r14
  unsigned int v38; // r12d
  __int64 v39; // r15
  __int64 v40; // r12
  unsigned int v41; // eax
  int v42; // eax
  int v43; // ebx
  unsigned int v44; // eax
  _QWORD *v45; // rbp
  const char *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rdi
  _QWORD *v51; // rbp
  const char *v52; // rax
  _QWORD *v53; // rbp
  const char *v54; // rax
  _QWORD *exception; // rbx
  const char *error_msg; // rax
  _QWORD *v57; // rbp
  const char *v58; // rax
  _QWORD *v59; // rbp
  const char *v60; // rax
  _QWORD *v61; // [rsp+0h] [rbp-98h]
  __int64 v62; // [rsp+8h] [rbp-90h]
  char is_seq_sort; // [rsp+8h] [rbp-90h]
  unsigned int v64; // [rsp+8h] [rbp-90h]
  char is_re_sort; // [rsp+8h] [rbp-90h]
  unsigned int v66; // [rsp+8h] [rbp-90h]
  unsigned int v67; // [rsp+8h] [rbp-90h]
  unsigned int v69; // [rsp+1Ch] [rbp-7Ch]

  v3 = Z3_ast_vector_size(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  if ( v3 == 1 )
  {
    v47 = Z3_ast_vector_get(v5, v4, 0);
    v7 = *(_QWORD *)(a2 + 8);
    v48 = v47;
    error_code = Z3_get_error_code(*(_QWORD *)(v7 + 8));
    if ( !error_code || !*(_BYTE *)v7 )
    {
      v49 = *(_QWORD *)(a2 + 8);
      a1[1] = v49;
      v50 = *(_QWORD *)(v49 + 8);
      *a1 = &off_4D850;
      a1[2] = v48;
      Z3_inc_ref(v50, v48);
      *a1 = &off_4D890;
      return a1;
    }
LABEL_52:
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v7 + 8), error_code);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v6 = Z3_ast_vector_get(v5, v4, 0);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = v6;
  error_code = Z3_get_error_code(*(_QWORD *)(v7 + 8));
  if ( error_code && *(_BYTE *)v7 )
    goto LABEL_52;
  v10 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v10 + 8), v8);
  if ( v8 )
    Z3_dec_ref(*(_QWORD *)(v10 + 8));
  v11 = Z3_ast_vector_size(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v61 = (_QWORD *)operator new[](8LL * v11);
  v12 = Z3_ast_vector_size(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v69 = v12;
  if ( v12 )
  {
    v13 = 0;
    v62 = v12;
    do
    {
      v14 = Z3_ast_vector_get(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16), (unsigned int)v13);
      v15 = *(_QWORD *)(a2 + 8);
      v16 = v14;
      v17 = Z3_get_error_code(*(_QWORD *)(v15 + 8));
      if ( v17 && *(_BYTE *)v15 )
      {
        v57 = __cxa_allocate_exception(0x10u);
        v58 = (const char *)Z3_get_error_msg(*(_QWORD *)(v15 + 8), v17);
        sub_105D0(v57, v58);
        __cxa_throw(v57, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v18 = *(_QWORD *)(a2 + 8);
      Z3_inc_ref(*(_QWORD *)(v18 + 8), v16);
      v61[v13] = v16;
      if ( v16 )
        Z3_dec_ref(*(_QWORD *)(v18 + 8));
      ++v13;
    }
    while ( v62 != v13 );
  }
  v19 = Z3_ast_vector_get(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16), 0);
  v20 = *(_QWORD *)(a2 + 8);
  v21 = v19;
  v22 = Z3_get_error_code(*(_QWORD *)(v20 + 8));
  if ( v22 && *(_BYTE *)v20 )
  {
    v33 = __cxa_allocate_exception(0x10u);
    v34 = (const char *)Z3_get_error_msg(*(_QWORD *)(v20 + 8), v22);
    sub_105D0(v33, v34);
    __cxa_throw(v33, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v23 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v23 + 8), v21);
  sort = Z3_get_sort(*(_QWORD *)(v23 + 8), v21);
  v25 = Z3_get_error_code(*(_QWORD *)(v23 + 8));
  if ( v25 && *(_BYTE *)v23 )
  {
    v64 = v25;
    v31 = __cxa_allocate_exception(0x10u);
    v32 = (const char *)Z3_get_error_msg(*(_QWORD *)(v23 + 8), v64);
    sub_105D0(v31, v32);
    __cxa_throw(v31, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  Z3_inc_ref(*(_QWORD *)(v23 + 8), sort);
  is_seq_sort = Z3_is_seq_sort(*(_QWORD *)(v10 + 8), sort);
  if ( sort )
    Z3_dec_ref(*(_QWORD *)(v23 + 8));
  if ( v21 )
    Z3_dec_ref(*(_QWORD *)(v23 + 8));
  if ( is_seq_sort )
  {
    v26 = Z3_mk_seq_concat(*(_QWORD *)(v10 + 8), v69, v61);
  }
  else
  {
    v35 = Z3_ast_vector_get(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16), 0);
    v36 = *(_QWORD *)(a2 + 8);
    v37 = v35;
    v38 = Z3_get_error_code(*(_QWORD *)(v36 + 8));
    if ( v38 && *(_BYTE *)v36 )
    {
      v53 = __cxa_allocate_exception(0x10u);
      v54 = (const char *)Z3_get_error_msg(*(_QWORD *)(v36 + 8), v38);
      sub_105D0(v53, v54);
      __cxa_throw(v53, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
    }
    v39 = *(_QWORD *)(a2 + 8);
    Z3_inc_ref(*(_QWORD *)(v39 + 8), v37);
    v40 = Z3_get_sort(*(_QWORD *)(v39 + 8), v37);
    v41 = Z3_get_error_code(*(_QWORD *)(v39 + 8));
    if ( v41 && *(_BYTE *)v39 )
    {
      v67 = v41;
      v51 = __cxa_allocate_exception(0x10u);
      v52 = (const char *)Z3_get_error_msg(*(_QWORD *)(v39 + 8), v67);
      sub_105D0(v51, v52);
      __cxa_throw(v51, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
    }
    Z3_inc_ref(*(_QWORD *)(v39 + 8), v40);
    is_re_sort = Z3_is_re_sort(*(_QWORD *)(v10 + 8), v40);
    if ( v40 )
      Z3_dec_ref(*(_QWORD *)(v39 + 8));
    if ( v37 )
      Z3_dec_ref(*(_QWORD *)(v39 + 8));
    if ( !is_re_sort )
    {
      v27 = v61[(int)(Z3_ast_vector_size(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16)) - 1)];
      v42 = Z3_ast_vector_size(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
      v43 = v42 - 1;
      if ( v42 != 1 )
      {
        do
        {
          v27 = Z3_mk_concat(*(_QWORD *)(v10 + 8), v61[--v43], v27);
          v44 = Z3_get_error_code(*(_QWORD *)(v10 + 8));
          if ( v44 && *(_BYTE *)v10 )
          {
            v66 = v44;
            v45 = __cxa_allocate_exception(0x10u);
            v46 = (const char *)Z3_get_error_msg(*(_QWORD *)(v10 + 8), v66);
            sub_105D0(v45, v46);
            __cxa_throw(v45, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
          }
        }
        while ( v43 );
      }
      goto LABEL_22;
    }
    v26 = Z3_mk_re_concat(*(_QWORD *)(v10 + 8), v69, v61);
  }
  v27 = v26;
LABEL_22:
  v28 = Z3_get_error_code(*(_QWORD *)(v10 + 8));
  if ( v28 && *(_BYTE *)v10 )
  {
    v59 = __cxa_allocate_exception(0x10u);
    v60 = (const char *)Z3_get_error_msg(*(_QWORD *)(v10 + 8), v28);
    sub_105D0(v59, v60);
    __cxa_throw(v59, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  a1[1] = v10;
  v29 = *(_QWORD *)(v10 + 8);
  *a1 = &off_4D850;
  a1[2] = v27;
  Z3_inc_ref(v29, v27);
  *a1 = &off_4D890;
  if ( v61 )
    operator delete[](v61);
  return a1;
}
