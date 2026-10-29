__int64 __fastcall sub_A0B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax

  v7 = *(_QWORD *)(a1 + 632);
  v8 = a2[1];
  if ( v8 < v7 )
  {
    v14 = *a2;
    if ( a2[2] < v7 )
    {
      v14 = qvector_reserve(a2, *a2, *(_QWORD *)(a1 + 632), 4, a5, a6);
      v8 = a2[1];
      *a2 = v14;
    }
    memset((void *)(v14 + 4 * v8), 0, 4 * (v7 - v8));
    a2[1] = v7;
    v8 = v7;
  }
  else if ( v7 != v8 )
  {
    a2[1] = v7;
    v8 = v7;
  }
  v9 = *a2;
  result = *a2 + 4 * v8;
  if ( *a2 != result )
  {
    v11 = result - v9 - 4;
    result = 0;
    v12 = v11 >> 2;
    do
    {
      v13 = result;
      *(_DWORD *)(v9 + 4 * result) = result;
      ++result;
    }
    while ( v12 != v13 );
  }
  return result;
}

