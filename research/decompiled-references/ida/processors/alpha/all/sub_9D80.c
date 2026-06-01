__int64 __fastcall sub_9D80(__int64 a1)
{
  __int64 v1; // r13
  size_t v2; // rbx
  _BYTE **v3; // r14
  _BYTE *v4; // rsi
  const char *v5; // rbp
  __int64 v6; // rbx
  __int16 v7; // ax
  __int64 v8; // rdx
  bool v9; // zf
  char **v10; // rax
  __int64 v11; // rbx
  char *s1; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 16);
  v15 = __readfsqword(0x28u);
  if ( !getinf_buf() )
    s[0] = 0;
  v2 = strlen(s);
  s1 = (char *)qvector_reserve();
  memmove(s1, s, v2);
  s1[v2] = 0;
  v3 = *(_BYTE ***)(v1 + 24);
  v4 = *v3;
  if ( !*v3 )
  {
LABEL_16:
    if ( !under_debugger )
      interr();
    BUG();
  }
  v5 = (const char *)&qword_D948;
  if ( v2 != -1 )
    v5 = s1;
  v6 = 0;
  while ( strcmp(v5, &v4[*v4 == 45]) )
  {
    v4 = v3[++v6];
    if ( !v4 )
      goto LABEL_16;
  }
  if ( s1 )
    qfree();
  *(_DWORD *)(a1 + 208) = v6;
  setinf_flag();
  v7 = netnode_altval();
  v8 = *(_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 216) = v7;
  v9 = (v7 & 4) == 0;
  v10 = off_11720;
  if ( v9 )
    v10 = off_11940;
  *(_QWORD *)(v8 + 56) = v10;
  v11 = netnode_qsupstr();
  sub_9720((_QWORD *)a1, nullptr);
  if ( v11 <= 0 )
    return netnode_supset();
  else
    return v15 - __readfsqword(0x28u);
}

