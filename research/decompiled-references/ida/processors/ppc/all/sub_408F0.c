__int64 __fastcall sub_408F0(__int64 a1, __int64 *a2, int a3)
{
  unsigned __int64 tinfo_size; // rbp
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  char v12; // al

  tinfo_size = a3;
  v5 = getinf_flag(3, 32);
  if ( !(_BYTE)v5 )
    return 0;
  v6 = v5;
  if ( a2 && (v7 = *a2, (unsigned __int8)*a2) )
  {
    tinfo_size = get_tinfo_size(0, v7, 0);
    if ( tinfo_size == -1 )
      return 0;
  }
  else if ( (int)tinfo_size <= 0 )
  {
    if ( under_debugger )
      BUG();
    interr(10246);
    goto LABEL_11;
  }
  if ( *(_DWORD *)a1 != 1 )
    return 0;
LABEL_11:
  if ( (unsigned __int8)getinf_flag(3, 4) )
  {
    v9 = -8;
    v10 = 8;
  }
  else
  {
    v9 = -4;
    v10 = 4;
  }
  v11 = *(_QWORD *)(a1 + 8) & v9;
  v12 = getinf_flag(3, 32);
  if ( tinfo_size < v10 && v12 )
    v11 += (int)v10 - (int)tinfo_size;
  cleanup_argloc(a1);
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v11;
  return v6;
}

