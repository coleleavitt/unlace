__int64 __fastcall sub_3D70(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // esi

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 >= v5 && v4 < *(_DWORD *)(v3 + 108) )
  {
    *(_BYTE *)(a1 + 224) = (*(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8) & 1) == 0;
    if ( !*(_BYTE *)(a2 + 41) )
    {
LABEL_4:
      if ( !*(_BYTE *)(a2 + 81) )
        goto LABEL_5;
      goto LABEL_13;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 224) = 1;
    if ( !*(_BYTE *)(a2 + 41) )
      goto LABEL_4;
  }
  sub_3B50(a1, a2, a2 + 40);
  if ( !*(_BYTE *)(a2 + 81) )
  {
LABEL_5:
    if ( !*(_BYTE *)(a2 + 121) )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  sub_3B50(a1, a2, a2 + 80);
  if ( !*(_BYTE *)(a2 + 121) )
  {
LABEL_6:
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 35 > 1 )
      goto LABEL_7;
    goto LABEL_15;
  }
LABEL_14:
  sub_3B50(a1, a2, a2 + 120);
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 35 > 1 )
    goto LABEL_7;
LABEL_15:
  if ( !*(_BYTE *)(a2 + 41) || (*(_BYTE *)(a2 + 72) & 2) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 224) )
      return 1;
    goto LABEL_18;
  }
  remember_problem();
LABEL_7:
  if ( !*(_BYTE *)(a1 + 224) )
    return 1;
  if ( *(_WORD *)(a2 + 24) == 14 )
  {
    add_cref();
    create_data();
    return 1;
  }
LABEL_18:
  add_cref();
  return 1;
}

