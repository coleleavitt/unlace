unsigned __int64 __fastcall sub_36E80(QT::QGraphicsView *this, QT::QGraphicsScene *a2)
{
  __int64 v3; // rax
  __m128d v4; // xmm1
  __m128d v5; // xmm0
  __m128 v6; // xmm1
  QT::QHBoxLayout *v7; // r14
  bool v8; // zf
  const char *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // rsi
  QT::QWidget *v14; // rax
  const char *v15; // rsi
  unsigned __int64 v16; // r15
  const char *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  char *v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  void **v27; // rdi
  QT::QPainterPath *v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  QT::QWidget *v36; // r13
  QT::QHBoxLayout *v37; // r13
  QT::QVBoxLayout *v38; // r14
  QT::QWidget *v39; // r15
  QT::QWidget *v40; // r15
  QT::QVBoxLayout *v41; // r14
  QT::QWidget *v42; // r15
  QT::QScrollArea *v43; // r14
  QT::QHBoxLayout *v44; // r14
  QT::QWidget *v45; // r15
  QT::QHBoxLayout *v46; // r13
  QT::QAbstractButton *v47; // r15
  QT::QLineEdit *v48; // r15
  QT::QWidget *v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 j; // r15
  __int64 v56; // rdi
  __int64 i; // r14
  const char *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rdx
  const char *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  QT::QVariantAnimation *v65; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v66; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v67; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v68; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v69; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v70; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v71; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v72; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v73; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v74; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v75; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v76; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v77; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v78; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v79; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v80; // [rsp+0h] [rbp-B0h]
  QT::QVariantAnimation *v81; // [rsp+0h] [rbp-B0h]
  char *v82; // [rsp+8h] [rbp-A8h]
  void *v83; // [rsp+8h] [rbp-A8h]
  void *v84; // [rsp+8h] [rbp-A8h]
  void *v85; // [rsp+8h] [rbp-A8h]
  void *v86; // [rsp+8h] [rbp-A8h]
  void *v87; // [rsp+8h] [rbp-A8h]
  void *v88; // [rsp+8h] [rbp-A8h]
  void *v89; // [rsp+8h] [rbp-A8h]
  void *v90; // [rsp+8h] [rbp-A8h]
  void *v91; // [rsp+8h] [rbp-A8h]
  void *v92; // [rsp+8h] [rbp-A8h]
  void *v93; // [rsp+8h] [rbp-A8h]
  void *v94; // [rsp+8h] [rbp-A8h]
  void *v95; // [rsp+8h] [rbp-A8h]
  void *v96; // [rsp+8h] [rbp-A8h]
  void *v97; // [rsp+8h] [rbp-A8h]
  void *v98; // [rsp+8h] [rbp-A8h]
  QT::QWidget *v99; // [rsp+8h] [rbp-A8h]
  QT::QBoxLayout *v100; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v101; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v102; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v103; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v104; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v105; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v106; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v107; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v108; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v109; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v110; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v111; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v112; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v113; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v114; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v115; // [rsp+10h] [rbp-A0h]
  QT::QBoxLayout *v116; // [rsp+10h] [rbp-A0h]
  QT::QVBoxLayout *v117; // [rsp+10h] [rbp-A0h]
  QT::QObject *v118; // [rsp+18h] [rbp-98h]
  QT::QObject *v119; // [rsp+18h] [rbp-98h]
  QT::QObject *v120; // [rsp+18h] [rbp-98h]
  QT::QObject *v121; // [rsp+18h] [rbp-98h]
  QT::QObject *v122; // [rsp+18h] [rbp-98h]
  QT::QObject *v123; // [rsp+18h] [rbp-98h]
  QT::QObject *v124; // [rsp+18h] [rbp-98h]
  QT::QObject *v125; // [rsp+18h] [rbp-98h]
  QT::QObject *v126; // [rsp+18h] [rbp-98h]
  QT::QObject *v127; // [rsp+18h] [rbp-98h]
  QT::QObject *v128; // [rsp+18h] [rbp-98h]
  QT::QObject *v129; // [rsp+18h] [rbp-98h]
  QT::QObject *v130; // [rsp+18h] [rbp-98h]
  QT::QObject *v131; // [rsp+18h] [rbp-98h]
  QT::QObject *v132; // [rsp+18h] [rbp-98h]
  QT::QObject *v133; // [rsp+18h] [rbp-98h]
  QT::QObject *v134; // [rsp+18h] [rbp-98h]
  QT::QObject *v135; // [rsp+18h] [rbp-98h]
  void *v136; // [rsp+20h] [rbp-90h] BYREF
  __int64 v137; // [rsp+28h] [rbp-88h] BYREF
  __m256i v138; // [rsp+30h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-60h] BYREF
  _BYTE v140[24]; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v141; // [rsp+78h] [rbp-38h]

  v141 = __readfsqword(0x28u);
  QT::QGraphicsView::QGraphicsView(this, a2, nullptr);
  *((_WORD *)this + 52) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  *((_QWORD *)this + 14) = 0;
  *(_OWORD *)((char *)this + 56) = 0;
  *((_QWORD *)this + 2) = viewer_t___vtable_at__16;
  *(_QWORD *)this = &viewer_t___vtable;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 23) = 0;
  *(_OWORD *)((char *)this + 72) = 0;
  *(_OWORD *)((char *)this + 88) = 0;
  *(_OWORD *)((char *)this + 120) = 0;
  *((_OWORD *)this + 9) = 0;
  *(_OWORD *)((char *)this + 168) = 0;
  *((_OWORD *)this + 12) = 0;
  QT::QVariantAnimation::QVariantAnimation((QT::QGraphicsView *)((char *)this + 208), nullptr);
  *((_WORD *)this + 134) = 0;
  *((_WORD *)this + 150) = 0;
  *((_WORD *)this + 158) = 0;
  *((_DWORD *)this + 64) = 0;
  *(_QWORD *)((char *)this + 260) = 0xFFFF;
  *((_DWORD *)this + 68) = 0;
  *(_QWORD *)((char *)this + 276) = 0xFFFF;
  *((_WORD *)this + 142) = 0;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)((char *)this + 292) = 0xFFFF;
  *((_DWORD *)this + 76) = 0;
  *(_QWORD *)((char *)this + 308) = 0xFFFF;
  *((_DWORD *)this + 80) = 0;
  *(_QWORD *)((char *)this + 324) = 0xFFFF;
  *((_WORD *)this + 166) = 0;
  *((_DWORD *)this + 84) = 0;
  *(_QWORD *)((char *)this + 340) = 0xFFFF;
  *((_WORD *)this + 174) = 0;
  *((_DWORD *)this + 88) = 0;
  *(_QWORD *)((char *)this + 356) = 0xFFFF;
  *((_WORD *)this + 182) = 0;
  *((_DWORD *)this + 92) = 0;
  *(_QWORD *)((char *)this + 372) = 0xFFFF;
  *((_WORD *)this + 190) = 0;
  *((_DWORD *)this + 96) = 0;
  *(_QWORD *)((char *)this + 388) = 0xFFFF;
  *((_WORD *)this + 198) = 0;
  *((_OWORD *)this + 14) = 0;
  *((_OWORD *)this + 15) = 0;
  QT::QGraphicsView::setRenderHint(this, 1, 1);
  QT::QAbstractScrollArea::setHorizontalScrollBarPolicy(this, 1);
  QT::QAbstractScrollArea::setVerticalScrollBarPolicy(this, 1);
  QT::QGraphicsView::setTransformationAnchor(this, 2);
  QT::QGraphicsView::setResizeAnchor(this, 1);
  v138.m256i_i64[1] = 0;
  v138.m256i_i64[0] = (__int64)&QT::QGraphicsScene::sceneRectChanged;
  v3 = operator new(0x20u);
  *(_DWORD *)v3 = 1;
  *(_QWORD *)(v3 + 24) = this;
  *(_QWORD *)(v3 + 8) = sub_2D4B0;
  *(_QWORD *)(v3 + 16) = 0x40E86A0000000000LL;
  QT::QObject::connectImpl(ptr, a2, &v138, this, 0, v3, 0, 0, &QT::QGraphicsScene::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QGraphicsScene::sceneRect((QT::QGraphicsScene *)ptr);
  v4 = _mm_unpacklo_pd((__m128d)0x40E86A0000000000uLL, (__m128d)0x40E86A0000000000uLL);
  v5 = _mm_add_pd(_mm_add_pd(*(__m128d *)v140, v4), v4);
  v6 = (__m128)_mm_add_pd(
                 _mm_unpacklo_pd((__m128d)0xC0E86A0000000000LL, (__m128d)0xC0E86A0000000000LL),
                 *(__m128d *)ptr);
  *(__m128d *)&v138.m256i_u64[2] = v5;
  *(__m128 *)v138.m256i_i8 = v6;
  QT::QGraphicsView::setSceneRect(this, (const QT::QRectF *)&v138);
  v7 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v7);
  QT::QLayout::setContentsMargins(v7, 0, 0, 0, 0);
  QT::QBoxLayout::addWidget(v7, this, 0, 0);
  v8 = *((_QWORD *)a2 + 4) == 0;
  memset(&v138, 0, 24);
  v9 = s1;
  if ( !v8 )
    v9 = *((const char **)a2 + 3);
  sub_1AC30(v138.m256i_i64, (__int64)"Xref Graph: %s", v9);
  v13 = s1;
  if ( v138.m256i_i64[1] )
    v13 = (const char *)v138.m256i_i64[0];
  v14 = (QT::QWidget *)((__int64 (__fastcall *)(__int64, const char *, __int64, __int64, __int64, __int64, char *))callui)(
                         161,
                         v13,
                         0xFFFFFFFFLL,
                         v10,
                         v11,
                         v12,
                         (char *)this + 208);
  *((_QWORD *)this + 12) = v14;
  QT::QWidget::setLayout(v14, v7);
  v15 = *((const char **)this + 20);
  v16 = *((_QWORD *)this + 21);
  v17 = v15;
  if ( v16 != 3 )
  {
    ptr[0] = nullptr;
    LOBYTE(ptr[1]) = 0;
    memset(v140, 0, sizeof(v140));
    if ( v16 > 3 )
    {
      for ( i = 3; i != v16; ++i )
      {
        v58 = &v15[40 * i];
        v59 = *((_QWORD *)v58 + 2);
        if ( v59 )
        {
          *((_QWORD *)v58 + 3) = 0;
          qfree(v59, v15);
          v15 = *((const char **)this + 20);
        }
      }
      *((_QWORD *)this + 21) = 3;
      v17 = v15;
    }
    else
    {
      v18 = *((_QWORD *)this + 22);
      if ( ptr < (void **)v15 || ptr >= (void **)&v15[40 * v18] )
      {
        if ( v18 > 2
          || (v63 = qvector_reserve((char *)this + 160, v15, 3, 40),
              v16 = *((_QWORD *)this + 21),
              *((_QWORD *)this + 20) = v63,
              v17 = (const char *)v63,
              v16 <= 2) )
        {
          v19 = 40 * v16;
          do
          {
            v20 = (char *)&v17[v19];
            v19 += 40;
            *(void **)v20 = ptr[0];
            v21 = (int)ptr[1];
            *((_QWORD *)v20 + 2) = 0;
            *((_DWORD *)v20 + 2) = v21;
            *(_OWORD *)(v20 + 24) = 0;
            v17 = *((const char **)this + 20);
          }
          while ( v19 != 120 );
        }
      }
      else if ( v18 > 2
             || (v64 = qvector_reserve((char *)this + 160, v15, 3, 40),
                 v16 = *((_QWORD *)this + 21),
                 *((_QWORD *)this + 20) = v64,
                 v17 = (const char *)v64,
                 v16 <= 2) )
      {
        v60 = 40 * v16;
        do
        {
          v61 = &v17[v60];
          v60 += 40;
          *(_QWORD *)v61 = 0;
          *((_QWORD *)v61 + 1) = 0;
          *((_QWORD *)v61 + 2) = 0;
          *(_OWORD *)(v61 + 24) = 0;
          v17 = *((const char **)this + 20);
        }
        while ( v60 != 120 );
      }
      *((_QWORD *)this + 21) = 3;
    }
  }
  ptr[0] = nullptr;
  LOBYTE(ptr[1]) = 0;
  sub_3E320(v17, ptr);
  v22 = *((_QWORD *)this + 20);
  LOBYTE(ptr[1]) = 0;
  ptr[0] = (void *)0x100000000LL;
  sub_3E320(v22 + 40, ptr);
  v23 = *((_QWORD *)this + 20);
  LOBYTE(ptr[1]) = 0;
  ptr[0] = (void *)0x200000000LL;
  sub_3E320(v23 + 80, ptr);
  if ( *((_QWORD *)this + 15) != 1 )
  {
    v136 = nullptr;
    v137 = 0;
    v100 = (QT::QBoxLayout *)&v137;
    QT::QPainterPath::QPainterPath((QT::QPainterPath *)&v137);
    v24 = *((_QWORD *)this + 15);
    if ( v24 > 1 )
    {
      for ( j = 1; j != v24; ++j )
      {
        v56 = j;
        QT::QPainterPath::~QPainterPath((QT::QPainterPath *)(*((_QWORD *)this + 14) + 16 * v56 + 8));
      }
      goto LABEL_24;
    }
    if ( v24 )
    {
LABEL_25:
      QT::QPainterPath::~QPainterPath((QT::QPainterPath *)&v137);
      goto LABEL_26;
    }
    v25 = *((_QWORD *)this + 14);
    v82 = (char *)this + 112;
    v26 = *((_QWORD *)this + 16);
    if ( (unsigned __int64)&v136 >= v25 && (unsigned __int64)&v136 < v25 + 16 * v26 )
    {
      ptr[0] = v136;
      QT::QPainterPath::QPainterPath((QT::QPainterPath *)&ptr[1], (const QT::QPainterPath *)&v137);
      if ( !*((_QWORD *)this + 16) )
        *((_QWORD *)this + 14) = qvector_reserve(v82, *((_QWORD *)this + 14), 1, 16);
      if ( !*((_QWORD *)this + 15) )
      {
        v27 = *((void ***)this + 14);
        *v27 = ptr[0];
        QT::QPainterPath::QPainterPath((QT::QPainterPath *)(v27 + 1), (const QT::QPainterPath *)&ptr[1]);
      }
      *((_QWORD *)this + 15) = 1;
      QT::QPainterPath::~QPainterPath((QT::QPainterPath *)&ptr[1]);
      goto LABEL_25;
    }
    if ( !v26 )
    {
      v62 = qvector_reserve(v82, v25, 1, 16);
      v8 = *((_QWORD *)this + 15) == 0;
      *((_QWORD *)this + 14) = v62;
      if ( !v8 )
        goto LABEL_24;
      v25 = v62;
    }
    v28 = (QT::QPainterPath *)(v25 + 8);
    *((_QWORD *)v28 - 1) = v136;
    QT::QPainterPath::QPainterPath(v28, (const QT::QPainterPath *)&v137);
LABEL_24:
    *((_QWORD *)this + 15) = 1;
    goto LABEL_25;
  }
