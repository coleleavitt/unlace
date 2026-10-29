unsigned __int64 __fastcall sub_38330(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned int v4[4]; // [rsp+8h] [rbp-10h] BYREF

  *(_QWORD *)v4 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 96) = a2;
  v3 = 4919;
  QT::QRandomGenerator::QRandomGenerator((QT::QRandomGenerator *)(a1 + 104), &v3, v4);
  *(_OWORD *)a1 = xmmword_40FD0;
  *(_OWORD *)(a1 + 16) = xmmword_40FE0;
  *(_OWORD *)(a1 + 32) = xmmword_40FF0;
  *(_OWORD *)(a1 + 48) = xmmword_41000;
  *(_OWORD *)(a1 + 64) = xmmword_41010;
  *(__m128d *)(a1 + 80) = _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL);
  return *(_QWORD *)v4 - __readfsqword(0x28u);
}
