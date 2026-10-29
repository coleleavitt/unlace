void *__fastcall sub_6470(__int64 a1)
{
  void *result; // rax
  bool v2; // zf
  __int64 v4; // rdi

  result = &unk_1ED20;
  v2 = *(_BYTE *)(a1 + 48) == 0;
  *(_QWORD *)a1 = &unk_1ED20;
  if ( !v2 )
    result = (void *)close_linput(*(_QWORD *)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return (void *)qfree(v4);
  }
  return result;
}
