bool __fastcall sub_14A500(char a1, __int64 a2)
{
  unsigned int v3; // eax

  if ( a1 != 4 )
    return 1;
  while ( 1 )
  {
    v3 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 4 )
      goto LABEL_3;
    if ( v3 != 67 )
      break;
    if ( *(_DWORD *)(a2 + 68) != *(_DWORD *)(a2 + 36) )
      return sub_11E400((unsigned int *)a2);
LABEL_3:
    if ( *(_BYTE *)(a2 + 32) != 4 )
      return 1;
    a2 = *(_QWORD *)(a2 + 40);
  }
  if ( v3 - 10 <= 1 )
    goto LABEL_3;
  if ( v3 != 2 && v3 - 56 > 1 )
    return sub_11E400((unsigned int *)a2);
  return 1;
}

