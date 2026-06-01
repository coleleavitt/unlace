__int64 __fastcall sub_19200(__int64 a1, unsigned int a2)
{
  int v2; // ebp
  char v4; // dl

  v2 = *(_DWORD *)(a1 + 36) - 1;
  if ( v2 < 0 )
    return 1;
  while ( *(_QWORD *)a1 != -1 && (unsigned int)sub_19140(a1, v2) != -1 )
  {
    v4 = a2 & *(_BYTE *)(a1 + 32);
    a2 >>= 8;
    *(_BYTE *)(a1 + (unsigned int)(*(_DWORD *)(a1 + 28) + v2) + 16) = v4;
    if ( v2-- == 0 )
      return 1;
  }
  return 0;
}

