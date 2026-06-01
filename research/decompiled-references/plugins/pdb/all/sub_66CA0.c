__int64 **__fastcall sub_66CA0(__int64 **a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __m128i si128; // xmm0
  __int64 v13; // rax
  void (*v14)(); // rax

  v9 = (__int64 *)operator new(0x68u);
  v10 = *a3;
  *((_OWORD *)v9 + 2) = 0;
  v11 = v9;
  si128 = _mm_load_si128((const __m128i *)&xmmword_94150);
  v9[1] = 0;
  *((_DWORD *)v9 + 4) = a4;
  *((_DWORD *)v9 + 5) = a5;
  v9[3] = 0;
  *((_DWORD *)v9 + 20) = -1;
  v9[6] = 0xFFFFFFFF00000000LL;
  v9[7] = 0xFFFFFFFFLL;
  *((_WORD *)v9 + 42) = -1;
  *v9 = (__int64)off_AC890;
  *((__m128i *)v9 + 4) = si128;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, (__int64)v9 + 86, 14)
    && (*((_WORD *)v11 + 42) = *((_WORD *)v11 + 44),
        (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v11 + 320))(v11, a3)) )
  {
    v13 = *v11;
    v11[1] = a2;
    v14 = *(void (**)())(v13 + 312);
    if ( v14 != nullsub_15 )
      ((void (__fastcall *)(__int64 *))v14)(v11);
    *a1 = v11;
  }
  else
  {
    *a1 = nullptr;
    if ( v11 )
      (*(void (__fastcall **)(__int64 *))(*v11 + 272))(v11);
  }
  return a1;
}
