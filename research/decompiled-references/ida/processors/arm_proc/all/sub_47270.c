__int64 __fastcall sub_47270(__int64 a1)
{
  size_t v2; // rbp
  const char *v3; // rdi
  int v4; // ebp
  const char *v5; // rsi
  char v7; // al
  __int64 v8; // r15
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rbp
  _BYTE **v12; // r12
  _BYTE *v13; // rsi
  const char *v14; // rbp
  __int64 v15; // r15
  char v16; // [rsp+Fh] [rbp-79h]
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  char s[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 184) = netnode_altval();
  *(_BYTE *)(a1 + 516) = 1;
  if ( !getinf_buf() )
    s[0] = 0;
  v2 = strlen(s);
  s1 = (char *)qvector_reserve();
  memmove(s1, s, v2);
  s1[v2] = 0;
  v3 = s1;
  if ( v2 == -1 )
    v3 = &::s1;
  v4 = strncasecmp(v3, "ARM", 3u);
  if ( s1 )
    qfree();
  if ( v4 )
    goto LABEL_8;
  v7 = getinf_flag();
  v8 = *(_QWORD *)(a1 + 16);
  v16 = v7;
  if ( !getinf_buf() )
    s[0] = 0;
  v9 = strlen(s);
  v10 = v9 + 1;
  v11 = v9;
  s1a = (char *)qvector_reserve();
  memmove(s1a, s, v11);
  s1a[v11] = 0;
  v12 = *(_BYTE ***)(v8 + 24);
  v13 = *v12;
  if ( !*v12 )
  {
LABEL_24:
    if ( !under_debugger )
      interr();
    BUG();
  }
  v14 = &::s1;
  if ( v10 )
    v14 = s1a;
  v15 = 0;
  while ( 1 )
  {
    v5 = &v13[*v13 == 45];
    if ( !strcmp(v14, v5) )
      break;
    v13 = v12[++v15];
    if ( !v13 )
      goto LABEL_24;
  }
  if ( s1a )
    qfree();
  if ( v16 != ((((_DWORD)v15 - 2) & 0xFFFFFFFD) == 0) )
  {
    sub_1DA50((__int64)"** Fixed processor name according to endianness defined in idainfo\n");
LABEL_8:
    v5 = "ARMB";
    if ( !(unsigned __int8)getinf_flag() )
      v5 = "ARM";
    setinf_buf();
  }
  return sub_47200(a1, v5);
}

