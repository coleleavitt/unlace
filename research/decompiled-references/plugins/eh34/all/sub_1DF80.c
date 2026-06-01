__int64 __fastcall sub_1DF80(__int64 *a1, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-8h]

  v3 = *((_DWORD *)a1 + 2) - 1;
  if ( v3 < 0 )
    goto LABEL_9;
  v4 = *a1;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = v5 + (v3 - v5) / 2;
      v7 = v4 + 16LL * v6;
      if ( a2 >= *(_QWORD *)v7 )
        break;
      v3 = v6 - 1;
      if ( v5 > v6 - 1 )
        goto LABEL_7;
    }
    if ( *(_QWORD *)v7 >= a2 )
    {
      if ( v6 == -1 )
        goto LABEL_9;
      goto LABEL_11;
    }
    v5 = v6 + 1;
  }
  while ( v6 + 1 <= v3 );
LABEL_7:
  if ( v5 )
  {
    v7 = v4 + 16LL * (v5 - 1);
    if ( *(_QWORD *)v7 == a2 )
    {
LABEL_11:
      BYTE4(v9) = 1;
      LODWORD(v9) = *(_DWORD *)(v7 + 8);
      return v9;
    }
  }
LABEL_9:
  BYTE4(v9) = 0;
  return v9;
}
