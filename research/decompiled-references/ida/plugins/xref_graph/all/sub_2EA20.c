__int64 __fastcall sub_2EA20(__int64 a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v4[24]; // [rsp+30h] [rbp-38h] BYREF
  double v5; // [rsp+48h] [rbp-20h]
  unsigned __int64 v6; // [rsp+58h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2[0] = 0;
  v2[1] = _mm_sub_epi32(
            _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 28LL)),
            _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 20LL))).m128i_u64[0];
  QT::QGraphicsView::mapToScene(&ptr, a1, v2);
  QT::QPolygonF::boundingRect((QT::QPolygonF *)v4);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return (unsigned int)(int)(v5 + 5.0);
}

