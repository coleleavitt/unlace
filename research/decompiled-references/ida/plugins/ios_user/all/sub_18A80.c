__int64 __fastcall sub_18A80(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = 0;
  if ( a4 )
  {
    if ( *(_DWORD *)(a3 + 24) == 32 )
      return 4 * (unsigned int)(*(_DWORD *)(a2 + 32) > *(_DWORD *)(a3 + 32) && *(_DWORD *)(a3 + 32) != -1);
  }
  return result;
}

