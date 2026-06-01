_UNKNOWN **__fastcall sub_67490(__int64 a1)
{
  _UNKNOWN **result; // rax
  bool v2; // zf
  __int64 v4; // rdi
  __int64 v5; // rdi

  result = &off_C8A28;
  v2 = *(_QWORD *)(a1 + 40) == 0;
  *(_QWORD *)a1 = &off_C8A28;
  if ( !v2 )
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 256LL) + 312LL))(*(_QWORD *)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(_QWORD *)(a1 + 56);
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    return (_UNKNOWN **)qfree(v5);
  }
  return result;
}
