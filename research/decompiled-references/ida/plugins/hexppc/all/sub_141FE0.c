void __fastcall sub_141FE0(unsigned __int64 **a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *v6; // r15
  unsigned __int64 *v7; // rcx
  bool v8; // r13
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v14; // rdx
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdi
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 i; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rdi
  _QWORD *v40; // [rsp+0h] [rbp-50h]
  __int64 v41; // [rsp+8h] [rbp-48h]
  __int64 v42; // [rsp+8h] [rbp-48h]
  __int64 v43; // [rsp+10h] [rbp-40h]

  if ( a2 )
  {
    v3 = a2;
    v4 = *a2;
    v5 = a2[1];
    v6 = (__int64 *)a2[2];
    v7 = *a1;
    v8 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v9 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v9;
      if ( v9 == v7 )
      {
        v37 = (unsigned __int64)v9;
        v38 = *v9;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v37 = a2[2];
        *v10 = v37 & 0xFFFFFFFFFFFFFFFCLL | v38 & 3;
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
        goto LABEL_45;
      do
      {
        v16 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v17 = *(_QWORD *)v16;
      v6 = *(__int64 **)(v16 + 16);
      v10 = (_QWORD *)v16;
      v18 = *(_QWORD *)v16;
      v19 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( a2 != (__int64 *)v19 )
      {
        if ( (unsigned __int64 *)v19 == v7 )
        {
          v39 = v7;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v39 = *(unsigned __int64 **)(v16 + 16);
          *v7 = (unsigned __int64)v39 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        }
        else if ( v16 == *(_QWORD *)(v19 + 8) )
        {
          *(_QWORD *)(v19 + 8) = v6;
        }
        else
        {
          *(_QWORD *)(v19 + 16) = v6;
        }
        if ( (*v6 & 2) == 0 )
          *v6 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        v20 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v16 + 16) = v20;
        if ( (*v20 & 2) == 0 )
          *v20 = v16 & 0xFFFFFFFFFFFFFFFCLL | *v20 & 3;
        v18 = *(_QWORD *)v16;
        v4 = *a2;
        v10 = (_QWORD *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v21 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v22 = (_QWORD *)v21;
      if ( *a1 == (unsigned __int64 *)v21 )
      {
        if ( (v18 & 2) == 0 )
          v21 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        *v22 = *v22 & 3LL | v21;
      }
      else if ( a2 == *(__int64 **)(v21 + 8) )
      {
        *(_QWORD *)(v21 + 8) = v16;
      }
      else
      {
        *(_QWORD *)(v21 + 16) = v16;
      }
      if ( (*(_QWORD *)v16 & 2) == 0 )
        *(_QWORD *)v16 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
      v23 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v16 + 8) = v23;
      if ( (*v23 & 2) == 0 )
        *v23 = v16 & 0xFFFFFFFFFFFFFFFCLL | *v23 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v16 |= 1uLL;
      else
        *(_QWORD *)v16 &= ~1uLL;
      v8 = (v17 & 1) == 0;
    }
    while ( 1 )
    {
      v11 = *v3 & 2;
      if ( (*v3 & 2) == 0 )
      {
        if ( v3[7] )
        {
          v3[8] = 0;
          qfree();
        }
        v12 = v3[4];
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 104))-- == 1 )
          {
            v28 = (_QWORD *)v3[4];
            v40 = v28;
            if ( v28 )
            {
              sub_254CF0(v28, a2);
              v29 = v40[23];
              if ( v29 )
              {
                v30 = v40[24];
                if ( v30 )
                {
                  for ( i = 0; i != v30; ++i )
                  {
                    v32 = (_QWORD *)(v29 + 24 * i);
                    if ( *v32 )
                    {
                      v32[1] = 0;
                      v43 = v30;
                      v41 = i;
                      qfree();
                      v30 = v43;
                      v29 = v40[23];
                      i = v41;
                    }
                  }
                }
                v40[24] = 0;
                qfree();
              }
              if ( v40[20] )
              {
                v40[21] = 0;
                qfree();
              }
              v33 = v40[16];
              if ( v33 )
              {
                v34 = v40[17];
                if ( v34 )
                {
                  do
                  {
                    v35 = (_QWORD *)(v33 + 32 * v11);
                    if ( *v35 )
                    {
                      v35[1] = 0;
                      v42 = v34;
                      qfree();
                      v34 = v42;
                      v33 = v40[16];
                    }
                    ++v11;
                  }
                  while ( v34 != v11 );
                }
                v40[17] = 0;
                qfree();
              }
              sub_2513D0(v40 + 2);
              j__qfree();
            }
          }
        }
      }
      qfree();
      v14 = (__int64)a1[1] - 1;
      a1[1] = (unsigned __int64 *)v14;
      if ( v8 )
      {
        a2 = v6;
        sub_141B00(a1, v6, (unsigned __int64)v10);
        v14 = (__int64)a1[1];
      }
      v15 = *a1;
      if ( !v14 )
      {
        *v15 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v24 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v24 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_86;
        v24 = interr();
      }
      do
      {
        v25 = v24;
        v24 = *(_QWORD *)(v24 + 8);
      }
      while ( (*(_BYTE *)v24 & 2) == 0 );
      v15[1] = v25;
      v26 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v26 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_86:
        BUG();
      v4 = interr();
LABEL_45:
      v27 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v27;
      if ( v27 == v7 )
      {
        *v27 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v27 & 3;
      }
      else if ( a2 == (__int64 *)v27[1] )
      {
        v27[1] = v5;
      }
      else
      {
        v27[2] = v5;
      }
      if ( (*(_QWORD *)v5 & 2) == 0 )
        *(_QWORD *)v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      v6 = (__int64 *)v5;
    }
    do
    {
      v36 = v26;
      v26 = *(_QWORD *)(v26 + 16);
    }
    while ( (*(_BYTE *)v26 & 2) == 0 );
    (*a1)[2] = v36;
  }
}

