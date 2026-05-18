_DWORD *__fastcall sub_CBD10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _DWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_WORD *)(a1 + 20) )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v3 + 72);
    result = *(_DWORD **)(v3 + 8);
    *(_QWORD *)(v3 + 72) = a1;
  }
  else
  {
    sub_CBC10(*(_QWORD **)a1, a2, a3);
    result = *(_DWORD **)(v3 + 8);
  }
  --*result;
  return result;
}
