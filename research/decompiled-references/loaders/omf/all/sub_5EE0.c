__int64 __fastcall sub_5EE0(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rax

  if ( a2 == -1 )
    a2 = *(_QWORD *)(a1 + 48);
  else
    *(_QWORD *)(a1 + 48) = a2;
  if ( *(_QWORD *)(a1 + 8) < (unsigned __int64)(a2 + 1) || a2 == -1 )
  {
    if ( !*(_BYTE *)(a1 + 60) )
      sub_5230((__int64)"Too short OMF record", a2, __CFADD__(a2, 1));
    exception = __cxa_allocate_exception(8u);
    *exception = &off_13D38;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
  }
  *(_QWORD *)(a1 + 48) = a2 + 1;
  return *(unsigned __int8 *)(*(_QWORD *)a1 + a2);
}
