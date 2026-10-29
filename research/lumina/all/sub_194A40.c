__int64 __fastcall sub_194A40(void **a1)
{
  void *v2; // rbx
  const void *v3; // rbp
  void *v4; // rdi
  unsigned int v5; // ebx
  const char *v7; // rax
  int v8; // r9d
  size_t v9; // rax
  size_t v10; // rbp
  size_t v11; // r13
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-1040h] BYREF
  char s[4104]; // [rsp+10h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1018h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_19A550(&v14);
  v2 = (void *)xmmword_242968;
  if ( (unsigned __int64)xmmword_242968 <= 1 )
  {
    v7 = sub_194910();
    sub_1998A0(s, v7, 4096);
    if ( s[0] )
    {
      sub_197540((unsigned int)s, 4096, (unsigned int)s, (unsigned int)".idapro", 0, v8);
      if ( (unsigned __int8)sub_197CA0(s) )
      {
        v9 = strlen(s);
        v10 = v9;
        if ( !v9 )
        {
LABEL_11:
          *(_QWORD *)&xmmword_242968 = 0;
          v5 = 0;
          goto LABEL_7;
        }
      }
      else
      {
        sub_197B20(s, 511);
        v9 = strlen(s);
        v10 = v9;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = v9 + 1;
      v12 = qword_242960;
      if ( *((_QWORD *)&xmmword_242968 + 1) < v9 + 1 )
      {
        qword_242960 = (void *)sub_1987B0(&qword_242960, qword_242960, v9 + 1, 1);
        v12 = qword_242960;
      }
      *(_QWORD *)&xmmword_242968 = v11;
      memmove(v12, s, v10);
      *((_BYTE *)qword_242960 + v10) = 0;
    }
    v2 = (void *)xmmword_242968;
    if ( (unsigned __int64)xmmword_242968 <= 1 )
    {
      v5 = 0;
      goto LABEL_7;
    }
  }
  if ( a1 != &qword_242960 )
  {
    v3 = qword_242960;
    v4 = *a1;
    if ( a1[2] < v2 )
    {
      v13 = sub_1987B0(a1, *a1, v2, 1);
      *a1 = (void *)v13;
      v4 = (void *)v13;
    }
    a1[1] = v2;
    memmove(v4, v3, (size_t)v2 - 1);
    *((_BYTE *)v2 + (_QWORD)*a1 - 1) = 0;
  }
  v5 = 1;
LABEL_7:
  sub_19A570(v14);
  return v5;
}
