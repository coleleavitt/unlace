__int64 __fastcall sub_A060(__int64 a1, const char **a2, _DWORD *a3, const char *a4)
{
  __int64 result; // rax
  char **v6; // r12
  const char *v8; // r15
  __int64 v9; // rbx
  const char *v10; // rsi

  if ( !a4 )
    return 0;
  result = 0;
  if ( *a4 )
  {
    v6 = &off_130A0;
    v8 = "af";
LABEL_4:
    v9 = 0;
    while ( 1 )
    {
      v10 = v6[v9];
      if ( !v10 )
      {
LABEL_8:
        v6 += 3;
        if ( v6 == (char **)&off_131C0 )
          return 0;
        v8 = *v6;
        goto LABEL_4;
      }
      if ( !strcasecmp(a4, v10) )
        break;
      if ( ++v9 == 3 )
        goto LABEL_8;
    }
    if ( a2 )
      *a2 = v8;
    if ( a3 )
    {
      if ( v9 == 1 )
      {
        *a3 = 524296;
      }
      else if ( v9 == 2 )
      {
        *a3 = 0x80000;
      }
      else
      {
        *a3 = 0x100000;
      }
    }
    return 1;
  }
  return result;
}

