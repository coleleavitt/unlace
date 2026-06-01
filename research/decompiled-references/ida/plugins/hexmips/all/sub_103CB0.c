void __fastcall sub_103CB0(unsigned __int64 **a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 *v6; // rax
  unsigned __int64 *v7; // rdi
  bool v8; // r13
  __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r13
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx

  if ( a2 )
  {
    v3 = *a2;
    v4 = a2;
    v5 = (__int64 *)a2[1];
    v6 = (__int64 *)a2[2];
    v7 = *a1;
    v8 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v3 &= 0xFFFFFFFFFFFFFFFCLL;
      if ( (unsigned __int64 *)v3 == v7 )
      {
        v20 = v3;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v20 = a2[2];
        *(_QWORD *)v3 = v20 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v3 & 3LL;
      }
      else if ( a2 == *(__int64 **)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 8) = v6;
      }
      else
      {
        *(_QWORD *)(v3 + 16) = v6;
      }
      if ( (*v6 & 2) == 0 )
        *v6 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
      v5 = v6;
    }
    else
    {
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_34;
      do
      {
        v11 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v12 = *(_QWORD *)v11;
      v5 = *(__int64 **)(v11 + 16);
      v3 = v11;
      if ( a2 != (__int64 *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL) )
      {
        sub_FDBB0(v7, (_QWORD *)v11, *(_BYTE **)(v11 + 16));
        v13 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v11 + 16) = v13;
        if ( (*v13 & 2) == 0 )
          *v13 = v11 & 0xFFFFFFFFFFFFFFFCLL | *v13 & 3;
        v7 = *a1;
        v3 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
      }
      sub_FDBB0(v7, a2, (_BYTE *)v11);
      v15 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v14 + 8) = v15;
      if ( (*v15 & 2) == 0 )
        *v15 = v14 & 0xFFFFFFFFFFFFFFFCLL | *v15 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v14 |= 1uLL;
      else
        *(_QWORD *)v14 &= ~1uLL;
      v8 = (v12 & 1) == 0;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 && v4[3] )
      {
        v4[4] = 0;
        qfree();
      }
      qfree();
      v9 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v9;
      if ( v8 )
      {
        a2 = v5;
        sub_1039E0(a1, v5, v3);
        v9 = (__int64)a1[1];
      }
      v10 = *a1;
      if ( !v9 )
      {
        *v10 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v16 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_43;
        v16 = interr();
      }
      do
      {
        v17 = v16;
        v16 = *(_QWORD *)(v16 + 8);
      }
      while ( (*(_BYTE *)v16 & 2) == 0 );
      v10[1] = v17;
      v18 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v18 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_43:
        BUG();
      v7 = (_QWORD *)(&stru_D68 + 6);
      interr();
LABEL_34:
      v3 &= 0xFFFFFFFFFFFFFFFCLL;
      sub_FDBB0(v7, a2, v5);
    }
    do
    {
      v19 = v18;
      v18 = *(_QWORD *)(v18 + 16);
    }
    while ( (*(_BYTE *)v18 & 2) == 0 );
    (*a1)[2] = v19;
  }
}

