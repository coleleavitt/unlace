__int64 __fastcall sub_3DD40(__int64 a1, __int64 *a2, double a3, double a4, double a5, double a6)
{
  __int64 v6; // rbp
  unsigned __int8 v8; // r14
  __int64 v9; // rdx
  char v10; // r12
  __int64 v11; // rax
  __int64 v12; // r9
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v20; // r10
  __int64 v21; // rsi
  __int64 v22; // r10
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rsi
  char v26; // [rsp+Ah] [rbp-8Eh]
  char v27; // [rsp+Bh] [rbp-8Dh]
  int v28; // [rsp+Ch] [rbp-8Ch]
  __int64 v29; // [rsp+10h] [rbp-88h]
  __int64 v30; // [rsp+18h] [rbp-80h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+18h] [rbp-80h]
  __int64 v33; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+18h] [rbp-80h]
  __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+20h] [rbp-78h]
  int v37; // [rsp+28h] [rbp-70h]
  unsigned int v38; // [rsp+2Ch] [rbp-6Ch]
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  __m128i v40; // [rsp+38h] [rbp-60h] BYREF
  char v41; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v6 = a2[2];
  v42 = __readfsqword(0x28u);
  sub_3D950((__int64)&v39, a2, a3, a4, a5, a6);
  if ( v41 )
    goto LABEL_13;
  v8 = v39;
  v9 = a2[1];
  v10 = 0;
  if ( (v39 & 1) == 0 )
  {
    v26 = v39 & 2;
    if ( (v39 & 2) == 0 )
      goto LABEL_4;
LABEL_18:
    sub_74310(&v39, *a2);
    v17 = v39;
    if ( v41 )
      goto LABEL_14;
    v29 = v39;
    v26 = 1;
    v9 = a2[1] + 4;
    a2[1] = v9;
    v27 = v8 & 4;
    if ( (v8 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
  sub_744C0(&v39, *a2, v9);
  if ( v41 )
    goto LABEL_13;
  v10 = 1;
  v9 = v40.m128i_i64[0] + a2[1];
  v37 = v39;
  a2[1] = v9;
  v26 = v8 & 2;
  if ( (v8 & 2) != 0 )
    goto LABEL_18;
LABEL_4:
  v27 = v8 & 4;
  if ( (v8 & 4) == 0 )
    goto LABEL_5;
LABEL_12:
  sub_744C0(&v39, *a2, v9);
  if ( v41 )
    goto LABEL_13;
  v27 = 1;
  v28 = v39;
  a2[1] += v40.m128i_i64[0];
LABEL_5:
  sub_74310(&v39, *a2);
  if ( v41 )
  {
LABEL_13:
    v17 = v39;
LABEL_14:
    *(_QWORD *)a1 = v17;
    v18 = _mm_loadu_si128(&v40);
    *(_BYTE *)(a1 + 80) = 1;
    *(__m128i *)(a1 + 8) = v18;
    return a1;
  }
  v11 = a2[1];
  v12 = v39;
  v13 = (v8 >> 4) & 3;
  a2[1] = v11 + 4;
  if ( (v8 & 8) == 0 )
  {
    if ( v13 == 2 )
    {
      v34 = v12;
      sub_744C0(&v39, *a2, v11 + 4);
      if ( !v41 )
      {
        v23 = v39;
        v24 = v40.m128i_i64[0] + a2[1];
        v25 = *a2;
        a2[1] = v24;
        v38 = v23;
        v36 = a2[2];
        sub_744C0(&v39, v25, v24);
        v12 = v34;
        if ( !v41 )
        {
          a2[1] += v40.m128i_i64[0];
          v15 = v36 + v38;
          v16 = 2;
          v14 = a2[2] + (unsigned int)v39;
          goto LABEL_11;
        }
      }
      goto LABEL_13;
    }
    if ( v13 != 3 )
    {
      if ( v13 != 1 )
        goto LABEL_10;
      v30 = v12;
      sub_744C0(&v39, *a2, v11 + 4);
      v12 = v30;
      if ( !v41 )
      {
        v20 = (unsigned int)v39;
        v16 = 1;
        a2[1] += v40.m128i_i64[0];
        v15 = a2[2] + v20;
        v14 = -1;
        goto LABEL_11;
      }
      goto LABEL_13;
    }
    goto LABEL_27;
  }
  switch ( v13 )
  {
    case 2:
      v32 = v12;
      sub_74310(&v39, *a2);
      if ( !v41 )
      {
        v21 = *a2;
        v35 = v32;
        v22 = v39;
        a2[1] += 4;
        v33 = v22;
        sub_74310(&v39, v21);
        v15 = v33;
        v12 = v35;
        if ( !v41 )
        {
          a2[1] += 4;
          v14 = v39;
          v16 = 2;
          goto LABEL_11;
        }
      }
      goto LABEL_13;
    case 3:
LABEL_27:
      sub_19A90((__int64)&v39, (__int64)"%a: had reserved continuation type", a3);
      goto LABEL_13;
    case 1:
      v31 = v12;
      sub_74310(&v39, *a2);
      v12 = v31;
      if ( !v41 )
      {
        a2[1] += 4;
        v15 = v39;
        v16 = 1;
        v14 = -1;
        goto LABEL_11;
      }
      goto LABEL_13;
  }
LABEL_10:
  v14 = -1;
  v15 = -1;
  v16 = 0;
LABEL_11:
  *(_QWORD *)a1 = v6;
  *(_BYTE *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v37;
  *(_BYTE *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 24) = v29;
  *(_QWORD *)(a1 + 48) = v12;
  *(_BYTE *)(a1 + 32) = v26;
  *(_DWORD *)(a1 + 56) = v16;
  *(_DWORD *)(a1 + 40) = v28;
  *(_QWORD *)(a1 + 64) = v15;
  *(_BYTE *)(a1 + 44) = v27;
  *(_QWORD *)(a1 + 72) = v14;
  *(_BYTE *)(a1 + 80) = 0;
  return a1;
}
