__int64 __fastcall sub_304F0(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // r12
  int v4; // ebp
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax

  result = unpack_dd();
  v2 = a1[1];
  v3 = (int)result;
  v4 = result;
  if ( v2 < (int)result )
  {
    v8 = *a1;
    if ( a1[2] < (unsigned __int64)(int)result )
    {
      v9 = qvector_reserve();
      v2 = a1[1];
      *a1 = v9;
      v8 = v9;
    }
    result = (__int64)memset((void *)(v8 + 32 * v2), 0, 32 * (v3 - v2));
  }
  else if ( (int)result == v2 )
  {
    goto LABEL_4;
  }
  a1[1] = v3;
LABEL_4:
  v5 = 0;
  v6 = 32LL * (unsigned int)v4;
  if ( v4 > 0 )
  {
    do
    {
      v7 = v5 + *a1;
      *(_QWORD *)v7 = unpack_dq() - 1;
      *(_QWORD *)(v7 + 8) = unpack_dq() - 1;
      *(_QWORD *)(v7 + 16) = unpack_dq() - 1;
      result = unpack_dd();
      *(_BYTE *)(v7 + 24) = (_DWORD)result != 0;
      v5 += 32;
    }
    while ( v6 != v5 );
  }
  return result;
}

