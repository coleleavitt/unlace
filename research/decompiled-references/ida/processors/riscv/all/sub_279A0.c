__int64 __fastcall sub_279A0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-88h] BYREF
  __int128 v18; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
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
  v19 = 0;
  v21 = 0;
  v20 = 0;
  v8 = node2ea(a4);
  if ( !(unsigned __int8)sub_22D30((__int64)&v19, a5, v8) )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    goto LABEL_7;
  }
  if ( !(_QWORD)v20 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v9 = qvector_reserve(a1, 0, 10, 1);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)v9 = 0x6573207974706D65LL;
    *(_BYTE *)(v9 + 8) = 116;
    *(_BYTE *)(*(_QWORD *)a1 + 9LL) = 0;
    goto LABEL_7;
  }
  v17 = 0;
  v18 = 0;
  v17 = qvector_reserve(&v17, 0, 7, 1);
  *(_QWORD *)&v18 = 7;
  *(_BYTE *)(v17 + 6) = 0;
  v10 = v17;
  *(_DWORD *)v17 = 1734701683;
  *(_WORD *)(v10 + 4) = 14963;
  v11 = v19;
  v12 = v19 + 32 * v20;
  if ( v19 != v12 )
  {
    do
    {
      sub_27640(
        &v17,
        (__int64)"%s,",
        *(const char **)(*(_QWORD *)(*(_QWORD *)(a5 + 16) + 56LL) + 8LL * *(int *)(v11 + 24)));
      v11 += 32;
    }
    while ( v12 != v11 );
  }
  v13 = v18;
  v14 = v17;
  v15 = v18 - 1;
  if ( (__int64)v18 - 1 <= 1 )
  {
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
      v13 = v18;
      v16 = 0;
      v14 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    if ( *((_QWORD *)&v18 + 1) < v15 )
    {
      v17 = qvector_reserve(&v17, v17, v18 - 1, 1);
      v14 = v17;
    }
    *(_QWORD *)&v18 = v15;
    *(_BYTE *)(v14 + v13 - 2) = 0;
    v14 = v17;
    v13 = v18;
  }
  v16 = *((_QWORD *)&v18 + 1);
LABEL_17:
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 16) = v16;
LABEL_7:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return a1;
}

