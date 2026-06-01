__int64 __fastcall sub_1FA50(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  int dword; // eax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi

  v2 = *(_QWORD *)(a1 + 384);
  if ( a2 >= v2 )
    return 0;
  if ( v2 - a2 <= 3 )
    return 0;
  dword = get_dword(a2);
  if ( dword == -366806 )
  {
    v12 = *(_QWORD *)(a1 + 384);
    v13 = a2 + 4;
    if ( a2 + 4 >= v12 )
      return 0;
    if ( v12 - v13 <= 3 )
      return 0;
    if ( (unsigned int)get_dword(v13) != -39220 )
      return 0;
    v14 = *(_QWORD *)(a1 + 384);
    v15 = a2 + 8;
    if ( a2 + 8 >= v14 )
      return 0;
    if ( v14 - v15 == 1 )
      return 0;
    if ( (unsigned __int16)get_word(v15) != 25282 )
      return 0;
    v16 = *(_QWORD *)(a1 + 384);
    v17 = a2 + 10;
    if ( a2 + 10 >= v16 || v16 - v17 == 1 || (unsigned __int16)get_word(v17) != 6572 )
      return 0;
  }
  else
  {
    if ( dword != -368854 )
      return 0;
    v6 = *(_QWORD *)(a1 + 384);
    v7 = a2 + 4;
    if ( a2 + 4 >= v6 )
      return 0;
    if ( v6 - v7 <= 3 )
      return 0;
    if ( (unsigned int)get_dword(v7) != -41269 )
      return 0;
    v8 = *(_QWORD *)(a1 + 384);
    v9 = a2 + 8;
    if ( a2 + 8 >= v8 )
      return 0;
    if ( v8 - v9 == 1 )
      return 0;
    if ( (unsigned __int16)get_word(v9) != 23234 )
      return 0;
    v10 = *(_QWORD *)(a1 + 384);
    v11 = a2 + 10;
    if ( a2 + 10 >= v10 || v10 - v11 == 1 || (unsigned __int16)get_word(v11) != 6571 )
      return 0;
  }
  return 12;
}
