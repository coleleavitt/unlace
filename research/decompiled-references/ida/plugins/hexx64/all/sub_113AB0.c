char __fastcall sub_113AB0(__int64 a1)
{
  __int64 i; // rbx
  int v2; // eax

  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    while ( *(char *)(i + 4) < 0 )
    {
      i = *(_QWORD *)(i + 8);
      if ( !i )
        goto LABEL_6;
    }
    sub_11D5A0(i);
  }
LABEL_6:
  v2 = *(_DWORD *)(a1 + 24);
  BYTE1(v2) &= ~2u;
  LOBYTE(v2) = v2 | 0x80;
  *(_DWORD *)(a1 + 24) = v2;
  return v2;
}

