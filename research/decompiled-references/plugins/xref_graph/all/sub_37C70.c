void __fastcall viewer_t__::vfunc_3(QT::QGraphicsView *this, double a2, __m128d a3)
{
  const QT::QObject *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  const char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 i; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 j; // rbp
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 k; // rbp
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 m; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbp
  volatile signed __int32 *v38; // rax
  _QWORD **v39; // r13
  __int64 v40; // rax
  volatile signed __int32 *v41; // r14
  volatile signed __int32 *v42; // rax
  _QWORD **v43; // r15
  __int64 v44; // rax
  __int64 v45; // rbp
  volatile signed __int32 *v46; // rax
  _QWORD **v47; // r13
  __int64 v48; // rax
  volatile signed __int32 *v49; // r14
  volatile signed __int32 *v50; // rax
  _QWORD **v51; // r15

  *(_QWORD *)this = &viewer_t___vtable;
  *((_QWORD *)this + 2) = viewer_t___vtable_at__16;
  v4 = (const QT::QObject *)QT::QGraphicsView::scene(this);
  v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_4EB40, v4);
  if ( !v5 )
    goto LABEL_15;
  v10 = v5;
  sub_22680(v5, a2, a3, (__int64)v4, v6, v7, v8, v9);
  if ( *(_QWORD *)(v10 + 64) )
  {
    sub_319F0((_QWORD *)(v10 + 64));
  }
  else
  {
    v36 = operator new(0x38u);
    *(_DWORD *)v36 = 0;
    v37 = v36;
    v36 += 16;
    *(_DWORD *)v36 = 0;
    *(_QWORD *)(v36 + 8) = 0;
    *(_QWORD *)(v37 + 32) = v36;
    *(_QWORD *)(v37 + 40) = v36;
    *(_QWORD *)(v37 + 48) = 0;
    v38 = *(volatile signed __int32 **)(v10 + 64);
    if ( v38 )
    {
      if ( !_InterlockedSub(v38, 1u) )
      {
        v39 = *(_QWORD ***)(v10 + 64);
        if ( v39 )
        {
          sub_2DFA0(v39[3]);
          v4 = (const QT::QObject *)&word_38;
          operator delete(v39, 0x38u);
        }
      }
    }
    *(_QWORD *)(v10 + 64) = v37;
    if ( !v37 )
    {
      v12 = 64;
      goto LABEL_60;
    }
    _InterlockedAdd((volatile signed __int32 *)v37, 1u);
  }
  v11 = *(_QWORD *)(v10 + 64);
  v12 = *(_QWORD *)(v11 + 32);
  if ( v11 )
  {
    sub_319F0((_QWORD *)(v10 + 64));
    v13 = *(_QWORD *)(v10 + 64) + 16LL;
    goto LABEL_7;
  }
LABEL_60:
  v48 = operator new(0x38u);
  v13 = v48 + 16;
  *(_DWORD *)v48 = 0;
  v49 = (volatile signed __int32 *)v48;
  *(_DWORD *)(v48 + 16) = 0;
  *(_QWORD *)(v48 + 24) = 0;
  *(_QWORD *)(v48 + 32) = v48 + 16;
  *(_QWORD *)(v48 + 40) = v48 + 16;
  *(_QWORD *)(v48 + 48) = 0;
  v50 = *(volatile signed __int32 **)(v10 + 64);
  if ( v50 )
  {
    if ( !_InterlockedSub(v50, 1u) )
    {
      v51 = *(_QWORD ***)(v10 + 64);
      if ( v51 )
      {
        sub_2DFA0(v51[3]);
        v4 = (const QT::QObject *)&word_38;
        operator delete(v51, 0x38u);
      }
    }
  }
  *(_QWORD *)(v10 + 64) = v49;
  if ( v49 )
  {
    _InterlockedAdd(v49, 1u);
    v13 = *(_QWORD *)(v10 + 64) + 16LL;
  }
