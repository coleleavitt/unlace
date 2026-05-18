_BOOL8 __fastcall sub_D4E30(
        unsigned __int8 *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  _BOOL8 result; // rax
  unsigned __int8 *v13; // rbx
  double v14; // xmm0_8
  int v15; // eax
  int v16; // edx
  int v17; // r13d
  double v18; // xmm0_8
  char v19; // al
  double v20; // xmm1_8
  double v21; // xmm1_8
  int v22; // [rsp+4h] [rbp-44h] BYREF
  int v23; // [rsp+8h] [rbp-40h] BYREF
  int v24; // [rsp+Ch] [rbp-3Ch] BYREF
  int v25; // [rsp+10h] [rbp-38h] BYREF
  int v26; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( (unsigned int)sub_C7640(a1, "20c:20e", a3, a4, a5, a6, a7, a8, a9, a10, &v22, &v23) != 2 )
    return 1;
  v13 = a1 + 5;
  if ( a1[5] == 58 )
  {
    if ( (unsigned int)sub_C7640(a1 + 6, "20e", a3, a4, a5, a6, v10, v11, a9, a10, &v24) != 1 )
      return 1;
    v13 = a1 + 8;
    v18 = (double)v24;
    if ( a1[8] == 46 )
    {
      v19 = a1[9];
      if ( (byte_1BEF00[(unsigned __int8)v19] & 4) != 0 )
      {
        v20 = 0.0;
        v13 = a1 + 9;
        a6 = 1.0;
        v10 = 10.0;
        v11 = 48.0;
        do
        {
          ++v13;
          a5 = v20 * 10.0;
          v21 = (double)v19;
          a6 = a6 * 10.0;
          v19 = *v13;
          v20 = v21 + a5 - 48.0;
        }
        while ( (byte_1BEF00[*v13] & 4) != 0 );
        a4 = v20 / a6;
        v14 = v18 + a4;
      }
      else
      {
        v14 = v18 + 0.0;
      }
    }
    else
    {
      v14 = v18 + 0.0;
    }
  }
  else
  {
    v14 = 0.0;
    v24 = 0;
  }
  v15 = v22;
  *(_BYTE *)(a2 + 43) = 1;
  *(_WORD *)(a2 + 40) = 0;
  *(double *)(a2 + 32) = v14;
  *(_DWORD *)(a2 + 20) = v15;
  for ( *(_DWORD *)(a2 + 24) = v23; (byte_1BEF00[*v13] & 1) != 0; ++v13 )
    ;
  *(_DWORD *)(a2 + 28) = 0;
  v16 = (char)*v13;
  if ( v16 == 45 )
  {
    v17 = -1;
LABEL_16:
    if ( (unsigned int)sub_C7640(v13 + 1, "20b:20e", v14, a4, a5, a6, v10, v11, a9, a10, &v25, &v26) == 2 )
    {
      v13 += 6;
      *(_DWORD *)(a2 + 28) = v17 * (v26 + 60 * v25);
      goto LABEL_11;
    }
    return 1;
  }
  if ( v16 == 43 )
  {
    v17 = 1;
    goto LABEL_16;
  }
  if ( (*v13 & 0xDF) == 0x5A )
  {
    do
    {
      ++v13;
LABEL_11:
      ;
    }
    while ( (byte_1BEF00[*v13] & 1) != 0 );
    *(_BYTE *)(a2 + 45) = 1;
    result = *v13 != 0;
  }
  else
  {
    result = v16 != 0;
  }
  if ( result )
    return 1;
  *(_BYTE *)(a2 + 44) = *(_DWORD *)(a2 + 28) != 0;
  return result;
}
