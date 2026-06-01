char __fastcall sub_132410(
        const __m128i *a1,
        _BYTE *a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        char a6,
        __m128i a7,
        __m128 a8)
{
  char result; // al
  __int16 v12; // ax
  __int16 v13; // ax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int16 v17; // dx
  __int16 v18; // dx
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  _QWORD v26[6]; // [rsp+10h] [rbp-C0h] BYREF
  int v27; // [rsp+40h] [rbp-90h] BYREF
  int v28; // [rsp+44h] [rbp-8Ch]
  __int128 v29; // [rsp+48h] [rbp-88h]
  __int64 v30; // [rsp+58h] [rbp-78h]
  unsigned __int64 v31; // [rsp+60h] [rbp-70h] BYREF
  __int64 v32; // [rsp+68h] [rbp-68h]
  unsigned __int64 v33; // [rsp+70h] [rbp-60h] BYREF
  __int64 v34; // [rsp+78h] [rbp-58h]
  unsigned __int64 v35; // [rsp+80h] [rbp-50h] BYREF
  __int64 v36; // [rsp+88h] [rbp-48h]
  unsigned __int64 v37; // [rsp+98h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  sub_1215C0((__int64)a1, a2, (_BYTE *)a3, *(double *)a7.m128i_i64);
  sub_1215C0((__int64)a1, a4, (_BYTE *)a5, *(double *)a7.m128i_i64);
  if ( *(_DWORD *)a3 == 10
    && *(_DWORD *)(a3 + 68) == *(_DWORD *)(a3 + 36) / 2
    && *(_BYTE *)(a3 + 32) == 4
    && sub_131FD0(a1, (__int64)a4, a5, (__int64)a2, *(unsigned int **)(a3 + 40), a7, a8) )
  {
    v24 = *(_QWORD *)(a3 + 40);
    v31 = 0xFFFFFFFF00000000LL;
    v32 = 0;
    v33 = 0xFFFFFFFF00000000LL;
    v34 = 0;
    v35 = 0xFFFFFFFF00000000LL;
    v36 = 0;
    v29 = 0;
    sub_1253A0((__int64)&v27, v24);
    sub_11D890(a3, (__int64)&v27);
    sub_11CDA0((__int64)&v35);
    sub_11CDA0((__int64)&v33);
    sub_11CDA0((__int64)&v31);
    return 1;
  }
  if ( *(_DWORD *)a5 == 11
    && *(_DWORD *)(a5 + 68) == *(_DWORD *)(a5 + 36) / 2
    && *(_BYTE *)(a5 + 32) == 4
    && (unsigned __int8)sub_132040(
                          a1,
                          (__int64)a2,
                          (int *)a3,
                          (__int64)a4,
                          *(unsigned int **)(a5 + 40),
                          *(double *)a7.m128i_i64,
                          a8) )
  {
    sub_1253A0(a3, *(_QWORD *)(a5 + 40));
    return 1;
  }
  result = sub_132370(a1, (__int64)a2, a3, (__int64)a4, a5, a6, a7, a8);
  if ( !result )
    return result;
  if ( (*(_BYTE *)(a3 + 4) & 0x10) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCB19u, *(double *)a7.m128i_i64);
    goto LABEL_22;
  }
  v26[0] = &off_4DD958;
  v26[1] = a1;
  v26[2] = a2;
  v26[3] = a3;
  v26[4] = a4;
  v26[5] = a5;
  if ( !(unsigned __int8)sub_122110((_DWORD *)a3, a6, (__int64)v26) )
  {
    v31 = 0xFFFFFFFF00000000LL;
    v32 = 0;
    v33 = 0xFFFFFFFF00000000LL;
    v34 = 0;
    v35 = 0xFFFFFFFF00000000LL;
    v36 = 0;
    v29 = 0;
    sub_1253A0((__int64)&v27, a5);
    if ( (unsigned __int8)sub_131000(
                            *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112),
                            a1,
                            (__int64)&v27,
                            2 * HIDWORD(v35),
                            (__int64)a4,
                            1u,
                            (__m128i)0LL,
                            a8,
                            1,
                            a6) )
    {
      v12 = *(_WORD *)(a3 + 32);
      *(_WORD *)(a3 + 32) = v31;
      LOWORD(v31) = v12;
      v13 = *(_WORD *)(a3 + 34);
      *(_WORD *)(a3 + 34) = WORD1(v31);
      WORD1(v31) = v13;
      v14 = *(_DWORD *)(a3 + 36);
      *(_DWORD *)(a3 + 36) = HIDWORD(v31);
      HIDWORD(v31) = v14;
      v15 = *(_QWORD *)(a3 + 40);
      *(_QWORD *)(a3 + 40) = v32;
      v32 = v15;
      LOWORD(v15) = *(_WORD *)(a3 + 48);
      *(_WORD *)(a3 + 48) = v33;
      LOWORD(v33) = v15;
      LOWORD(v15) = *(_WORD *)(a3 + 50);
      *(_WORD *)(a3 + 50) = WORD1(v33);
      WORD1(v33) = v15;
      LODWORD(v15) = *(_DWORD *)(a3 + 52);
      *(_DWORD *)(a3 + 52) = HIDWORD(v33);
      HIDWORD(v33) = v15;
      v16 = *(_QWORD *)(a3 + 56);
      *(_QWORD *)(a3 + 56) = v34;
      v34 = v16;
      v17 = v35;
      LOWORD(v35) = *(_WORD *)(a3 + 64);
      LOWORD(v16) = *(_WORD *)(a3 + 66);
      *(_WORD *)(a3 + 64) = v17;
      v18 = WORD1(v35);
      WORD1(v35) = v16;
      LODWORD(v16) = *(_DWORD *)(a3 + 68);
      *(_WORD *)(a3 + 66) = v18;
      v19 = HIDWORD(v35);
      HIDWORD(v35) = v16;
      v20 = *(_QWORD *)(a3 + 72);
      *(_DWORD *)(a3 + 68) = v19;
      v21 = v36;
      v36 = v20;
      LODWORD(v20) = *(_DWORD *)a3;
      *(_QWORD *)(a3 + 72) = v21;
      LODWORD(v21) = v27;
      v27 = v20;
      v22 = *(_QWORD *)(a3 + 24);
      *(_DWORD *)a3 = v21;
      v23 = v30;
      v30 = v22;
      LODWORD(v22) = *(_DWORD *)(a3 + 4);
      *(_QWORD *)(a3 + 24) = v23;
      LODWORD(v23) = v28;
      v28 = v22;
      *(_DWORD *)(a3 + 4) = v23;
      sub_11CDA0((__int64)&v35);
      sub_11CDA0((__int64)&v33);
      sub_11CDA0((__int64)&v31);
      return 1;
    }
    if ( !under_debugger )
      sub_383060(0xCB1Au, 0.0);
LABEL_22:
    BUG();
  }
  return 1;
}

