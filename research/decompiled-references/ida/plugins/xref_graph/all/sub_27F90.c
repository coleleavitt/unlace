unsigned __int64 __fastcall sub_27F90(QT::QGraphicsItem *this)
{
  bool v1; // zf
  unsigned int v2; // ebp
  char isSelected; // al
  __m128i v4; // xmm0
  int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  double v13; // xmm0_8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  char v21; // [rsp+10h] [rbp-38h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v1 = *((_QWORD *)this + 17) == 0;
  v22 = __readfsqword(0x28u);
  if ( v1 )
  {
    v19 = sub_1FB50(this);
    *((_QWORD *)this + 17) = sub_345D0(v19);
  }
  v2 = *((_DWORD *)this + 22);
  isSelected = QT::QGraphicsItem::isSelected(this);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 32));
  v21 = isSelected;
  v20 = _mm_unpacklo_epi32(v4, _mm_cvtsi32_si128(v2)).m128i_u64[0];
  v5 = sub_3E380(&v20);
  v7 = *((_QWORD **)this + 17);
  if ( v5 == -1 )
  {
    v16 = v7[24];
    v17 = v7[23];
    if ( v7[25] < (unsigned __int64)(v16 + 1) )
    {
      v18 = qvector_reserve(v7 + 23, v17, v16 + 1, 40);
      v16 = v7[24];
      v7[23] = v18;
      v17 = v18;
    }
    v8 = v17 + 40 * v16;
    *(_QWORD *)v8 = 0;
    *(_BYTE *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0;
    *(_OWORD *)(v8 + 24) = 0;
    ++v7[24];
    sub_3E320(v8, &v20);
  }
  else
  {
    v8 = v7[20] + 40LL * v5;
  }
  v9 = *(_QWORD *)(v8 + 24);
  v10 = *(_QWORD *)(v8 + 32);
  v11 = v8 + 16;
  v12 = *(_QWORD *)(v8 + 16);
  if ( v10 < v9 + 1 )
  {
    v15 = qvector_reserve(v8 + 16, v12, v9 + 1, 8);
    *(_QWORD *)(v8 + 16) = v15;
    v12 = v15;
    v9 = *(_QWORD *)(v8 + 24);
  }
  *(_QWORD *)(v12 + 8 * v9) = this;
  ++*(_QWORD *)(v8 + 24);
  v13 = sub_3E330(v8, v12, v10, v6, v11);
  QT::QGraphicsItem::setZValue(this, v13);
  return v22 - __readfsqword(0x28u);
}

