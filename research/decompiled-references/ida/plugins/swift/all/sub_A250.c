const char *__fastcall sub_A250(__int64 a1)
{
  size_t v1; // rbp
  __int64 v2; // rax
  const char *v3; // r12
  __int64 v5; // rax

  if ( !(_BYTE)byte_28758 && __cxa_guard_acquire(&byte_28758) )
  {
    xmmword_28768 = 0;
    obj = nullptr;
    v5 = qvector_reserve(&obj, 0, 8, 1);
    obj = (char *)v5;
    *(_QWORD *)&xmmword_28768 = 8;
    *(_DWORD *)v5 = 1718187859;
    *(_DWORD *)(v5 + 3) = 976909414;
    obj[7] = 0;
    __cxa_atexit((void (*)(void *))sub_72D0, &obj, &off_274A0);
    __cxa_guard_release(&byte_28758);
  }
  if ( !(_QWORD)xmmword_28768 )
    return *(const char **)(a1 + 32);
  v1 = xmmword_28768 - 1;
  if ( !obj )
    return (const char *)(*(_QWORD *)(a1 + 32) + v1);
  if ( (_QWORD)xmmword_28768 == 1 )
  {
    v3 = *(const char **)(a1 + 32);
    return &v3[v1];
  }
  v2 = *(_QWORD *)(a1 + 40);
  v3 = s1;
  if ( v2 )
  {
    v3 = *(const char **)(a1 + 32);
    if ( v2 - 1 >= v1 && !strncmp(*(const char **)(a1 + 32), obj, v1) )
      return &v3[v1];
  }
  return v3;
}

