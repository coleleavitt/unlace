__int64 __fastcall sub_37E0(__int64 a1, __int64 a2, unsigned int *a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rax

  v6 = a2;
  v7 = a2;
  if ( a4 )
  {
    v8 = fopenRB(a2);
    v9 = v8;
    if ( !v8 )
      return 0;
  }
  else
  {
    while ( !(unsigned __int8)qfileexist(v7) )
    {
      v7 = sub_3090(0, a2, (__int64)"Please specify the TDS file");
      if ( !v7 )
        return 0;
    }
    if ( !v7 )
      return 0;
    v6 = v7;
    v8 = fopenRB(v7);
    v9 = v8;
    if ( !v8 )
      return 0;
  }
  v10 = qfsize(v8);
  *a3 = v10;
  if ( v10 <= 0x20 )
  {
    qfclose(v9);
    if ( !a4 )
    {
      sub_2EE0((__int64)"TDS: invalid file size\n");
      return 0;
    }
    return 0;
  }
  v11 = v10;
  v12 = qalloc(v10);
  *(_QWORD *)(a1 + 120) = v12;
  if ( !v12 )
    sub_2E20((__int64)"tds debug-info");
  if ( qfread(v9, v12, v11) != v11 )
    sub_2D30(v6);
  qfclose(v9);
  return 1;
}

