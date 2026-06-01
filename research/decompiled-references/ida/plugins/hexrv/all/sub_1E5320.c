__int64 __fastcall sub_1E5320(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ecx
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // eax
  __m128i v13; // xmm0
  __int64 v14; // rdx
  int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // r12
  int v20; // r8d
  int v21; // r9d
  char v22; // al
  int v23; // r8d
  int v24; // r9d
  char v25; // al
  __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // r13d
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+1Ch] [rbp-10Ch]
  __int64 v32; // [rsp+20h] [rbp-108h]
  __int64 v33; // [rsp+30h] [rbp-F8h]
  unsigned int v34; // [rsp+30h] [rbp-F8h]
  char v35; // [rsp+3Bh] [rbp-EDh]
  unsigned int v36; // [rsp+3Ch] [rbp-ECh]
  int v37; // [rsp+40h] [rbp-E8h] BYREF
  int v38; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v39; // [rsp+48h] [rbp-E0h] BYREF
  __m128i v40; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-C8h] BYREF
  char v42; // [rsp+68h] [rbp-C0h]
  __int64 v43; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+78h] [rbp-B0h]
  __int64 v45; // [rsp+80h] [rbp-A8h]
  __m128i v46; // [rsp+88h] [rbp-A0h] BYREF
  int v47; // [rsp+A0h] [rbp-88h] BYREF
  int v48; // [rsp+A4h] [rbp-84h]
  __int128 v49; // [rsp+A8h] [rbp-80h]
  __int64 v50; // [rsp+B8h] [rbp-70h]
  int v51; // [rsp+C0h] [rbp-68h] BYREF
  int v52; // [rsp+C4h] [rbp-64h]
  __int128 v53; // [rsp+C8h] [rbp-60h]
  __int64 v54; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+E8h] [rbp-40h]

  v3 = *a2;
  v4 = *(_DWORD *)a3;
  v55 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1504);
  if ( v4 > 0x14 )
    goto LABEL_6;
  v8 = 1LL << v4;
  if ( ((1LL << v4) & 0x181310) != 0 )
  {
    v9 = a3 + 64;
  }
  else
  {
    v9 = a3 + 48;
    if ( (v8 & 0x78000) == 0 )
    {
LABEL_6:
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      return a1;
    }
  }
  v10 = *(_QWORD *)(v3 + 1504);
  v40.m128i_i64[0] = 0;
  v40.m128i_i8[8] = 0;
  if ( !(unsigned __int8)sub_1DB310((__int64)&v40, v10, &v37, v9) )
    goto LABEL_6;
  v42 = 0;
  v41 = 0;
  v32 = v40.m128i_i64[0];
  v47 = 0;
  v35 = v40.m128i_i8[8];
  v50 = 0;
  v31 = v37;
  v48 = v37;
  v11 = *(_DWORD *)a3;
  v49 = 0;
  switch ( v11 )
  {
    case 4u:
      v19 = (char *)(a3 + 32);
      if ( (unsigned __int8)sub_11B8C0(v19, &v39, 0) )
      {
        sub_30E060(&v47, v39);
        goto LABEL_17;
      }
      if ( !(unsigned __int8)sub_1DB310((__int64)&v41, v5, &v38, (__int64)v19) )
        goto LABEL_9;
      v22 = sub_1DB560((_DWORD)a2, (unsigned int)&v47, (unsigned int)&v41, 0, v20, v21);
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      if ( v22 )
        goto LABEL_18;
      goto LABEL_10;
    case 8u:
    case 9u:
      if ( (unsigned __int8)sub_1DB310((__int64)&v41, v5, &v38, a3 + 32) )
      {
        v15 = v38;
        v36 = *(_DWORD *)a3;
        v51 = 0;
        v34 = v48;
        v52 = v38;
        v54 = 0;
        v53 = 0;
        sub_30DC90(&v47, &v51);
        sub_30DA80(&v51);
        if ( (unsigned __int8)sub_1DB560((_DWORD)a2, (unsigned int)&v47, (unsigned int)&v41, 0, v23, v24)
          && (unsigned __int8)sub_30EAB0(&v47, v34, v36 == 8) )
        {
          goto LABEL_17;
        }
        v51 = 0;
        v53 = 0;
        v52 = v34;
        v54 = 0;
        sub_30DC90(&v47, &v51);
        sub_30DA80(&v51);
      }
      else
      {
        if ( *(_BYTE *)(a3 + 32) == 4 && (unsigned int)(**(_DWORD **)(a3 + 40) - 32) <= 9 )
        {
          sub_30E6C0(&v47, 0, 1, 1);
          goto LABEL_17;
        }
        v15 = *(_DWORD *)(a3 + 36);
        v38 = v15;
      }
      if ( *(_DWORD *)a3 == 9 )
      {
        v16 = -1;
        if ( v15 != 8 )
          v16 = (1LL << (8 * (unsigned __int8)v15)) - 1;
        sub_30E6C0(&v47, 0, v16, 1);
      }
      else
      {
        sub_30E990(&v47, (unsigned int)(8 * v15 - 1));
      }
      goto LABEL_17;
    case 0xCu:
      if ( !(unsigned __int8)sub_11B8C0((char *)(a3 + 48), &v39, 0) )
        goto LABEL_9;
      if ( *(_BYTE *)(a3 + 32) != 4 )
        goto LABEL_9;
      v17 = *(_QWORD *)(a3 + 40);
      if ( *(_DWORD *)v17 != 20 )
        goto LABEL_9;
      v33 = v39;
      if ( !(unsigned __int8)sub_11B8C0((char *)(v17 + 48), &v43, 0)
        || !sub_11BAE0((char *)(*(_QWORD *)(a3 + 40) + 32LL), v5) )
      {
        v43 = 0;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        goto LABEL_10;
      }
      if ( v48 == 8 )
        v18 = -1;
      else
        v18 = (1LL << (8 * (unsigned __int8)v48)) - 1;
      sub_30E060(&v47, v18 & (v43 + v33));
      v51 = 0;
      v52 = v48;
      v54 = 0;
      v53 = 0;
      sub_30E060(&v51, v33);
      sub_30FB00(&v47, &v51);
      sub_30DA80(&v51);
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      goto LABEL_18;
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
      sub_30E100(&v47, 0, 0);
      sub_1E51C0((__int64)a2, &v40, &v47);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      goto LABEL_11;
    case 0x13u:
    case 0x14u:
      if ( !(unsigned __int8)sub_11B8C0((char *)(a3 + 48), &v39, 0) )
        goto LABEL_9;
      if ( *(_DWORD *)a3 != 20 )
      {
        v14 = v39;
LABEL_16:
        sub_30E810(&v47, 0, v14);
        goto LABEL_17;
      }
      v25 = sub_1DB310((__int64)&v41, v5, &v38, a3 + 32);
      v14 = v39;
      if ( !v25 )
        goto LABEL_50;
      switch ( v39 )
      {
        case 0xFFLL:
          v27 = 1;
          break;
        case 0xFFFFLL:
          v27 = 2;
          break;
        case 0xFFFFFFFFLL:
          v27 = 4;
          break;
        default:
          v38 = 0;
          goto LABEL_50;
      }
      v38 = v27;
      v52 = v27;
      v28 = v48;
      v51 = 0;
      v54 = 0;
      v53 = 0;
      sub_30DC90(&v47, &v51);
      sub_30DA80(&v51);
      if ( (unsigned __int8)sub_1DB560((_DWORD)a2, (unsigned int)&v47, (unsigned int)&v41, 0, v29, v30)
        && (unsigned __int8)sub_30EAB0(&v47, v28, 0) )
      {
        goto LABEL_17;
      }
      v52 = v28;
      v51 = 0;
      v54 = 0;
      v53 = 0;
      sub_30DC90(&v47, &v51);
      sub_30DA80(&v51);
      v14 = v39;
LABEL_50:
      v26 = v14;
      if ( *(_DWORD *)a3 != 20 )
        goto LABEL_16;
      if ( (unsigned __int64)(8 * v31) <= 0x3F )
        v26 = (-1LL << (8 * (unsigned __int8)v31)) | v14;
      sub_30E810(&v47, ~v26, 0);
LABEL_17:
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
LABEL_18:
      sub_1E5030((__int64)a2, &v40, &v47);
      sub_1DAB60(v32, v35, v3, &v43, v31);
LABEL_10:
      sub_5FC80((__int64 *)a1, (__int64)&v43);
      v13 = _mm_loadu_si128(&v46);
      *(_QWORD *)(a1 + 16) = v45;
      *(__m128i *)(a1 + 24) = v13;
      qfree();
LABEL_11:
      sub_30DA80(&v47);
      break;
    default:
LABEL_9:
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      goto LABEL_10;
  }
  return a1;
}

