__int64 *__fastcall sub_DC130(__int64 a1)
{
  __int64 *result; // rax

  result = *(__int64 **)(a1 + 8);
  if ( result )
  {
    *((_BYTE *)result + *(unsigned int *)(a1 + 24)) = 0;
    if ( *(_DWORD *)(a1 + 20) && (*(_BYTE *)(a1 + 29) & 4) == 0 )
      return sub_DC0B0(a1);
    else
      return *(__int64 **)(a1 + 8);
  }
  return result;
}
