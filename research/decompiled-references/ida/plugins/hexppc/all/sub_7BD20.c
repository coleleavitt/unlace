__int64 __fastcall sub_7BD20(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rax

  v5 = a1[1];
  v6 = (int)v5;
  v7 = (int)v5 + a3;
  if ( v5 < v7 )
  {
    v10 = *a1;
    if ( a1[2] < v7 )
    {
      v11 = qvector_reserve();
      v5 = a1[1];
      *a1 = v11;
      v10 = v11;
    }
    memset((void *)(v10 + v5), 0, v7 - v5);
    a1[1] = v7;
  }
  else if ( v7 != v5 )
  {
    a1[1] = v7;
  }
  v8 = *a1 + v6;
  result = 0;
  if ( v8 < v8 + a3 )
  {
    do
    {
      *(_BYTE *)(v8 + result) = *(_BYTE *)(a2 + result);
      ++result;
    }
    while ( a3 != result );
  }
  return result;
}

