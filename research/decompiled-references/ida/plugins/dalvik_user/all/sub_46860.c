__int64 __fastcall sub_46860(__int64 a1, _BYTE *a2, char a3)
{
  unsigned __int64 v3; // rcx
  int v5; // eax
  char v6; // cl

  v3 = *(int *)(a1 + 24);
  if ( v3 >= *(_QWORD *)(a1 + 16) )
    return 0;
  v5 = v3 + 1;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3);
  *(_DWORD *)(a1 + 24) = v5;
  if ( a2 )
    *a2 = v6;
  if ( !a3 || !*(_BYTE *)(a1 + 56) )
    return 1;
  sub_1FAD0((__int64 *)(a1 + 32));
  return 1;
}

