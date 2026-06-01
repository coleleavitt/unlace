__int64 *__fastcall _qstring<char>::vsprnt(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // [rsp+8h] [rbp-40h]

  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  v1 = (int)qvsnprintf();
  if ( (_DWORD)v1 )
  {
    v2 = (int)v1 + 1LL;
    if ( a1[2] < v2 )
    {
      v5 = v1 + 1;
      v4 = qvector_reserve();
      v2 = v5;
      *a1 = v4;
    }
    a1[1] = v2;
    qvsnprintf();
  }
  return a1;
}

