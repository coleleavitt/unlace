__int64 __fastcall sub_CF140(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 i; // rbp
  _QWORD *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rsi
  _DWORD *v11; // rdx
  int v12; // ebx
  _QWORD *v13; // rsi

  if ( a2 )
    result = sub_CDCD0(a1, a2);
  for ( i = *a3; i; i = *(_QWORD *)(i + 80) )
  {
    v6 = *(_QWORD **)(i + 16);
    if ( v6 && *(_QWORD *)(a1 + 16) )
      sub_CDAF0(a1, v6);
    v7 = *(_QWORD *)(i + 40);
    if ( v7 )
      sub_CDCD0(a1, v7);
    result = sub_CDDC0(a1, *(int **)(i + 48));
    v8 = *(_QWORD *)(i + 64);
    if ( v8 )
    {
      sub_CDDC0(a1, *(int **)v8);
      result = sub_CDDC0(a1, *(int **)(v8 + 16));
      v9 = *(_QWORD *)(v8 + 24);
      if ( v9 )
        result = sub_CDCD0(a1, v9);
      v10 = *(_QWORD *)(v8 + 8);
      if ( v10 )
        result = sub_CDCD0(a1, v10);
    }
    v11 = *(_DWORD **)(i + 32);
    if ( v11 )
    {
      result = (unsigned int)*v11;
      if ( (int)result > 0 )
      {
        v12 = 0;
        do
        {
          result = 13LL * v12;
          v13 = *(_QWORD **)&v11[26 * v12 + 12];
          if ( v13 )
          {
            if ( *(_QWORD *)(a1 + 16) )
            {
              result = sub_CDAF0(a1, v13);
              v11 = *(_DWORD **)(i + 32);
            }
          }
          ++v12;
        }
        while ( v12 < *v11 );
      }
    }
  }
  return result;
}
