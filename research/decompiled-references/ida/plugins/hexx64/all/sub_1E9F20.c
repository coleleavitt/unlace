__int64 __fastcall sub_1E9F20(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ecx
  __int64 v6; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v14; // rdi
  __m128i v15; // xmm0
  unsigned __int64 v16; // rdx
  int v17; // r13d
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // r12
  char v22; // al
  char v23; // al
  __int64 v24; // rsi
  int v25; // eax
  int v26; // r13d
  int v27; // [rsp+1Ch] [rbp-10Ch]
  __int64 v28; // [rsp+20h] [rbp-108h]
  unsigned __int64 v29; // [rsp+30h] [rbp-F8h]
  int v30; // [rsp+30h] [rbp-F8h]
  char v31; // [rsp+3Bh] [rbp-EDh]
  unsigned int v32; // [rsp+3Ch] [rbp-ECh]
  int v33; // [rsp+40h] [rbp-E8h] BYREF
  int v34; // [rsp+44h] [rbp-E4h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-E0h] BYREF
  __m128i v36; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-C8h] BYREF
  char v38; // [rsp+68h] [rbp-C0h]
  __int64 v39; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+78h] [rbp-B0h]
  __int64 v41; // [rsp+80h] [rbp-A8h]
  __m128i v42; // [rsp+88h] [rbp-A0h] BYREF
  int v43; // [rsp+A0h] [rbp-88h] BYREF
  int v44; // [rsp+A4h] [rbp-84h]
  __int128 v45; // [rsp+A8h] [rbp-80h]
  __int64 v46; // [rsp+B8h] [rbp-70h]
  int v47; // [rsp+C0h] [rbp-68h] BYREF
  int v48; // [rsp+C4h] [rbp-64h]
  __int128 v49; // [rsp+C8h] [rbp-60h]
  __int64 v50; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v51; // [rsp+E8h] [rbp-40h]

  v3 = *a2;
  v4 = *(_DWORD *)a3;
  v51 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v3 + 1504);
  if ( v4 > 0x14 )
    goto LABEL_6;
  v9 = 1LL << v4;
  if ( ((1LL << v4) & 0x181310) != 0 )
  {
    v10 = a3 + 64;
  }
  else
  {
    v10 = a3 + 48;
    if ( (v9 & 0x78000) == 0 )
    {
LABEL_6:
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      return a1;
    }
  }
  v11 = *(_QWORD *)(v3 + 1504);
  v36.m128i_i64[0] = 0;
  v36.m128i_i8[8] = 0;
  if ( !(unsigned __int8)sub_1DFF30((__int64)&v36, v11, &v33, v10) )
    goto LABEL_6;
  v38 = 0;
  v37 = 0;
  v28 = v36.m128i_i64[0];
  v43 = 0;
  v31 = v36.m128i_i8[8];
  v46 = 0;
  v27 = v33;
  v44 = v33;
  v12 = *(_DWORD *)a3;
  v45 = 0;
  switch ( v12 )
  {
    case 4u:
      v21 = (char *)(a3 + 32);
      if ( (unsigned __int8)sub_11FD80(v21, (__int64 *)&v35, 0) )
      {
        sub_313160((__int64)&v43, v35);
        goto LABEL_17;
      }
      if ( !(unsigned __int8)sub_1DFF30((__int64)&v37, v6, &v34, (__int64)v21) )
        goto LABEL_9;
      v22 = sub_1E0180((__int64)a2, (__m128i *)&v43, (__int64)&v37, 0);
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      if ( v22 )
        goto LABEL_18;
      goto LABEL_10;
    case 8u:
    case 9u:
      if ( (unsigned __int8)sub_1DFF30((__int64)&v37, v6, &v34, a3 + 32) )
      {
        v17 = v34;
        v32 = *(_DWORD *)a3;
        v47 = 0;
        v30 = v44;
        v48 = v34;
        v50 = 0;
        v49 = 0;
        sub_312D90((__int64)&v43, (__int64)&v47);
        sub_312B80((__int64)&v47);
        if ( (unsigned __int8)sub_1E0180((__int64)a2, (__m128i *)&v43, (__int64)&v37, 0)
          && (unsigned __int8)sub_313BB0((__int64)&v43, v30, v32 == 8) )
        {
          goto LABEL_17;
        }
        v47 = 0;
        v49 = 0;
        v48 = v30;
        v50 = 0;
        sub_312D90((__int64)&v43, (__int64)&v47);
        sub_312B80((__int64)&v47);
      }
      else
      {
        if ( *(_BYTE *)(a3 + 32) == 4 && (unsigned int)(**(_DWORD **)(a3 + 40) - 32) <= 9 )
        {
          sub_3137C0((__int64)&v43, 0, 1u, 1);
          goto LABEL_17;
        }
        v17 = *(_DWORD *)(a3 + 36);
        v34 = v17;
      }
      if ( *(_DWORD *)a3 == 9 )
      {
        v18 = -1;
        if ( v17 != 8 )
          v18 = (1LL << (8 * (unsigned __int8)v17)) - 1;
        sub_3137C0((__int64)&v43, 0, v18, 1);
      }
      else
      {
        sub_313A90((__int64)&v43, 8 * v17 - 1);
      }
      goto LABEL_17;
    case 0xCu:
      if ( !(unsigned __int8)sub_11FD80((char *)(a3 + 48), (__int64 *)&v35, 0) )
        goto LABEL_9;
      if ( *(_BYTE *)(a3 + 32) != 4 )
        goto LABEL_9;
      v19 = *(_QWORD *)(a3 + 40);
      if ( *(_DWORD *)v19 != 20 )
        goto LABEL_9;
      v29 = v35;
      if ( !(unsigned __int8)sub_11FD80((char *)(v19 + 48), &v39, 0)
        || !sub_11FFA0((char *)(*(_QWORD *)(a3 + 40) + 32LL), v6) )
      {
        v39 = 0;
        v40 = 0;
        v41 = 0;
        v42 = 0;
        goto LABEL_10;
      }
      if ( v44 == 8 )
        v20 = -1;
      else
        v20 = (1LL << (8 * (unsigned __int8)v44)) - 1;
      sub_313160((__int64)&v43, v20 & (v39 + v29));
      v47 = 0;
      v48 = v44;
      v50 = 0;
      v49 = 0;
      sub_313160((__int64)&v47, v29);
      sub_314C00(&v43, &v47);
      sub_312B80((__int64)&v47);
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      goto LABEL_18;
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
      sub_313200((__int64)&v43, 0, 0);
      sub_1E9DC0((__int64)a2, &v36, &v43);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      goto LABEL_11;
    case 0x13u:
    case 0x14u:
      if ( !(unsigned __int8)sub_11FD80((char *)(a3 + 48), (__int64 *)&v35, 0) )
        goto LABEL_9;
      if ( *(_DWORD *)a3 != 20 )
      {
        v16 = v35;
LABEL_16:
        sub_313910((__int64)&v43, 0, v16);
        goto LABEL_17;
      }
      v23 = sub_1DFF30((__int64)&v37, v6, &v34, a3 + 32);
      v16 = v35;
      if ( !v23 )
        goto LABEL_50;
      switch ( v35 )
      {
        case 0xFFuLL:
          v25 = 1;
          break;
        case 0xFFFFuLL:
          v25 = 2;
          break;
        case 0xFFFFFFFFuLL:
          v25 = 4;
          break;
        default:
          v34 = 0;
          goto LABEL_50;
      }
      v34 = v25;
      v48 = v25;
      v26 = v44;
      v47 = 0;
      v50 = 0;
      v49 = 0;
      sub_312D90((__int64)&v43, (__int64)&v47);
      sub_312B80((__int64)&v47);
      if ( (unsigned __int8)sub_1E0180((__int64)a2, (__m128i *)&v43, (__int64)&v37, 0)
        && (unsigned __int8)sub_313BB0((__int64)&v43, v26, 0) )
      {
        goto LABEL_17;
      }
      v48 = v26;
      v47 = 0;
      v50 = 0;
      v49 = 0;
      sub_312D90((__int64)&v43, (__int64)&v47);
      sub_312B80((__int64)&v47);
      v16 = v35;
LABEL_50:
      v24 = v16;
      if ( *(_DWORD *)a3 != 20 )
        goto LABEL_16;
      if ( (unsigned __int64)(8 * v27) <= 0x3F )
        v24 = (-1LL << (8 * (unsigned __int8)v27)) | v16;
      sub_313910((__int64)&v43, ~v24, 0);
LABEL_17:
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
LABEL_18:
      sub_1E9C30((__int64)a2, &v36, &v43);
      sub_1DF780(v28, v31, v3, &v39, v27, 0.0);
LABEL_10:
      sub_64000((__int64 *)a1, (__int64)&v39, 0.0);
      v14 = v39;
      v15 = _mm_loadu_si128(&v42);
      *(_QWORD *)(a1 + 16) = v41;
      *(__m128i *)(a1 + 24) = v15;
      qfree(v14);
LABEL_11:
      sub_312B80((__int64)&v43);
      break;
    default:
LABEL_9:
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      goto LABEL_10;
  }
  return a1;
}

