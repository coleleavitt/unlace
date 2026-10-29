__int64 __fastcall sub_503C0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi

  v2 = a1[17];
  v3 = a1[19];
  v4 = a1[20];
  v5 = a1[21];
LABEL_2:
  if ( v5 == v2 )
    return 0;
  while ( (*(_DWORD *)(v2 + 20) & 0xFFFFFFF) != 4 || *(_DWORD *)(v2 + 4) != a2 )
  {
    v2 += 72;
    if ( v3 != v2 )
      goto LABEL_2;
    v2 = *(_QWORD *)(v4 + 8);
    v4 += 8;
    v3 = v2 + 504;
    if ( v5 == v2 )
      return 0;
  }
  return 1;
}

