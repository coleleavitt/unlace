__int64 __fastcall sub_EC8D0(__int64 a1, int a2, int a3)
{
  unsigned int v5; // r13d
  int v6; // ebp
  char *v7; // rdi
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  void *s; // [rsp+8h] [rbp-40h]
  int v15; // [rsp+10h] [rbp-38h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v5 = sub_D2AD0(a1, ((unsigned __int64)(unsigned int)(a2 + 4096) - 4063) >> 12, (__int64)&v13);
  if ( !v5 )
  {
    v6 = a2 - v15;
    v7 = (char *)s;
    if ( a2 - v15 == 1 )
    {
      memset(s, 0, (int)v13 + 0x4000 - (int)s);
      v7 = (char *)s;
    }
    v8 = 4LL * v6 - 4;
    if ( *(_DWORD *)&v7[v8] )
      sub_D2B50(a1);
    LOWORD(v9) = (383 * a3) & 0x1FFF;
    v10 = 2LL * (unsigned __int16)v9;
    if ( *(_WORD *)(v13 + v10) )
    {
      if ( !v6 )
      {
LABEL_13:
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          62667,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        return 11;
      }
      v11 = 0;
      while ( 1 )
      {
        v9 = ((_WORD)v9 + 1) & 0x1FFF;
        v10 = 2LL * v9;
        if ( !*(_WORD *)(v13 + v10) )
          break;
        if ( (unsigned int)(v6 - 1) + 1LL == ++v11 )
          goto LABEL_13;
      }
    }
    *(_DWORD *)((char *)s + v8) = a3;
    *(_WORD *)(v13 + v10) = v6;
  }
  return v5;
}
