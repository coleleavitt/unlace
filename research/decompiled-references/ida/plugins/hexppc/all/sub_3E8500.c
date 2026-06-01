__int64 __fastcall sub_3E8500(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  int v4; // eax
  char v6; // dl
  int v7; // eax
  int v8; // edx

  if ( sub_CC530() != 1 )
    return 4294967283LL;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 1496) + 144LL) )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v2 + 40) == -1 )
    return 0;
  sub_CC530();
  v3 = sub_1CC390(a2, *(_QWORD *)(v2 + 40));
  *(_QWORD *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(v2 + 48);
  *(_QWORD *)(a1 + 56) = v3;
  if ( (sub_CC530() & 0xF) == 1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 64) = 0;
    if ( v4 )
      return 4294967283LL;
    goto LABEL_9;
  }
  v6 = getinf_flag();
  v7 = *(_DWORD *)(a1 + 40);
  if ( !v6 )
  {
    *(_DWORD *)(a1 + 64) = 0;
    if ( v7 )
      return 4294967283LL;
LABEL_9:
    v8 = 0;
    goto LABEL_10;
  }
  v8 = *(_DWORD *)(v2 + 52);
  *(_DWORD *)(a1 + 64) = v8;
  if ( v7 || v8 < 0 )
    return 4294967283LL;
LABEL_10:
  if ( v8 > 0 )
    return 4294967283LL;
  return 0;
}

