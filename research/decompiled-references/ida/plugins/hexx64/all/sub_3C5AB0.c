unsigned __int64 __fastcall sub_3C5AB0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __m128i v6; // xmm0
  unsigned __int64 v8; // rbp
  _BYTE *v9; // rdi
  _BYTE *v10; // rdi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 112);
  v16 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  sub_2B7D60(v2, a2, (__int64)&v14);
  v3 = v14;
  if ( !v14 )
    return v16 - __readfsqword(0x28u);
  v4 = *(_QWORD *)v14;
  if ( !v15 )
  {
    *(_QWORD *)v14 = *(_QWORD *)v14 & 3LL | v14 & 0xFFFFFFFFFFFFFFFCLL;
    v5 = v14;
    v6 = (__m128i)(unsigned __int64)v14;
    *(_QWORD *)v14 &= ~1uLL;
    *(__m128i *)(v5 + 8) = _mm_unpacklo_epi64(v6, v6);
    *(_QWORD *)v14 |= 2uLL;
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
      sub_3C5310((__int64)v9);
      v10 = *(_BYTE **)(v8 + 16);
      if ( (*v10 & 2) != 0 )
        goto LABEL_10;
    }
    sub_3C5310((__int64)v10);
LABEL_10:
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
LABEL_11:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v3 = v14;
      v4 = *(_QWORD *)v14;
      goto LABEL_14;
    }
LABEL_17:
    clear_tinfo_t();
    v13 = *(_QWORD *)(v8 + 32);
    if ( v13 )
    {
      *(_QWORD *)(v8 + 40) = 0;
      qfree(v13);
    }
    *(_QWORD *)v8 |= 2uLL;
    goto LABEL_11;
  }
LABEL_14:
  *(_QWORD *)v3 = v4 & 3 | v3 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = v14;
  v12 = (__m128i)(unsigned __int64)v14;
  *(_QWORD *)v14 &= ~1uLL;
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v12, v12);
  *(_QWORD *)v14 |= 2uLL;
  v15 = 0;
LABEL_4:
  if ( v14 )
    qfree(v14);
  return v16 - __readfsqword(0x28u);
}

