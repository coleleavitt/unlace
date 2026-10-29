unsigned __int64 __fastcall sub_278C0(QT::QGraphicsScene **a1, __int64 *a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  volatile signed __int32 **v23; // rdi
  QT::QGraphicsScene *v25; // r15
  volatile signed __int32 *v26; // rax
  volatile signed __int32 **v27; // rdi
  _QWORD *v28; // r11
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 *v33; // r15
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _BOOL8 v36; // rdi
  __int64 v37; // r15
  void *v38; // rdi
  QT::QGraphicsItem *v39; // [rsp+0h] [rbp-A8h]
  _QWORD *v40; // [rsp+10h] [rbp-98h]
  __int64 v41; // [rsp+20h] [rbp-88h]
  _QWORD *v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v45[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v46[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v2 = *a2;
  v47 = __readfsqword(0x28u);
  if ( (unsigned __int8)xrefblk_t_first_to(v46, v2, 0) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v43 = sub_1AB20(v46[0]);
        v4 = v43;
        v44 = sub_1AB20(v46[1]);
        v5 = v44;
        if ( v4 == v44 )
          goto LABEL_30;
        v6 = *((_QWORD *)*a1 + 8);
        if ( !v6 )
          goto LABEL_30;
        v7 = *(_QWORD **)(v6 + 24);
        v8 = (_QWORD *)(v6 + 16);
        if ( !v7 )
          goto LABEL_30;
        v9 = (_QWORD *)(v6 + 16);
        v10 = *(_QWORD **)(v6 + 24);
        do
        {
          while ( 1 )
          {
            v11 = v10[2];
            v12 = v10[3];
            if ( v10[4] < v4 )
              break;
            v9 = v10;
            v10 = (_QWORD *)v10[2];
            if ( !v11 )
              goto LABEL_9;
          }
          v10 = (_QWORD *)v10[3];
        }
        while ( v12 );
LABEL_9:
        if ( v8 == v9 || v4 < v9[4] )
          goto LABEL_30;
        v13 = v8;
        do
        {
          while ( 1 )
          {
            v14 = v7[2];
            v15 = v7[3];
            if ( v7[4] < v44 )
              break;
            v13 = v7;
            v7 = (_QWORD *)v7[2];
            if ( !v14 )
              goto LABEL_15;
          }
          v7 = (_QWORD *)v7[3];
        }
        while ( v15 );
LABEL_15:
        if ( v13 == v8 || v44 < v13[4] )
          goto LABEL_30;
        v16 = sub_29610(v46);
        v17 = *((_QWORD *)*a1 + 9);
        if ( !v17 )
          break;
        v18 = (_QWORD *)(v17 + 16);
        v19 = *(_QWORD **)(v17 + 24);
        if ( !v19 )
          break;
        v20 = v18;
        do
        {
          while ( 1 )
          {
            v21 = v19[4];
            if ( v21 < v4 || v4 == v21 && v19[5] < v5 )
              break;
            v20 = v19;
            v19 = (_QWORD *)v19[2];
            if ( !v19 )
              goto LABEL_25;
          }
          v19 = (_QWORD *)v19[3];
        }
        while ( v19 );
LABEL_25:
        if ( v20 == v18 || v4 < v20[4] || v4 == v20[4] && v5 < v20[5] )
          break;
        v22 = v20[6];
        if ( !v22 )
          break;
        *(_DWORD *)(v22 + 32) |= v16;
        v23 = (volatile signed __int32 **)a1[1];
        v45[0] = v4;
        v45[1] = v5;
        sub_262F0(v23, v45);
LABEL_30:
        if ( !(unsigned __int8)xrefblk_t_next_to(v46) )
          return v47 - __readfsqword(0x28u);
      }
      v39 = (QT::QGraphicsItem *)operator new(0x68u);
      sub_20420((volatile signed __int32 **)*a1 + 8, &v44);
      sub_20420((volatile signed __int32 **)*a1 + 8, (unsigned __int64 *)&v43);
      sub_2B780(v39);
      v25 = *a1;
      v26 = *((volatile signed __int32 **)*a1 + 9);
      v27 = (volatile signed __int32 **)((char *)*a1 + 72);
      if ( v26 && *v26 != 1 )
      {
        v7 = *((_QWORD **)*a1 + 9);
        _InterlockedAdd(v26, 1u);
      }
      sub_20860(v27);
      v28 = *((_QWORD **)v25 + 9);
      v29 = (_QWORD *)v28[3];
      v30 = v28 + 2;
      if ( v29 )
      {
        do
        {
          while ( 1 )
          {
            v31 = v29[4];
            if ( v31 < v4 || v4 == v31 && v29[5] < v5 )
              break;
            v30 = v29;
            v29 = (_QWORD *)v29[2];
            if ( !v29 )
              goto LABEL_43;
          }
          v29 = (_QWORD *)v29[3];
        }
        while ( v29 );
LABEL_43:
        if ( v30 != v28 + 2 && v4 >= v30[4] && (v4 != v30[4] || v5 >= v30[5]) )
          break;
      }
      v42 = v28 + 2;
      v41 = *((_QWORD *)v25 + 9);
      v40 = v28 + 1;
      v32 = (__int64 *)operator new(0x38u);
      v32[4] = v4;
      v33 = v32;
      v32[5] = v5;
      v32[6] = (__int64)v39;
      v34 = sub_26040(v40, v30, v32 + 4);
      if ( !v35 )
      {
        if ( v33 )
          operator delete(v33, 0x38u);
LABEL_57:
        if ( !v7 )
          goto LABEL_52;
        goto LABEL_58;
      }
      v36 = 1;
      if ( !v34 && v42 != v35 && v4 >= v35[4] )
      {
        v36 = 0;
        if ( v4 == v35[4] )
          v36 = v5 < v35[5];
      }
      std::_Rb_tree_insert_and_rebalance(v36, v33, v35, v42);
      ++*(_QWORD *)(v41 + 48);
      if ( !v7 )
        goto LABEL_52;
LABEL_58:
      if ( !_InterlockedSub((volatile signed __int32 *)v7, 1u) )
      {
        v37 = v7[3];
        while ( v37 )
        {
          sub_1F160(*(_QWORD **)(v37 + 24));
          v38 = (void *)v37;
          v37 = *(_QWORD *)(v37 + 16);
          operator delete(v38, 0x38u);
        }
        operator delete(v7, 0x38u);
        QT::QGraphicsScene::addItem(*a1, v39);
        goto LABEL_53;
      }
LABEL_52:
      QT::QGraphicsScene::addItem(*a1, v39);
LABEL_53:
      if ( !(unsigned __int8)xrefblk_t_next_to(v46) )
        return v47 - __readfsqword(0x28u);
    }
    v30[6] = v39;
    goto LABEL_57;
  }
  return v47 - __readfsqword(0x28u);
}

