__int64 __fastcall sub_11EA20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 i; // rsi
  __int64 v10; // rsi
  _QWORD *v11; // rsi
  _QWORD *v12; // rsi
  _QWORD *v13; // r12

  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
    sub_11E630(v8, a2, a3, a4, a5, a6);
  sub_D8230(v7, *(_QWORD **)(a1 + 336));
  for ( i = *(_QWORD *)(a1 + 344); i; i = *(_QWORD *)(a1 + 344) )
  {
    *(_QWORD *)(a1 + 344) = *(_QWORD *)(i + 40);
    sub_D7C50(v7, i);
  }
  v10 = *(_QWORD *)(a1 + 352);
  if ( v10 && !*(_BYTE *)(v10 + 18) )
    sub_D8450(v7, (_QWORD *)v10);
  v11 = *(_QWORD **)(a1 + 8);
  if ( v11 )
    sub_C9250(v7, v11);
  v12 = *(_QWORD **)(a1 + 400);
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)v12[3];
      sub_C9250(v7, v12);
      v12 = v13;
    }
    while ( v13 );
  }
  return sub_D7990(a1);
}
