__int64 __fastcall sub_209D0(__int64 a1)
{
  int v1; // eax
  int v2; // ebp
  _WORD *v3; // rdx

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 1;
  v2 = 0;
  do
  {
    v3 = *(_WORD **)(a1 + 8);
    if ( *v3 != 94 )
      return 0;
    *(_DWORD *)(a1 + 16) = v1 - 1;
    *(_QWORD *)(a1 + 8) = v3 + 1;
    if ( v2 )
    {
      if ( !(unsigned __int8)sub_1F8E0(a1, (__int64)", ", 2) )
        return 0;
    }
    else if ( !(unsigned __int8)sub_200B0(a1, 3) )
    {
      return 0;
    }
    if ( *(_DWORD *)(a1 + 16) && **(_WORD **)(a1 + 8) == 76 )
    {
      if ( !(unsigned __int8)sub_202E0(a1, 3) )
        return 0;
    }
    else if ( !(unsigned __int8)sub_1FF50(a1) )
    {
      return 0;
    }
    v1 = *(_DWORD *)(a1 + 16);
    ++v2;
  }
  while ( v1 );
  return 1;
}

