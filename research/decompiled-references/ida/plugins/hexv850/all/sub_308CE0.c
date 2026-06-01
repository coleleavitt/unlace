unsigned __int64 __fastcall sub_308CE0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rax
  __m128i v8; // xmm0
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v9 = __readfsqword(0x28u);
  v3 = *(__int64 **)(v1 + 112);
  v4 = *v3;
  v5 = *(__int64 (**)())(*v3 + 384);
  if ( v5 != sub_308790 )
  {
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v3, a1 + 56) )
      sub_308AD0((_QWORD *)(a1 + 24), "runtime.duffcopy", *(_QWORD *)(a1 + 80));
    v3 = *(__int64 **)(v1 + 112);
    v4 = *v3;
  }
  v6 = *(__int64 (**)())(v4 + 392);
  if ( v6 != sub_3087A0 && ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a1 + 120) )
  {
    v8 = _mm_loadu_si128((const __m128i *)(a1 + 136));
    sub_308AD0((_QWORD *)(a1 + 88), "runtime.duffzero", _mm_add_epi64(v8, _mm_srli_si128(v8, 8)).m128i_i64[0]);
  }
  get_idati();
  create_tinfo();
  return v9 - __readfsqword(0x28u);
}

