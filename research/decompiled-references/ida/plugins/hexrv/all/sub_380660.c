__int64 *__fastcall sub_380660(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // eax

  v2 = operator new(0x40u);
  *(__m128i *)(v2 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v3 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 24) = v3;
  *(_WORD *)(v2 + 32) = *(_WORD *)(a2 + 32);
  *(_QWORD *)v2 = &off_4B9598;
  copy_tinfo_t();
  *(_QWORD *)(v2 + 48) = 0;
  copy_tinfo_t();
  v4 = *(_DWORD *)(a2 + 56);
  *a1 = v2;
  *(_DWORD *)(v2 + 56) = v4;
  return a1;
}

