__int64 __fastcall sub_27500(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int16 v4; // ax
  __int16 v5; // r12
  unsigned __int64 *v6; // rax
  __int64 **v7; // rax
  __int64 *v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r13d
  int v12; // eax
  __int64 *v13; // rbx
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  char v17; // al
  _DWORD *v18; // rdi
  char *v19; // rsi
  __int64 i; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-1D8h]
  int v24; // [rsp+8h] [rbp-1D0h]
  __int16 v25; // [rsp+Ch] [rbp-1CCh]
  char v26; // [rsp+Fh] [rbp-1C9h]
  __int64 *v27; // [rsp+10h] [rbp-1C8h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-1C0h]
  __int64 v29; // [rsp+20h] [rbp-1B8h]
  __int16 v30; // [rsp+28h] [rbp-1B0h]
  __m128i v31; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-198h]
  __int64 v33; // [rsp+48h] [rbp-190h]
  __int64 v34; // [rsp+50h] [rbp-188h]
  char v35; // [rsp+58h] [rbp-180h] BYREF
  __int16 v36; // [rsp+5Eh] [rbp-17Ah]
  char v37; // [rsp+80h] [rbp-158h] BYREF
  char v38; // [rsp+81h] [rbp-157h]
  __int16 v39; // [rsp+86h] [rbp-152h]
  __int64 v40; // [rsp+90h] [rbp-148h]
  char v41; // [rsp+A8h] [rbp-130h]
  char v42; // [rsp+D0h] [rbp-108h]
  char v43; // [rsp+F8h] [rbp-E0h]
  char v44; // [rsp+120h] [rbp-B8h]
  char v45; // [rsp+148h] [rbp-90h]
  char v46; // [rsp+170h] [rbp-68h]
  unsigned __int64 v47; // [rsp+198h] [rbp-40h] BYREF

  v47 = __readfsqword(0x28u);
  v3 = getinf_flag(3, 32);
  v4 = *(_WORD *)(a2 + 24);
  if ( v4 > 0x8Cu )
  {
    if ( (unsigned __int16)(v4 - 141) > 1u )
      return 0;
    v26 = 2;
    if ( v3 )
      v24 = 3;
    else
      v24 = -3;
    v5 = 142;
    v25 = 604;
  }
  else
  {
    if ( v4 <= 0x8Au )
    {
      if ( v4 == 122 )
      {
        v26 = 7;
        if ( v3 )
        {
          v24 = 7;
          v5 = 123;
          v25 = 601;
        }
        else
        {
          v24 = -7;
          v25 = 601;
          v5 = 123;
        }
        goto LABEL_13;
      }
      if ( v4 == 124 )
      {
        v26 = 2;
        if ( v3 )
          v24 = 3;
        else
          v24 = -3;
        v5 = 125;
        v25 = 602;
        goto LABEL_13;
      }
      return 0;
    }
    v26 = 7;
    if ( v3 )
      v24 = 7;
    else
      v24 = -7;
    v5 = 140;
    v25 = 603;
  }
LABEL_13:
  v32 = -1;
  v6 = (unsigned __int64 *)&v35;
  v33 = 0;
  v34 = 0;
  v31 = (__m128i)-1LL;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v47 != v6 );
  v7 = *(__int64 ***)(a1 + 616);
  if ( v7 )
  {
    v8 = *v7;
    v27 = v8;
    if ( v8 )
    {
      v9 = v8[1];
      goto LABEL_18;
    }
  }
  else
  {
    v27 = nullptr;
  }
  v9 = 0;
LABEL_18:
  v28 = v9;
  v10 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  v30 = 0;
  v29 = 0;
  v11 = sub_270C0((__int64)&v31, v10);
  if ( !(_BYTE)v11 )
    goto LABEL_23;
  if ( a2 )
    BYTE1(v34) = *(_BYTE *)(a2 + 33) & 3 | BYTE1(v34) & 0xFC;
  v23 = *(_QWORD *)(a1 + 616);
  v12 = sub_26E20(a1, &v31, (__int64)&v27, 0.0);
  v35 = 0;
  v37 = 1;
  *(_QWORD *)(a1 + 616) = v23;
  v41 = 2;
  v42 = 3;
  v43 = 4;
  v44 = 5;
  v45 = 6;
  v46 = 7;
  if ( !v12 )
  {
    LODWORD(v33) = 0;
    goto LABEL_23;
  }
  if ( (_WORD)v33 != v5 || *(_BYTE *)(a2 + 41) != 1 || v36 != *(_WORD *)(a2 + 46) )
    goto LABEL_23;
  v17 = *(_BYTE *)(a2 + 81);
  if ( v17 != 4 )
  {
    if ( v17 == 2 && v38 == 2 )
      goto LABEL_43;
LABEL_23:
    v13 = v27;
    if ( v27 )
    {
      v14 = v28;
      v15 = v27[1];
      if ( v15 < v28 )
      {
        v21 = *v27;
        if ( v27[2] < v28 )
        {
          v22 = qvector_reserve(v27, v21, v28, 1);
          v15 = v13[1];
          *v13 = v22;
          v21 = v22;
        }
        memset((void *)(v21 + v15), 0, v14 - v15);
        v13[1] = v14;
      }
      else if ( v28 != v15 )
      {
        v27[1] = v28;
      }
    }
    return 0;
  }
  if ( v38 != 4 || *(_WORD *)(a2 + 86) != v39 )
    goto LABEL_23;
LABEL_43:
  if ( v40 != *(_QWORD *)(a2 + 96) + v24 )
    goto LABEL_23;
  *(_WORD *)(a2 + 24) = v25;
  *(_WORD *)(a2 + 26) += WORD1(v33);
  if ( !v3 )
  {
    v18 = (_DWORD *)(a2 + 80);
    v19 = &v37;
    for ( i = 9; i; --i )
    {
      *v18 = *(_DWORD *)v19;
      v19 += 4;
      ++v18;
    }
  }
  *(_BYTE *)(a2 + 85) = v26;
  return v11;
}

