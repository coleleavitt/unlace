void __fastcall sub_2A5030(unsigned __int64 **a1, __int64 *a2, double a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // r14
  unsigned __int64 *v8; // rcx
  bool v9; // r12
  unsigned __int64 *v10; // rax
  _QWORD *v11; // r13
  unsigned __int64 *v12; // rdx
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rsi

  if ( a2 )
  {
    v4 = a2;
    v5 = *a2;
    v6 = a2[1];
    v7 = (__int64 *)a2[2];
    v8 = *a1;
    v9 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v10 = (unsigned __int64 *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = v10;
      if ( v10 == v8 )
      {
        v26 = (__int64)v10;
        v27 = *v10;
        if ( (*(_BYTE *)v7 & 2) == 0 )
          v26 = a2[2];
        *v11 = v26 & 0xFFFFFFFFFFFFFFFCLL | v27 & 3;
      }
      else if ( a2 == (__int64 *)v10[1] )
      {
        v10[1] = (unsigned __int64)v7;
      }
      else
      {
        v10[2] = (unsigned __int64)v7;
      }
      if ( (*v7 & 2) == 0 )
        *v7 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
    }
    else
    {
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_42;
      do
      {
        v14 = (unsigned __int64)v7;
        v7 = (__int64 *)v7[1];
      }
      while ( (*(_BYTE *)v7 & 2) == 0 );
      v15 = *(_QWORD *)v14;
      v7 = *(__int64 **)(v14 + 16);
      v11 = (_QWORD *)v14;
      v16 = *(_QWORD *)v14;
      v17 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v4 != (__int64 *)v17 )
      {
        if ( (unsigned __int64 *)v17 == v8 )
        {
          v28 = v8;
          if ( (*(_BYTE *)v7 & 2) == 0 )
            v28 = *(unsigned __int64 **)(v14 + 16);
          *v8 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFCLL | *v8 & 3;
        }
        else if ( v14 == *(_QWORD *)(v17 + 8) )
        {
          *(_QWORD *)(v17 + 8) = v7;
        }
        else
        {
          *(_QWORD *)(v17 + 16) = v7;
        }
        if ( (*v7 & 2) == 0 )
          *v7 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        v18 = (unsigned __int64 *)v4[2];
        *(_QWORD *)(v14 + 16) = v18;
        if ( (*v18 & 2) == 0 )
          *v18 = v14 & 0xFFFFFFFFFFFFFFFCLL | *v18 & 3;
        v16 = *(_QWORD *)v14;
        v5 = *v4;
        v11 = (_QWORD *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v19 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      a2 = (__int64 *)v19;
      if ( *a1 == (unsigned __int64 *)v19 )
      {
        if ( (v16 & 2) == 0 )
          v19 = v14 & 0xFFFFFFFFFFFFFFFCLL;
        *a2 = *a2 & 3 | v19;
      }
      else if ( v4 == *(__int64 **)(v19 + 8) )
      {
        *(_QWORD *)(v19 + 8) = v14;
      }
      else
      {
        *(_QWORD *)(v19 + 16) = v14;
      }
      if ( (*(_QWORD *)v14 & 2) == 0 )
        *(_QWORD *)v14 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
      v20 = (unsigned __int64 *)v4[1];
      *(_QWORD *)(v14 + 8) = v20;
      if ( (*v20 & 2) == 0 )
      {
        a2 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
        *v20 = v14 & 0xFFFFFFFFFFFFFFFCLL | *v20 & 3;
      }
      if ( (*(_BYTE *)v4 & 1) != 0 )
        *(_QWORD *)v14 |= 1uLL;
      else
        *(_QWORD *)v14 &= ~1uLL;
      v9 = (v15 & 1) == 0;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 )
      {
        *((_DWORD *)v4 + 14) = -1;
        sub_29EC30((__int64)(v4 + 5), a3);
        sub_29EC30((__int64)(v4 + 3), a3);
      }
      qfree((__int64)v4);
      v12 = (unsigned __int64 *)((char *)a1[1] - 1);
      a1[1] = v12;
      if ( v9 )
      {
        a2 = v7;
        sub_2A48F0(a1, v7, (unsigned __int64)v11);
        v12 = a1[1];
      }
      v13 = *a1;
      if ( !v12 )
      {
        *v13 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v21 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_66;
        v21 = interr();
      }
      do
      {
        v22 = v21;
        v21 = *(_QWORD *)(v21 + 8);
      }
      while ( (*(_BYTE *)v21 & 2) == 0 );
      v13[1] = v22;
      v23 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v23 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_66:
        BUG();
      v5 = interr();
LABEL_42:
      v24 = (unsigned __int64 *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = v24;
      if ( v24 == v8 )
      {
        *v24 = v6 & 0xFFFFFFFFFFFFFFFCLL | *v24 & 3;
      }
      else if ( a2 == (__int64 *)v24[1] )
      {
        v24[1] = v6;
      }
      else
      {
        v24[2] = v6;
      }
      if ( (*(_QWORD *)v6 & 2) == 0 )
        *(_QWORD *)v6 = *v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
      v7 = (__int64 *)v6;
    }
    do
    {
      v25 = v23;
      v23 = *(_QWORD *)(v23 + 16);
    }
    while ( (*(_BYTE *)v23 & 2) == 0 );
    (*a1)[2] = v25;
  }
}

