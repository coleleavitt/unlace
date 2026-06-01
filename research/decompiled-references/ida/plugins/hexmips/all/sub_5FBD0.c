void *__fastcall sub_5FBD0(__int64 *a1, int a2)
{
  void *result; // rax
  signed int v3; // ebx
  __int64 v4; // r12

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_37E160(50313);
    BUG();
  }
  result = (void *)a2;
  if ( a2 >= (unsigned __int64)a1[1] )
  {
    v3 = (a2 + 64) & 0xFFFFFFC0;
    v4 = qrealloc_or_throw();
    result = memset((void *)(v4 + 8 * ((unsigned __int64)a1[1] >> 6)), 0, (unsigned __int64)(v3 - a1[1]) >> 3);
    *a1 = v4;
    a1[1] = v3;
  }
  return result;
}

