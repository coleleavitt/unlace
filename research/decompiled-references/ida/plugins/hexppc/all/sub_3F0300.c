unsigned __int64 __fastcall sub_3F0300(__int64 a1, int a2, signed int a3, int a4, double a5)
{
  signed int v6; // ebp
  __int64 v7; // rax
  char v9; // r15
  char v10; // al
  int v11; // eax
  int v12; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // al
  char v18; // al
  int dtype_size; // eax
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm2
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // [rsp+0h] [rbp-F8h]
  unsigned int v32; // [rsp+20h] [rbp-D8h]
  char v33; // [rsp+24h] [rbp-D4h]
  __int64 v34; // [rsp+40h] [rbp-B8h] BYREF
  int v35; // [rsp+48h] [rbp-B0h]
  _QWORD v36[2]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int8 v37[16]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v39[2]; // [rsp+80h] [rbp-78h] BYREF
  int v40; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+94h] [rbp-64h]
  unsigned __int64 v42; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-40h]

  v6 = a3;
  v7 = *(unsigned __int16 *)(a1 + 48);
  v44 = __readfsqword(0x28u);
  if ( (unsigned __int16)v7 > 0xB3u )
  {
    if ( (_WORD)v7 == 345 )
    {
LABEL_4:
      v33 = 0;
      v9 = 2;
      v32 = 23;
      goto LABEL_5;
    }
    if ( (unsigned __int16)v7 <= 0x159u )
    {
      if ( (_WORD)v7 == 344 )
      {
LABEL_36:
        v33 = 0;
        v9 = 2;
        v32 = 22;
        goto LABEL_5;
      }
    }
    else
    {
      if ( (_WORD)v7 == 1191 )
      {
LABEL_40:
        v33 = 0;
        v9 = 7;
        v32 = 22;
        goto LABEL_5;
      }
      if ( (_WORD)v7 == 1192 )
      {
LABEL_19:
        v33 = 0;
        v9 = 7;
        v32 = 23;
        goto LABEL_5;
      }
    }
LABEL_42:
    if ( !under_debugger )
      sub_37EEE0(0xC956u, a5);
    BUG();
  }
  if ( (unsigned __int16)v7 <= 0xABu )
    goto LABEL_42;
  LOWORD(v7) = v7 - 173;
  switch ( v7 )
  {
    case 0LL:
      goto LABEL_36;
    case 1LL:
    case 2LL:
      v33 = 1;
      v9 = 7;
      v32 = 24;
      break;
    case 3LL:
    case 4LL:
      v33 = 1;
      v9 = 2;
      v32 = 24;
      break;
    case 5LL:
      goto LABEL_19;
    case 6LL:
      goto LABEL_4;
    default:
      goto LABEL_40;
  }
LABEL_5:
  v10 = *(_BYTE *)(a1 + 145);
  if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 && !v10 )
  {
    if ( *(_BYTE *)(a1 + 105) != 5 )
    {
      a4 = a3;
      v6 = a2;
      goto LABEL_11;
    }
    v29 = *(_QWORD *)(a1 + 832);
    v30 = *(_QWORD *)(v29 + 4464);
    if ( v30 )
    {
      v6 = a2;
      a4 = *(_DWORD *)(*(_QWORD *)(v29 + 4456) + 4 * v30 - 4);
      *(_QWORD *)(v29 + 4464) = v30 - 1;
      v16 = *(_QWORD *)(a1 + 112);
      sub_3E9DD0(a1, (unsigned __int8 *)(a1 + 104), 0, v16, a4);
      v18 = v33 & (v16 != -1);
      goto LABEL_24;
    }
LABEL_45:
    sub_3E6800(a5);
  }
  if ( v10 != 5 && v10 != 10 )
    goto LABEL_11;
  v14 = *(_QWORD *)(a1 + 832);
  v15 = *(_QWORD *)(v14 + 4464);
  if ( !v15 )
    goto LABEL_45;
  a4 = *(_DWORD *)(*(_QWORD *)(v14 + 4456) + 4 * v15 - 4);
  *(_QWORD *)(v14 + 4464) = v15 - 1;
  if ( *(_BYTE *)(a1 + 145) == 5 )
  {
    v16 = *(_QWORD *)(a1 + 152);
    v17 = v33 & (v16 != -1);
  }
  else
  {
    v16 = *(unsigned __int16 *)(a1 + 150);
    v17 = v33;
  }
  v31 = v17;
  sub_3E9DD0(a1, (unsigned __int8 *)(a1 + 144), 0, v16, a4);
  v18 = v31;
