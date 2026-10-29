__int64 __fastcall sub_46B40(__int64 a1, bool *a2)
{
  unsigned __int64 v2; // rdx
  unsigned int v3; // ecx
  int v5; // eax
  char v6; // dl

  v2 = *(int *)(a1 + 24);
  v3 = 0;
  if ( v2 >= *(_QWORD *)(a1 + 16) )
    return v3;
  v5 = v2 + 1;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v2);
  *(_DWORD *)(a1 + 24) = v5;
  if ( a2 )
    *a2 = v6 != 0;
  if ( !*(_BYTE *)(a1 + 56) )
    return 1;
  sub_1FAD0((__int64 *)(a1 + 32));
  return 1;
}

