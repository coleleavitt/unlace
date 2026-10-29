__int64 __fastcall sub_64190(__int64 *a1, int a2, double a3)
{
  __int64 v3; // r12
  char v4; // bl
  unsigned int v5; // ecx
  _QWORD *v6; // rsi
  signed int v8; // r13d

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC489u, a3);
    BUG();
  }
  v3 = *a1;
  v4 = a2;
  if ( a2 >= (unsigned __int64)a1[1] )
  {
    v8 = (a2 + 64) & 0xFFFFFFC0;
    v3 = qrealloc_or_throw();
    memset((void *)(v3 + 8 * ((unsigned __int64)a1[1] >> 6)), 0, (unsigned __int64)(v8 - a1[1]) >> 3);
    *a1 = v3;
    a1[1] = v8;
  }
  v5 = 0;
  v6 = (_QWORD *)(v3 + 8LL * (a2 >> 6));
  if ( ((1LL << v4) & *v6) == 0 )
  {
    v5 = 1;
    *v6 |= 1LL << v4;
  }
  return v5;
}

