__int64 __fastcall sub_6A10(__int64 a1, __int64 a2, __int64 a3, _BOOL8 a4)
{
  _QWORD *exception; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // bl
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 48);
  v6 = v5 + 1;
  LOBYTE(a4) = __CFADD__(v5, 1);
  if ( *(_QWORD *)(a1 + 8) < (unsigned __int64)(v5 + 1) || (a4 = __CFADD__(v5, 1), v5 == -1) )
  {
    if ( !*(_BYTE *)(a1 + 60) )
      sub_5230((__int64)"Too short OMF record", a2, v6, a4);
    exception = __cxa_allocate_exception(8u);
    *exception = &off_13D38;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
  }
  *(_QWORD *)(a1 + 48) = v6;
  v7 = *(_BYTE *)(*(_QWORD *)a1 + v5);
  result = (unsigned __int8)v7;
  if ( v7 < 0 )
    return ((v7 & 0x7F) << 8) | (unsigned int)(unsigned __int8)sub_5EE0(a1, -1);
  return result;
}

