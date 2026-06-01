__int64 __fastcall sub_3AC80(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // r12d
  int v4; // edx
  int v5; // r13d
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(_DWORD **)(a2 + 32);
  v3 = v2[2];
  v4 = v2[5];
  v5 = v2[3];
  if ( !(v5 | v4 | v3) )
    return a1;
  if ( v4 )
  {
    sub_FB10((__int64 *)a1, (__int64)"#wind=%d", v4);
    if ( !v3 )
    {
LABEL_5:
      if ( v5 )
      {
        v7 = *(_QWORD *)(a1 + 8);
        v8 = 2;
        if ( v7 )
          v8 = v7-- + 1;
        v9 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v8 )
        {
          v14 = qvector_reserve(a1, v9, v8, 1);
          *(_QWORD *)a1 = v14;
          v9 = v14;
        }
        *(_QWORD *)(a1 + 8) = v8;
        *(_BYTE *)(v9 + v7) = 32;
        *(_BYTE *)(*(_QWORD *)a1 + v7 + 1) = 0;
        v5 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 12LL);
        goto LABEL_12;
      }
      return a1;
    }
    v11 = *(_QWORD *)(a1 + 8);
    v12 = 2;
    if ( v11 )
      v12 = v11-- + 1;
    v13 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < v12 )
    {
      v15 = qvector_reserve(a1, v13, v12, 1);
      *(_QWORD *)a1 = v15;
      v13 = v15;
    }
    *(_QWORD *)(a1 + 8) = v12;
    *(_BYTE *)(v13 + v11) = 32;
    *(_BYTE *)(*(_QWORD *)a1 + v11 + 1) = 0;
    v3 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
LABEL_4:
    sub_10400((__int64 *)a1, (__int64)"#wind_helpers=%d", v3);
    goto LABEL_5;
  }
  if ( v3 )
    goto LABEL_4;
  if ( v5 )
LABEL_12:
    sub_10400((__int64 *)a1, (__int64)"#try_helpers=%d", v5);
  return a1;
}
