char __fastcall sub_1198E0(char *a1, __int64 a2)
{
  char v2; // al
  char *v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // eax
  const char *v6; // rbx
  size_t v7; // rax
  char v8; // dl
  char result; // al
  int v10; // ebx
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v11[1] = __readfsqword(0x28u);
  v3 = a1;
  if ( v2 == 2 )
  {
LABEL_16:
    result = sub_1196C0(v3, v11, 1u);
    if ( result )
      return (unsigned __int64)(v11[0] - 1LL) > 0xFFFFFFFFFFFFFFFDLL;
  }
  else
  {
    while ( 1 )
    {
      if ( v2 != 4 )
        return 0;
      v4 = *((_QWORD *)v3 + 1);
      v5 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 == 13 )
        break;
      if ( v5 > 0xD )
      {
        if ( v5 != 24 )
        {
          if ( v5 == 56 && *(_BYTE *)(v4 + 32) == 11 )
          {
            v6 = *(const char **)(v4 + 40);
            if ( !strncmp(v6, "_mm_cmp", 7u) )
            {
              v7 = strlen(v6);
              if ( v6[v7 - 3] == 95 )
              {
                v8 = v6[v7 - 2];
                if ( v8 == 115 || v8 == 112 )
                  return v6[v7 - 1] == 100 || v6[v7 - 1] == 115;
              }
            }
          }
          return 0;
        }
        v10 = *(_DWORD *)(v4 + 36);
        result = sub_1196C0((char *)(v4 + 48), v11, 0);
        if ( result )
          return 8 * v10 - 1 == v11[0];
        return result;
      }
      if ( v5 == 5 )
        return sub_119720(v4 + 32, a2);
      if ( v5 - 8 > 3 )
        return 0;
      v2 = *(_BYTE *)(v4 + 32);
      v3 = (char *)(v4 + 32);
      if ( v2 == 2 )
        goto LABEL_16;
    }
    if ( !(unsigned __int8)sub_1196C0((char *)(v4 + 48), v11, 0) || v11[0] != 1 )
      return 0;
    v4 = *((_QWORD *)v3 + 1);
    return sub_119720(v4 + 32, a2);
  }
  return result;
}

