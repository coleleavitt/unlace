__int64 __fastcall sub_20960(__int64 a1)
{
  int v1; // eax
  _WORD *v2; // rdx
  int v4; // eax

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v2 = *(_WORD **)(a1 + 8);
  if ( *v2 != 58 )
    return 0;
  v4 = v1 - 1;
  *(_DWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 8) = v2 + 1;
  if ( v4 && v2[1] == 58 )
    return 1;
  if ( !(unsigned __int8)sub_200B0(a1, 0) )
    return 0;
  return sub_204B0(a1);
}

