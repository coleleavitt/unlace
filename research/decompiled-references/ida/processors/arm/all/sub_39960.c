__int64 __fastcall sub_39960(__int64 *a1, __int64 *a2, int a3)
{
  _QWORD *v4; // rbx
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  void (__fastcall *v9)(__int64, __int64, __int64); // rax
  __m128i v10; // xmm0
  __int64 v11; // rax

  switch ( a3 )
  {
    case 1:
      *a1 = *a2;
      break;
    case 2:
      v6 = *a2;
      v7 = operator new(0x40u);
      v8 = *(_QWORD *)v6;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)v7 = v8;
      v9 = *(void (__fastcall **)(__int64, __int64, __int64))(v6 + 24);
      *(_QWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 8) = 0;
      if ( v9 )
      {
        v9(v7 + 8, v6 + 8, 2);
        *(__m128i *)(v7 + 24) = _mm_loadu_si128((const __m128i *)(v6 + 24));
      }
      v10 = _mm_loadu_si128((const __m128i *)(v6 + 40));
      v11 = *(_QWORD *)(v6 + 56);
      *a1 = v7;
      *(_QWORD *)(v7 + 56) = v11;
      *(__m128i *)(v7 + 40) = v10;
      break;
    case 3:
      v4 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v5 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4[3];
        if ( v5 )
          v5(v4 + 1, v4 + 1, 3);
        operator delete(v4, 0x40u);
      }
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}
