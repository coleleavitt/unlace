__int64 __fastcall sub_386320(__int64 a1, __int64 a2, __int64 **a3)
{
  bool v3; // zf
  __m128i v5; // xmm0
  __int64 v6; // rax
  __m128i v7; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v3 = a3[1] == nullptr;
  v8 = __readfsqword(0x28u);
  if ( v3 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  else
  {
    v5 = 0;
    v6 = **a3;
    v7 = 0;
    if ( (*(_QWORD *)(v6 + 48) & 0x100) != 0 )
    {
      get_tinfo_pdata();
      v5 = _mm_loadu_si128(&v7);
    }
    *(_QWORD *)a1 = 0;
    *(__m128i *)(a1 + 8) = v5;
  }
  return a1;
}

