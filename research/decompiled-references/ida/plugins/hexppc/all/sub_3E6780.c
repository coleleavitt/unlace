__int64 __fastcall sub_3E6780(__int64 a1, signed int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx

  result = (unsigned int)a2;
  if ( a3 <= 121 && *(_DWORD *)(a1 + 80) == 4 && *(_DWORD *)(a1 + 4408) == 8 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
      v4 = *(_DWORD *)(a1 + 412);
    else
      v4 = *(_DWORD *)(a1 + 352);
    if ( a2 < v4 + 128 )
    {
      if ( a2 >= v4 )
        return (unsigned int)(v4 + 2 * (a2 - v4));
    }
    else
    {
      return (unsigned int)(a2 + 128);
    }
  }
  return result;
}

