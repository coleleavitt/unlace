unsigned __int64 __fastcall sub_1E960(_QWORD *a1, const void **a2)
{
  size_t v2; // r12
  void **p_src; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rdi
  __int64 v11; // r15
  QT::QGraphicsScene *v12; // r14
  size_t v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 i; // r13
  __int64 v18; // rsi
  size_t v19; // rbx
  void *v20; // r13
  __int64 v21; // rdx
  void **v22; // rax
  void *v23; // rax
  const void *v24; // rsi
  __int64 v25; // rax
  void *src; // [rsp+0h] [rbp-B38h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-B30h]
  void *v28; // [rsp+20h] [rbp-B18h] BYREF
  __int128 v29; // [rsp+28h] [rbp-B10h]
  _BYTE v30[80]; // [rsp+40h] [rbp-AF8h] BYREF
  _BYTE v31[28]; // [rsp+90h] [rbp-AA8h] BYREF
  __int64 v32; // [rsp+ACh] [rbp-A8Ch]
  char v33; // [rsp+B4h] [rbp-A84h]
  unsigned __int64 v34; // [rsp+AF8h] [rbp-40h]

  v2 = (size_t)a2[1];
  v34 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v2 )
  {
    v23 = (void *)qalloc_or_throw(v2);
    v24 = *a2;
    n[1] = v2;
    src = v23;
    memcpy(v23, v24, v2);
    n[0] = v2;
  }
  p_src = &src;
  if ( (unsigned __int8)sub_1A930((__int64)a1, (const char **)&src, "Enter the name of the new graph") )
  {
    v11 = sub_1BDA0(a1, (__int64)a2, v5, v6, v7, v8);
    v12 = (QT::QGraphicsScene *)v11;
    if ( !v11 )
      v12 = sub_1DD00((__int64)a1, (__int64)a2, 0);
    v13 = n[0];
    v28 = nullptr;
    v29 = 0;
    if ( n[0] )
    {
      v28 = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v29 + 1) = v13;
      memcpy(v28, src, v13);
      *(_QWORD *)&v29 = v13;
    }
    sub_276B0((QT::QGraphicsScene *)v30);
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28, &v28, v14, v15);
    }
    sub_1B620((volatile signed __int32 **)v12 + 8);
    v16 = *(_QWORD *)(*((_QWORD *)v12 + 8) + 32LL);
    sub_1B620((volatile signed __int32 **)v12 + 8);
    for ( i = *((_QWORD *)v12 + 8) + 16LL; i != v16; v16 = std::_Rb_tree_increment(v16, v18) )
    {
      v18 = *(_QWORD *)(v16 + 40);
      sub_205E0((QT::QGraphicsScene *)v30);
    }
    QT::QString::operator=(v31, (char *)v12 + 80);
    v31[24] = *((_BYTE *)v12 + 104);
    v32 = *(_QWORD *)((char *)v12 + 108);
    v33 = *((_BYTE *)v12 + 116);
    if ( v12 && !v11 )
      (*(void (__fastcall **)(QT::QGraphicsScene *))(*(_QWORD *)v12 + 32LL))(v12);
    sub_265E0(v30, (char *)v12 + 80);
    sub_22680(v30);
    v19 = n[0];
    v20 = nullptr;
    if ( n[0] )
    {
      v20 = (void *)qalloc_or_throw(n[0]);
      memcpy(v20, src, v19);
    }
    v21 = a1[221];
    p_src = (void **)a1[220];
    if ( a1[222] < (unsigned __int64)(v21 + 1) )
    {
      v25 = qvector_reserve(a1 + 220, p_src, v21 + 1, 24);
      a1[220] = v25;
      v21 = a1[221];
      p_src = (void **)v25;
    }
    v22 = &p_src[3 * v21];
    *v22 = v20;
    *(__m128i *)(v22 + 1) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
    ++a1[221];
    sub_1A840((__int64)a1);
    graph_t__::vfunc_3((QT::QGraphicsScene *)v30);
    v9 = src;
    if ( src )
      goto LABEL_5;
  }
  else
  {
    v9 = src;
    if ( src )
    {
LABEL_5:
      n[0] = 0;
      qfree(v9, p_src, v5, v6);
    }
  }
  return v34 - __readfsqword(0x28u);
}

