__int64 __fastcall sub_14FC0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax

  v3 = a2[1];
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = v3 + 2;
    v6 = *a2;
    --v3;
    if ( a2[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a2;
    v5 = 3;
    v4 = 2;
    if ( (unsigned __int64)a2[2] >= 3 )
      goto LABEL_3;
  }
  v12 = qvector_reserve(a2, v6, v5, 1);
  *a2 = v12;
  v6 = v12;
LABEL_3:
  a2[1] = v5;
  result = 15396;
  *(_BYTE *)(v6 + v4) = 0;
  *(_WORD *)(*a2 + v3) = 15396;
  v8 = a2[1];
  if ( !v8 )
  {
    v11 = *a2;
    v9 = 2;
    v10 = 1;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_5;
LABEL_9:
    result = qvector_reserve(a2, v11, v9, 1);
    *a2 = result;
    v11 = result;
    goto LABEL_5;
  }
  v9 = v8 + 1;
  v10 = a2[1];
  v11 = *a2;
  --v8;
  if ( a2[2] < v9 )
    goto LABEL_9;
LABEL_5:
  a2[1] = v9;
  *(_BYTE *)(v11 + v10) = 0;
  *(_BYTE *)(*a2 + v8) = 62;
  return result;
}

