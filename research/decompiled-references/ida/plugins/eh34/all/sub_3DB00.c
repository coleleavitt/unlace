__int64 __fastcall sub_3DB00(__int64 a1, __int64 *a2, __int64 a3, double a4, double a5, double a6, double a7)
{
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  __m128i v13; // xmm0
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  __m128i v20; // [rsp+8h] [rbp-50h] BYREF
  char v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  sub_3D950((__int64)&v19, a2, a4, a5, a6, a7);
  if ( v21 )
    goto LABEL_13;
  v9 = v19;
  *(_BYTE *)(a3 + 8) = v19;
  if ( (v9 & 4) != 0 )
  {
    sub_74160(&v19, *a2, a2[1]);
    if ( v21 )
      goto LABEL_13;
    a2[1] += 4;
    v15 = v19;
    if ( !*(_BYTE *)(a3 + 16) )
      *(_BYTE *)(a3 + 16) = 1;
    *(_DWORD *)(a3 + 12) = v15;
    v9 = *(_BYTE *)(a3 + 8);
    if ( (v9 & 8) == 0 )
    {
LABEL_4:
      if ( (v9 & 0x10) == 0 )
        goto LABEL_5;
      goto LABEL_21;
    }
  }
  else if ( (v9 & 8) == 0 )
  {
    goto LABEL_4;
  }
  sub_74310(&v19, *a2);
  if ( v21 )
    goto LABEL_13;
  v16 = v19;
  a2[1] += 4;
  *(_BYTE *)(a3 + 32) = 1;
  *(_QWORD *)(a3 + 24) = v16;
  v9 = *(_BYTE *)(a3 + 8);
  if ( (v9 & 0x10) != 0 )
  {
LABEL_21:
    sub_74310(&v19, *a2);
    if ( v21 )
      goto LABEL_13;
    v17 = v19;
    a2[1] += 4;
    *(_BYTE *)(a3 + 48) = 1;
    *(_QWORD *)(a3 + 40) = v17;
    v9 = *(_BYTE *)(a3 + 8);
  }
LABEL_5:
  v10 = *a2;
  if ( (v9 & 2) == 0 )
  {
    sub_74310(&v19, v10);
    if ( v21 )
      goto LABEL_13;
    v18 = v19;
    a2[1] += 4;
    *(_BYTE *)(a3 + 64) = 1;
    *(_QWORD *)(a3 + 56) = v18;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      goto LABEL_8;
LABEL_24:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  sub_74310(&v19, v10);
  if ( v21 )
    goto LABEL_13;
  v11 = v19;
  a2[1] += 4;
  *(_BYTE *)(a3 + 88) = 1;
  *(_QWORD *)(a3 + 80) = v11;
  if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
    goto LABEL_24;
LABEL_8:
  sub_74310(&v19, *a2);
  v12 = v19;
  if ( !v21 )
  {
    a2[1] += 4;
    if ( !*(_BYTE *)(a3 + 76) )
      *(_BYTE *)(a3 + 76) = 1;
    *(_DWORD *)(a3 + 72) = v12;
    goto LABEL_24;
  }
LABEL_13:
  *(_QWORD *)a1 = v19;
  v13 = _mm_loadu_si128(&v20);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v13;
  return a1;
}