LABEL_24:
  if ( v18 )
  {
    dtype_size = get_dtype_size();
    v20 = *(_QWORD *)(a1 + 832);
    v21 = *(_QWORD *)(a1 + 40);
    v34 = 0x100000001LL;
    v35 = *(_DWORD *)(v20 + 488);
    if ( v16 )
    {
      if ( 8 * dtype_size - 1 == v16 )
      {
        v40 = 1;
        v41 = __PAIR64__(v6, dtype_size);
        v42 = 0xFFFFFFFF00000000LL;
        v43 = 0;
        sub_11CFD0((__int64)&v42, v20, 0, dtype_size, v21, 0);
        sub_1D2850(a1, 40, (unsigned __int8 *)&v40, (unsigned __int8 *)&v42, (unsigned __int8 *)&v34);
        sub_119360((__int64)&v42);
        sub_119360((__int64)&v40);
      }
      else
      {
        v22 = -1;
        if ( (unsigned __int64)(int)v16 <= 0x3F )
          v22 = (1LL << v16) - 1;
        v36[1] = 0;
        v36[0] = 0xFFFFFFFF00000000LL;
        sub_11CFD0((__int64)v36, v20, v22, dtype_size, v21, 0);
        v23 = _mm_cvtsi32_si128(HIDWORD(v36[0]));
        v24 = *(_QWORD *)(a1 + 832);
        v38[0] = 0x100000001LL;
        v39[0] = 0x100000001LL;
        v25 = *(_QWORD *)(v24 + 4464);
        *(_DWORD *)v37 = 1;
        v38[1] = 2;
        v39[1] = 0;
        *(_QWORD *)&v37[4] = _mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(v6)).m128i_u64[0];
        if ( !v25 )
          sub_3E6800(*(double *)v23.m128i_i64);
        v26 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v24 + 4456) + 4 * v25 - 4));
        *(_QWORD *)(v24 + 4464) = v25 - 1;
        v27 = *(_QWORD *)(a1 + 832);
        v28 = *(_QWORD *)(a1 + 40);
        v42 = 0xFFFFFFFF00000000LL;
        v40 = 1;
        v43 = 0;
        v41 = _mm_unpacklo_epi32(v23, v26).m128i_u64[0];
        sub_11CFD0((__int64)&v42, v27, 0, _mm_cvtsi128_si32(v23), v28, 0);
        sub_1D2850(a1, 20, v37, (unsigned __int8 *)v36, (unsigned __int8 *)&v40);
        sub_1D2850(a1, 32, (unsigned __int8 *)&v40, (unsigned __int8 *)&v42, (unsigned __int8 *)v39);
        sub_1D2850(a1, 40, v37, (unsigned __int8 *)&v42, (unsigned __int8 *)v38);
        sub_1D2850(a1, 20, (unsigned __int8 *)v38, (unsigned __int8 *)v39, (unsigned __int8 *)&v34);
        sub_1D2850(a1, 61, nullptr, nullptr, (unsigned __int8 *)v39);
        sub_1D2850(a1, 61, nullptr, nullptr, (unsigned __int8 *)v38);
        sub_119360((__int64)&v42);
        sub_119360((__int64)&v40);
        sub_119360((__int64)v39);
        sub_119360((__int64)v38);
        sub_119360((__int64)v37);
        sub_119360((__int64)v36);
      }
    }
    else
    {
      v43 = 0;
      v42 = 0xFFFFFFFF00000000LL;
      sub_11CFD0((__int64)&v42, v20, 0, 1, v21, 0);
      sub_1D2850(a1, 4, (unsigned __int8 *)&v42, nullptr, (unsigned __int8 *)&v34);
      sub_119360((__int64)&v42);
    }
    sub_119360((__int64)&v34);
  }
LABEL_11:
  v11 = get_dtype_size();
  sub_1D2710(a1, v32, v11, v6, a4, a2, 0);
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  if ( v12 == 8 && v9 != 7 )
  {
    sub_1D2C40(a1, 2, 7, a2, a2, v33 & 1);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  }
  return sub_3EC840(a1, a2, v12);
}

