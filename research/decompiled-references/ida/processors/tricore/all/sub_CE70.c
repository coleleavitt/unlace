bool __fastcall sub_CE70(__int64 a1)
{
  __int16 v1; // dx
  bool result; // al

  v1 = *(_WORD *)(a1 + 24);
  result = v1 == 208 || (unsigned __int16)(v1 - 151) <= 2u;
  if ( !result && v1 == 72 )
    return *(_WORD *)(a1 + 46) == 27;
  return result;
}

