__int64 __fastcall sub_64A20(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  int v3; // ecx
  _BYTE *v4; // rax
  __int64 v5; // rcx
  char v6; // dl
  int v7; // eax
  int v8; // ecx
  __int64 result; // rax

  v2 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - (a1 + 40)) >> 3);
  v3 = v2 + 1;
  if ( (int)v2 + 1 > 7 )
  {
LABEL_6:
    v7 = *(unsigned __int16 *)(a1 + 26);
    v8 = *(char *)(a2 + 2);
  }
  else
  {
    v4 = (_BYTE *)(a1 + 40LL * v3 + 41);
    v5 = a1 + 40 * ((unsigned int)(6 - v2) + (__int64)v3) + 81;
    while ( 1 )
    {
      if ( !*v4 )
        goto LABEL_6;
      v6 = v4[1];
      if ( v6 > 0 )
        break;
      v4 += 40;
      if ( v4 == (_BYTE *)v5 )
        goto LABEL_6;
    }
    v8 = *(char *)(a2 + 2);
    v7 = v6;
    if ( v6 <= *(char *)(a2 + 2) )
    {
      if ( under_debugger )
        goto LABEL_14;
      interr();
LABEL_12:
      if ( !under_debugger )
      {
        interr();
        return sub_64AE0(10296);
      }
LABEL_14:
      BUG();
    }
  }
  result = (unsigned int)(v7 - v8);
  if ( (int)result <= 0 )
    goto LABEL_12;
  return result;
}

