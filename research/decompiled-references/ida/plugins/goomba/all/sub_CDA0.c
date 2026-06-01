_QWORD *__fastcall sub_CDA0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 i; // rax
  unsigned __int64 *v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // r13
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  _BOOL8 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rsi
  unsigned int v28; // eax
  struct _Unwind_Exception *v29; // rbx
  __int64 (__fastcall **v30)(_QWORD); // rax
  __int64 (__fastcall **v31)(_QWORD); // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // r15
  __int64 v38; // r13
  __int64 v39; // r12
  int v40; // ebx
  _QWORD *v41; // rax
  _QWORD *v42; // rbx
  int v43; // r12d
  bool v44; // r12
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // r15
  int v51; // r12d
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // [rsp+0h] [rbp-B8h]
  unsigned int *v55; // [rsp+0h] [rbp-B8h]
  _QWORD *v57; // [rsp+10h] [rbp-A8h]
  unsigned int *v58; // [rsp+18h] [rbp-A0h]
  _QWORD *v59; // [rsp+20h] [rbp-98h]
  unsigned int v60; // [rsp+3Ch] [rbp-7Ch] BYREF
  __int64 v61; // [rsp+40h] [rbp-78h] BYREF
  __int128 v62; // [rsp+48h] [rbp-70h]
  __int64 (__fastcall **v63[11])(_QWORD); // [rsp+60h] [rbp-58h] BYREF

  v2 = a1[13];
  v63[3] = (__int64 (__fastcall **)(_QWORD))__readfsqword(0x28u);
  v4 = (_QWORD *)a1[12];
  v2 *= 16;
  v5 = (_QWORD *)((char *)v4 + v2);
  for ( i = v2 >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v7 = &v4[2 * (i >> 1)];
      if ( *v7 >= a2 )
        break;
      v4 = v7 + 2;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v8 = a1;
  v9 = (_QWORD *)a1[3];
  if ( v5 == v4 )
  {
LABEL_61:
    v57 = v8 + 2;
    v46 = v8 + 2;
    if ( v9 )
      goto LABEL_64;
    return nullptr;
  }
  if ( a2 != *v4 )
  {
    v8 = a1;
    goto LABEL_61;
  }
  v10 = v4[1];
  v8 = a1;
  if ( v10 < 0 )
    goto LABEL_61;
  v57 = a1 + 2;
  if ( !v9 )
    goto LABEL_78;
  v11 = a1 + 2;
  v12 = (_QWORD *)a1[3];
  do
  {
    while ( 1 )
    {
      v13 = v12[2];
      v14 = v12[3];
      if ( v12[4] < a2 )
        break;
      v11 = v12;
      v12 = (_QWORD *)v12[2];
      if ( !v13 )
        goto LABEL_13;
    }
    v12 = (_QWORD *)v12[3];
  }
  while ( v14 );
LABEL_13:
  if ( v57 == v11 )
    goto LABEL_17;
  if ( a2 >= v11[4] )
  {
    v46 = a1 + 2;
    goto LABEL_64;
  }
  v11 = a1 + 2;
  v15 = (_QWORD *)v9[2];
  v16 = (_QWORD *)v9[3];
  if ( v9[4] < a2 )
    goto LABEL_18;
  while ( 1 )
  {
    v11 = v9;
    v9 = v15;
    if ( !v15 )
      break;
LABEL_17:
    while ( 1 )
    {
      v15 = (_QWORD *)v9[2];
      v16 = (_QWORD *)v9[3];
      if ( v9[4] >= a2 )
        break;
LABEL_18:
      v9 = v16;
      if ( !v16 )
        goto LABEL_19;
    }
  }
LABEL_19:
  if ( v57 == v11 )
  {
LABEL_78:
    v53 = operator new(0x58u);
    *(_DWORD *)(v53 + 48) = 0;
    v19 = (_QWORD *)v53;
    v53 += 48;
    *(_QWORD *)(v53 - 16) = a2;
    *(_QWORD *)(v53 + 8) = 0;
    v19[8] = v53;
    v19[9] = v53;
    v19[10] = 0;
    if ( !a1[6] || (v11 = nullptr, v24 = a1[5], *(_QWORD *)(v24 + 32) >= a2) )
LABEL_80:
      v11 = sub_C040((__int64)(a1 + 1), a2, v24, v22, v23);
  }
  else
  {
    if ( a2 >= v11[4] )
      goto LABEL_32;
    v17 = (_QWORD *)operator new(0x58u);
    v17[4] = a2;
    v19 = v17;
    v17 += 6;
    *(_DWORD *)v17 = 0;
    v17[1] = 0;
    v19[8] = v17;
    v19[9] = v17;
    v19[10] = 0;
    v20 = v11[4];
    if ( a2 >= v20 )
    {
      if ( v20 >= a2 )
        goto LABEL_76;
      if ( (_QWORD *)a1[5] == v11 )
        goto LABEL_75;
      v54 = v11[4];
      v21 = std::_Rb_tree_increment(v11);
      v24 = v21;
      if ( a2 < *(_QWORD *)(v21 + 32) )
      {
        v20 = v54;
        if ( v11[3] )
        {
          v11 = (_QWORD *)v21;
          goto LABEL_27;
        }
LABEL_75:
        v24 = (unsigned __int64)v11;
        if ( v11 )
          goto LABEL_83;
        goto LABEL_76;
      }
      goto LABEL_80;
    }
    v24 = (unsigned __int64)v11;
    if ( (_QWORD *)a1[4] == v11 )
      goto LABEL_27;
    v52 = std::_Rb_tree_decrement(v11, v13, v11, v20, v18);
    v24 = v52;
    if ( *(_QWORD *)(v52 + 32) >= a2 )
      goto LABEL_80;
    if ( *(_QWORD *)(v52 + 24) )
      v24 = (unsigned __int64)v11;
    else
      v11 = nullptr;
  }
LABEL_27:
  if ( v24 )
  {
    if ( v11 || v57 == (_QWORD *)v24 )
    {
      v25 = 1;
LABEL_31:
      v11 = v19;
      std::_Rb_tree_insert_and_rebalance(v25, v19, v24, v57);
      ++a1[6];
      goto LABEL_32;
    }
    v20 = *(_QWORD *)(v24 + 32);
LABEL_83:
    v25 = a2 < v20;
    goto LABEL_31;
  }
LABEL_76:
  if ( v19 )
    operator delete(v19, 0x58u);
LABEL_32:
  if ( (unsigned int)qfseek(a1[10], v10, 0) )
  {
LABEL_93:
    if ( !under_debugger )
      interr(30722);
LABEL_95:
    BUG();
  }
  if ( qfread(a1[10], &v60, 4) != 4 )
  {
LABEL_91:
    if ( under_debugger )
      goto LABEL_95;
    interr(30723);
    goto LABEL_93;
  }
  v26 = v60;
  if ( v60 > (__int64)a1[11] )
  {
    if ( under_debugger )
      goto LABEL_95;
    interr(30769);
    goto LABEL_91;
  }
  v27 = 0;
  v28 = 0;
  v61 = 0;
  v62 = 0;
  if ( v60 )
  {
    v61 = qvector_reserve(&v61, 0, v60, 4);
    memset((void *)(v61 + 4 * v62), 0, 4 * (v26 - v62));
    *(_QWORD *)&v62 = v26;
    v28 = v60;
    v27 = v61;
  }
  v29 = (struct _Unwind_Exception *)(int)(4 * v28);
  if ( (struct _Unwind_Exception *)qfread(a1[10], v27, v29) != v29 )
  {
    if ( !under_debugger )
    {
      interr(30831);
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v61);
      }
      _Unwind_Resume(v29);
    }
    goto LABEL_95;
  }
  v30 = (__int64 (__fastcall **)(_QWORD))a1[15];
  v31 = (__int64 (__fastcall **)(_QWORD))a1[10];
  v63[0] = (__int64 (__fastcall **)(_QWORD))&off_4D6C0;
  v63[1] = v31;
  v63[2] = v30;
  v58 = (unsigned int *)(v61 + 4 * v62);
  if ( (unsigned int *)v61 == v58 )
    goto LABEL_55;
  v55 = (unsigned int *)v61;
  v59 = v11 + 6;
  do
  {
    v32 = *v55;
    v33 = sub_C950(v63, v32);
    v37 = (_QWORD *)v11[7];
    v38 = v33;
    if ( v37 )
    {
      while ( 1 )
      {
        v39 = v37[4];
        v40 = sub_FE30(v38);
        v35 = (unsigned int)sub_FE30(v39);
        v41 = (_QWORD *)v37[3];
        if ( v40 < (int)v35 )
          v41 = (_QWORD *)v37[2];
        LOBYTE(v35) = v40 < (int)v35;
        if ( !v41 )
          break;
        v37 = v41;
      }
      if ( !(_BYTE)v35 )
      {
        v42 = v37;
LABEL_49:
        v43 = sub_FE30(v37[4]);
        if ( v43 >= (int)sub_FE30(v38) )
          goto LABEL_53;
        goto LABEL_50;
      }
    }
    else
    {
      v37 = v11 + 6;
    }
    v42 = (_QWORD *)v11[8];
    if ( v37 != v42 )
    {
      v42 = v37;
      v37 = (_QWORD *)std::_Rb_tree_decrement(v37, v32, v34, v35, v36);
      goto LABEL_49;
    }
LABEL_50:
    v44 = 1;
    if ( v59 != v42 )
    {
      v50 = v42[4];
      v51 = sub_FE30(v38);
      v44 = v51 < (int)sub_FE30(v50);
    }
    v45 = operator new(0x28u);
    *(_QWORD *)(v45 + 32) = v38;
    std::_Rb_tree_insert_and_rebalance(v44, v45, v42, v59);
    ++v11[10];
LABEL_53:
    ++v55;
  }
  while ( v58 != v55 );
  v58 = (unsigned int *)v61;
LABEL_55:
  if ( v58 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v58);
  }
  v9 = (_QWORD *)a1[3];
  v46 = a1 + 2;
  if ( !v9 )
    return nullptr;
  do
  {
LABEL_64:
    while ( 1 )
    {
      v48 = v9[2];
      v49 = v9[3];
      if ( v9[4] < a2 )
        break;
      v46 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !v48 )
        goto LABEL_66;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v49 );
LABEL_66:
  if ( v57 == v46 || a2 < v46[4] )
    return nullptr;
  return v46 + 5;
}

