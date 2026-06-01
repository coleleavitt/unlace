_BYTE *__fastcall sub_1EAE70(_BYTE *a1, _DWORD *a2, _QWORD *a3, unsigned int a4, char a5)
{
  __int64 v6; // rdx
  bool v9; // al
  unsigned int v10; // eax
  char v11; // al

  v6 = a4;
  if ( (a5 & 1) != 0 )
    goto LABEL_9;
  if ( (unsigned int)(*a2 - 3) > 1 )
    goto LABEL_3;
  v9 = sub_119090(a4);
  v6 = a4;
  if ( !v9 )
    goto LABEL_3;
  v10 = a2[2];
  if ( *a2 == 4 )
    v10 = (unsigned __int16)v10;
  v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a3 + 200LL))(a3, v10);
  v6 = a4;
  if ( v11 )
  {
LABEL_9:
    sub_327D50(a1, a3[12]);
    if ( *a1 )
      return a1;
  }
  else
  {
LABEL_3:
    sub_328100(a1, a3, v6, 0);
    if ( *a1 )
      return a1;
  }
  if ( (a5 & 2) == 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(52205);
    BUG();
  }
  return a1;
}

