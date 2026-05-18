__int64 __fastcall sub_FE180(__int64 a1, _QWORD *a2, int a3, double a4)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rsi
  _DWORD *v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // rax
  unsigned int *v12; // rbx
  __int64 result; // rax
  unsigned int *v14; // rbx
  unsigned int *v15; // r14
  __int64 v16; // rsi
  _DWORD *v17; // rsi

  do
  {
    v6 = (_DWORD *)a2[4];
    if ( v6 )
      sub_FE120(a1, v6, a4);
    v7 = (_DWORD *)a2[7];
    if ( v7 )
      sub_FE120(a1, v7, a4);
    v8 = (_DWORD *)a2[9];
    if ( v8 )
      sub_FE120(a1, v8, a4);
    v9 = sub_FDE00(a1, a2[8], a4);
    v10 = a2[6];
    a2[8] = v9;
    v11 = sub_FDE00(a1, v10, a4);
    v12 = (unsigned int *)a2[5];
    a2[6] = v11;
    result = *v12;
    if ( (int)result > 0 )
    {
      v14 = v12 + 2;
      result = 13 * ((unsigned int)(result - 1) + 1LL);
      v15 = &v14[2 * result];
      do
      {
        v16 = *((_QWORD *)v14 + 5);
        if ( v16 )
          result = sub_FE180(a1, v16, 1);
        if ( (*((_BYTE *)v14 + 61) & 4) != 0 )
        {
          v17 = *((_DWORD **)v14 + 11);
          if ( v17 )
            result = (__int64)sub_FE120(a1, v17, a4);
        }
        v14 += 26;
      }
      while ( v14 != v15 );
    }
    if ( !a3 )
      break;
    a2 = (_QWORD *)a2[10];
  }
  while ( a2 );
  return result;
}
