__int64 __fastcall sub_16290(__int64 a1, __int64 a2, int *a3, char a4)
{
  _DWORD *v7; // rdi
  char v8; // al
  unsigned __int64 v9; // rax
  char v10; // dl
  unsigned __int16 v11; // dx
  char v13; // [rsp+Ch] [rbp-1Ch]

  v7 = (_DWORD *)(a1 + *(_QWORD *)(a2 + 16) + 1112);
  v8 = *(_BYTE *)(a2 + 8);
  if ( v8 == 1 )
  {
    v13 = a4;
    qstrncpy();
    a4 = v13;
    goto LABEL_12;
  }
  if ( v8 == 3 )
    v9 = *a3;
  else
    v9 = *(_QWORD *)a3;
  v10 = *(_BYTE *)(a2 + 9);
  if ( v10 == 6 )
  {
    if ( v9 > 3 )
      return 3;
  }
  else if ( v9 == -1 && v10 == 9 )
  {
    return 0;
  }
  v11 = *(_WORD *)(a2 + 24);
  if ( v11 == 4 )
  {
    *v7 = v9;
    goto LABEL_12;
  }
  if ( v11 <= 4u )
  {
    if ( v11 != 1 )
    {
      if ( v11 == 2 )
      {
        *(_WORD *)v7 = v9;
        goto LABEL_12;
      }
      goto LABEL_24;
    }
    *(_BYTE *)v7 = v9;
LABEL_12:
    if ( a4 )
    {
      if ( *(_BYTE *)(a2 + 9) != 0xFF )
        sub_12D00(a1, a2);
    }
    return 0;
  }
  if ( v11 == 8 )
  {
    *(_QWORD *)v7 = v9;
    goto LABEL_12;
  }
LABEL_24:
  if ( under_debugger )
    BUG();
  interr();
  return sub_16380(1090, a3);
}

