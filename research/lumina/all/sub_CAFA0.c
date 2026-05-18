__int64 __fastcall sub_CAFA0(unsigned __int8 *a1, double *a2, int a3, unsigned __int8 a4)
{
  signed int v4; // edx
  int v5; // eax
  int v6; // r9d
  __int64 v7; // rbp
  unsigned __int8 *v8; // r8
  unsigned __int8 i; // al
  unsigned __int8 *v11; // rcx
  int v12; // ebx
  unsigned __int8 *v13; // rdi
  char v14; // al
  int v15; // r13d
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r10d
  bool v19; // r12
  int v20; // r13d
  char v21; // r14
  bool v22; // zf
  bool v23; // sf
  int v24; // edi
  double v25; // xmm0_8
  int v26; // eax
  int v27; // r15d
  int v28; // edx
  long double v29; // fst7
  int v30; // r10d
  long double k; // fst6
  long double v32; // fst6
  long double v33; // fst7
  long double j; // fst6
  long double v35; // fst6
  long double v36; // fst7
  bool v37; // r8

  if ( a4 == 1 )
  {
    v6 = 1;
    v7 = 1;
    v8 = &a1[a3];
  }
  else
  {
    v4 = a3 & 0xFFFFFFFE;
    v5 = 3 - a4;
    if ( v4 > v5 )
    {
      while ( !a1[v5] )
      {
        v5 += 2;
        if ( v4 <= v5 )
          goto LABEL_52;
      }
      v6 = -100;
    }
    else
    {
LABEL_52:
      v6 = 1;
    }
    v7 = 2;
    v8 = &a1[v5 ^ 1];
    a1 += a4 & 1;
  }
  if ( v8 <= a1 )
    return 0;
  for ( i = *a1; (byte_1BEF00[*a1] & 1) != 0; i = *a1 )
  {
    a1 += (int)v7;
    if ( a1 >= v8 )
      return 0;
  }
  if ( i == 45 )
  {
    v12 = -1;
    v13 = &a1[(int)v7];
  }
  else
  {
    v11 = a1;
    v12 = 1;
    v13 = &a1[(int)v7];
    if ( i != 43 )
      v13 = v11;
  }
  if ( v8 <= v13 )
  {
    if ( v12 != -1 )
    {
      v37 = 0;
      v19 = 0;
      v20 = 1;
LABEL_54:
      v25 = 0.0;
      goto LABEL_55;
    }
    *a2 = -0.0;
    return 0;
  }
  v14 = *v13;
  v15 = 0;
  v16 = 0;
  v17 = *v13;
  if ( (byte_1BEF00[*v13] & 4) != 0 )
  {
    while ( 1 )
    {
      v13 += (int)v7;
      ++v15;
      v16 = v14 - 48 + 10 * v16;
      if ( v16 > 0xCCCCCCCCCCCCCCALL )
        break;
      if ( v8 <= v13 )
      {
        v22 = v15 == 0;
        v23 = v15 < 0;
        v20 = 1;
        v19 = !v23 && !v22;
        v22 = v8 == v13;
        v24 = 1;
        v18 = 0;
        v37 = v19 && v22;
        goto LABEL_40;
      }
      v14 = *v13;
      v17 = *v13;
      if ( (byte_1BEF00[*v13] & 4) == 0 )
        goto LABEL_23;
    }
    if ( v8 <= v13 )
    {
      v18 = 0;
    }
    else
    {
      v17 = *v13;
      v14 = *v13;
      v18 = 0;
      if ( (byte_1BEF00[*v13] & 4) == 0 )
        goto LABEL_24;
      while ( 1 )
      {
        v13 += (int)v7;
        ++v18;
        if ( v8 <= v13 )
          break;
        v17 = *v13;
        v14 = *v13;
        if ( (byte_1BEF00[*v13] & 4) == 0 )
          goto LABEL_24;
      }
    }
    goto LABEL_37;
  }
LABEL_23:
  v18 = 0;
LABEL_24:
  if ( v14 == 46 )
  {
    ++v6;
    v13 += (int)v7;
    if ( v8 > v13 )
    {
      v17 = *v13;
      v14 = *v13;
      if ( (byte_1BEF00[*v13] & 4) == 0 )
        goto LABEL_25;
      while ( 1 )
      {
        if ( v16 <= 0xCCCCCCCCCCCCCCALL )
        {
          --v18;
          ++v15;
          v16 = v14 - 48 + 10 * v16;
        }
        v13 += (int)v7;
        if ( v8 <= v13 )
          break;
        v17 = *v13;
        v14 = *v13;
        if ( (byte_1BEF00[*v13] & 4) == 0 )
          goto LABEL_25;
      }
    }
LABEL_37:
    v22 = v15 == 0;
    v23 = v15 < 0;
    v20 = 1;
    v19 = !v23 && !v22;
    v37 = v19 && v8 == v13;
    goto LABEL_38;
  }
LABEL_25:
  v19 = v15 > 0;
  if ( (v14 & 0xDF) != 0x45 )
  {
    v20 = 1;
    v21 = byte_1BEF00[v17];
LABEL_27:
    if ( (v21 & 1) != 0 )
    {
      do
      {
        v13 += v7;
        if ( v8 <= v13 )
        {
          v37 = v19 && v8 == v13;
          goto LABEL_38;
        }
      }
      while ( (byte_1BEF00[*v13] & 1) != 0 );
      v37 = 0;
    }
    else
    {
      v37 = v19 && v13 == v8;
    }
    goto LABEL_38;
  }
  ++v6;
  v13 += (int)v7;
  if ( v8 > v13 )
  {
    v26 = (char)*v13;
    if ( *v13 == 45 )
    {
      v13 += (int)v7;
      v27 = -1;
    }
    else
    {
      v27 = 1;
      if ( (_BYTE)v26 != 43 )
      {
LABEL_65:
        v21 = byte_1BEF00[(unsigned __int8)v26];
        v28 = 0;
        if ( (v21 & 4) != 0 )
        {
          do
          {
            if ( v28 <= 9999 )
              v28 = v26 + 10 * v28 - 48;
            else
              v28 = 10000;
            v13 += (int)v7;
            if ( v8 <= v13 )
            {
              v20 = 1;
              v18 += v27 * v28;
              goto LABEL_113;
            }
            v26 = (char)*v13;
            v21 = byte_1BEF00[*v13];
          }
          while ( (v21 & 4) != 0 );
          v20 = 1;
          v18 += v27 * v28;
        }
        else
        {
          v20 = 0;
        }
        goto LABEL_27;
      }
      v13 += (int)v7;
    }
    if ( v8 <= v13 )
    {
      v20 = 0;
LABEL_113:
      v37 = v19 && v8 == v13;
      goto LABEL_38;
    }
    v26 = (char)*v13;
    goto LABEL_65;
  }
  v20 = 0;
  v37 = v19 && v8 == v13;
LABEL_38:
  v24 = 1;
  if ( v18 < 0 )
  {
    v18 = -v18;
    v24 = -1;
  }
LABEL_40:
  if ( !v16 )
  {
    if ( v12 == -1 )
    {
      v25 = -0.0;
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  if ( v18 > 0 )
  {
    while ( 1 )
    {
      while ( v24 == 1 )
      {
        if ( v16 > 0xCCCCCCCCCCCCCCBLL )
          goto LABEL_82;
        v16 *= 10;
        if ( !--v18 )
        {
LABEL_48:
          if ( v12 == -1 )
            v16 = -v16;
          goto LABEL_50;
        }
      }
      if ( v16 != 10 * (v16 / 10) )
        break;
      --v18;
      v16 /= 10;
      if ( !v18 )
        goto LABEL_48;
    }
LABEL_82:
    if ( v12 == -1 )
      goto LABEL_102;
  }
  else
  {
    if ( v12 == -1 )
LABEL_102:
      v16 = -v16;
    if ( !v18 )
    {
LABEL_50:
      v25 = (double)(int)v16;
      goto LABEL_55;
    }
  }
  if ( v18 <= 307 )
  {
    v33 = 1.0;
    for ( j = 10.0; ; j = j * j )
    {
      if ( (v18 & 1) != 0 )
        v33 = v33 * j;
      v18 >>= 1;
      if ( !v18 )
        break;
    }
    v35 = (long double)v16;
    if ( v24 == -1 )
      v36 = v35 / v33;
    else
      v36 = v33 * v35;
    v25 = v36;
  }
  else if ( v18 > 341 )
  {
    if ( v24 == -1 )
      v25 = (double)(int)v16 * 0.0;
    else
      v25 = (float)((float)(int)v16 * INFINITY);
  }
  else
  {
    v29 = 1.0;
    v30 = v18 - 308;
    for ( k = 10.0; ; k = k * k )
    {
      if ( (v30 & 1) != 0 )
        v29 = v29 * k;
      v30 >>= 1;
      if ( !v30 )
        break;
    }
    v32 = (long double)v16;
    if ( v24 == -1 )
      v25 = (double)(v32 / v29) / 1.0e308;
    else
      v25 = (double)(v29 * v32) * 1.0e308;
  }
LABEL_55:
  *a2 = v25;
  if ( !v37 || v6 <= 0 || !v20 )
  {
    if ( v6 > 1 && (unsigned __int8)v20 | (v6 == 3) && v19 )
      return (unsigned int)-1;
    return 0;
  }
  return (unsigned int)v6;
}
