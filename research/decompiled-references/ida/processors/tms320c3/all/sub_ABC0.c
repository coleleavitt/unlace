__int64 __fastcall sub_ABC0(__int16 *a1, __int64 a2, unsigned __int16 a3)
{
  int v4; // r15d
  int v5; // r14d
  int v6; // r13d
  int v7; // ebx
  int v8; // ebp
  double v9; // xmm1_8
  float v10; // xmm0_4
  __int16 v11; // r15
  __int16 v12; // r13
  unsigned __int16 v13; // r15
  int v14; // ebx
  __int16 v15; // bp
  double v16; // xmm1_8
  float v17; // xmm0_4
  float v18; // [rsp+Ch] [rbp-5Ch]
  float v19; // [rsp+Ch] [rbp-5Ch]

  if ( !a3 )
  {
    v11 = *a1;
    LOWORD(v5) = *a1 >> 12;
    v12 = (*a1 >> 11) & 1;
    if ( v12 )
      v13 = (~v11 & 0x7FF) + 1;
    else
      v13 = v11 & 0x7FF;
    v14 = 0;
    v15 = 2048;
    v19 = 1.0;
    do
    {
      while ( ((unsigned __int16)v15 & v13) == 0 )
      {
        --v14;
        v15 >>= 1;
        if ( v14 == -12 )
          goto LABEL_20;
      }
      v15 >>= 1;
      v16 = (double)v14--;
      v17 = pow(2.0, v16);
      v19 = v17 + v19;
    }
    while ( v14 != -12 );
LABEL_20:
    v5 = (char)v5;
    pow(-1.0, (double)v12);
    goto LABEL_12;
  }
  if ( a3 != 1 )
  {
    sub_A5A0((__int64)"real_cvt_error swt = %d \n", a3);
    return 0xFFFFFFFFLL;
  }
  v4 = *(_DWORD *)a1 & 0x7FFFFF;
  v5 = *(int *)a1 >> 24;
  v6 = (*(int *)a1 >> 23) & 1;
  if ( HIBYTE(*(_DWORD *)a1) != 255 )
  {
    if ( v6 )
      v4 = (~*(_DWORD *)a1 & 0x7FFFFF) + 1;
    v7 = 0;
    v8 = 0x800000;
    v18 = 1.0;
    do
    {
      while ( (v8 & v4) == 0 )
      {
        --v7;
        v8 >>= 1;
        if ( v7 == -24 )
          goto LABEL_11;
      }
      v8 >>= 1;
      v9 = (double)v7--;
      v10 = pow(2.0, v9);
      v18 = v10 + v18;
    }
    while ( v7 != -24 );
LABEL_11:
    pow(-1.0, (double)v6);
LABEL_12:
    pow(2.0, (double)v5);
  }
  return ieee_realcvt();
}

