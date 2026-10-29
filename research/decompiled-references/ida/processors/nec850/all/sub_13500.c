__int64 __fastcall sub_13500(__int64 a1)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbx
  char *v4; // rax
  _BYTE **v5; // r13
  _BYTE *v6; // rsi
  char *v7; // r12
  char *v8; // rbp
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v11; // [rsp+8h] [rbp-60h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  s1 = nullptr;
  v11 = 0;
  v1 = strlen(s);
  v2 = v1 + 1;
  v3 = v1;
  v4 = (char *)qvector_reserve(&s1, 0, v1 + 1, 1);
  *(_QWORD *)&v11 = v2;
  s1 = v4;
  memmove(v4, s, v3);
  s1[v3] = 0;
  v5 = *(_BYTE ***)(a1 + 24);
  v6 = *v5;
  if ( !*v5 )
  {
LABEL_12:
    if ( !under_debugger )
    {
      interr(10336);
      if ( s1 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(s1);
      }
      _Unwind_Resume((struct _Unwind_Exception *)v3);
    }
    BUG();
  }
  v7 = s1;
  v8 = (char *)&unk_255D0;
  if ( (_QWORD)v11 )
    v8 = s1;
  v3 = 0;
  while ( strcmp(v8, &v6[*v6 == 45]) )
  {
    v6 = v5[++v3];
    if ( !v6 )
      goto LABEL_12;
  }
  if ( v7 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v7);
  }
  return (unsigned int)v3;
}

