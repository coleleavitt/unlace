void __fastcall sub_34840(__int64 a1, unsigned __int8 a2)
{
  char *v2; // rbx
  __int64 *v3; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rsi

  if ( *(_BYTE *)(a1 + 142) != a2 )
  {
    *(_BYTE *)(a1 + 142) = a2;
    if ( (debug & 0x400000) != 0 )
    {
      if ( a2 > 5u )
      {
        sub_28400();
        sub_348C0();
      }
      else
      {
        v2 = off_C8400[a2];
        v3 = sub_34340(a1);
        v7 = src;
        if ( v3[1] )
          v7 = (const char *)*v3;
        sub_88B80((unsigned int)"%s state -> %s\n", (_DWORD)v7, (_DWORD)v2, v4, v5, v6);
      }
    }
  }
}
