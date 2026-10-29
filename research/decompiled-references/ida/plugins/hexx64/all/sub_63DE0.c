void *__fastcall sub_63DE0(__int64 *a1, int a2, double a3)
{
  void *result; // rax
  signed int v4; // ebx
  __int64 v5; // r12

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC489u, a3);
    BUG();
  }
  result = (void *)a2;
  if ( a2 >= (unsigned __int64)a1[1] )
  {
    v4 = (a2 + 64) & 0xFFFFFFC0;
    v5 = qrealloc_or_throw();
    result = memset((void *)(v5 + 8 * ((unsigned __int64)a1[1] >> 6)), 0, (unsigned __int64)(v4 - a1[1]) >> 3);
    *a1 = v5;
    a1[1] = v4;
  }
  return result;
}

