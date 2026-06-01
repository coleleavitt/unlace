__int64 __fastcall sub_24DB30(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  _QWORD *v7; // r15
  int tinfo_size; // r14d
  bool v9; // zf
  unsigned int v10; // eax
  _QWORD *v11; // r15
  int v12; // ebx
  bool v13; // zf
  unsigned int v14; // eax

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v4 + 8) == 61 )
  {
    if ( a2 )
    {
      v7 = *(_QWORD **)(v4 + 24);
      tinfo_size = get_tinfo_size();
      v9 = (unsigned int)get_tinfo_property() == 1;
      v10 = 16;
      if ( tinfo_size <= 16 )
        v10 = tinfo_size;
      *a2 = sub_323690(*v7, v10, v9);
    }
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(v5 + 8) != 61 )
      return 0;
    if ( a2 )
    {
      v11 = *(_QWORD **)(v5 + 24);
      v12 = get_tinfo_size();
      v13 = (unsigned int)get_tinfo_property() == 1;
      v14 = 16;
      if ( v12 <= 16 )
        v14 = v12;
      *a2 = sub_323690(*v11, v14, v13);
      v4 = *(_QWORD *)(a1 + 24);
    }
  }
  if ( !v4 )
    return 0;
  if ( a3 && *(_DWORD *)(v4 + 8) == 48 )
  {
    do
      v4 = *(_QWORD *)(v4 + 24);
    while ( *(_DWORD *)(v4 + 8) == 48 );
  }
  return v4;
}

