__int64 __fastcall sub_382120(char *s, int a2)
{
  char *v2; // rbx
  char *v3; // rax
  char v4; // dl
  __int64 v5; // rax
  __int64 result; // rax
  char *v7; // rbp
  char *v8; // rax
  char *v9; // rbp
  char *v10; // rax
  char *v11; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = s;
  v12[1] = __readfsqword(0x28u);
  v11 = s;
  sub_380BF0(&v11);
  if ( a2 == 2 )
  {
    v7 = strchr(s, 123);
    if ( v7 )
    {
      v8 = strstr(s, "//");
      if ( !v8 )
        v8 = &s[strlen(s)];
      if ( v7 < v8 )
        return 1;
    }
    v3 = v11;
    v4 = *v11;
    if ( *v11 == 47 )
    {
      if ( v11[1] == 47 )
        return 2;
      goto LABEL_5;
    }
  }
  else
  {
    v3 = v11;
    v4 = *v11;
  }
  if ( v4 != 100 || v3[1] != 111 || v3[2] != 2 || v3[3] != 32 )
  {
LABEL_5:
    v12[0] = v3;
    sub_380BF0(v12);
    if ( *(_BYTE *)v12[0] && (*(_BYTE *)v12[0] != 47 || *(_BYTE *)(v12[0] + 1LL) != 47) )
    {
      while ( *v2 != 1 || v2[1] != 32 )
      {
        v5 = tag_skipcode();
        if ( v2 == (char *)v5 )
          return 0;
        v2 = (char *)v5;
      }
    }
    return 1;
  }
  v9 = strchr(s, 123);
  result = 2;
  if ( v9 )
  {
    v10 = strstr(s, "//");
    if ( !v10 )
      v10 = &s[strlen(s)];
    if ( v9 >= v10 )
      return 2;
    return 1;
  }
  return result;
}

