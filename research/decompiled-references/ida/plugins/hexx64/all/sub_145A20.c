void __fastcall sub_145A20(unsigned __int64 **a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r15
  __int64 *v7; // rcx
  bool v8; // r13
  __int64 *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 *v20; // rdi
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 *v23; // rdi
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 i; // rax
  __int64 *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 *v43; // rdi
  __int64 *v44; // [rsp+0h] [rbp-50h]
  __int64 v45; // [rsp+8h] [rbp-48h]
  __int64 v46; // [rsp+8h] [rbp-48h]
  __int64 v47; // [rsp+10h] [rbp-40h]

  if ( a2 )
  {
    v3 = a2;
    v4 = *a2;
    v5 = a2[1];
    v6 = (__int64 *)a2[2];
    v7 = (__int64 *)*a1;
    v8 = (*a2 & 1) == 0;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v9 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v9;
      if ( v9 == v7 )
      {
        v41 = (__int64)v9;
        v42 = *v9;
        if ( (*(_BYTE *)v6 & 2) == 0 )
          v41 = a2[2];
        *v10 = v41 & 0xFFFFFFFFFFFFFFFCLL | v42 & 3;
      }
      else if ( a2 == (__int64 *)v9[1] )
      {
        v9[1] = (__int64)v6;
      }
      else
      {
        v9[2] = (__int64)v6;
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
        v17 = (unsigned __int64)v6;
        v6 = (__int64 *)v6[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v18 = *(_QWORD *)v17;
      v6 = *(__int64 **)(v17 + 16);
      v10 = (_QWORD *)v17;
      v19 = *(_QWORD *)v17;
      v20 = (__int64 *)(*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL);
      if ( a2 != v20 )
      {
        if ( v20 == v7 )
        {
          v43 = v7;
          if ( (*(_BYTE *)v6 & 2) == 0 )
            v43 = *(__int64 **)(v17 + 16);
          *v7 = (unsigned __int64)v43 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        }
        else if ( v17 == v20[1] )
        {
          v20[1] = (__int64)v6;
        }
        else
        {
          v20[2] = (__int64)v6;
        }
        if ( (*v6 & 2) == 0 )
          *v6 = *(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL | *v6 & 3;
        v21 = (unsigned __int64 *)a2[2];
        *(_QWORD *)(v17 + 16) = v21;
        if ( (*v21 & 2) == 0 )
          *v21 = v17 & 0xFFFFFFFFFFFFFFFCLL | *v21 & 3;
        v19 = *(_QWORD *)v17;
        v4 = *a2;
        v10 = (_QWORD *)(*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v22 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = (unsigned __int64 *)v22;
      if ( *a1 == (unsigned __int64 *)v22 )
      {
        if ( (v19 & 2) == 0 )
          v22 = v17 & 0xFFFFFFFFFFFFFFFCLL;
        *v23 = *v23 & 3 | v22;
      }
      else if ( a2 == *(__int64 **)(v22 + 8) )
      {
        *(_QWORD *)(v22 + 8) = v17;
      }
      else
      {
        *(_QWORD *)(v22 + 16) = v17;
      }
      if ( (*(_QWORD *)v17 & 2) == 0 )
        *(_QWORD *)v17 = *a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
      v24 = (unsigned __int64 *)a2[1];
      *(_QWORD *)(v17 + 8) = v24;
      if ( (*v24 & 2) == 0 )
        *v24 = v17 & 0xFFFFFFFFFFFFFFFCLL | *v24 & 3;
      if ( (*(_BYTE *)a2 & 1) != 0 )
        *(_QWORD *)v17 |= 1uLL;
      else
        *(_QWORD *)v17 &= ~1uLL;
      v8 = (v18 & 1) == 0;
    }
    while ( 1 )
    {
      v11 = *v3 & 2;
      if ( (*v3 & 2) == 0 )
      {
        v12 = v3[7];
        if ( v12 )
        {
          v3[8] = 0;
          qfree(v12);
        }
        v13 = v3[4];
        if ( v13 )
        {
          if ( (*(_DWORD *)(v13 + 104))-- == 1 )
          {
            v29 = (__int64 *)v3[4];
            v44 = v29;
            if ( v29 )
            {
              sub_258970(v29);
              v30 = v44[23];
              if ( v30 )
              {
                v31 = v44[24];
                if ( v31 )
                {
                  for ( i = 0; i != v31; ++i )
                  {
                    v33 = (__int64 *)(v30 + 24 * i);
                    v34 = *v33;
                    if ( *v33 )
                    {
                      v33[1] = 0;
                      v47 = v31;
                      v45 = i;
                      qfree(v34);
                      v31 = v47;
                      v30 = v44[23];
                      i = v45;
                    }
                  }
                }
                v44[24] = 0;
                qfree(v30);
              }
              v35 = v44[20];
              if ( v35 )
              {
                v44[21] = 0;
                qfree(v35);
              }
              v36 = v44[16];
              if ( v36 )
              {
                v37 = v44[17];
                if ( v37 )
                {
                  do
                  {
                    v38 = (__int64 *)(v36 + 32 * v11);
                    v39 = *v38;
                    if ( *v38 )
                    {
                      v38[1] = 0;
                      v46 = v37;
                      qfree(v39);
                      v37 = v46;
                      v36 = v44[16];
                    }
                    ++v11;
                  }
                  while ( v37 != v11 );
                }
                v44[17] = 0;
                qfree(v36);
              }
              sub_255050((__int64)(v44 + 2));
              j__qfree((__int64)v44);
            }
          }
        }
      }
      qfree((__int64)v3);
      v15 = (unsigned __int64 *)((char *)a1[1] - 1);
      a1[1] = v15;
      if ( v8 )
      {
        a2 = v6;
        sub_145540(a1, v6, (unsigned __int64)v10);
        v15 = a1[1];
      }
      v16 = (unsigned __int64)*a1;
      if ( !v15 )
      {
        *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | **a1 & 3;
        *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
        **a1 &= ~1uLL;
        **a1 |= 2u;
        return;
      }
      v25 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v25 & 2) != 0 )
      {
        if ( under_debugger )
          goto LABEL_86;
        v25 = interr();
      }
      do
      {
        v26 = v25;
        v25 = *(_QWORD *)(v25 + 8);
      }
      while ( (*(_BYTE *)v25 & 2) == 0 );
      *(_QWORD *)(v16 + 8) = v26;
      v27 = **a1 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v27 & 2) == 0 )
        break;
      if ( under_debugger )
LABEL_86:
        BUG();
      v4 = interr();
LABEL_45:
      v28 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v28;
      if ( v28 == v7 )
      {
        *v28 = v5 & 0xFFFFFFFFFFFFFFFCLL | *v28 & 3;
      }
      else if ( a2 == (__int64 *)v28[1] )
      {
        v28[1] = v5;
      }
      else
      {
        v28[2] = v5;
      }
      if ( (*(_QWORD *)v5 & 2) == 0 )
        *(_QWORD *)v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
      v6 = (__int64 *)v5;
    }
    do
    {
      v40 = v27;
      v27 = *(_QWORD *)(v27 + 16);
    }
    while ( (*(_BYTE *)v27 & 2) == 0 );
    (*a1)[2] = v40;
  }
}

