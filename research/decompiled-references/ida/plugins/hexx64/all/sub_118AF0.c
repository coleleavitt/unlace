__int64 __fastcall sub_118AF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  const __m128i *v7; // rax
  __m128i v10; // xmm1
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rdi
  unsigned __int8 *v18; // rdi
  __int64 v19; // rbp
  _QWORD v20[2]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v21; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-B8h]
  __int64 v23; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v24; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+48h] [rbp-A0h]
  __int64 v26; // [rsp+58h] [rbp-90h]
  __int64 v27; // [rsp+60h] [rbp-88h]
  __int64 v28; // [rsp+68h] [rbp-80h]
  __int128 v29; // [rsp+70h] [rbp-78h]
  __int128 v30; // [rsp+80h] [rbp-68h]
  __int64 v31; // [rsp+90h] [rbp-58h]
  __int64 v32; // [rsp+98h] [rbp-50h]
  int v33; // [rsp+A0h] [rbp-48h]
  __int16 v34; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v5 = a3;
  LOBYTE(a3) = a1 != 0;
  v6 = a3;
  LOBYTE(v6) = a2 != 0 && a1 != 0;
  if ( !(_BYTE)v6 )
    return v6;
  if ( *(_DWORD *)a2 == 62 )
    return 0;
  v7 = *(const __m128i **)(a1 + 480);
  v22 = a2;
  v23 = 0;
  v10 = _mm_loadl_epi64(v7 + 7);
  v24 = 0xFFFFFFFF00000000LL;
  LODWORD(v7) = *(_DWORD *)a4;
  v26 = 0;
  v27 = -1;
  v21 = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)a1);
  v25 = 0;
  v29 = 0;
  v28 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v30 = 0;
  switch ( (int)v7 )
  {
    case 11:
      LODWORD(v32) = 8 * (*(_DWORD *)(a4 + 36) - *(_DWORD *)(a4 + 68));
      if ( !(unsigned __int8)sub_116820(&v21, a2, (int *)a4, 1) )
        goto LABEL_10;
      v12 = sub_1167A0((__int64)&v21, 0);
      goto LABEL_9;
    case 12:
    case 13:
    case 32:
    case 33:
      v12 = sub_1183B0((__int64)&v21, a4);
      goto LABEL_9;
    case 14:
      v12 = sub_1178C0((__int64)&v21, a4);
LABEL_9:
      if ( !v12 )
        goto LABEL_10;
      goto LABEL_25;
    case 23:
    case 24:
      if ( !(unsigned __int8)sub_117570(&v21, v5, (char *)a4) )
        goto LABEL_10;
      if ( *(_BYTE *)(a4 + 32) != 4
        || (v18 = *(unsigned __int8 **)(a2 + 16)) == nullptr
        || !sub_125B90(v18, v10.m128i_i64[0], *(unsigned int **)(a4 + 40), 0)
        || (v19 = *(_QWORD *)(a2 + 16), *(_DWORD *)(v19 + 68) != *(_DWORD *)(a4 + 36)) )
      {
LABEL_25:
        if ( (unsigned __int8)sub_116D80(&v21, (unsigned __int8 *)a4, v13, v14, v15, v16) )
          goto LABEL_21;
LABEL_10:
        v17 = v28;
        v6 = 0;
        goto LABEL_11;
      }
      if ( !(unsigned __int8)sub_116D80(&v21, (unsigned __int8 *)a4, v13, v14, v15, v16) )
        goto LABEL_10;
      if ( v19 )
      {
        v20[1] = 0;
        v20[0] = 0xFFFFFFFF00000000LL;
        sub_1262E0((__int64)v20, (unsigned __int8 *)a4);
        sub_11CA10((char *)(v19 + 32), (char *)v20);
        sub_120A10(v19 + 48, v10.m128i_i64[0], v33, 1, *(_QWORD *)(v19 + 24), 0);
        *(_DWORD *)v19 = 22;
        sub_11CDA0((__int64)v20);
      }
LABEL_21:
      sub_1B5B40((int *)a4);
      sub_A2520(a1, "div found: %s");
      v17 = v28;
LABEL_11:
      if ( v17 )
      {
        *(_QWORD *)&v29 = 0;
        qfree(v17);
      }
LABEL_5:
      sub_11CDA0((__int64)&v24);
      return v6;
    default:
      v6 = 0;
      goto LABEL_5;
  }
}

