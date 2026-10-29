unsigned __int64 __fastcall sub_2BC020(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rbp
  _BYTE *v7; // rdi
  _BYTE *v8; // rdi
  const void *v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h]
  __int16 v15; // [rsp+34h] [rbp-24h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v9 = nullptr;
  v11 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 256;
  v13 = a3;
  v10 = 0;
  sub_814E0(a2, (__int64 *)&v9);
  sub_2B1D40(a1, v9, v10);
  v3 = v11;
  if ( !v11 )
    goto LABEL_6;
  v4 = *(_QWORD *)v11;
  if ( !v12 )
  {
    *(_QWORD *)v11 = *(_QWORD *)v11 & 3LL | v11 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    *(_QWORD *)v11 &= ~1uLL;
    *(_QWORD *)v11 |= 2uLL;
    goto LABEL_4;
  }
  v6 = v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v7 = *(_BYTE **)(v6 + 8);
    if ( (*v7 & 2) != 0 )
    {
      v8 = *(_BYTE **)(v6 + 16);
      if ( (*v8 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_2B1450((__int64)v7);
      v8 = *(_BYTE **)(v6 + 16);
      if ( (*v8 & 2) != 0 )
        goto LABEL_12;
    }
    sub_2B1450((__int64)v8);
LABEL_12:
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
LABEL_13:
      if ( v4 > 3 )
        qfree();
      v3 = v11;
      v4 = *(_QWORD *)v11;
      goto LABEL_16;
    }
LABEL_19:
    if ( *(_QWORD *)(v6 + 32) )
    {
      *(_QWORD *)(v6 + 40) = 0;
      qfree();
    }
    *(_QWORD *)v6 |= 2uLL;
    goto LABEL_13;
  }
LABEL_16:
  *(_QWORD *)v3 = v4 & 3 | v3 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  *(_QWORD *)v11 &= ~1uLL;
  *(_QWORD *)v11 |= 2uLL;
  v12 = 0;
LABEL_4:
  if ( v11 )
    qfree();
LABEL_6:
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

