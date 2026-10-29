unsigned __int64 __fastcall sub_3DBD0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // rbp
  _BYTE *i; // r14
  _BYTE *v7; // rbx
  int (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  __int64 v9; // r13
  __int64 v10; // rsi
  int (__fastcall *v11)(__int64, __int64, __int64); // rax
  __int64 v12; // rsi
  int (__fastcall *v13)(__int64, __int64, __int64); // rax
  _BYTE *v14; // rsi
  __int64 v15; // rdi
  _BYTE *v16; // r13
  int (__fastcall *v17)(__int64, _BYTE *, __int64); // rax
  int (__fastcall *v18)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v19)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v20)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v21)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v22)(__int64, _BYTE *); // rax
  _BYTE *v23; // rsi
  __int64 v24; // rdi
  void (__fastcall *v25)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v26)(__int64, _BYTE *, __int64); // rax
  void (__fastcall *v27)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v28)(__int64, _BYTE *); // rax
  void (__fastcall *v29)(__int64, _BYTE *); // rax
  int (__fastcall *v31)(__int64, __int64, __int64); // rax
  int (__fastcall *v32)(__int64, __int64, __int64); // rax
  void (__fastcall *v33)(__int64, _BYTE *, __int64); // rax
  void (__fastcall *v34)(__int64, __int64, __int64); // rax
  void (__fastcall *v35)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v36)(__int64, _BYTE *); // rax
  __int64 v37; // [rsp+8h] [rbp-70h]
  _BYTE v38[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v39[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v3 = (__int64)&a2[-a1];
  if ( (__int64)&a2[-a1] > 256 )
  {
    v4 = a3;
    v5 = a1;
    for ( i = a2; v4; i = v7 )
    {
      v7 = (_BYTE *)(v5 + 16);
      --v4;
      v37 = (__int64)(i - 16);
      hexdsp = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
      v9 = v5 + 16 * (v3 >> 5);
      v10 = v5 + 16;
      if ( hexdsp(296, v5 + 16, v9) < 0 )
      {
        v31 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, v10);
        if ( v31(296, v9, v37) >= 0 )
        {
          v32 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, v9);
          v9 = (__int64)(i - 16);
          if ( v32(296, v5 + 16, v37) >= 0 )
          {
            v14 = (_BYTE *)(v5 + 16);
            v15 = v5;
            sub_3DB10(v5, v5 + 16);
            goto LABEL_7;
          }
        }
      }
      else
      {
        v11 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, v10);
        v12 = v5 + 16;
        if ( v11(296, v5 + 16, v37) < 0 )
        {
          v33 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(296, v12);
          v33(273, v39, v5);
          v34 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(273, v39);
          v34(274, v5, v5 + 16);
          v35 = (void (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(274, v5);
          v35(274, v5 + 16, v39);
          v36 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(274, v5 + 16);
          v14 = v39;
          v15 = 276;
          v36(276, v39);
          goto LABEL_7;
        }
        v13 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, v12);
        if ( v13(296, v9, v37) < 0 )
        {
          v14 = i - 16;
          v15 = v5;
          sub_3DB10(v5, v37);
          goto LABEL_7;
        }
      }
      v14 = (_BYTE *)v9;
      v15 = v5;
      sub_3DB10(v5, v9);
LABEL_7:
      v16 = i;
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = (int (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(v15, v14);
          v14 = v7;
          v15 = 296;
          if ( v17(296, v7, v5) >= 0 )
            break;
          v7 += 16;
        }
        do
        {
          v18 = (int (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(296, v14);
          v16 -= 16;
          v14 = (_BYTE *)v5;
        }
        while ( v18(296, v5, v16) < 0 );
        if ( v7 >= v16 )
          break;
        v19 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(296, v5);
        v19(273, v39, v7);
        v20 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(273, v39);
        v20(274, v7, v16);
        v21 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(274, v7);
        v21(274, v16, v39);
        v22 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(274, v16);
        v7 += 16;
        v14 = v39;
        v15 = 276;
        v22(276, v39);
      }
      a2 = i;
      a1 = (__int64)v7;
      sub_3DBD0(v7, i, v4);
      v3 = (__int64)&v7[-v5];
      if ( (__int64)&v7[-v5] <= 256 )
        return v40 - __readfsqword(0x28u);
    }
    v23 = i;
    v24 = v5;
    sub_3D8D0(v5, i, (unsigned __int64)i);
    while ( (__int64)&i[-v5] > 16 )
    {
      v25 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(v24, v23);
      i -= 16;
      v25(273, v38, i);
      v26 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(273, v38);
      v26(274, i, v5);
      v27 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(274, i);
      v27(273, v39, v38);
      sub_33E50(v5, 0, (__int64)&i[-v5] >> 4, (__int64)v39);
      v28 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v5, 0);
      v28(276, v39);
      v29 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(276, v39);
      v23 = v38;
      v24 = 276;
      v29(276, v38);
    }
  }
  return v40 - __readfsqword(0x28u);
}