LABEL_26:
  v29 = *((_QWORD *)this + 14);
  ptr[0] = nullptr;
  sub_3E3B0(v29, ptr);
  callui(174, *((_QWORD *)this + 12), 4194308, 0, v30, v31, v65, v82, v100, v118);
  QT::QWidget::setFocus(this, 7);
  *((_BYTE *)this + 104) = 1;
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:AddXrefsTo", 0, 0, v66, v83, v101, v119);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:AddXrefsFrom", 0, 0, v67, v84, v102, v120);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:AddXrefsAll", 0, 0, v68, v85, v103, v121);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:ChooseXrefs", 0, 0, v69, v86, v104, v122);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:DeleteNodes", 0, 0, v70, v87, v105, v123);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:PinNodes", 0, 0, v71, v88, v106, v124);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:FitInView", "Fit to viewport/", 8, v72, v89, v107, v125);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:ToggleFitConstantly", "Fit to viewport/", 0, v73, v90, v108, v126);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:Search", 0, 0, v74, v91, v109, v127);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:SelectAll", 0, 8, v75, v92, v110, v128);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:InvertSelection", 0, 0, v76, v93, v111, v129);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:RunLayout", 0, 8, v77, v94, v112, v130);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:ToggleMinimap", 0, 0, v78, v95, v113, v131);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:ToggleOptions", 0, 0, v79, v96, v114, v132);
  callui(131, *((_QWORD *)this + 12), 0, "xref_graph:ToggleBottomLine", 0, 0, v80, v97, v115, v133);
  QT::QWidget::setAttribute(this, 55, 1);
  if ( (unsigned __int8)callui(202, 55, v32, v33, v34, v35, v81, v98, v116, v134) )
  {
    v36 = (QT::QWidget *)operator new(0x28u);
    QT::QOpenGLWidget::QOpenGLWidget(v36, 0, 0);
    QT::QAbstractScrollArea::setViewport(this, v36);
  }
  QT::QWidget::grabGesture(this, 4, 0);
  v117 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v117, this);
  v37 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v37);
  v38 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v38);
  v39 = (QT::QWidget *)operator new(0x50u);
  sub_31410(v39, 0);
  *((_QWORD *)this + 8) = v39;
  QT::QBoxLayout::addWidget(v38, v39, 0, 1);
  v40 = (QT::QWidget *)operator new(0x40u);
  sub_310F0(v40, 0);
  *((_QWORD *)this + 9) = v40;
  QT::QBoxLayout::addWidget(v38, v40, 0, 1);
  QT::QBoxLayout::addStretch(v38, 0);
  QT::QBoxLayout::addLayout(v37, v38, 0);
  QT::QBoxLayout::addStretch(v37, 0);
  v41 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v41);
  v42 = (QT::QWidget *)operator new(0x30u);
  sub_2E4C0(v42);
  *((_QWORD *)this + 10) = v42;
  QT::QBoxLayout::addWidget(v41, v42, 0, 2);
  QT::QBoxLayout::addStretch(v41, 0);
  QT::QBoxLayout::addLayout(v37, v41, 0);
  v43 = (QT::QScrollArea *)operator new(0x28u);
  sub_33610(v43, v135, this);
  *((_QWORD *)this + 7) = v43;
  QT::QBoxLayout::addWidget(v37, v43, 0, 2);
  QT::QBoxLayout::addLayout(v117, v37, 0);
  v44 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v44);
  v45 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v45, 0, 0);
  v99 = v45;
  v46 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v46, v45);
  QT::QLayout::setContentsMargins(v46, 0, 0, 0, 0);
  v47 = (QT::QAbstractButton *)operator new(0x28u);
  sub_36690(v47, (const char **)v135, (__int64)this);
  *((_QWORD *)this + 5) = v47;
  QT::QBoxLayout::addWidget(v46, v47, 0, 0);
  v48 = (QT::QLineEdit *)operator new(0x38u);
  sub_30F90(v48, (__int64)v135, (__int64)this);
  *((_QWORD *)this + 6) = v48;
  QT::QBoxLayout::addWidget(v46, v48, 0, 0);
  QT::QBoxLayout::addWidget(v44, v99, 0, 64);
  v49 = (QT::QWidget *)operator new(0x30u);
  sub_2E580(v49, v135, (__int64)this);
  *((_QWORD *)this + 11) = v49;
  QT::QBoxLayout::addWidget(v44, v49, 0, 66);
  QT::QBoxLayout::addLayout(v117, v44, 0);
  QT::QString::fromUtf8(
    ptr,
    88,
    "QWidget#ViewerOverlayWidget {    border: 2px solid #5f5f5f;     border-radius: 2px;   } ");
  QT::QWidget::setStyleSheet(this, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( *((_BYTE *)v135 + 17) )
    sub_270C0(v135, 0.0, v6, (__int64)ptr, v50, v51, v52, v53);
  QT::QWidget::setFocus(this, 7);
  if ( v138.m256i_i64[0] )
  {
    v138.m256i_i64[1] = 0;
    qfree(v138.m256i_i64[0], &byte_7);
  }
  return v141 - __readfsqword(0x28u);
}
