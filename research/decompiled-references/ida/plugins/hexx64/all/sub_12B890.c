__int64 __fastcall sub_12B890(__int64 a1, unsigned __int64 *a2, __int64 a3, unsigned __int8 *a4, int a5, __m128i a6)
{
  int v6; // r13d
  __int64 v9; // rsi
  char v10; // r15
  char v11; // r14
  __int64 v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // rsi
  int v16; // eax
  __int64 v17; // rax
  char v18; // al
  char v19; // dl
  __int16 v20; // si
  int v21; // edi
  __int64 v22; // r8
  int v23; // ecx
  __int16 v24; // [rsp+Eh] [rbp-7Ah]
  int v25; // [rsp+18h] [rbp-70h]
  __int64 v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v6 = a3;
  v30 = __readfsqword(0x28u);
  v29 = 0;
  sub_123A40((__int64)&v28, a4, a3, (__int64)a4);
  v9 = a2[12];
  v10 = v28;
  v11 = BYTE1(v28);
  v12 = v29;
  v24 = WORD1(v28);
  v27 = v28;
  v25 = HIDWORD(v28);
  if ( *(_BYTE *)(v9 + 145) && sub_11BB90((unsigned __int8 *)(a1 + 64), v9, 0, *(double *)a6.m128i_i64) )
  {
    v10 = *(_BYTE *)(a1 + 64);
    v11 = *(_BYTE *)(a1 + 65);
    v24 = *(_WORD *)(a1 + 66);
    v16 = *(_DWORD *)(a1 + 68);
    *(_QWORD *)(a1 + 64) = v27;
    v25 = v16;
    v17 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v12;
    v12 = v17;
  }
  v13 = sub_12B6F0(a1, a2, v6, a5, 1, a6);
  if ( !(_BYTE)v13 )
  {
    v14 = a2[12];
    if ( *(_BYTE *)(v14 + 145) )
    {
      if ( sub_11BB90((unsigned __int8 *)(a1 + 64), v14, 0, *(double *)a6.m128i_i64) )
      {
        v18 = *(_BYTE *)(a1 + 64);
        *(_BYTE *)(a1 + 64) = v10;
        v19 = *(_BYTE *)(a1 + 65);
        v20 = *(_WORD *)(a1 + 66);
        *(_BYTE *)(a1 + 65) = v11;
        v21 = *(_DWORD *)(a1 + 68);
        v22 = *(_QWORD *)(a1 + 72);
        *(_WORD *)(a1 + 66) = v24;
        v10 = v18;
        v23 = v25;
        *(_QWORD *)(a1 + 72) = v12;
        v11 = v19;
        v25 = v21;
        v12 = v22;
        *(_DWORD *)(a1 + 68) = v23;
        v24 = v20;
      }
      else
      {
        v13 = 0;
      }
    }
  }
  LOBYTE(v28) = v10;
  BYTE1(v28) = v11;
  WORD1(v28) = v24;
  v29 = v12;
  HIDWORD(v28) = v25;
  sub_11CDA0((__int64)&v28);
  return v13;
}

