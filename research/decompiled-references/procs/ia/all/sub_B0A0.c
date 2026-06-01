__int64 __fastcall sub_B0A0(__int64 a1)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbx
  char *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE **v9; // r13
  _BYTE *v10; // rsi
  char *v11; // r12
  char *v12; // rbp
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  s1 = nullptr;
  v15 = 0;
  v1 = strlen(s);
  v2 = v1 + 1;
  v3 = v1;
  v4 = (char *)qvector_reserve(&s1, 0, v1 + 1, 1);
  *(_QWORD *)&v15 = v2;
  s1 = v4;
  memmove(v4, s, v3);
  s1[v3] = 0;
  v9 = *(_BYTE ***)(a1 + 24);
  v10 = *v9;
  if ( !*v9 )
  {
LABEL_12:
    if ( !under_debugger )
    {
      interr(10336, v10, v5, v6, v7, v8);
      if ( s1 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(s1);
      }
      _Unwind_Resume((struct _Unwind_Exception *)v3);
    }
    BUG();
  }
  v11 = s1;
  v12 = (char *)&unk_20B78;
  if ( (_QWORD)v15 )
    v12 = s1;
  v3 = 0;
  while ( strcmp(v12, &v10[*v10 == 45]) )
  {
    v10 = v9[++v3];
    if ( !v10 )
      goto LABEL_12;
  }
  if ( v11 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v11);
  }
  return (unsigned int)v3;
}
