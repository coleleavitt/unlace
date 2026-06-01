const char *__fastcall sub_9190(const char *src)
{
  size_t v2; // rax
  size_t v3; // rbp
  const char *result; // rax
  size_t v5; // r12
  void *v6; // rdi
  __int64 v7; // rbx

  if ( !(_BYTE)byte_205B8 && __cxa_guard_acquire(&byte_205B8) )
  {
    obj = nullptr;
    xmmword_205C8 = 0;
    __cxa_atexit((void (*)(void *))sub_7D80, &obj, &off_1FCB8);
    __cxa_guard_release(&byte_205B8);
  }
  if ( !src || (v2 = strlen(src), (v3 = v2) == 0) )
  {
    *(_QWORD *)&xmmword_205C8 = 0;
    return s1;
  }
  v5 = v2 + 1;
  v6 = obj;
  if ( *((_QWORD *)&xmmword_205C8 + 1) < v2 + 1 )
  {
    obj = (void *)qvector_reserve(&obj, obj, v2 + 1, 1);
    v6 = obj;
  }
  *(_QWORD *)&xmmword_205C8 = v5;
  memmove(v6, src, v3);
  *((_BYTE *)obj + v3) = 0;
  v7 = xmmword_205C8;
  if ( (unsigned __int64)xmmword_205C8 > 1 )
  {
    result = (const char *)obj;
    if ( ((*(_BYTE *)obj - 43) & 0xFD) != 0 )
      return result;
    if ( *((_QWORD *)&xmmword_205C8 + 1) < (unsigned __int64)(xmmword_205C8 + 1) )
    {
      result = (const char *)qvector_reserve(&obj, obj, xmmword_205C8 + 1, 1);
      obj = (void *)result;
    }
    *(_QWORD *)&xmmword_205C8 = v7 + 1;
    result[v7] = 0;
    memmove((char *)obj + 1, obj, v7 - 1);
    *(_BYTE *)obj = 92;
    v7 = xmmword_205C8;
  }
  result = (const char *)obj;
  if ( !v7 )
    return s1;
  return result;
}
