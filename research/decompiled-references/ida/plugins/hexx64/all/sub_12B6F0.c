__int64 __fastcall sub_12B6F0(__int64 a1, unsigned __int64 *a2, int a3, int a4, int a5, __m128i a6)
{
  char v7; // r15
  char v8; // r14
  __int16 v9; // r13
  unsigned __int64 v10; // r8
  char v11; // al
  int v12; // eax
  unsigned __int64 v14; // [rsp+0h] [rbp-80h]
  __int64 v16; // [rsp+8h] [rbp-78h]
  unsigned __int8 v17; // [rsp+18h] [rbp-68h]
  int v19; // [rsp+24h] [rbp-5Ch]
  __int64 v20; // [rsp+28h] [rbp-58h]
  unsigned __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v22 = 0;
  v21 = 0xFFFFFFFF00000000LL;
  sub_1262E0((__int64)&v21, (unsigned __int8 *)a1, *(double *)a6.m128i_i64);
  v7 = v21;
  v8 = BYTE1(v21);
  v9 = WORD1(v21);
  v19 = HIDWORD(v21);
  v10 = v21;
  v20 = v22;
  if ( a4 == -1 || (v14 = v21, v11 = sub_12AB50((unsigned int **)(a1 + 64), a2, a4, a5, a6), v10 = v14, v11) )
  {
    v12 = *(_DWORD *)(a1 + 36);
    v7 = *(_BYTE *)(a1 + 32);
    v8 = *(_BYTE *)(a1 + 33);
    v9 = *(_WORD *)(a1 + 34);
    *(_QWORD *)(a1 + 32) = v10;
    v19 = v12;
    v16 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v20;
    sub_11CDA0(a1 + 48);
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = a3;
    if ( a4 != -1 )
      sub_15BC70((unsigned int *)a1, a2, 0, 0, nullptr, nullptr, a6, 0);
    v20 = v16;
    v11 = 1;
  }
  v17 = v11;
  LOBYTE(v21) = v7;
  HIDWORD(v21) = v19;
  BYTE1(v21) = v8;
  v22 = v20;
  WORD1(v21) = v9;
  sub_11CDA0((__int64)&v21);
  return v17;
}

