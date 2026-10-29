_QWORD *__fastcall sub_81060(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  const __m128i *v8; // rbx
  __int64 v9; // rdi
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rcx
  bool v13; // zf

  if ( (unsigned __int64)a3 < a2[60] && (v4 = 16LL * a3, *(_DWORD *)(a2[59] + v4)) )
  {
    v6 = operator new(0x40u);
    v7 = a2[8];
    v8 = (const __m128i *)(a2[59] + v4);
    *(_QWORD *)(v6 + 16) = a2;
    v9 = a2[58];
    *(_BYTE *)(v6 + 56) = 1;
    *(_QWORD *)(v6 + 8) = v7;
    v10 = _mm_loadl_epi64(v8);
    *(_QWORD *)v6 = off_B23F8;
    LODWORD(v7) = v8->m128i_i32[3];
    v11 = _mm_unpacklo_epi32(v10, (__m128i)0LL);
    *(_QWORD *)(v6 + 24) = v9;
    *(_DWORD *)(v6 + 32) = v7;
    *(__m128i *)(v6 + 40) = v11;
    if ( v11.m128i_i64[0] == qlseek(v9, v11.m128i_i64[0], 0, v12) )
    {
      v13 = *(_QWORD *)(v6 + 48) == 0;
      *(_BYTE *)(v6 + 56) = 1;
      if ( v13 )
        *(_QWORD *)(v6 + 48) = qlsize(*(_QWORD *)(v6 + 24)) - *(_QWORD *)(v6 + 40);
    }
    else
    {
      sub_37FD0(*(__int64 **)(v6 + 8), (__int64)"COFF failed to seek at 0x%llX", v11.m128i_i64[0]);
      *(_BYTE *)(v6 + 56) = 0;
    }
    *a1 = v6;
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
