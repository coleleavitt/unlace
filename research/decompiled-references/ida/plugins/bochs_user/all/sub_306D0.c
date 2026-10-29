__int64 __fastcall sub_306D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = qfopen();
  result = 0;
  if ( v3 )
  {
    v5 = qfsize();
    v6 = v5;
    if ( v5 )
    {
      v7 = a2[1];
      if ( v7 < v5 )
      {
        v8 = *a2;
        if ( a2[2] < v5 )
        {
          v9 = qvector_reserve();
          v7 = a2[1];
          *a2 = v9;
          v8 = v9;
        }
        memset((void *)(v8 + v7), 0, v6 - v7);
        a2[1] = v6;
      }
      else if ( v5 != v7 )
      {
        a2[1] = v5;
      }
      qfread();
    }
    qfclose();
    return 1;
  }
  return result;
}

