__int64 __fastcall sub_21600(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 1224);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v2 + 16);
      v5 = *(_QWORD *)(v2 + 24);
      if ( a2 > *(_DWORD *)(v2 + 32) )
        break;
      v3 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v4 )
        goto LABEL_6;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v5 );
LABEL_6:
  if ( a1 + 1216 == v3 || a2 < *(_DWORD *)(v3 + 32) )
    return 0xFFFFFFFFLL;
  v6 = *(_DWORD *)(v3 + 48);
  if ( v6 > 0 )
  {
    v7 = v6 - 1;
    *(_DWORD *)(v3 + 48) = v7;
    if ( v7 )
      return 1;
  }
  if ( (unsigned int)sub_1F6B0(a1, a2, 0) )
    return 1;
  return 0xFFFFFFFFLL;
}

