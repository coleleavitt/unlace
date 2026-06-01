unsigned __int64 __fastcall sub_3D8D0(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  _BYTE *v5; // rbx
  __int64 v7; // rbp
  void (__fastcall *v8)(__int64, _BYTE *); // rax
  void (__fastcall *hexdsp)(__int64, _BYTE *, __int64); // rax
  void (__fastcall *v10)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v11)(__int64, _BYTE *); // rax
  void (__fastcall *v12)(__int64, _BYTE *); // rax
  int (__fastcall *v13)(__int64, _BYTE *, __int64); // rax
  void (__fastcall *v14)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v15)(__int64, _BYTE *, __int64); // rax
  void (__fastcall *v16)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v17)(__int64, _BYTE *); // rax
  void (__fastcall *v18)(__int64, _BYTE *); // rax
  __int64 v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+8h] [rbp-70h]
  _BYTE v22[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v23[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v3 = (__int64)&a2[-a1];
  v4 = a1;
  v5 = a2;
  v24 = __readfsqword(0x28u);
  v21 = (__int64)&a2[-a1];
  if ( (__int64)&a2[-a1] > 16 )
  {
    v20 = v3 >> 4;
    v7 = ((v3 >> 4) - 2) / 2;
    while ( 1 )
    {
      hexdsp = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a1, a2);
      hexdsp(273, v22, v4 + 16 * v7);
      v10 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(273, v22);
      v10(273, v23, v22);
      sub_33E50(v4, v7, v20, (__int64)v23);
      v11 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v4, v7);
      v11(276, v23);
      if ( !v7 )
        break;
      v8 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(276, v23);
      --v7;
      a2 = v22;
      a1 = 276;
      v8(276, v22);
    }
    v12 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(276, v23);
    a2 = v22;
    a1 = 276;
    v12(276, v22);
  }
  while ( (unsigned __int64)v5 < a3 )
  {
    while ( 1 )
    {
      v13 = (int (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a1, a2);
      a2 = v5;
      a1 = 296;
      if ( v13(296, v5, v4) < 0 )
        break;
      v5 += 16;
      if ( (unsigned __int64)v5 >= a3 )
        return v24 - __readfsqword(0x28u);
    }
    v14 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(296, v5);
    v14(273, v22, v5);
    v15 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(273, v22);
    v15(274, v5, v4);
    v16 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(274, v5);
    v16(273, v23, v22);
    sub_33E50(v4, 0, v21 >> 4, (__int64)v23);
    v17 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v4, 0);
    v5 += 16;
    v17(276, v23);
    v18 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(276, v23);
    a2 = v22;
    a1 = 276;
    v18(276, v22);
  }
  return v24 - __readfsqword(0x28u);
}
