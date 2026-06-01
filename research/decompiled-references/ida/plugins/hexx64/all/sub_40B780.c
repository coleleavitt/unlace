__int64 __fastcall sub_40B780(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  unsigned int v6; // r15d
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm1
  __m128i *v19; // r13
  unsigned int **v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _DWORD *v29; // rax
  int v30; // r9d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int8 *v34; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v35; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v36; // [rsp+28h] [rbp-E0h]
  __int64 v37; // [rsp+30h] [rbp-D8h]
  __m128i v38; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 v39[16]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int *v40[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v41[8]; // [rsp+70h] [rbp-98h] BYREF
  __m128i v42; // [rsp+80h] [rbp-88h] BYREF
  __int16 *v43; // [rsp+90h] [rbp-78h]
  char v44; // [rsp+98h] [rbp-70h] BYREF
  char v45[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+C8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 5 )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
    return 0;
  v8 = *(_QWORD *)(a3 + 40);
  if ( *(_DWORD *)v8 != 9 )
    return 0;
  v9 = *(_DWORD *)(a3 + 36);
  if ( ((v9 - 4) & 0xFFFFFFFB) != 0 )
    return 0;
  if ( *(_BYTE *)(v8 + 32) != 4 )
    return 0;
  v10 = *(_QWORD *)(v8 + 40);
  if ( (*(_BYTE *)(v10 + 4) & 0x10) == 0 )
    return 0;
  v11 = *(_DWORD *)v10;
  if ( (unsigned int)(*(_DWORD *)v10 - 31) > 6 )
    return 0;
  v35 = (unsigned __int8 *)(v10 + 48);
  v36 = (unsigned __int8 *)(v10 + 32);
  v34 = (unsigned __int8 *)(a3 + 64);
  if ( sub_125B60((unsigned __int8 *)(v10 + 32), a3 + 64, 0, *(double *)a4.m128i_i64) )
  {
    v37 = 0;
    goto LABEL_12;
  }
  if ( sub_125B60(v35, (__int64)v34, 0, *(double *)a4.m128i_i64) )
  {
    v37 = 0;
    goto LABEL_33;
  }
  sub_123A40((__int64)v40, v34, v27, v28);
  if ( !(unsigned __int8)sub_12AB50(v40, *(unsigned __int64 **)(a1 + 16), 16, 256, a4) )
    goto LABEL_31;
  *(_QWORD *)v39 = a3;
  v29 = (_DWORD *)sub_129440(a2, (__int64)v40, (__int64)v39, 1, *(double *)a4.m128i_i64, a5);
  v37 = (__int64)v29;
  if ( !v29 || *v29 != 4 )
    goto LABEL_31;
  v31 = v29[17];
  if ( v31 == 8 )
  {
    if ( (unsigned __int8)sub_12CF30(*(_QWORD *)(a2 + 64), (__int64)v34, (unsigned __int8 *)(v37 + 64), 0, 0, v30, a4) )
    {
      sub_123A40((__int64)v41, (unsigned __int8 *)(v37 + 32), v32, v33);
      if ( (unsigned __int8)sub_12CD10(v41, *(unsigned __int64 **)(a1 + 16), 0, a4) )
      {
        if ( sub_125B60((unsigned __int8 *)v41, (__int64)v36, 0, *(double *)a4.m128i_i64) )
        {
          sub_11CDA0((__int64)v41);
          goto LABEL_37;
        }
        if ( sub_125B60((unsigned __int8 *)v41, (__int64)v35, 0, *(double *)a4.m128i_i64) )
        {
          sub_11CDA0((__int64)v41);
          goto LABEL_43;
        }
      }
      sub_11CDA0((__int64)v41);
    }
LABEL_31:
    sub_11CDA0((__int64)v40);
    return 0;
  }
  if ( v31 != 16
    || !sub_1255D0((unsigned __int8 *)(v37 + 64), *(_QWORD *)(a1 + 16), (__int64)v34, 1, *(double *)a4.m128i_i64) )
  {
    goto LABEL_31;
  }
  if ( !sub_1255D0((unsigned __int8 *)(v37 + 32), *(_QWORD *)(a1 + 16), (__int64)v36, 1, *(double *)a4.m128i_i64) )
  {
    if ( sub_1255D0((unsigned __int8 *)(v37 + 32), *(_QWORD *)(a1 + 16), (__int64)v35, 1, *(double *)a4.m128i_i64) )
    {
LABEL_43:
      sub_11CDA0((__int64)v40);
LABEL_33:
      if ( (unsigned __int64)(int)(sub_32EA00(v11) - 31) <= 6 )
      {
        v13 = (__int64)v35;
        v35 = v36;
        v36 = (unsigned __int8 *)v13;
        goto LABEL_12;
      }
      return 0;
    }
    goto LABEL_31;
  }
LABEL_37:
  sub_11CDA0((__int64)v40);
LABEL_12:
  v38 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v40);
  sub_123A40((__int64)v39, v36, v12, v13);
  sub_123A40((__int64)v40, v35, v14, v15);
  sub_123A40((__int64)v41, v34, v16, v17);
  v18 = _mm_load_si128(&v38);
  v43 = v41;
  v19 = &v42;
  v42 = v18;
  do
  {
    v20 = (unsigned int **)v19->m128i_i64[0];
    if ( *(_BYTE *)v19->m128i_i64[0] == 4 && !sub_11CC20(*(_QWORD *)(a1 + 16), *v20[1], 16)
      || (v6 = sub_12AB50(v20, *(unsigned __int64 **)(a1 + 16), 16, 256, a4), !(_BYTE)v6) )
    {
      v6 = 0;
      goto LABEL_22;
    }
    v19 = (__m128i *)((char *)v19 + 8);
  }
  while ( &v44 != (char *)v19 );
  qsnprintf();
  sub_11D4A0(a3 + 32);
  v22 = *(_QWORD *)(a1 + 8);
  v23 = v22 + 312;
  v24 = v22 + 320;
  if ( v9 != 4 )
    v23 = v24;
  v25 = j__qalloc_or_throw(312, (__int64)v45, v23, v21);
  *(_QWORD *)v25 = -1;
  *(_QWORD *)(v25 + 8) = 2;
  *(_QWORD *)(v25 + 16) = 0x7000000000LL;
  *(_QWORD *)(v25 + 24) = 0;
  *(_QWORD *)(v25 + 48) = 0;
  *(_QWORD *)(v25 + 72) = 0;
  *(_QWORD *)(v25 + 80) = 0;
  *(_QWORD *)(v25 + 88) = 0;
  *(_QWORD *)(v25 + 96) = 0;
  *(_QWORD *)(v25 + 104) = 0;
  *(_QWORD *)(v25 + 112) = 0;
  *(_QWORD *)(v25 + 136) = 0;
  *(_QWORD *)(v25 + 144) = 0;
  *(_QWORD *)(v25 + 152) = 0;
  *(_QWORD *)(v25 + 176) = 0;
  *(_QWORD *)(v25 + 184) = 0;
  *(_QWORD *)(v25 + 192) = 0;
  *(_QWORD *)(v25 + 216) = 0;
  *(_QWORD *)(v25 + 240) = 0;
  *(_QWORD *)(v25 + 248) = 0;
  *(_QWORD *)(v25 + 256) = 0;
  *(_QWORD *)(v25 + 280) = 21;
  *(_QWORD *)(v25 + 288) = 0;
  *(_OWORD *)(v25 + 32) = 0;
  *(_OWORD *)(v25 + 56) = 0;
  *(_OWORD *)(v25 + 120) = 0;
  *(_OWORD *)(v25 + 160) = 0;
  *(_OWORD *)(v25 + 200) = 0;
  *(_OWORD *)(v25 + 224) = 0;
  *(_OWORD *)(v25 + 264) = 0;
  *(_OWORD *)(v25 + 296) = 0;
  sub_82440((__int64 *)(v25 + 24), 2u);
  sub_125180(*(unsigned __int8 **)(v25 + 24), v39);
  copy_tinfo_t();
  sub_125180((unsigned __int8 *)(*(_QWORD *)(v25 + 24) + 80LL), (unsigned __int8 *)v40);
  copy_tinfo_t();
  copy_tinfo_t();
  *(_DWORD *)(v25 + 284) = (v9 != 4) + 39;
  *(_BYTE *)(a3 + 64) = 8;
  *(_QWORD *)(a3 + 72) = v25;
  *(_DWORD *)(a3 + 68) = 16;
  *(_DWORD *)a3 = 56;
  sub_12B6F0(a3, *(unsigned __int64 **)(a1 + 16), 4, -1, 1, (__m128i)0LL);
  sub_11CA10((char *)v34, (char *)v41);
  if ( v37 )
    sub_11D5A0(v37);
  v26 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v26 + 3800) )
  {
    *(_BYTE *)(v26 + 3800) = 1;
    sub_139B20(*(_QWORD *)(a2 + 64), 0.0);
  }
LABEL_22:
  sub_11CDA0((__int64)v41);
  sub_11CDA0((__int64)v40);
  sub_11CDA0((__int64)v39);
  return v6;
}

