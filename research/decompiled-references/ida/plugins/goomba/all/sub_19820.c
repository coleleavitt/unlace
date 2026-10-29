__int64 __fastcall sub_19820(__int64 a1, unsigned __int8 *a2)
{
  _QWORD *v2; // rbx
  int v3; // eax
  unsigned __int8 *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // r13
  __int64 (__fastcall *hexdsp)(__int64, __int64, unsigned __int8 *); // rax
  int v10; // eax
  __int64 v11; // rcx
  int (__fastcall *v12)(__int64, unsigned __int8 *, _QWORD *); // rax
  __int32 v14; // r12d
  void (__fastcall *v15)(__int64, _BYTE *, unsigned __int8 *); // rax
  __int64 v16; // rdi
  _BYTE *v17; // rsi
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // r15
  __int64 v22; // r14
  __int64 (__fastcall *v23)(__int64, _BYTE *, _QWORD *); // rax
  int v24; // eax
  int v25; // eax
  int (__fastcall *v26)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v27)(__int64, _BYTE *); // rax
  __m128i *v28; // r14
  __int64 v29; // rdx
  void (__fastcall *v30)(__int64, __m128i *, _BYTE *); // rax
  int (__fastcall *v31)(__int64, _BYTE *, _QWORD *); // rax
  _QWORD *v32; // [rsp+0h] [rbp-78h]
  bool v33; // [rsp+Fh] [rbp-69h]
  _BYTE v34[16]; // [rsp+10h] [rbp-68h] BYREF
  __m128i v35; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v2 = (_QWORD *)a1;
  v3 = *a2;
  v36 = __readfsqword(0x28u);
  v4 = a2;
  v5 = v3 & 0xFFFFFFF7;
  if ( (v3 & 0xF7) != 1 && (unsigned __int8)(v3 - 5) > 1u )
  {
    if ( under_debugger )
      goto LABEL_30;
    a1 = 30695;
    interr(30695);
  }
  v6 = v2[3];
  v7 = v2 + 2;
  if ( v6 )
  {
    v8 = v2 + 2;
    do
    {
      while ( 1 )
      {
        hexdsp = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 *))get_hexdsp(a1, a2, v5);
        a2 = (unsigned __int8 *)(v6 + 32);
        a1 = 296;
        v10 = hexdsp(296, v6 + 32, v4);
        v5 = *(_QWORD *)(v6 + 16);
        v11 = *(_QWORD *)(v6 + 24);
        if ( v10 < 0 )
          break;
        v8 = (_QWORD *)v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v5 )
          goto LABEL_10;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v11 );
LABEL_10:
    if ( v7 != v8 )
    {
      v12 = (int (__fastcall *)(__int64, unsigned __int8 *, _QWORD *))get_hexdsp(296, a2, v5);
      a2 = v4;
      a1 = 296;
      if ( v12(296, v4, v8 + 4) >= 0 )
        return v8[6];
    }
  }
  v14 = *((_DWORD *)v4 + 1);
  LOBYTE(v5) = ((v14 - 4) & 0xFFFFFFFB) != 0;
  if ( (((unsigned int)(v14 - 1) > 1) & (unsigned __int8)v5) != 0 )
  {
    sub_18DB0();
LABEL_30:
    BUG();
  }
  v15 = (void (__fastcall *)(__int64, _BYTE *, unsigned __int8 *))get_hexdsp(a1, a2, v5);
  v16 = 273;
  v17 = v34;
  v15(273, v34, v4);
  v21 = (_QWORD *)v2[3];
  v35.m128i_i32[2] = v14;
  v35.m128i_i64[0] = 0;
  if ( v21 )
  {
    while ( 1 )
    {
      v22 = (__int64)(v21 + 4);
      v23 = (__int64 (__fastcall *)(__int64, _BYTE *, _QWORD *))get_hexdsp(v16, v34, v18);
      v17 = v34;
      v16 = 296;
      v24 = v23(296, v34, v21 + 4);
      v18 = (_QWORD *)v21[3];
      if ( v24 < 0 )
        v18 = (_QWORD *)v21[2];
      v25 = (v24 >> 31) & 1;
      if ( !v18 )
        break;
      v21 = v18;
    }
    if ( !(_BYTE)v25 )
    {
      v32 = v21;
      goto LABEL_23;
    }
  }
  else
  {
    v21 = v2 + 2;
  }
  v32 = (_QWORD *)v2[4];
  if ( v21 == v32 )
  {
LABEL_25:
    v33 = 1;
    if ( v7 != v32 )
    {
      v31 = (int (__fastcall *)(__int64, _BYTE *, _QWORD *))get_hexdsp(v16, v17, v18);
      v17 = v34;
      v33 = v31(296, v34, v32 + 4) < 0;
    }
    v28 = (__m128i *)operator new(0x40u);
    v30 = (void (__fastcall *)(__int64, __m128i *, _BYTE *))get_hexdsp(64, v17, v29);
    v30(273, v28 + 2, v34);
    v17 = v28;
    v16 = v33;
    v28[3] = _mm_load_si128(&v35);
    std::_Rb_tree_insert_and_rebalance(v33, v28, v32, v2 + 2);
    ++v2[6];
    goto LABEL_24;
  }
  v16 = (__int64)v21;
  v32 = v21;
  v22 = std::_Rb_tree_decrement(v21, v34, v18, v19, v20) + 32;
LABEL_23:
  v26 = (int (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(v16, v34, v18);
  v17 = (_BYTE *)v22;
  v16 = 296;
  if ( v26(296, v22, v34) < 0 )
    goto LABEL_25;
LABEL_24:
  v27 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v16, v17, v18);
  v27(276, v34);
  return 0;
}

