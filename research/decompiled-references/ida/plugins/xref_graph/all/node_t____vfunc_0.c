void __fastcall node_t__::vfunc_0(QT::QGraphicsItem *this, const char *a2)
{
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rax

  *(_QWORD *)this = &node_t___vtable;
  if ( sub_1FB50(this) )
  {
    a2 = nullptr;
    sub_28140((__int64 **)this);
  }
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    *((_QWORD *)this + 13) = 0;
    qfree(v3, a2);
  }
  v4 = *((volatile signed __int32 **)this + 8);
  if ( v4 && !_InterlockedSub(v4, 1u) )
    free(*((void **)this + 8));
  QT::QTextLayout::~QTextLayout((QT::QGraphicsItem *)((char *)this + 56));
  QT::QGraphicsItem::~QGraphicsItem(this);
}

