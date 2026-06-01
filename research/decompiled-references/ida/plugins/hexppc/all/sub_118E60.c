__int64 __fastcall sub_118E60(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) == 2 )
  {
    if ( a2 )
      *a2 = a1 + 32;
    return a1 + 48;
  }
  else
  {
    result = 0;
    if ( *(_BYTE *)(a1 + 32) == 2 )
    {
      if ( a2 )
        *a2 = a1 + 48;
      return a1 + 32;
    }
  }
  return result;
}

