_QWORD *__fastcall sub_41840(_QWORD *a1, __int64 *a2, _BYTE *a3, double a4, double a5, double a6)
{
  __int64 *v6; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  _QWORD *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rbx
  const char *v17; // rdx
  const char *v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 v20; // r14
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  char v26; // di
  _BYTE *v27; // rbp
  void (__fastcall *v29)(_QWORD *); // rax
  __int64 v30; // rdi
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  _QWORD *v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rbx
  _QWORD *v38; // rbp
  __int64 v39; // rdi
  __int64 v40; // [rsp+0h] [rbp-78h]
  _QWORD *v41; // [rsp+8h] [rbp-70h]
  __int64 v43; // [rsp+18h] [rbp-60h]
  __int64 v44; // [rsp+20h] [rbp-58h] BYREF
  __int128 v45; // [rsp+28h] [rbp-50h]
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v6 = a2;
  v46 = __readfsqword(0x28u);
  if ( a3 && *a3 == 36 )
  {
    v26 = a3[1];
    v27 = a3 + 1;
    if ( !v26 )
    {
LABEL_21:
      v13 = nullptr;
      goto LABEL_22;
    }
    while ( (unsigned int)v26 <= 0x7F && !islower(v26) && isxdigit(v26) )
    {
      v26 = *++v27;
      if ( !v26 )
        goto LABEL_21;
    }
  }
  v8 = operator new(0x30u);
  v12 = a2[9];
  v13 = (_QWORD *)v8;
  *(_DWORD *)(v8 + 8) = 1;
  *(_QWORD *)v8 = &off_A9F80;
  v14 = v8 + 16;
  *(_QWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 40) = -1;
  v41 = a2 + 7;
  v40 = v8 + 16;
  *(_OWORD *)(v8 + 24) = 0;
  if ( (__int64 *)v12 == a2 + 7 )
    goto LABEL_28;
  do
  {
    v15 = v12;
    v16 = v12 + 40;
    v12 = std::_Rb_tree_increment(v12, a2, v9, v14, v10, v11, 0.0, a5, a6);
    if ( *(_BYTE *)(v15 + 136) )
      goto LABEL_11;
    sub_244A0();
    v17 = src;
    if ( v6[13] )
      v17 = (const char *)v6[12];
    v18 = src;
    if ( *(_QWORD *)(v15 + 104) )
      v18 = *(const char **)(v15 + 96);
    if ( (int)sub_411B0((__int64 *)(v15 + 40), v18, v17, *(_QWORD *)(v15 + 120)) >= 0 )
    {
      *(_BYTE *)(v15 + 136) = 1;
LABEL_11:
      v19 = *(_QWORD *)(v15 + 144);
      a2 = &v44;
      v44 = 0;
      v45 = 0;
      (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)v19 + 88LL))(v19, &v44, a3);
      if ( (_QWORD)v45 )
      {
        v20 = 0;
        do
        {
          v23 = v13[3];
          v24 = v13[2];
          v9 = v23 + 1;
          if ( v13[4] < (unsigned __int64)(v23 + 1) )
          {
            v25 = qvector_reserve(v40, v24, v9, 16);
            v13[2] = v25;
            v24 = v25;
            v23 = v13[3];
            v9 = v23 + 1;
          }
          v13[3] = v9;
          a2 = (__int64 *)(16 * v23 + v24);
          *a2 = v16;
          v21 = v44;
          v22 = *(_DWORD *)(v44 + 4 * v20++);
          *((_DWORD *)a2 + 2) = v22;
        }
        while ( v20 < (unsigned __int64)v45 );
      }
      else
      {
        v21 = v44;
      }
      if ( v21 )
      {
        *(_QWORD *)&v45 = 0;
        qfree(v21);
      }
      continue;
    }
    v32 = std::_Rb_tree_rebalance_for_erase(v15, v41);
    v33 = *(_QWORD *)(v32 + 152);
    v34 = (_QWORD *)v32;
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
    v35 = v34[18];
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
    v36 = v34[12];
    if ( v36 )
    {
      v34[13] = 0;
      qfree(v36);
    }
    v37 = v34[8];
    if ( v37 )
    {
      v43 = v12;
      do
      {
        v38 = (_QWORD *)v37;
        sub_27580(*(_QWORD **)(v37 + 24));
        v39 = *(_QWORD *)(v37 + 32);
        v37 = *(_QWORD *)(v37 + 16);
        if ( v39 )
        {
          v38[5] = 0;
          qfree(v39);
        }
        operator delete(v38, 0x40u);
      }
      while ( v37 );
      v12 = v43;
    }
    a2 = &qword_A8;
    operator delete(v34, 0xA8u);
    --v6[11];
  }
  while ( (_QWORD *)v12 != v41 );
  if ( v13[3] )
    goto LABEL_22;
LABEL_28:
  if ( !v13 )
    goto LABEL_21;
  v29 = *(void (__fastcall **)(_QWORD *))(*v13 + 48LL);
  if ( v29 != sub_25140 )
  {
    v29(v13);
    goto LABEL_21;
  }
  v30 = v13[2];
  *v13 = &off_A9F80;
  if ( v30 )
  {
    v13[3] = 0;
    qfree(v30);
  }
  v31 = v13;
  v13 = nullptr;
  operator delete(v31, 0x30u);
LABEL_22:
  *a1 = v13;
  return a1;
}

