__int64 __fastcall sub_A0D90(char *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdx
  char *v6; // rbp
  char v7; // al
  unsigned int v8; // eax
  unsigned __int8 v9; // [rsp+1h] [rbp-9h]

  v4 = (unsigned __int8)*a1;
  LOBYTE(a4) = (unsigned __int8)(v4 - 5) <= 1u || (_BYTE)v4 == 1;
  if ( (_BYTE)a4 || (_BYTE)v4 != 14 )
    return a4;
  while ( 1 )
  {
    v6 = *((char **)a1 + 1);
    v9 = a4;
    v7 = sub_A0D90(v6, a2, v4, a4);
    a4 = v9;
    if ( !v7 )
      return 0;
    v4 = (unsigned __int8)v6[16];
    a1 = v6 + 16;
    v8 = v4 - 5;
    LOBYTE(a2) = (_BYTE)v4 == 1;
    if ( (_BYTE)v4 == 1 || (unsigned __int8)(v4 - 5) <= 1u )
      break;
    if ( (_BYTE)v4 != 14 )
      return a4;
  }
  LOBYTE(v8) = (_BYTE)v4 == 1 || (unsigned __int8)(v4 - 5) <= 1u;
  return v8;
}

