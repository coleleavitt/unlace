__int64 __fastcall sub_84B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v13; // r13
  size_t v14; // rbx
  _BYTE **v15; // r14
  _BYTE *v16; // rsi
  const char *v17; // rbp
  __int64 v18; // rbx
  char *s1; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v13 = *(_QWORD *)(a1 + 16);
  v22 = __readfsqword(0x28u);
  if ( !getinf_buf() )
    s[0] = 0;
  v14 = strlen(s);
  s1 = (char *)qvector_reserve();
  memmove(s1, s, v14);
  s1[v14] = 0;
  v15 = *(_BYTE ***)(v13 + 24);
  v16 = *v15;
  if ( !*v15 )
  {
LABEL_14:
    if ( !under_debugger )
      interr();
    BUG();
  }
  v17 = (const char *)&dword_AFE4;
  if ( v14 != -1 )
    v17 = s1;
  v18 = 0;
  while ( strcmp(v17, &v16[*v16 == 45]) )
  {
    v16 = v15[++v18];
    if ( !v16 )
      goto LABEL_14;
  }
  if ( s1 )
    qfree();
  setinf_flag();
  *(_WORD *)(a1 + 232) = netnode_altval();
  if ( netnode_qsupstr() > 0 )
    sub_7550((__int64 *)(a1 + 128), 0);
  return sub_80A0((_QWORD *)a1);
}

