__int64 __fastcall sub_386970(__int64 a1, signed int a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebp
  size_t v4; // r14
  __int64 v5; // rax
  char v6; // dl
  const char *v7; // rbx
  const char *i; // r15
  const char *v9; // rax
  const char *v11; // rax
  const char *v12; // rbx
  char *v13; // rsi
  char *s2; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( a2 > 0 )
  {
    s2 = nullptr;
    v15 = 0;
    sub_25FE20((__int64 *)&s2, a1, a2);
    v2 = *(int *)(a1 + 152);
    v3 = *(_DWORD *)(a1 + 152);
    v4 = ((_QWORD)v15 == 0) + (_QWORD)v15 - 1LL;
    if ( v2 < *(_QWORD *)(a1 + 136) )
    {
      while ( 2 )
      {
        v5 = *(_QWORD *)(a1 + 128) + 32 * v2;
        v6 = 0;
        v7 = s1;
        if ( *(_QWORD *)(v5 + 8) )
        {
          v7 = *(const char **)v5;
          v6 = **(_BYTE **)v5;
        }
        for ( i = v7; v6 != 1 || i[1] != 32; i = v9 )
        {
          v9 = (const char *)tag_skipcode();
          if ( i == v9 )
            goto LABEL_10;
          v6 = *v9;
        }
        v11 = (const char *)tag_skipcodes();
        v12 = v11;
        v13 = (char *)s1;
        if ( (_QWORD)v15 )
          v13 = s2;
        if ( !strncmp(v11, v13, v4) && v12[v4] == 2 && v12[v4 + 1] )
        {
          if ( s2 )
          {
            *(_QWORD *)&v15 = 0;
            qfree();
          }
          return v3;
        }
LABEL_10:
        v2 = (int)++v3;
        if ( (unsigned __int64)(int)v3 < *(_QWORD *)(a1 + 136) )
          continue;
        break;
      }
    }
    if ( s2 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
  }
  return (unsigned int)-1;
}

