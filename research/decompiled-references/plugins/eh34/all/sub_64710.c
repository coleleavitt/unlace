__int64 __fastcall sub_64710(__int64 a1, __int64 a2)
{
  const char **v2; // r14
  char *v3; // rbx
  __int64 v4; // rax
  char *v5; // rbp
  int v6; // r13d
  char *v7; // rax
  unsigned int v8; // ebx
  char *haystack; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v2 = (const char **)&off_8C460;
  v3 = (char *)s1;
  v4 = *(_QWORD *)(a1 + 56);
  v12 = __readfsqword(0x28u);
  (**(void (__fastcall ***)(char **, __int64, __int64))(v4 + 32))(&haystack, v4 + 32, a2);
  v5 = haystack;
  if ( v11 )
    v3 = haystack;
  v6 = 0;
  while ( 1 )
  {
    v7 = strstr(v3, *v2);
    if ( v7 )
    {
      if ( v7 - v3 != -1 )
        break;
    }
    ++v6;
    v2 += 2;
    if ( v6 == 4 )
    {
      v8 = -1;
      goto LABEL_8;
    }
  }
  v8 = LOBYTE((&off_8C460)[2 * v6 + 1]);
LABEL_8:
  if ( v5 )
  {
    v11 = 0;
    qfree(v5);
  }
  return v8;
}
