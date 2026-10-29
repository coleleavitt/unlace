__int64 __fastcall sub_2F250(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 *a4,
        double a5,
        double a6,
        double a7)
{
  __int64 result; // rax
  unsigned int v10; // r14d
  int v12; // r13d
  int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rax

  result = *a2;
  if ( a3 >= *a2 + 4 )
  {
    *a2 = result + 4;
    v10 = *(_DWORD *)result;
    if ( a4 && a4[2] < (unsigned __int64)v10 )
    {
      *a4 = qvector_reserve(a4, *a4, v10, 4);
    }
    else if ( !v10 )
    {
      return result;
    }
    v12 = 0;
    do
    {
      result = sub_2EFE0(a1, a2, a3, a5, a6, a7);
      v13 = result;
      if ( a4 )
      {
        result = a4[1];
        v14 = *a4;
        if ( a4[2] < (unsigned __int64)(result + 1) )
        {
          v15 = qvector_reserve(a4, v14, result + 1, 4);
          *a4 = v15;
          v14 = v15;
          result = a4[1];
        }
        *(_DWORD *)(v14 + 4 * result) = v13;
        ++a4[1];
      }
      ++v12;
    }
    while ( v10 != v12 );
  }
  return result;
}

