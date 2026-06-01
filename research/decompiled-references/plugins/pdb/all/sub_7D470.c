void __fastcall sub_7D470(__int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // r13
  _QWORD *v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // r13
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // r12
  _QWORD *v12; // r13
  _QWORD *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rbp
  void *v18; // rdi
  __int64 v19; // rbp
  void *v20; // rdi
  __int64 v21; // rbp
  void *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 i; // r12
  __int64 *v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  __int64 v36; // rdi
  _QWORD *v37; // rbp
  void *v38; // rdi
  void *v39; // rdi
  _QWORD *v40; // rbp
  void *v41; // rdi
  void *v42; // rdi
  _QWORD *v43; // rbp
  void *v44; // rdi
  void *v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // r13
  __int64 j; // r12
  __int64 *v50; // rbp
  __int64 v51; // rdi
  __int64 v52; // rdi
  void *v53; // rdi
  void *v54; // rdi
  unsigned __int64 v55; // rsi
  _QWORD **v56; // r13
  _QWORD **v57; // r12
  __int64 v58; // rdi
  _QWORD *v59; // rbp
  void (__fastcall *v60)(_QWORD *); // rax

  v1 = *(_QWORD **)(a1 + 848);
  *(_QWORD *)(a1 + 600) = 0;
  if ( v1 )
  {
    v3 = (_QWORD *)*v1;
    if ( *v1 )
    {
      v4 = (_QWORD *)*v3;
      if ( *v3 )
      {
        if ( *v4 )
          sub_779E0((_QWORD *)*v4);
        v5 = (_QWORD *)v4[1];
        if ( v5 )
          sub_779E0(v5);
        v6 = v4[5];
        if ( v6 )
        {
          v4[6] = 0;
          qfree(v6);
        }
        operator delete(v4, 0x48u);
      }
      v7 = (_QWORD *)v3[1];
      if ( v7 )
      {
        if ( *v7 )
          sub_779E0((_QWORD *)*v7);
        v8 = (_QWORD *)v7[1];
        if ( v8 )
          sub_779E0(v8);
        v9 = v7[5];
        if ( v9 )
        {
          v7[6] = 0;
          qfree(v9);
        }
        operator delete(v7, 0x48u);
      }
      v10 = v3[5];
      if ( v10 )
      {
        v3[6] = 0;
        qfree(v10);
      }
      operator delete(v3, 0x48u);
    }
    v11 = (_QWORD *)v1[1];
    if ( v11 )
    {
      if ( *v11 )
        sub_779E0((_QWORD *)*v11);
      v12 = (_QWORD *)v11[1];
      if ( v12 )
      {
        if ( *v12 )
          sub_779E0((_QWORD *)*v12);
        v13 = (_QWORD *)v12[1];
        if ( v13 )
          sub_779E0(v13);
        v14 = v12[5];
        if ( v14 )
        {
          v12[6] = 0;
          qfree(v14);
        }
        operator delete(v12, 0x48u);
      }
      v15 = v11[5];
      if ( v15 )
      {
        v11[6] = 0;
        qfree(v15);
      }
      operator delete(v11, 0x48u);
    }
    v16 = v1[5];
    if ( v16 )
    {
      v1[6] = 0;
      qfree(v16);
    }
    operator delete(v1, 0x48u);
  }
  v17 = *(_QWORD *)(a1 + 816);
  while ( v17 )
  {
    sub_78050(*(_QWORD **)(v17 + 24));
    v18 = (void *)v17;
    v17 = *(_QWORD *)(v17 + 16);
    operator delete(v18, 0x30u);
  }
  sub_78220(*(_QWORD **)(a1 + 768));
  v19 = *(_QWORD *)(a1 + 720);
  while ( v19 )
  {
    sub_783F0(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x48u);
  }
  v21 = *(_QWORD *)(a1 + 672);
  while ( v21 )
  {
    sub_785C0(*(_QWORD **)(v21 + 24));
    v22 = (void *)v21;
    v21 = *(_QWORD *)(v21 + 16);
    operator delete(v22, 0x38u);
  }
  v23 = *(_QWORD *)(a1 + 632);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 640) = 0;
    qfree(v23);
  }
  v24 = *(_QWORD *)(a1 + 608);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  v25 = *(_QWORD *)(a1 + 576);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 584) = 0;
    qfree(v25);
  }
  v26 = *(_QWORD *)(a1 + 552);
  if ( v26 )
  {
    v27 = *(_QWORD *)(a1 + 560);
    if ( v27 )
    {
      v28 = 0;
      for ( i = 0; i != v27; ++i )
      {
        v30 = (__int64 *)(v26 + v28);
        v31 = *(_QWORD *)(v26 + v28 + 24);
        if ( v31 )
        {
          v30[4] = 0;
          qfree(v31);
        }
        v32 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v32);
        }
        v26 = *(_QWORD *)(a1 + 552);
        v28 += 56;
      }
    }
    *(_QWORD *)(a1 + 560) = 0;
    qfree(v26);
  }
  sub_57B40(a1 + 472);
  v33 = *(void **)(a1 + 472);
  if ( v33 != (void *)(a1 + 520) )
    operator delete(v33, 8LL * *(_QWORD *)(a1 + 480));
  sub_7D400(a1 + 416);
  v34 = *(void **)(a1 + 416);
  if ( v34 != (void *)(a1 + 464) )
    operator delete(v34, 8LL * *(_QWORD *)(a1 + 424));
  sub_7D400(a1 + 360);
  v35 = *(void **)(a1 + 360);
  if ( v35 != (void *)(a1 + 408) )
    operator delete(v35, 8LL * *(_QWORD *)(a1 + 368));
  v36 = *(_QWORD *)(a1 + 336);
  if ( v36 )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree(v36);
  }
  v37 = *(_QWORD **)(a1 + 296);
  while ( v37 )
  {
    v38 = v37;
    v37 = (_QWORD *)*v37;
    operator delete(v38, 0x10u);
  }
  memset(*(void **)(a1 + 280), 0, 8LL * *(_QWORD *)(a1 + 288));
  v39 = *(void **)(a1 + 280);
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  if ( v39 != (void *)(a1 + 328) )
    operator delete(v39, 8LL * *(_QWORD *)(a1 + 288));
  v40 = *(_QWORD **)(a1 + 240);
  while ( v40 )
  {
    v41 = v40;
    v40 = (_QWORD *)*v40;
    operator delete(v41, 0x18u);
  }
  memset(*(void **)(a1 + 224), 0, 8LL * *(_QWORD *)(a1 + 232));
  v42 = *(void **)(a1 + 224);
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  if ( v42 != (void *)(a1 + 272) )
    operator delete(v42, 8LL * *(_QWORD *)(a1 + 232));
  v43 = *(_QWORD **)(a1 + 184);
  while ( v43 )
  {
    v44 = v43;
    v43 = (_QWORD *)*v43;
    operator delete(v44, 0x18u);
  }
  memset(*(void **)(a1 + 168), 0, 8LL * *(_QWORD *)(a1 + 176));
  v45 = *(void **)(a1 + 168);
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  if ( v45 != (void *)(a1 + 216) )
    operator delete(v45, 8LL * *(_QWORD *)(a1 + 176));
  v46 = *(_QWORD *)(a1 + 144);
  if ( v46 )
  {
    v47 = *(_QWORD *)(a1 + 152);
    if ( v47 )
    {
      v48 = 0;
      for ( j = 0; j != v47; ++j )
      {
        v50 = (__int64 *)(v46 + v48);
        v51 = *(_QWORD *)(v46 + v48 + 24);
        if ( v51 )
        {
          v50[4] = 0;
          qfree(v51);
        }
        v52 = *v50;
        if ( *v50 )
        {
          v50[1] = 0;
          qfree(v52);
        }
        v46 = *(_QWORD *)(a1 + 144);
        v48 += 120;
      }
    }
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v46);
  }
  sub_57C20(a1 + 80);
  v53 = *(void **)(a1 + 80);
  if ( v53 != (void *)(a1 + 128) )
    operator delete(v53, 8LL * *(_QWORD *)(a1 + 88));
  sub_57C20(a1 + 24);
  v54 = *(void **)(a1 + 24);
  v55 = *(_QWORD *)(a1 + 32);
  if ( v54 != (void *)(a1 + 72) )
  {
    v55 *= 8LL;
    operator delete(v54, v55);
  }
  v56 = *(_QWORD ***)(a1 + 8);
  v57 = *(_QWORD ***)a1;
  if ( v56 != *(_QWORD ***)a1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v59 = *v57;
        if ( *v57 )
          break;
LABEL_98:
        if ( v56 == ++v57 )
          goto LABEL_102;
      }
      v60 = *(void (__fastcall **)(_QWORD *))(*v59 + 272LL);
      if ( v60 == sub_61300 )
      {
        v58 = v59[3];
        v59[1] = 0;
        *v59 = off_AEE30;
        if ( v58 )
        {
          v59[4] = 0;
          qfree(v58);
        }
        v55 = 88;
        operator delete(v59, 0x58u);
        goto LABEL_98;
      }
      ++v57;
      ((void (__fastcall *)(_QWORD *, unsigned __int64))v60)(v59, v55);
      if ( v56 == v57 )
      {
LABEL_102:
        v57 = *(_QWORD ***)a1;
        break;
      }
    }
  }
  if ( v57 )
    operator delete(v57, *(_QWORD *)(a1 + 16) - (_QWORD)v57);
}
