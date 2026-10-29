__int64 __fastcall sub_168E0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  __int64 result; // rax
  __int16 v5; // dx

  v3 = *(_BYTE *)(a3 + 1);
  if ( v3 == 4 )
  {
    v5 = *(_WORD *)(a3 + 6);
    result = 196;
    if ( (unsigned __int16)(v5 - 29) > 1u )
    {
      result = 193;
      if ( v5 != 28 )
      {
        result = 196;
        if ( *(_DWORD *)(a1 + 4328) != 6 )
          return 193;
      }
    }
  }
  else
  {
    result = 0;
    if ( v3 == 5 )
      return (*(_WORD *)(a3 + 24) & 1) == 0 ? 1 : 4;
  }
  return result;
}

