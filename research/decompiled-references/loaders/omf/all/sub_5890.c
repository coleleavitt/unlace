_BOOL8 __fastcall sub_5890(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rax
  _BOOL8 result; // rax

  if ( a2 == -1 )
    a2 = *(_QWORD *)(a1 + 48);
  else
    *(_QWORD *)(a1 + 48) = a2;
  result = __CFADD__(a2, a3);
  if ( *(_QWORD *)(a1 + 8) < (unsigned __int64)(a2 + a3) || __CFADD__(a2, a3) )
  {
    if ( !*(_BYTE *)(a1 + 60) )
      sub_5230((__int64)"Too short OMF record");
    exception = __cxa_allocate_exception(8u);
    *exception = &off_13D38;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
  }
  return result;
}
