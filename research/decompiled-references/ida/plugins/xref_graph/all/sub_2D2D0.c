void __fastcall sub_2D2D0(int a1, _QWORD *a2)
{
  __int64 v2; // rdi

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = a2[2] + 128LL;
      *(_OWORD *)v2 = xmmword_40FD0;
      *(_OWORD *)(v2 + 16) = xmmword_40FE0;
      *(_OWORD *)(v2 + 32) = xmmword_40FF0;
      *(_OWORD *)(v2 + 48) = xmmword_41000;
      *(_OWORD *)(v2 + 64) = xmmword_41010;
      *(__m128d *)(v2 + 80) = _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}

