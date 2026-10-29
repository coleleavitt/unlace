__int64 __fastcall sub_3E75E0(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 4408);
  v3 = *(_DWORD *)(a1 + 352);
  v4 = *(_DWORD *)(a1 + 412);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    if ( a2 >= v4 && a2 <= v2 + v3 - 1 )
      return a2 & (unsigned int)-v2;
    if ( a2 >= *(_DWORD *)(a1 + 448) && a2 <= *(_DWORD *)(a1 + 416) + 7 )
      return a2 & 0xFFFFFFF8;
  }
  else
  {
    if ( a2 >= v3 && a2 <= v2 + v4 - 1 )
      return a2 & (unsigned int)-v2;
    if ( a2 >= *(_DWORD *)(a1 + 416) && a2 <= *(_DWORD *)(a1 + 448) + 7 )
      return a2 & 0xFFFFFFF8;
  }
  result = *(unsigned int *)(a1 + 468);
  if ( a2 < (int)result )
    return (unsigned int)a2;
  if ( a2 >= (int)result + 4 )
    return (unsigned int)a2;
  return result;
}

