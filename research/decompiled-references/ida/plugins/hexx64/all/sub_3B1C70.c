void __fastcall sub_3B1C70(unsigned __int64 **a1, __int64 *a2, double a3)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rdx
  __int64 *v7; // r13
  unsigned __int64 *v8; // rdi
  bool v9; // r12
  unsigned __int64 *v10; // r14
  unsigned __int64 *v11; // rdx
  unsigned __int64 *v12; // rcx
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // r12
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx

  if ( a2 )
  {
    v4 = *a2;
    v5 = a2;
    v6 = (__int64 *)a2[1];
    v7 = (__int64 *)a2[2];
    v8 = *a1;
    v9 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v10 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      sub_3A92D0(v8, a2, (_BYTE *)a2[2]);
    }
    else
    {
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_28;
      do
      {
        v13 = (unsigned __int64 *)v7;
        v7 = (__int64 *)v7[1];
      }
      while ( (*(_BYTE *)v7 & 2) == 0 );
      v14 = *v13;
      v7 = (__int64 *)v13[2];
      v10 = v13;
      if ( a2 != (__int64 *)(*v13 & 0xFFFFFFFFFFFFFFFCLL) )
      {
        sub_3A92D0(v8, v13, (_BYTE *)v13[2]);
        v15 = (unsigned __int64 *)a2[2];
        v13[2] = (unsigned __int64)v15;
        if ( (*v15 & 2) == 0 )
          *v15 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCLL | *v15 & 3;
        v8 = *a1;
        v10 = (unsigned __int64 *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
      }
      sub_3A92D0(v8, a2, v13);
      v17 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v16 + 8) = v17;
      if ( (*v17 & 2) == 0 )
        *v17 = v16 & 0xFFFFFFFFFFFFFFFCLL | *v17 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v16 |= 1uLL;
      else
        *(_QWORD *)v16 &= ~1uLL;
      v9 = (v14 & 1) == 0;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v5 & 2) == 0 )
        sub_3ACAB0((__int64)(v5 + 4), a3);
      qfree((__int64)v5);
      v11 = (unsigned __int64 *)((char *)a1[1] - 1);
      a1[1] = v11;
      if ( v9 )
      {
        a2 = v7;
        sub_3B19A0(a1, v7, v10);
        v11 = a1[1];
      }
      v12 = *a1;
      if ( !v11 )
      {
        *v12 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v18 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_33;
        v18 = interr();
      }
      do
      {
        v19 = v18;
        v18 = *(_QWORD *)(v18 + 8);
      }
      while ( (*(_BYTE *)v18 & 2) == 0 );
      v12[1] = v19;
      v20 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v20 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_33:
        BUG();
      v8 = (_QWORD *)(&stru_D68 + 6);
      v4 = interr();
LABEL_28:
      v7 = v6;
      v10 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      sub_3A92D0(v8, a2, v6);
    }
    do
    {
      v21 = v20;
      v20 = *(_QWORD *)(v20 + 16);
    }
    while ( (*(_BYTE *)v20 & 2) == 0 );
    (*a1)[2] = v21;
  }
}

