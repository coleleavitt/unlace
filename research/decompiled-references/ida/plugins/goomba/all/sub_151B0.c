_QWORD *__fastcall sub_151B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rbx
  const char *error_msg; // rax
  _QWORD *v5; // rbp
  const char *v6; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  _QWORD v11[4]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  switch ( *(_BYTE *)a3 )
  {
    case 1:
    case 5:
    case 6:
      sub_14D00((__int64)a1, (_QWORD *)a2, (char *)a3);
      break;
    case 2:
      v9 = Z3_mk_bv_sort();
      if ( (unsigned int)Z3_get_error_code() && *(_BYTE *)(a2 + 24) )
      {
        exception = __cxa_allocate_exception(0x10u);
        error_msg = (const char *)Z3_get_error_msg();
        sub_105D0(exception, error_msg);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      v12[1] = a2 + 24;
      v13 = v9;
      Z3_inc_ref();
      v12[0] = &off_4D870;
      v10 = Z3_mk_unsigned_int64();
      if ( (unsigned int)Z3_get_error_code() && *(_BYTE *)(a2 + 24) )
      {
        v5 = __cxa_allocate_exception(0x10u);
        v6 = (const char *)Z3_get_error_msg();
        sub_105D0(v5, v6);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
      }
      a1[1] = a2 + 24;
      *a1 = &off_4D850;
      a1[2] = v10;
      Z3_inc_ref();
      *a1 = &off_4D890;
      if ( v9 )
        Z3_dec_ref();
      break;
    case 4:
      sub_15410(a1, a2, *(_DWORD **)(a3 + 8));
      break;
    case 0xE:
      sub_151B0(v11, a2, *(_QWORD *)(a3 + 8) + 16LL);
      sub_151B0(v12, a2, *(_QWORD *)(a3 + 8));
      sub_12670(a1, (__int64)v11, (__int64)v12);
      v12[0] = &off_4D850;
      if ( v13 )
        Z3_dec_ref();
      v11[0] = &off_4D850;
      if ( v11[2] )
        Z3_dec_ref();
      break;
    default:
      if ( !under_debugger )
        interr();
      BUG();
  }
  return a1;
}

