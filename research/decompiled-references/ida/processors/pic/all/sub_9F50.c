__int64 __fastcall sub_9F50(__int64 a1)
{
  size_t v1; // rbx
  _BYTE **v2; // r13
  _BYTE *v3; // rsi
  const char *v4; // rbp
  char *s1; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( !getinf_buf() )
    s[0] = 0;
  v1 = strlen(s);
  s1 = (char *)qvector_reserve();
  memmove(s1, s, v1);
  s1[v1] = 0;
  v2 = *(_BYTE ***)(a1 + 24);
  v3 = *v2;
  if ( !*v2 )
  {
LABEL_12:
    if ( !under_debugger )
    {
      interr();
      if ( s1 )
        qfree();
      _Unwind_Resume((struct _Unwind_Exception *)v1);
    }
    BUG();
  }
  v4 = (const char *)&unk_D8B0;
  if ( v1 != -1 )
    v4 = s1;
  v1 = 0;
  while ( strcmp(v4, &v3[*v3 == 45]) )
  {
    v3 = v2[++v1];
    if ( !v3 )
      goto LABEL_12;
  }
  if ( s1 )
    qfree();
  return (unsigned int)v1;
}

