__int64 __fastcall sub_40A9D0(__int64 a1, char a2, int a3)
{
  __int64 v4; // rbp
  int v5; // eax
  int v6; // edx
  __int64 v7; // rax
  int i; // r13d

  if ( a3 < 0 && a2 )
  {
    v4 = a1 + 8;
    if ( !*(_BYTE *)(a1 + 8) )
    {
      parse_decls();
      parse_decls();
      get_idati();
      create_tinfo();
    }
    return v4;
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
LABEL_8:
    v7 = *(int *)(a1 + 56);
    if ( (_DWORD)v7 != -1 )
      goto LABEL_9;
    goto LABEL_10;
  }
  v5 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 56) = -1;
  v6 = v5 + 1;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 48) = v6;
    get_idati();
    create_tinfo();
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 48) = v6;
  get_idati();
  create_tinfo();
  ++*(_DWORD *)(a1 + 48);
  get_idati();
  create_tinfo();
  ++*(_DWORD *)(a1 + 48);
  get_idati();
  create_tinfo();
  v7 = *(int *)(a1 + 56);
  if ( (_DWORD)v7 != -1 )
  {
LABEL_9:
    v4 = a1 + 8 * v7 + 16;
    if ( *(_DWORD *)(a1 + 52) == a3 )
      return v4;
  }
LABEL_10:
  for ( i = 0; *(_DWORD *)(a1 + 48) > i; ++i )
    get_tinfo_details();
  return a1 + 40;
}