LABEL_7:
  while ( v13 != v12 )
  {
    *(_QWORD *)(*(_QWORD *)(v12 + 40) + 136LL) = 0;
    v12 = std::_Rb_tree_increment(v12, v4);
  }
  if ( *(_QWORD *)(v10 + 72) )
  {
    sub_32670((_QWORD *)(v10 + 72));
  }
  else
  {
    v44 = operator new(0x38u);
    *(_DWORD *)v44 = 0;
    v45 = v44;
    v44 += 16;
    *(_DWORD *)v44 = 0;
    *(_QWORD *)(v44 + 8) = 0;
    *(_QWORD *)(v45 + 32) = v44;
    *(_QWORD *)(v45 + 40) = v44;
    *(_QWORD *)(v45 + 48) = 0;
    v46 = *(volatile signed __int32 **)(v10 + 72);
    if ( v46 )
    {
      if ( !_InterlockedSub(v46, 1u) )
      {
        v47 = *(_QWORD ***)(v10 + 72);
        if ( v47 )
        {
          sub_2DCD0(v47[3]);
          v4 = (const QT::QObject *)&word_38;
          operator delete(v47, 0x38u);
        }
      }
    }
    *(_QWORD *)(v10 + 72) = v45;
    if ( !v45 )
    {
      v15 = 64;
LABEL_47:
      v40 = operator new(0x38u);
      v16 = v40 + 16;
      *(_DWORD *)v40 = 0;
      v41 = (volatile signed __int32 *)v40;
      *(_DWORD *)(v40 + 16) = 0;
      *(_QWORD *)(v40 + 24) = 0;
      *(_QWORD *)(v40 + 32) = v40 + 16;
      *(_QWORD *)(v40 + 40) = v40 + 16;
      *(_QWORD *)(v40 + 48) = 0;
      v42 = *(volatile signed __int32 **)(v10 + 72);
      if ( v42 )
      {
        if ( !_InterlockedSub(v42, 1u) )
        {
          v43 = *(_QWORD ***)(v10 + 72);
          if ( v43 )
          {
            sub_2DCD0(v43[3]);
            v4 = (const QT::QObject *)&word_38;
            operator delete(v43, 0x38u);
          }
        }
      }
      *(_QWORD *)(v10 + 72) = v41;
      if ( v41 )
      {
        _InterlockedAdd(v41, 1u);
        v16 = *(_QWORD *)(v10 + 72) + 16LL;
      }
      goto LABEL_13;
    }
    _InterlockedAdd((volatile signed __int32 *)v45, 1u);
  }
  v14 = *(_QWORD *)(v10 + 72);
  v15 = *(_QWORD *)(v14 + 32);
  if ( !v14 )
    goto LABEL_47;
  sub_32670((_QWORD *)(v10 + 72));
  v16 = *(_QWORD *)(v10 + 72) + 16LL;
LABEL_13:
  while ( v16 != v15 )
  {
    *(_QWORD *)(*(_QWORD *)(v15 + 48) + 40LL) = 0;
    v15 = std::_Rb_tree_increment(v15, v4);
  }
  sub_3DE20(v10, v10);
LABEL_15:
  v17 = *((const char **)this + 12);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(58, v17, 0, &callui, v8, v9);
  QT::QVariantAnimation::~QVariantAnimation((QT::QGraphicsView *)((char *)this + 208));
  v18 = *((_QWORD *)this + 23);
  if ( v18 )
  {
    v19 = *((_QWORD *)this + 24);
    if ( v19 )
    {
      for ( i = 0; i != v19; ++i )
      {
        v21 = v18 + 40 * i;
        v22 = *(_QWORD *)(v21 + 16);
        if ( v22 )
        {
          *(_QWORD *)(v21 + 24) = 0;
          qfree(v22, v17);
          v18 = *((_QWORD *)this + 23);
        }
      }
    }
    *((_QWORD *)this + 24) = 0;
    qfree(v18, v17);
  }
  v23 = *((_QWORD *)this + 20);
  if ( v23 )
  {
    v24 = *((_QWORD *)this + 21);
    if ( v24 )
    {
      for ( j = 0; j != v24; ++j )
      {
        v26 = v23 + 40 * j;
        v27 = *(_QWORD *)(v26 + 16);
        if ( v27 )
        {
          *(_QWORD *)(v26 + 24) = 0;
          qfree(v27, v17);
          v23 = *((_QWORD *)this + 20);
        }
      }
    }
    *((_QWORD *)this + 21) = 0;
    qfree(v23, v17);
  }
  v28 = *((_QWORD *)this + 17);
  if ( v28 )
  {
    v29 = *((_QWORD *)this + 18);
    if ( v29 )
    {
      for ( k = 0; k != v29; ++k )
      {
        v31 = k;
        QT::QPainterPath::~QPainterPath((QT::QPainterPath *)(v28 + 16 * v31 + 8));
        v28 = *((_QWORD *)this + 17);
      }
    }
    *((_QWORD *)this + 18) = 0;
    qfree(v28, v17);
  }
  v32 = *((_QWORD *)this + 14);
  if ( v32 )
  {
    v33 = *((_QWORD *)this + 15);
    if ( v33 )
    {
      for ( m = 0; m != v33; ++m )
      {
        v35 = m;
        QT::QPainterPath::~QPainterPath((QT::QPainterPath *)(v32 + 16 * v35 + 8));
        v32 = *((_QWORD *)this + 14);
      }
    }
    *((_QWORD *)this + 15) = 0;
    qfree(v32, v17);
  }
  QT::QGraphicsView::~QGraphicsView(this);
}
