unsigned __int64 __fastcall sub_15BA0(__int64 a1)
{
  __int64 v1; // r13
  size_t v2; // rax
  size_t v3; // r14
  size_t v4; // rbx
  _BYTE **v5; // rbx
  _BYTE *v6; // rsi
  const char *v7; // rbp
  _BYTE **v8; // rbx
  char *s1; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 16);
  v12 = __readfsqword(0x28u);
  if ( !getinf_buf() )
    s[0] = 0;
  v2 = strlen(s);
  v3 = v2 + 1;
  v4 = v2;
  s1 = (char *)qvector_reserve();
  memmove(s1, s, v4);
  s1[v4] = 0;
  v5 = *(_BYTE ***)(v1 + 24);
  v6 = *v5;
  if ( !*v5 )
  {
LABEL_16:
    if ( !under_debugger )
      interr();
    BUG();
  }
  v7 = (const char *)&dword_19544;
  if ( v3 )
    v7 = s1;
  v8 = v5 + 1;
  while ( strcmp(v7, &v6[*v6 == 45]) )
  {
    v6 = *v8++;
    if ( !v6 )
      goto LABEL_16;
  }
  if ( s1 )
    qfree();
  *(_BYTE *)(a1 + 258) = 0;
  if ( netnode_qsupstr() > 0 )
    sub_14AF0((__int64 *)(a1 + 128), 0);
  if ( *(_QWORD *)(a1 + 144) <= 1u )
  {
    read_ioports();
    netnode_supset();
  }
  *(_WORD *)(a1 + 256) = netnode_altval();
  return v12 - __readfsqword(0x28u);
}

