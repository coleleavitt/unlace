__int64 __fastcall sub_47270(__int64 a1)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // rbp
  char *v5; // rax
  char *v6; // r13
  char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // rsi
  char v15; // al
  __int64 v16; // r15
  size_t v17; // rax
  size_t v18; // r13
  size_t v19; // rbp
  _BYTE **v20; // r12
  _BYTE *v21; // rsi
  char *v22; // r14
  char *v23; // rbp
  __int64 v24; // r15
  __int64 v25; // [rsp+0h] [rbp-88h]
  __int64 v26; // [rsp+8h] [rbp-80h]
  char *s1; // [rsp+10h] [rbp-78h] BYREF
  __int128 v28; // [rsp+18h] [rbp-70h]
  char s[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 184) = netnode_altval();
  *(_BYTE *)(a1 + 516) = 1;
  if ( !getinf_buf() )
    s[0] = 0;
  s1 = 0;
  v28 = 0;
  v2 = strlen(s);
  v3 = v2 + 1;
  v4 = v2;
  v5 = (char *)qvector_reserve((__int64)&s1, 0, v2 + 1, 1);
  *(_QWORD *)&v28 = v3;
  s1 = v5;
  memmove(v5, s, v4);
  s1[v4] = 0;
  v6 = s1;
  v7 = s1;
  if ( !(_QWORD)v28 )
    v7 = (char *)&::s1;
  v10 = strncasecmp(v7, "ARM", 3u);
  if ( v6 )
  {
    *(_QWORD *)&v28 = 0;
    qfree((__int64)v6);
  }
  if ( v10 )
    goto LABEL_8;
  v15 = getinf_flag(3, 32, v8, v9, v11, v12, v25, v26, (__int64)s1);
  v16 = *(_QWORD *)(a1 + 16);
  HIBYTE(v26) = v15;
  if ( !getinf_buf() )
    s[0] = 0;
  s1 = 0;
  v28 = 0;
  v17 = strlen(s);
  v18 = v17 + 1;
  v19 = v17;
  s1 = (char *)qvector_reserve((__int64)&s1, 0, v17 + 1, 1);
  *(_QWORD *)&v28 = v18;
  memmove(s1, s, v19);
  s1[v19] = 0;
  v20 = *(_BYTE ***)(v16 + 24);
  v21 = *v20;
  if ( !*v20 )
  {
LABEL_24:
    if ( !under_debugger )
      interr(10336);
    BUG();
  }
  v22 = s1;
  v23 = (char *)&::s1;
  if ( (_QWORD)v28 )
    v23 = s1;
  v24 = 0;
  while ( 1 )
  {
    v13 = &v21[*v21 == 45];
    if ( !strcmp(v23, v13) )
      break;
    v21 = v20[++v24];
    if ( !v21 )
      goto LABEL_24;
  }
  if ( v22 )
  {
    *(_QWORD *)&v28 = 0;
    qfree((__int64)v22);
  }
  if ( HIBYTE(v26) != ((((_DWORD)v24 - 2) & 0xFFFFFFFD) == 0) )
  {
    sub_1DA50((__int64)"** Fixed processor name according to endianness defined in idainfo\n");
LABEL_8:
    v13 = "ARMB";
    if ( !(unsigned __int8)getinf_flag(3, 32, v8, v9, v11, v12, v25, v26, (__int64)s1) )
      v13 = "ARM";
    setinf_buf();
  }
  return sub_47200(a1, v13);
}
