unsigned __int64 __fastcall sub_BB00(__int64 a1)
{
  __int64 v1; // r13
  size_t v2; // rbx
  _BYTE **v3; // r14
  _BYTE *v4; // rsi
  const char *v5; // rbp
  __int64 v6; // rbx
  __int64 *segm_by_name; // rax
  __int64 v8; // rax
  char *s1; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 16);
  v12 = __readfsqword(0x28u);
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
LABEL_17:
    if ( !under_debugger )
      interr();
    BUG();
  }
  v5 = (const char *)&dword_F604;
  if ( v2 != -1 )
    v5 = s1;
  v6 = 0;
  while ( strcmp(v5, &v4[*v4 == 45]) )
  {
    v4 = v3[++v6];
    if ( !v4 )
      goto LABEL_17;
  }
  if ( s1 )
    qfree();
  *(_DWORD *)(a1 + 244) = v6;
  segm_by_name = (__int64 *)get_segm_by_name();
  if ( segm_by_name )
    v8 = *segm_by_name;
  else
    v8 = -1;
  *(_QWORD *)(a1 + 232) = v8;
  if ( netnode_qsupstr() > 0 )
    return sub_ACA0((__int64 *)(a1 + 128), 0);
  else
    return v12 - __readfsqword(0x28u);
}

