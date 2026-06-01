__int64 *__fastcall sub_4AFE0(
        __int64 *a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9)
{
  unsigned __int64 v9; // r15
  const char *v10; // r13
  _QWORD *v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  const char *v18; // rdx
  const char *v19; // rsi
  __int64 v20; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  _QWORD *v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rbx
  _QWORD *v33; // r14
  __int64 v34; // rdi
  void *v35; // rdi

  v9 = a4;
  v10 = a3;
  v11 = (_QWORD *)a2;
  if ( (debug & 0x40000) != 0 )
  {
    a2 = a4;
    sub_29350();
  }
  v12 = (_QWORD *)v11[8];
  v13 = v11 + 7;
  v14 = (__int64)(v11 + 7);
  if ( !v12 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      a4 = v12[2];
      a3 = (const char *)v12[3];
      if ( v12[4] < v9 )
        break;
      v14 = (__int64)v12;
      v12 = (_QWORD *)v12[2];
      if ( !a4 )
        goto LABEL_8;
    }
    v12 = (_QWORD *)v12[3];
  }
  while ( a3 );
LABEL_8:
  if ( v13 == (_QWORD *)v14 || v9 < *(_QWORD *)(v14 + 32) )
  {
LABEL_12:
    v15 = v11[9];
    if ( v14 == v15
      || (v14 = std::_Rb_tree_decrement(v14, a2, a3, a4, a5), v16 = *(_QWORD *)(v14 + 32), v9 < v16)
      || v9 >= *(_QWORD *)(v14 + 128) + v16 )
    {
      v17 = 0;
      goto LABEL_21;
    }
  }
  v17 = v14 + 40;
  if ( !*(_BYTE *)(v14 + 136) )
  {
    sub_244A0();
    v18 = src;
    if ( v11[13] )
    {
      v18 = (const char *)v11[12];
      v19 = src;
      if ( !*(_QWORD *)(v14 + 104) )
        goto LABEL_16;
    }
    else
    {
      v19 = src;
      if ( !*(_QWORD *)(v14 + 104) )
      {
LABEL_16:
        if ( (int)sub_411B0((__int64 *)(v14 + 40), v19, v18, *(_QWORD *)(v14 + 120)) < 0 )
        {
          v27 = std::_Rb_tree_rebalance_for_erase(v14, v11 + 7);
          v28 = *(_QWORD *)(v27 + 152);
          v29 = (_QWORD *)v27;
          if ( v28 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
          v30 = v29[18];
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
          v31 = v29[12];
          if ( v31 )
          {
            v29[13] = 0;
            qfree(v31);
          }
          v32 = v29[8];
          while ( v32 )
          {
            v33 = (_QWORD *)v32;
            sub_27580(*(_QWORD **)(v32 + 24));
            v34 = *(_QWORD *)(v32 + 32);
            v32 = *(_QWORD *)(v32 + 16);
            if ( v34 )
            {
              v33[5] = 0;
              qfree(v34);
            }
            operator delete(v33, 0x40u);
          }
          v35 = v29;
          a2 = 168;
          v17 = 0;
          operator delete(v35, 0xA8u);
          --v11[11];
          v15 = v11[9];
          goto LABEL_21;
        }
        *(_BYTE *)(v14 + 136) = 1;
        goto LABEL_18;
      }
    }
    v19 = *(const char **)(v14 + 96);
    goto LABEL_16;
  }
LABEL_18:
  a2 = (__int64)v10;
  v20 = sub_4AAC0(v14 + 40, v10, a7, a8, a9);
  if ( v20 )
    goto LABEL_19;
  v15 = v11[9];
LABEL_21:
  while ( v13 != (_QWORD *)v15 )
  {
    while ( v15 + 40 != v17 )
    {
      a2 = (__int64)v10;
      v20 = sub_4AAC0(v15 + 40, v10, a7, a8, a9);
      v26 = std::_Rb_tree_increment(v15, v10, v22, v23, v24, v25, a7, a8, a9);
      v15 = v26;
      if ( v20 )
        goto LABEL_19;
      if ( v13 == (_QWORD *)v26 )
        goto LABEL_25;
    }
    v15 = std::_Rb_tree_increment(v15, a2, a3, a4, a5, a6, a7, a8, a9);
  }
LABEL_25:
  v20 = 0;
LABEL_19:
  *a1 = v20;
  return a1;
}

