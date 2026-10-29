__int64 __fastcall sub_3E4C30(__int64 a1, __m128i *a2)
{
  __int64 result; // rax
  __m128i si128; // xmm0
  __int32 v4; // edx

  result = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 144LL);
  if ( (_BYTE)result )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FE570);
    a2->m128i_i32[0] = *(_DWORD *)(a1 + 448);
    a2->m128i_i32[1] = *(_DWORD *)(a1 + 452);
    v4 = *(_DWORD *)(a1 + 476);
    a2[1] = si128;
    a2->m128i_i32[2] = v4;
  }
  return result;
}

