_DWORD *__fastcall sub_1CF70(__int64 a1, int a2)
{
  _DWORD *result; // rax
  _DWORD *v3; // rdx

  result = *(_DWORD **)(a1 + 48);
  v3 = &result[14 * *(_QWORD *)(a1 + 56)];
  if ( !(56LL * *(_QWORD *)(a1 + 56)) )
    return nullptr;
  while ( *result != a2 )
  {
    result += 14;
    if ( result == v3 )
      return nullptr;
  }
  return result;
}

