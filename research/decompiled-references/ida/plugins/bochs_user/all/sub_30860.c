char *__fastcall sub_30860(char *a1, __int64 a2, char *a3, size_t a4)
{
  unsigned __int64 v4; // rbp
  int v5; // r14d
  char *v8; // rax
  char *v9; // rbx

  v4 = (unsigned __int64)&a1[a2];
  if ( a1 >= &a1[a2] )
    return nullptr;
  v5 = *a3;
  while ( 1 )
  {
    v8 = (char *)memchr(a1, v5, v4 - (_QWORD)a1);
    v9 = v8;
    if ( !v8 || !memcmp(v8, a3, a4) )
      break;
    a1 = v9 + 1;
    if ( (unsigned __int64)(v9 + 1) >= v4 )
      return nullptr;
  }
  return v9;
}

