__int64 __fastcall sub_13970(__int64 a1)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rax
  _BYTE **v7; // r13
  _BYTE *v8; // rsi
  char *v9; // r12
  char *v10; // rbp
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  s1 = nullptr;
  v13 = 0;
  v1 = strlen(s);
  v2 = v1 + 1;
  v3 = v1;
  v6 = (char *)qvector_reserve(&s1, 0, v1 + 1, 1, v4, v5);
  *(_QWORD *)&v13 = v2;
  s1 = v6;
  memmove(v6, s, v3);
  s1[v3] = 0;
  v7 = *(_BYTE ***)(a1 + 24);
  v8 = *v7;
  if ( !*v7 )
  {
LABEL_12:
    if ( !under_debugger )
    {
      interr(10336);
      if ( s1 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(s1);
      }
      _Unwind_Resume((struct _Unwind_Exception *)v3);
    }
    BUG();
  }
  v9 = s1;
  v10 = (char *)&unk_16EE8;
  if ( (_QWORD)v13 )
    v10 = s1;
  v3 = 0;
  while ( strcmp(v10, &v8[*v8 == 45]) )
  {
    v8 = v7[++v3];
    if ( !v8 )
      goto LABEL_12;
  }
  if ( v9 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v9);
  }
  return (unsigned int)v3;
}

