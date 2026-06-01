__int64 __fastcall sub_1FBD0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  int dword; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi

  v2 = *(_QWORD *)(a1 + 384);
  if ( a2 >= v2 )
    return 0;
  if ( v2 - a2 <= 3 )
    return 0;
  if ( (unsigned int)get_dword(a2) != 4259824 )
    return 0;
  v5 = *(_QWORD *)(a1 + 384);
  v6 = a2 + 4;
  if ( a2 + 4 >= v5 || v5 - v6 <= 3 )
    return 0;
  dword = get_dword(v6);
  if ( dword == 92159 )
  {
    v10 = *(_QWORD *)(a1 + 384);
    v11 = a2 + 8;
    if ( a2 + 8 < v10 && v10 - v11 != 1 && (unsigned __int16)get_word(v11) == 6604 )
      return 10;
    return 0;
  }
  if ( dword != 126975 )
    return 0;
  v8 = *(_QWORD *)(a1 + 384);
  v9 = a2 + 8;
  if ( a2 + 8 >= v8 || v8 - v9 == 1 || (unsigned __int16)get_word(v9) != 6621 )
    return 0;
  return 10;
}

