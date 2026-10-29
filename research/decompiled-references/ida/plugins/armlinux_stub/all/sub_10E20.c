__int64 __fastcall sub_10E20(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 (*v10)(); // rcx
  __int64 v11; // rcx
  __int64 (*v12)(); // rax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // rbp
  __int64 v18; // rax
  __int64 i; // r13
  __int64 *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 j; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r13
  __int64 v27; // rdi
  size_t v28; // rdx
  __int64 k; // rbp
  __int64 v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // r9
  __int64 v33; // r8
  __int128 v34; // xmm0
  __int64 v35; // rbp
  __int64 v36; // r13
  __int64 v37; // rbp
  __int64 m; // r13
  void *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]
  size_t na; // [rsp+8h] [rbp-50h]
  size_t nb; // [rsp+8h] [rbp-50h]
  _QWORD *v44; // [rsp+10h] [rbp-48h]
  __int64 v45; // [rsp+18h] [rbp-40h]

  v2 = a1[44];
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = a1 + 43;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v2 + 32) < (signed int)a2 )
        break;
      v4 = (_QWORD *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v5 )
        goto LABEL_6;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v6 );
LABEL_6:
  if ( a1 + 43 == v4 )
    return 0xFFFFFFFFLL;
  if ( *((_DWORD *)v4 + 8) > (signed int)a2 )
    return 0xFFFFFFFFLL;
  v7 = v4[6];
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = v4[5] + 48 * v7 - 48;
  v9 = *a1;
  v10 = *(__int64 (**)())(*a1 + 480LL);
  if ( v10 != sub_F2A0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, __int64))v10)(a1, a2, v8) )
      return 0xFFFFFFFFLL;
    v9 = *a1;
  }
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD))(v9 + 320))(
    a1,
    4,
    *(_QWORD *)(v8 + 32),
    a1[61],
    *((unsigned int *)a1 + 124));
  if ( *(_BYTE *)(v8 + 40) )
  {
    v11 = *(_QWORD *)(v8 + 8);
    v12 = *(__int64 (**)())(*a1 + 440LL);
    if ( v12 == sub_F280 )
    {
LABEL_12:
      sub_10D40((__int64)a1, (__int64)"Failed to restore %zu registers!\n", v11);
      return 0xFFFFFFFFLL;
    }
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD))v12)(
            a1,
            a2,
            0,
            v11,
            *(_QWORD *)v8) )
    {
      v11 = *(_QWORD *)(v8 + 8);
      goto LABEL_12;
    }
  }
  v14 = v4[6];
  v15 = v4[5];
  v16 = *(_QWORD *)(v15 + 48 * v14 - 48 + 8);
  if ( v16 )
  {
    na = v15 + 48 * v14 - 48;
    v31 = qalloc_or_throw();
    v32 = (_QWORD *)na;
    v33 = 0;
    v34 = 0;
    v2 = v31;
    v35 = v31;
    do
    {
      v36 = *v32 + 32 * v33;
      *(_DWORD *)v35 = -2;
      *(_QWORD *)(v35 + 24) = 0;
      *(_OWORD *)(v35 + 8) = v34;
      if ( v35 != v36 )
      {
        if ( *(int *)v36 >= -1 )
        {
          *(_QWORD *)(v35 + 8) = 0;
          *(_OWORD *)(v35 + 16) = 0;
          if ( *(_QWORD *)(v36 + 16) )
          {
            v45 = v33;
            v44 = v32;
            nb = *(_QWORD *)(v36 + 16);
            v39 = (void *)qalloc_or_throw();
            *(_QWORD *)(v35 + 8) = v39;
            *(_QWORD *)(v35 + 24) = nb;
            memcpy(v39, *(const void **)(v36 + 8), nb);
            v32 = v44;
            v34 = 0;
            v33 = v45;
            *(_QWORD *)(v35 + 16) = nb;
          }
        }
        else
        {
          *(_QWORD *)(v35 + 8) = *(_QWORD *)(v36 + 8);
        }
        *(_DWORD *)v35 = *(_DWORD *)v36;
      }
      ++v33;
      v35 += 32;
    }
    while ( v16 != v33 );
    v25 = v4[6];
    if ( v25 )
    {
      v4[6] = --v25;
      v26 = (__int64 *)(v4[5] + 48 * v25);
      v27 = *v26;
      if ( *v26 )
      {
        v28 = v26[1];
        if ( !v28 )
          goto LABEL_41;
        goto LABEL_36;
      }
    }
    if ( v2 )
      goto LABEL_57;
  }
  else
  {
    if ( !v14 )
    {
LABEL_18:
      v17 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
      v18 = v17[5];
      if ( v18 )
      {
        v40 = v17[6];
        if ( v40 )
        {
          for ( i = 0; i != v40; ++i )
          {
            v20 = (__int64 *)(v18 + 48 * i);
            v21 = *v20;
            if ( *v20 )
            {
              v22 = v20[1];
              if ( v22 )
              {
                for ( j = 0; j != v22; ++j )
                {
                  v24 = v21 + 32 * j;
                  if ( *(int *)v24 >= -1 && *(_QWORD *)(v24 + 8) )
                  {
                    *(_QWORD *)(v24 + 16) = 0;
                    qfree();
                    v21 = *v20;
                  }
                }
              }
              v20[1] = 0;
              qfree();
              v18 = v17[5];
            }
          }
        }
        v17[6] = 0;
        qfree();
      }
      operator delete(v17, 0x40u);
      --a1[47];
      goto LABEL_32;
    }
    v25 = v14 - 1;
    v4[6] = v25;
    v26 = (__int64 *)(48 * v25 + v15);
    v27 = *v26;
    if ( *v26 )
    {
      v28 = v26[1];
      if ( v28 )
      {
LABEL_36:
        for ( k = 0; k != v28; ++k )
        {
          v30 = 32 * k + v27;
          if ( *(int *)v30 >= -1 && *(_QWORD *)(v30 + 8) )
          {
            *(_QWORD *)(v30 + 16) = 0;
            n = v28;
            qfree();
            v28 = n;
          }
          v27 = *v26;
        }
LABEL_41:
        v26[1] = 0;
        qfree();
        if ( !v2 )
        {
LABEL_44:
          v25 = v4[6];
          goto LABEL_45;
        }
        if ( !v16 )
        {
LABEL_43:
          qfree();
          goto LABEL_44;
        }
LABEL_57:
        v37 = v2;
        for ( m = 0; m != v16; ++m )
        {
          if ( *(int *)v37 >= -1 && *(_QWORD *)(v37 + 8) )
          {
            *(_QWORD *)(v37 + 16) = 0;
            qfree();
          }
          v37 += 32;
        }
        goto LABEL_43;
      }
      qfree();
      v25 = v4[6];
    }
  }
LABEL_45:
  if ( !v25 )
    goto LABEL_18;
LABEL_32:
  result = 3;
  if ( a1[21] == a1[17] )
    return 1;
  return result;
}

