__int64 __fastcall sub_136700(__int64 a1)
{
  unsigned int v1; // r13d
  __int64 v3; // rbx
  char v4; // r12
  int v5; // eax
  __int64 v6; // rdi
  __int64 v8; // rdi

  v1 = 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
      break;
    v8 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = 0;
    if ( v8 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      qfree();
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 112) = 0;
    }
LABEL_10:
    a1 = *(_QWORD *)(a1 + 8);
    if ( !a1 )
      return v1;
  }
  v4 = 0;
  do
  {
    while ( *(char *)(v3 + 4) >= 0 )
    {
      v3 = *(_QWORD *)(v3 + 8);
      v4 = 1;
      if ( !v3 )
        goto LABEL_7;
    }
    ++v1;
    sub_1189E0(v3);
    v5 = *(_DWORD *)(a1 + 24);
    BYTE1(v5) &= ~2u;
    LOBYTE(v5) = v5 | 0x80;
    *(_DWORD *)(a1 + 24) = v5;
    v3 = *(_QWORD *)(v3 + 8);
  }
  while ( v3 );
LABEL_7:
  v6 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 88) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree();
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  if ( !v4 )
    goto LABEL_10;
  return v1;
}

