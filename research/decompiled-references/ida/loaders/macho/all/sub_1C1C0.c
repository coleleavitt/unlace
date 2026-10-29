__int64 __fastcall sub_1C1C0(_QWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rsi
  _DWORD *v10; // rax
  _DWORD *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx

  result = 0;
  if ( a2 >= 0 && (unsigned __int64)a2 < a1[70] )
  {
    v6 = a1[66];
    v7 = *(_QWORD *)(a1[69] + 32LL * a2);
    v8 = v6 + 32LL * a1[67];
    if ( v6 == v8 )
    {
LABEL_19:
      v6 = 0;
    }
    else
    {
      while ( (~(unsigned __int8)*(_DWORD *)(v6 + 24) & 5) != 0 )
      {
        v6 += 32;
        if ( v8 == v6 )
          goto LABEL_19;
      }
    }
    v9 = v7 - *(_QWORD *)v6;
    v10 = (_DWORD *)a1[88];
    v11 = &v10[3 * a1[89]];
    if ( v10 == v11 )
    {
LABEL_14:
      v12 = a1[91];
      v13 = v12 + 16LL * a1[92];
      if ( v13 == v12 )
      {
        return 0;
      }
      else
      {
        while ( *(_QWORD *)v12 != v9 )
        {
          v12 += 16;
          if ( v13 == v12 )
            return 0;
        }
        *a3 = *(_DWORD *)(v12 + 8);
        *a4 = *(_DWORD *)(v12 + 12);
        return 1;
      }
    }
    else
    {
      while ( *v10 != v9 )
      {
        v10 += 3;
        if ( v11 == v10 )
          goto LABEL_14;
      }
      *a3 = v10[1];
      *a4 = v10[2];
      return 1;
    }
  }
  return result;
}

