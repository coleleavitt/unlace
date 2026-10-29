__int64 __fastcall sub_F0700(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  int v5; // eax

  v1 = a1[4];
  if ( *(_BYTE *)(v1 + 64) != 5 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8LL);
  if ( v3 < a1[5] || v3 >= a1[6] )
    return 0;
  v4 = a1[2];
  sub_1189E0(v1);
  v5 = *(_DWORD *)(v4 + 24);
  BYTE1(v5) &= ~2u;
  LOBYTE(v5) = v5 | 0x80;
  *(_DWORD *)(v4 + 24) = v5;
  return 0;
}

