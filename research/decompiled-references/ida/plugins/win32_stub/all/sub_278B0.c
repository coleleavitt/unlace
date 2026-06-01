__int64 __fastcall sub_278B0(_QWORD *a1)
{
  struct addrinfo *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = (struct addrinfo *)a1[2];
  if ( v2 )
  {
    freeaddrinfo(v2);
    a1[2] = 0;
  }
  qsem_free();
  a1[4] = 0;
  result = qmutex_free();
  v4 = a1[8];
  a1[3] = 0;
  if ( v4 )
  {
    a1[9] = 0;
    result = qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    return qfree();
  }
  return result;
}

