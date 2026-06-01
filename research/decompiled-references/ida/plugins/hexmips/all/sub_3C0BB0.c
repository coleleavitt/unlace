unsigned __int64 __fastcall sub_3C0BB0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // rax
  __m128i v6; // xmm0
  unsigned __int64 v8; // rbp
  _BYTE *v9; // rdi
  _BYTE *v10; // rdi
  unsigned __int64 *v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 *v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 112);
  v15 = __readfsqword(0x28u);
  v13 = nullptr;
  v14 = 0;
  sub_2B34E0(v2, a2, (__int64)&v13);
  v3 = v13;
  if ( !v13 )
    return v15 - __readfsqword(0x28u);
  v4 = *v13;
  if ( !v14 )
  {
    *v13 = *v13 & 3 | (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCLL;
    v5 = v13;
    v6 = (__m128i)(unsigned __int64)v13;
    *v13 &= ~1uLL;
    *(__m128i *)(v5 + 1) = _mm_unpacklo_epi64(v6, v6);
    *v13 |= 2u;
    goto LABEL_4;
  }
  v8 = v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v9 = *(_BYTE **)(v8 + 8);
    if ( (*v9 & 2) != 0 )
    {
      v10 = *(_BYTE **)(v8 + 16);
      if ( (*v10 & 2) != 0 )
        goto LABEL_17;
    }
    else
    {
      sub_3C0410((__int64)v9);
      v10 = *(_BYTE **)(v8 + 16);
      if ( (*v10 & 2) != 0 )
        goto LABEL_10;
    }
    sub_3C0410((__int64)v10);
LABEL_10:
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
LABEL_11:
      if ( v4 > 3 )
        qfree();
      v3 = v13;
      v4 = *v13;
      goto LABEL_14;
    }
LABEL_17:
    clear_tinfo_t();
    if ( *(_QWORD *)(v8 + 32) )
    {
      *(_QWORD *)(v8 + 40) = 0;
      qfree();
    }
    *(_QWORD *)v8 |= 2uLL;
    goto LABEL_11;
  }
LABEL_14:
  *v3 = v4 & 3 | (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = v13;
  v12 = (__m128i)(unsigned __int64)v13;
  *v13 &= ~1uLL;
  *(__m128i *)(v11 + 1) = _mm_unpacklo_epi64(v12, v12);
  *v13 |= 2u;
  v14 = 0;
LABEL_4:
  if ( v13 )
    qfree();
  return v15 - __readfsqword(0x28u);
}

