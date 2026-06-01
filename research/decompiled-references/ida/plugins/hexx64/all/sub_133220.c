__int64 __fastcall sub_133220(__int128 a1, __int64 a2, _BYTE *a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int16 v13; // ax
  __int16 v14; // ax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbp
  char v18; // al
  char v19; // dl
  char v20; // al
  __int16 v21; // dx
  __int16 v22; // ax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r12d
  __int16 v33; // [rsp+10h] [rbp-58h] BYREF
  __int16 v34; // [rsp+12h] [rbp-56h]
  int v35; // [rsp+14h] [rbp-54h]
  __int64 v36; // [rsp+18h] [rbp-50h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v6 = *((_QWORD *)&a1 + 1);
  v37 = __readfsqword(0x28u);
  sub_1215C0(a1, a3, (_BYTE *)a4, *(double *)a5.m128i_i64);
  sub_1217B0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2, *(double *)a5.m128i_i64);
  if ( *(_BYTE *)a2 == 4 )
  {
    v17 = j__qalloc_or_throw(80, *((__int64 *)&a1 + 1), v10, v11);
    *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 40) = 0;
    *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 56) = 0;
    *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 72) = 0;
    *(_OWORD *)(v17 + 8) = 0;
    sub_1253A0(v17, a4);
    if ( sub_132410((const __m128i *)a1, a3, a4, *((_BYTE **)&a1 + 1), *(_QWORD *)(a2 + 8), 0, (__m128i)0LL, a6) )
    {
      v18 = *(_BYTE *)(v17 + 32);
      *(_BYTE *)(v17 + 32) = *(_BYTE *)(a4 + 32);
      v19 = *(_BYTE *)(a4 + 33);
      *(_BYTE *)(a4 + 32) = v18;
      v20 = *(_BYTE *)(v17 + 33);
      *(_BYTE *)(v17 + 33) = v19;
      v21 = *(_WORD *)(a4 + 34);
      *(_BYTE *)(a4 + 33) = v20;
      v22 = *(_WORD *)(v17 + 34);
      *(_WORD *)(v17 + 34) = v21;
      v23 = *(_DWORD *)(a4 + 36);
      *(_WORD *)(a4 + 34) = v22;
      v24 = *(_DWORD *)(v17 + 36);
      *(_DWORD *)(v17 + 36) = v23;
      v25 = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 36) = v24;
      v26 = *(_QWORD *)(v17 + 40);
      *(_QWORD *)(v17 + 40) = v25;
      LOBYTE(v25) = *(_BYTE *)(a4 + 48);
      *(_QWORD *)(a4 + 40) = v26;
      LOBYTE(v26) = *(_BYTE *)(v17 + 48);
      *(_BYTE *)(v17 + 48) = v25;
      LOBYTE(v25) = *(_BYTE *)(a4 + 49);
      *(_BYTE *)(a4 + 48) = v26;
      LOBYTE(v26) = *(_BYTE *)(v17 + 49);
      *(_BYTE *)(v17 + 49) = v25;
      LOWORD(v25) = *(_WORD *)(a4 + 50);
      *(_BYTE *)(a4 + 49) = v26;
      LOWORD(v26) = *(_WORD *)(v17 + 50);
      *(_WORD *)(v17 + 50) = v25;
      *(_WORD *)(a4 + 50) = v26;
      LODWORD(v26) = *(_DWORD *)(v17 + 52);
      *(_DWORD *)(v17 + 52) = *(_DWORD *)(a4 + 52);
      v27 = *(_QWORD *)(a4 + 56);
      *(_DWORD *)(a4 + 52) = v26;
      v28 = *(_QWORD *)(v17 + 56);
      *(_QWORD *)(v17 + 56) = v27;
      LOBYTE(v27) = *(_BYTE *)(a4 + 64);
      *(_QWORD *)(a4 + 56) = v28;
      LOBYTE(v28) = *(_BYTE *)(v17 + 64);
      *(_BYTE *)(v17 + 64) = v27;
      LOBYTE(v27) = *(_BYTE *)(a4 + 65);
      *(_BYTE *)(a4 + 64) = v28;
      LOBYTE(v28) = *(_BYTE *)(v17 + 65);
      *(_BYTE *)(v17 + 65) = v27;
      LOWORD(v27) = *(_WORD *)(a4 + 66);
      *(_BYTE *)(a4 + 65) = v28;
      LOWORD(v28) = *(_WORD *)(v17 + 66);
      *(_WORD *)(v17 + 66) = v27;
      LODWORD(v27) = *(_DWORD *)(a4 + 68);
      *(_WORD *)(a4 + 66) = v28;
      LODWORD(v28) = *(_DWORD *)(v17 + 68);
      *(_DWORD *)(v17 + 68) = v27;
      v29 = *(_QWORD *)(a4 + 72);
      *(_DWORD *)(a4 + 68) = v28;
      v30 = *(_QWORD *)(v17 + 72);
      *(_QWORD *)(v17 + 72) = v29;
      LODWORD(v29) = *(_DWORD *)a4;
      *(_QWORD *)(a4 + 72) = v30;
      LODWORD(v30) = *(_DWORD *)v17;
      *(_DWORD *)v17 = v29;
      *(_DWORD *)a4 = v30;
      v31 = *(_QWORD *)(v17 + 24);
      *(_QWORD *)(v17 + 24) = *(_QWORD *)(a4 + 24);
      LODWORD(v29) = *(_DWORD *)(a4 + 4);
      *(_QWORD *)(a4 + 24) = v31;
      LODWORD(v31) = *(_DWORD *)(v17 + 4);
      *(_DWORD *)(v17 + 4) = v29;
      *(_DWORD *)(a4 + 4) = v31;
      v32 = *(_DWORD *)(v17 + 68);
      sub_11CDA0(v17 + 64);
      *(_DWORD *)(v17 + 68) = v32;
      sub_11CDA0(a2);
      *(_BYTE *)a2 = 4;
      *(_QWORD *)(a2 + 8) = v17;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v17 + 68);
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)a4 != 4 || *(_BYTE *)(a4 + 32) == 2 && *(_BYTE *)a2 != 2 )
    return 0;
  sub_123A40((__int64)&v33, (unsigned __int8 *)(a4 + 32), v10, v11);
  *((_QWORD *)&a1 + 1) = a3;
  if ( !(unsigned __int8)sub_132E20(a1, (__int64)&v33, v6, a2, 0, a5, a6) )
  {
    sub_11CDA0((__int64)&v33);
    return 0;
  }
  v13 = *(_WORD *)a2;
  *(_WORD *)a2 = v33;
  v33 = v13;
  v14 = *(_WORD *)(a2 + 2);
  *(_WORD *)(a2 + 2) = v34;
  v34 = v14;
  v15 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v35;
  v35 = v15;
  v16 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v36;
  v36 = v16;
  sub_11CDA0((__int64)&v33);
  return 1;
}

