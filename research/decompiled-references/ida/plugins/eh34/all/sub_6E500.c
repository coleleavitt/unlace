__int64 *__fastcall sub_6E500(__int64 *a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rbx
  const char *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v10; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v2 = (_BYTE *)qvector_reserve(a1, 0, 2, 1);
  *a1 = (__int64)v2;
  a1[1] = 2;
  *v2 = 123;
  *(_BYTE *)(*a1 + 1) = 0;
  if ( !*(_QWORD *)(a2 + 40) )
  {
    v6 = a1[1];
    v7 = 2;
    if ( !v6 )
      goto LABEL_5;
LABEL_8:
    v7 = v6 + 1;
    v8 = *a1;
    --v6;
    if ( a1[2] >= v7 )
      goto LABEL_6;
LABEL_9:
    v10 = qvector_reserve(a1, v8, v7, 1);
    *a1 = v10;
    v8 = v10;
    goto LABEL_6;
  }
  v3 = *(_QWORD *)(a2 + 24);
  v4 = " ";
  if ( a2 + 8 != v3 )
  {
    do
    {
      sub_10400(a1, (__int64)"%s%d", v4, *(_DWORD *)(v3 + 32));
      v5 = std::_Rb_tree_increment(v3);
      v4 = ", ";
      v3 = v5;
    }
    while ( a2 + 8 != v5 );
  }
  v6 = a1[1];
  v7 = 2;
  if ( v6 )
    goto LABEL_8;
LABEL_5:
  v8 = *a1;
  if ( (unsigned __int64)a1[2] < 2 )
    goto LABEL_9;
LABEL_6:
  a1[1] = v7;
  *(_BYTE *)(v8 + v6) = 125;
  *(_BYTE *)(*a1 + v6 + 1) = 0;
  return a1;
}

