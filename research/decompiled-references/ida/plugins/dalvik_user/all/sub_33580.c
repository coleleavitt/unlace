__int64 *__fastcall sub_33580(__int64 *a1, __int64 a2, const char *a3)
{
  const char *v4; // r12
  __int64 v5; // rbx
  const char *v6; // rdx
  char v8; // di
  _BYTE *v9; // rbp

  v4 = a3;
  if ( a3 && *a3 == 36 )
  {
    v8 = a3[1];
    v9 = a3 + 1;
    if ( !v8 )
    {
LABEL_15:
      v5 = 0;
      if ( (debug & 0x40000) == 0 )
        goto LABEL_9;
      v6 = "";
      goto LABEL_8;
    }
    while ( (unsigned int)v8 <= 0x7F && !islower(v8) && isxdigit(v8) )
    {
      v8 = *++v9;
      if ( !v8 )
        goto LABEL_15;
    }
  }
  v5 = operator new(0x28u);
  sub_33440(v5);
  if ( (debug & 0x40000) != 0 )
  {
    v6 = "";
    if ( v5 )
      v6 = "READY";
    if ( !v4 )
      v4 = "nullptr";
LABEL_8:
    sub_111A0((__int64)"DEXSIP: create_file_iterator(filename=%s) %s\n", v4, v6);
  }
LABEL_9:
  *a1 = v5;
  return a1;
}

