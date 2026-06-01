_DWORD *__fastcall sub_23CB10(__int64 a1, int a2)
{
  _DWORD *result; // rax

  *(_DWORD *)(a1 + 8) = 81;
  result = (_DWORD *)j__qalloc_or_throw();
  *(_QWORD *)(a1 + 24) = result;
  *result = a2;
  return result;
}

