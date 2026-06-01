__int64 __fastcall sub_29340(__int64 a1, QT::QGraphicsSceneMouseEvent *a2, __m128i a3, __m128i a4)
{
  QT::QGraphicsItem *v6; // rdi
  __m128i v7; // xmm2
  QT::QGraphicsItem *v8; // rdi
  __m128i v9; // xmm3
  __int64 v10; // rax
  QT::QAbstractScrollArea *v11; // rbp
  __int64 v12; // rax
  __m128i v13; // [rsp+0h] [rbp-88h] BYREF
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v16; // [rsp+30h] [rbp-58h]
  _QWORD v17[2]; // [rsp+40h] [rbp-48h] BYREF
  __m128i v18; // [rsp+50h] [rbp-38h]
  unsigned __int64 v19; // [rsp+68h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 48) )
    return v19 - __readfsqword(0x28u);
  QT::QGraphicsSceneMouseEvent::scenePos(a2);
  v6 = *(QT::QGraphicsItem **)(a1 + 16);
  v13 = _mm_unpacklo_epi64(a3, a4);
  sub_28850(v6);
  v7 = _mm_load_si128(&v13);
  v15[1] = a4.m128i_i64[0];
  v16 = v7;
  v15[0] = a3.m128i_i64[0];
  QT::QLineF::length((QT::QLineF *)v15);
  v13.m128i_i64[0] = a3.m128i_i64[0];
  QT::QGraphicsSceneMouseEvent::scenePos(a2);
  v8 = *(QT::QGraphicsItem **)(a1 + 24);
  v14 = _mm_unpacklo_epi64(a3, a4);
  sub_28850(v8);
  v9 = _mm_load_si128(&v14);
  v17[0] = a3.m128i_i64[0];
  v17[1] = a4.m128i_i64[0];
  v18 = v9;
  QT::QLineF::length((QT::QLineF *)v17);
  if ( *(double *)a3.m128i_i64 <= *(double *)v13.m128i_i64 )
  {
    v12 = sub_1FB50((QT::QGraphicsItem *)a1);
    v11 = (QT::QAbstractScrollArea *)sub_345D0(v12);
    sub_28850(*(QT::QGraphicsItem **)(a1 + 16));
  }
  else
  {
    v10 = sub_1FB50((QT::QGraphicsItem *)a1);
    v11 = (QT::QAbstractScrollArea *)sub_345D0(v10);
    sub_28850(*(QT::QGraphicsItem **)(a1 + 24));
  }
  return sub_2F190(v11);
}
