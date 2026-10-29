unsigned __int64 __fastcall sub_28850(QT::QGraphicsItem *this)
{
  __int64 v1; // rax
  __m128i *(__fastcall *v2)(__m128i *, __int64); // rax
  __int128 v4; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD *)this;
  v5 = __readfsqword(0x28u);
  v2 = *(__m128i *(__fastcall **)(__m128i *, __int64))(v1 + 24);
  if ( v2 != sub_27F40 )
    v2((__m128i *)&v4, (__int64)this);
  QT::QGraphicsItem::pos(this);
  return v5 - __readfsqword(0x28u);
}

