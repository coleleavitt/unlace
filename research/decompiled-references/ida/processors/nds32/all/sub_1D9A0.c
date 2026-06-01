__int64 __fastcall sub_1D9A0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rbp
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-88h] BYREF
  __int128 v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  __int128 v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a3 != 115 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v5 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = 1;
    *v5 = 0;
    return a1;
  }
  v20 = 0;
  v22 = 0;
  v21 = 0;
  v8 = node2ea(a4);
  v9 = a5;
  if ( !(unsigned __int8)sub_18E70((__int64)&v20, a5, v8) )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    goto LABEL_7;
  }
  if ( !(_QWORD)v21 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v11 = qvector_reserve(a1, 0, 10, 1);
    v9 = 0x6573207974706D65LL;
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)v11 = 0x6573207974706D65LL;
    *(_BYTE *)(v11 + 8) = 116;
    *(_BYTE *)(*(_QWORD *)a1 + 9LL) = 0;
    goto LABEL_7;
  }
  v18 = 0;
  v19 = 0;
  v18 = qvector_reserve(&v18, 0, 7, 1);
  *(_QWORD *)&v19 = 7;
  *(_BYTE *)(v18 + 6) = 0;
  v12 = v18;
  *(_DWORD *)v18 = 1734701683;
  *(_WORD *)(v12 + 4) = 14963;
  v13 = v20;
  v14 = v20 + 32 * v21;
  if ( v20 != v14 )
  {
    do
    {
      sub_11CF0(
        &v18,
        (__int64)"%s,",
        *(const char **)(*(_QWORD *)(*(_QWORD *)(a5 + 16) + 56LL) + 8LL * *(int *)(v13 + 24)));
      v13 += 32;
    }
    while ( v14 != v13 );
  }
  v15 = v19;
  v9 = v18;
  v16 = v19 - 1;
  if ( (__int64)v19 - 1 <= 1 )
  {
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, v18, v10);
      v15 = v19;
      v17 = 0;
      v9 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    if ( *((_QWORD *)&v19 + 1) < v16 )
    {
      v18 = qvector_reserve(&v18, v18, v19 - 1, 1);
      v9 = v18;
    }
    *(_QWORD *)&v19 = v16;
    *(_BYTE *)(v9 + v15 - 2) = 0;
    v9 = v18;
    v15 = v19;
  }
  v17 = *((_QWORD *)&v19 + 1);
LABEL_17:
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v15;
  *(_QWORD *)(a1 + 16) = v17;
LABEL_7:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, v9, v10);
  }
  return a1;
}

