_WORD *__fastcall sub_85560(__int64 a1, signed int a2)
{
  _WORD *result; // rax
  _WORD *v3; // rcx

  if ( (unsigned int)a2 > 0x63 )
    return nullptr;
  result = *(_WORD **)(a1 + 24LL * a2 + 16);
  v3 = &result[16 * *(_QWORD *)(a1 + 24LL * a2 + 24)];
  if ( result == v3 )
    return nullptr;
  while ( *(_WORD *)(a1 + 8) != *result && *result != 0xFFFF )
  {
    result += 16;
    if ( v3 == result )
      return nullptr;
  }
  return result;
}
