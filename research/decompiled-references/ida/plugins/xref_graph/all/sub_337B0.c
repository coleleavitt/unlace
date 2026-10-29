void __fastcall sub_337B0(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // r13
  __int64 v12; // rsi
  int *v13; // r14
  int *v14; // rbx
  QT::QGraphicsItem **v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rcx
  QT::QGraphicsItem **v18; // rsi
  __int64 v19; // rax
  QT::QGraphicsItem *v20; // r13
  __int64 v21; // rdx
  QT::QGraphicsItem **v22; // rcx
  size_t v23; // rdx
  QT::QGraphicsItem **v24; // rax
  QT::QGraphicsItem **v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  QT::QGraphicsItem **v28; // r13
  _QWORD *v29; // [rsp+10h] [rbp-A8h]
  volatile signed __int32 *ptr; // [rsp+18h] [rbp-A0h]
  __int64 v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+28h] [rbp-90h]
  QT::QGraphicsItem **v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  void *src[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v36; // [rsp+70h] [rbp-48h]
  unsigned __int64 v37; // [rsp+78h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 != 1 )
      return;
    v5 = *(_QWORD *)(a4 + 8);
    ptr = *(volatile signed __int32 **)v5;
    v31 = *(_QWORD *)(v5 + 8);
    v32 = *(_QWORD *)(v5 + 16);
    if ( *(_QWORD *)v5 )
      _InterlockedAdd(*(volatile signed __int32 **)v5, 1u);
    v6 = a2[2];
    v7 = QT::QString::toIntegral_helper(v32, v31, 0, 10);
    if ( v7 != (int)v7 )
      LODWORD(v7) = 0;
    *(_DWORD *)(v6 + 120) = v7;
    v11 = *(int **)(a2[2] + 64LL);
    if ( !v11 )
    {
      v15 = nullptr;
      v16 = 0;
      goto LABEL_38;
    }
    v12 = *((_QWORD *)v11 + 6);
    v36 = 0;
    *(_OWORD *)src = 0;
    sub_21300(src, v12, 0, v8, v9, v10);
    v13 = *((int **)v11 + 4);
    v14 = (int *)src[0];
    v15 = (QT::QGraphicsItem **)src[1];
    v16 = v36;
    v29 = v11 + 4;
    if ( v11 + 4 == v13 )
    {
LABEL_47:
      if ( v14 )
      {
        v11 = v14;
        if ( *v14 <= 1 )
        {
LABEL_49:
          if ( *v14 <= 1 )
          {
            v28 = &v15[v16];
            if ( v28 == v15 )
              goto LABEL_42;
            do
LABEL_40:
              sub_28A20(*v15++, *(_DWORD *)(a2[2] + 120LL));
            while ( v28 != v15 );
LABEL_41:
            if ( !v14 )
            {
LABEL_44:
              if ( ptr )
              {
                if ( !_InterlockedSub(ptr, 1u) )
                  free((void *)ptr);
              }
              return;
            }
LABEL_42:
            if ( !_InterlockedSub(v14, 1u) )
              free(v14);
            goto LABEL_44;
          }
LABEL_39:
          src[0] = v14;
          src[1] = v15;
          v36 = v16;
          sub_22070((__int64)src, 0, 0, 0, v9, v10);
          v14 = (int *)src[0];
          v28 = (QT::QGraphicsItem **)((char *)src[1] + 8 * v36);
          if ( v28 == v15 )
            goto LABEL_41;
          goto LABEL_40;
        }
      }
      else
      {
        v11 = nullptr;
      }
LABEL_38:
      src[0] = v11;
      src[1] = v15;
      v36 = v16;
      sub_22070((__int64)src, 0, 0, 0, v9, v10);
      v14 = (int *)src[0];
      v15 = (QT::QGraphicsItem **)src[1];
      v16 = v36;
      if ( !src[0] )
        goto LABEL_39;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v20 = *((QT::QGraphicsItem **)v13 + 5);
      if ( !v14 )
        goto LABEL_11;
      if ( *v14 > 1 )
        break;
      while ( 1 )
      {
        v27 = ((unsigned __int64)v14 + 31) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *((_QWORD *)v14 + 1) - ((__int64)((__int64)v15 - v27) >> 3) == v16 )
        {
          if ( v16 || (QT::QGraphicsItem **)v27 == v15 )
            goto LABEL_17;
          *(v15 - 1) = v20;
          v16 = 1;
          --v15;
        }
        else
        {
          v15[v16++] = v20;
        }
LABEL_28:
        if ( *v14 > 1 )
          break;
        v26 = std::_Rb_tree_increment(v13);
        v13 = (int *)v26;
        if ( v29 == (_QWORD *)v26 )
          goto LABEL_47;
        v20 = *(QT::QGraphicsItem **)(v26 + 40);
        if ( *v14 > 1 )
          goto LABEL_17;
      }
LABEL_14:
      src[0] = v14;
      src[1] = v15;
      v36 = v16;
      sub_22070((__int64)src, 0, 0, 0, v9, v10);
      v14 = (int *)src[0];
      v15 = (QT::QGraphicsItem **)src[1];
      v19 = std::_Rb_tree_increment(v13);
      v16 = v36;
      v13 = (int *)v19;
      if ( v29 == (_QWORD *)v19 )
        goto LABEL_47;
    }
LABEL_17:
    if ( *v14 <= 1 )
    {
      v21 = (__int64)((__int64)v15 - (((unsigned __int64)v14 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
      if ( *((_QWORD *)v14 + 1) - v16 - v21 > 0 )
      {
        v25 = &v15[v16];
LABEL_27:
        *v25 = v20;
        ++v16;
        goto LABEL_28;
      }
      if ( (__int64)((__int64)v15 - (((unsigned __int64)v14 + 31) & 0xFFFFFFFFFFFFFFF0LL)) > 0
        && 3 * v16 < 2LL * *((_QWORD *)v14 + 1) )
      {
        v22 = &v15[-v21];
        v23 = v16;
        if ( v16 && v15 != v22 && v15 && v22 )
        {
          v24 = (QT::QGraphicsItem **)memmove(v22, v15, v23 * 8);
          v23 = v16;
          v22 = v24;
        }
        v25 = &v22[v23];
        v15 = v22;
        goto LABEL_27;
      }
    }
LABEL_11:
    src[0] = v14;
    src[1] = v15;
    v36 = v16;
    sub_22070((__int64)src, 0, 1, 0, v9, v10);
    v15 = (QT::QGraphicsItem **)src[1];
    v17 = v36;
    v14 = (int *)src[0];
    v18 = (QT::QGraphicsItem **)((char *)src[1] + 8 * v16);
    if ( v16 < v36 )
    {
      v34 = v36;
      v33 = (QT::QGraphicsItem **)((char *)src[1] + 8 * v16);
      memmove(v18 + 1, v18, 8 * (v36 - v16));
      v17 = v34;
      v18 = v33;
    }
    *v18 = v20;
    v16 = v17 + 1;
    if ( !v14 )
      goto LABEL_14;
    goto LABEL_28;
  }
  if ( a2 )
    operator delete(a2, 0x18u);
}

