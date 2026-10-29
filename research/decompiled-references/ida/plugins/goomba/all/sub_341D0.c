unsigned __int64 __fastcall sub_341D0(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r12
  __int64 v3; // r13
  _BYTE *v4; // r14
  int (__fastcall *hexdsp)(__int64, _BYTE *, __int64); // rax
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, _BYTE *, __int64); // rax
  _BYTE *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  _BYTE *v14; // r15
  void (__fastcall *v15)(__int64, _BYTE *, _BYTE *); // rax
  void (__fastcall *v16)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v17)(__int64, _BYTE *); // rax
  _BYTE v19[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( (_BYTE *)a1 != a2 )
  {
    v2 = (_BYTE *)(a1 + 16);
    v3 = a1;
    v4 = a2;
    while ( v4 != v2 )
    {
      while ( 1 )
      {
        hexdsp = (int (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a1, a2);
        a2 = v2;
        v6 = (__int64)v2;
        v2 += 16;
        if ( hexdsp(296, a2, v3) < 0 )
          break;
        a1 = v6;
        sub_340E0(v6, (__int64)a2);
        if ( v4 == v2 )
          return v20 - __readfsqword(0x28u);
      }
      v7 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(296, a2);
      v8 = v19;
      v9 = 273;
      v7(273, v19, v6);
      v10 = v6;
      v11 = v2;
      v12 = v10 - v3;
      v13 = v12 >> 4;
      if ( v12 > 0 )
      {
        do
        {
          v14 = v11 - 32;
          v11 -= 16;
          v15 = (void (__fastcall *)(__int64, _BYTE *, _BYTE *))get_hexdsp(v9, v8);
          v8 = v11;
          v9 = 274;
          v15(274, v11, v14);
          --v13;
        }
        while ( v13 );
      }
      v16 = (void (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(v9, v8);
      v16(274, v3, v19);
      v17 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(274, v3);
      a2 = v19;
      a1 = 276;
      v17(276, v19);
    }
  }
  return v20 - __readfsqword(0x28u);
}

