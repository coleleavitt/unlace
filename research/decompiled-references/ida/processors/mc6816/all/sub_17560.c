unsigned __int64 __fastcall sub_17560(__int64 a1)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbx
  _BYTE **v4; // rbx
  _BYTE *v5; // rsi
  const char *v6; // rbp
  _BYTE **v7; // rbx
  char *s1; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !getinf_buf() )
    s[0] = 0;
  v1 = strlen(s);
  v2 = v1 + 1;
  v3 = v1;
  s1 = (char *)qvector_reserve();
  memmove(s1, s, v3);
  s1[v3] = 0;
  v4 = *(_BYTE ***)(a1 + 24);
  v5 = *v4;
  if ( !*v4 )
  {
LABEL_12:
    if ( !under_debugger )
      interr();
    BUG();
  }
  v6 = byte_1A764;
  if ( v2 )
    v6 = s1;
  v7 = v4 + 1;
  while ( strcmp(v6, &v5[*v5 == 45]) )
  {
    v5 = *v7++;
    if ( !v5 )
      goto LABEL_12;
  }
  if ( s1 )
    qfree();
  return v11 - __readfsqword(0x28u);
}

