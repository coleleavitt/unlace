unsigned __int64 __fastcall sub_33E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 i; // r15
  int (__fastcall *v8)(__int64, __int64, __int64); // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rsi
  void (__fastcall *v14)(__int64, __int64, __int64); // rax
  void (__fastcall *v15)(__int64, _BYTE *, __int64); // rax
  __int64 v16; // rdi
  _BYTE *v17; // rsi
  __int64 v18; // r15
  void (__fastcall *v19)(__int64, _BYTE *, __int64); // rax
  int (__fastcall *v20)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v21)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v22)(__int64, _BYTE *); // rax
  __int64 v24; // r14
  void (__fastcall *v25)(__int64, __int64, __int64); // rax
  void (__fastcall *hexdsp)(__int64, _BYTE *, __int64); // rax
  _BYTE *v27; // rbx
  __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  _BYTE v32[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v5 = a3 & 1;
  v6 = a1;
  v33 = __readfsqword(0x28u);
  v29 = v5;
  v28 = (a3 - 1) / 2;
  if ( a2 >= v28 )
  {
    if ( (a3 & 1) != 0 )
    {
      hexdsp = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a1, v5);
      v17 = v32;
      v16 = 273;
      v27 = (_BYTE *)(v6 + 16 * a2);
      hexdsp(273, v32, a4);
      goto LABEL_13;
    }
    v9 = a2;
    goto LABEL_16;
  }
  for ( i = a2; ; i = v9 )
  {
    v8 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, v5);
    v9 = 2 * (i + 1);
    v10 = 32 * (i + 1);
    v11 = v6 + v10 - 16;
    v12 = v6 + v10;
    v13 = v12;
    if ( v8(296, v12, v11) < 0 )
    {
      --v9;
      v12 = v6 + 16 * v9;
    }
    v14 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, v13);
    v5 = v6 + 16 * i;
    a1 = 274;
    v14(274, v5, v12);
    if ( v9 >= v28 )
      break;
  }
  if ( !v29 )
  {
LABEL_16:
    if ( (a3 - 2) / 2 == v9 )
    {
      v24 = v6 + 32 * (v9 + 1) - 16;
      v25 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, v5);
      v5 = v6 + 16 * v9;
      a1 = 274;
      v9 = 2 * (v9 + 1) - 1;
      v25(274, v5, v24);
    }
  }
  v15 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a1, v5);
  v16 = 273;
  v17 = v32;
  v15(273, v32, a4);
  v18 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v20 = (int (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(v16, v17);
      v17 = (_BYTE *)(v6 + 16 * v18);
      v16 = 296;
      v27 = (_BYTE *)(v6 + 16 * v9);
      if ( v20(296, v17, v32) >= 0 )
        break;
      v19 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(296, v17);
      v17 = v27;
      v16 = 274;
      v19(274, v27, v6 + 16 * v18);
      v9 = v18;
      if ( a2 >= v18 )
      {
        v27 = (_BYTE *)(v6 + 16 * v18);
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
  else
  {
    v27 = (_BYTE *)(v6 + 16 * v9);
  }
LABEL_13:
  v21 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(v16, v17);
  v21(274, v27, v32);
  v22 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(274, v27);
  v22(276, v32);
  return v33 - __readfsqword(0x28u);
}

