__int64 __fastcall sub_25A90(__int64 a1, int a2, double a3, __m128i a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 i; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // r13
  _QWORD *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rbp
  __int64 v16; // rdi
  unsigned int v17; // ebx
  unsigned int v19; // eax

  v7 = *(_QWORD *)(a1 + 456);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 464);
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (_QWORD *)(v7 + 80 * i);
        if ( v10[5] )
        {
          v10[6] = 0;
          qfree();
        }
        if ( v10[2] )
        {
          v10[3] = 0;
          qfree();
        }
        v7 = *(_QWORD *)(a1 + 456);
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    qfree();
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v11 = *(_QWORD *)(a1 + 1176);
  *(_BYTE *)(a1 + 1414) = 0;
  while ( v11 )
  {
    v12 = (_QWORD *)v11;
    sub_12E30(*(_QWORD **)(v11 + 24));
    v13 = *(_QWORD *)(v11 + 176);
    v11 = *(_QWORD *)(v11 + 16);
    if ( v13 )
    {
      v12[23] = 0;
      qfree();
    }
    if ( v12[19] )
    {
      v12[20] = 0;
      qfree();
    }
    v14 = v12[15];
    while ( v14 )
    {
      v15 = (_QWORD *)v14;
      sub_122F0(*(_QWORD **)(v14 + 24));
      v16 = *(_QWORD *)(v14 + 40);
      v14 = *(_QWORD *)(v14 + 16);
      if ( v16 )
      {
        v15[6] = 0;
        qfree();
      }
      operator delete(v15, 0x40u);
    }
    if ( v12[10] )
    {
      v12[11] = 0;
      qfree();
    }
    if ( v12[7] )
    {
      v12[8] = 0;
      qfree();
    }
    operator delete(v12, 0xD0u);
  }
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1184) = a1 + 1168;
  *(_QWORD *)(a1 + 1192) = a1 + 1168;
  *(_QWORD *)(a1 + 1200) = 0;
  if ( (unsigned __int8)sub_33740(a1) && (sub_23EE0(a1, a2), v17 = v19, (_BYTE)v19) )
  {
    sub_24AD0((_QWORD *)a1, a3, a4, a5, a6);
    if ( !(unsigned __int8)sub_188F0(a1) )
      sub_143D0(
        a1,
        (__int64)"Debugger failed to correctly restore the instruction pointer after recovering from a broken connection.\n");
  }
  else
  {
    return 0;
  }
  return v17;
}

