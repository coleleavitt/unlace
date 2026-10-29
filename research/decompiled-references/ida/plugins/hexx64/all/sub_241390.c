_DWORD *__fastcall sub_241390(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax

  *(_DWORD *)(a1 + 8) = 81;
  result = (_DWORD *)j__qalloc_or_throw(4, a2, a3, a4);
  *(_QWORD *)(a1 + 24) = result;
  *result = a2;
  return result;
}

