__int64 __fastcall sub_7D9D0(__int64 a1, __int64 *a2, double a3)
{
  int v4; // eax
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  _QWORD *v7; // rbx
  _QWORD *i; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v12; // rsi
  __int64 v13; // rax

  if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
    sub_7A510(a3);
  v4 = unpack_dd();
  v5 = v4;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 < (unsigned __int64)v4 || v4 < 0 )
    return 0;
  v6 = a2[1];
  if ( v6 < v4 )
  {
    v12 = *a2;
    if ( a2[2] < (unsigned __int64)v4 )
    {
      v13 = qvector_reserve((__int64)a2, v12, v4, 16);
      v6 = a2[1];
      *a2 = v13;
      v12 = v13;
    }
    memset((void *)(v12 + 16 * v6), 0, 16 * (v5 - v6));
    goto LABEL_6;
  }
  if ( v4 != v6 )
  {
LABEL_6:
    a2[1] = v5;
    v6 = v5;
  }
  v7 = (_QWORD *)*a2;
  for ( i = &v7[2 * v6]; i != v7; *(v7 - 1) = sub_7CF00((_QWORD *)a1, a3) )
  {
    if ( *(_DWORD *)(a1 + 48) <= 3u )
    {
      if ( (unsigned __int8)is_cvt64() )
        v9 = (int)sub_7CD20((_QWORD *)a1, a3);
      else
        v9 = sub_7CD40(a1, a3);
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 32);
      v9 = v10 + sub_7CF00((_QWORD *)a1, a3);
    }
    *v7 = v9;
    v7 += 2;
  }
  return 1;
}

