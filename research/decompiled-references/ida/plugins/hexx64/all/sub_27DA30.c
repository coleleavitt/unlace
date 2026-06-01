void __fastcall sub_27DA30(unsigned __int64 **a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // r14
  unsigned __int64 *v7; // rcx
  bool v8; // r12
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 *v29; // rsi

  if ( a2 )
  {
    v3 = *a2;
    v4 = a2;
    v5 = a2[1];
    v6 = (__int64 *)a2[2];
    v7 = *a1;
    v8 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v9 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v9;
      if ( v9 == v7 )
      {
        v27 = (__int64)v9;
        v28 = *v9;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v27 = a2[2];
        *v10 = v27 & 0xFFFFFFFFFFFFFFFCLL | v28 & 3;
      }
      else if ( a2 == (__int64 *)v9[1] )
      {
        v9[1] = (unsigned __int64)v6;
      }
      else
      {
        v9[2] = (unsigned __int64)v6;
      }
      if ( (*v6 & 2) == 0 )
        *v6 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
    }
    else
    {
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_46;
      do
      {
        v15 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v16 = *(_QWORD *)v15;
      v6 = *(__int64 **)(v15 + 16);
      v10 = (_QWORD *)v15;
      v17 = *(_QWORD *)v15;
      v18 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v4 != (__int64 *)v18 )
      {
        if ( (unsigned __int64 *)v18 == v7 )
        {
          v29 = v7;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v29 = *(unsigned __int64 **)(v15 + 16);
          *v7 = (unsigned __int64)v29 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        }
        else if ( v15 == *(_QWORD *)(v18 + 8) )
        {
          *(_QWORD *)(v18 + 8) = v6;
        }
        else
        {
          *(_QWORD *)(v18 + 16) = v6;
        }
        if ( (*v6 & 2) == 0 )
          *v6 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        v19 = (unsigned __int64 *)v4[2];
        *(_QWORD *)(v15 + 16) = v19;
        if ( (*v19 & 2) == 0 )
          *v19 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v19 & 3;
        v17 = *(_QWORD *)v15;
        v3 = *v4;
        v10 = (_QWORD *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v20 = v3 & 0xFFFFFFFFFFFFFFFCLL;
      a2 = (__int64 *)v20;
      if ( *a1 == (unsigned __int64 *)v20 )
      {
        if ( (v17 & 2) == 0 )
          v20 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        *a2 = *a2 & 3 | v20;
      }
      else if ( v4 == *(__int64 **)(v20 + 8) )
      {
        *(_QWORD *)(v20 + 8) = v15;
      }
      else
      {
        *(_QWORD *)(v20 + 16) = v15;
      }
      if ( (*(_QWORD *)v15 & 2) == 0 )
        *(_QWORD *)v15 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
      v21 = (unsigned __int64 *)v4[1];
      *(_QWORD *)(v15 + 8) = v21;
      if ( (*v21 & 2) == 0 )
      {
        a2 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
        *v21 = v15 & 0xFFFFFFFFFFFFFFFCLL | *v21 & 3;
      }
      if ( (*(_BYTE *)v4 & 1) != 0 )
        *(_QWORD *)v15 |= 1uLL;
      else
        *(_QWORD *)v15 &= ~1uLL;
      v8 = (v16 & 1) == 0;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 )
      {
        v11 = v4[4];
        if ( v11 )
        {
          if ( v4[5] )
          {
            sub_277F70((_QWORD *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL));
            *(_QWORD *)v4[4] = v4[4] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4[4] & 3LL;
            *(__m128i *)(v4[4] + 8) = _mm_unpacklo_epi64(
                                        (__m128i)(unsigned __int64)v4[4],
                                        (__m128i)(unsigned __int64)v4[4]);
            *(_QWORD *)v4[4] &= ~1uLL;
            *(_QWORD *)v4[4] |= 2uLL;
            v4[5] = 0;
          }
          else
          {
            *(_QWORD *)v11 = *(_QWORD *)v11 & 3LL | v11 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(v4[4] + 8) = _mm_unpacklo_epi64(
                                        (__m128i)(unsigned __int64)v4[4],
                                        (__m128i)(unsigned __int64)v4[4]);
            *(_QWORD *)v4[4] &= ~1uLL;
            *(_QWORD *)v4[4] |= 2uLL;
          }
          v12 = v4[4];
          if ( v12 )
            qfree(v12);
        }
      }
      qfree((__int64)v4);
      v13 = (unsigned __int64 *)((char *)a1[1] - 1);
      a1[1] = v13;
      if ( v8 )
      {
        a2 = v6;
        sub_27D2F0(a1, v6, (unsigned __int64)v10);
        v13 = a1[1];
      }
      v14 = *a1;
      if ( !v13 )
      {
        *v14 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v22 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v22 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_71;
        v22 = interr();
      }
      do
      {
        v23 = v22;
        v22 = *(_QWORD *)(v22 + 8);
      }
      while ( (*(_BYTE *)v22 & 2) == 0 );
      v14[1] = v23;
      v24 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v24 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_71:
        BUG();
      v3 = interr();
LABEL_46:
      v25 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v25;
      if ( v25 == v7 )
      {
        *v25 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v25 & 3;
      }
      else if ( a2 == (__int64 *)v25[1] )
      {
        v25[1] = v5;
      }
      else
      {
        v25[2] = v5;
      }
      if ( (*(_QWORD *)v5 & 2) == 0 )
        *(_QWORD *)v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      v6 = (__int64 *)v5;
    }
    do
    {
      v26 = v24;
      v24 = *(_QWORD *)(v24 + 16);
    }
    while ( (*(_BYTE *)v24 & 2) == 0 );
    (*a1)[2] = v26;
  }
}

