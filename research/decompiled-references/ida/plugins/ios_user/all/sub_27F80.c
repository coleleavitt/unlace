void *__fastcall sub_27F80(__int64 a1)
{
  void *result; // rax
  bool v2; // zf

  result = &unk_8D328;
  v2 = *(_BYTE *)(a1 + 48) == 0;
  *(_QWORD *)a1 = &unk_8D328;
  if ( !v2 )
    result = (void *)close_linput();
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return (void *)qfree();
  }
  return result;
}

