char __fastcall sub_2BCE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  result = *(_BYTE *)(a1 + 1208);
  if ( result )
    return (unsigned int)sub_26EC0(a1 + 1208, a2, a3, a4, *(_BYTE *)(a1 + 1184)) == 0;
  return result;
}

