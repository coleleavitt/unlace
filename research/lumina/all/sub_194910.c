const char *sub_194910()
{
  const char *v0; // rbx
  __uid_t v2; // eax
  struct passwd *v3; // rax
  char *pw_dir; // rbp
  size_t v5; // rax
  size_t v6; // rbx
  size_t v7; // r12
  void *v8; // rdi
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  sub_19A550(v9);
  if ( (unsigned __int64)xmmword_242988 <= 1 )
  {
    sub_19AD90((char *)"HOME");
    if ( (unsigned __int64)xmmword_242988 <= 1 )
    {
      v2 = getuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_dir = v3->pw_dir;
        if ( !pw_dir || (v5 = strlen(v3->pw_dir), (v6 = v5) == 0) )
        {
          *(_QWORD *)&xmmword_242988 = 0;
LABEL_13:
          v0 = s1;
          goto LABEL_3;
        }
        v7 = v5 + 1;
        v8 = qword_242980;
        if ( *((_QWORD *)&xmmword_242988 + 1) < v5 + 1 )
        {
          qword_242980 = (void *)sub_1987B0(&qword_242980, qword_242980, v5 + 1, 1);
          v8 = qword_242980;
        }
        *(_QWORD *)&xmmword_242988 = v7;
        memmove(v8, pw_dir, v6);
        *((_BYTE *)qword_242980 + v6) = 0;
      }
      if ( !(_QWORD)xmmword_242988 )
        goto LABEL_13;
    }
  }
  v0 = (const char *)qword_242980;
LABEL_3:
  sub_19A570(v9[0]);
  return v0;
}
