__int64 __fastcall sub_11F290(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4, double a5)
{
  __int64 result; // rax
  unsigned __int8 v6; // dl

  result = 0;
  if ( *a2 != 8 )
  {
    v6 = *(_BYTE *)(a1 + 56);
    if ( (v6 & (unsigned __int8)(2 - a4)) != 0 )
    {
      *(_BYTE *)(a1 + 40) = 1;
      return (unsigned __int8)sub_11EFE0(a2, *(unsigned __int8 **)(a1 + 48), v6, a5);
    }
  }
  return result;
}

