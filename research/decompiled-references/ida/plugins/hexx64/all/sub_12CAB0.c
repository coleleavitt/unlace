__int64 __fastcall sub_12CAB0(unsigned __int64 *a1, unsigned __int8 *a2, unsigned __int8 *a3, __int64 a4, __m128i a5)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned __int8 v16[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v6 = a1[12];
  v17 = __readfsqword(0x28u);
  v7 = a4;
  if ( *(_BYTE *)(v6 + 145) )
    v7 = -(int)a4;
  sub_123A40((__int64)v16, a2, (__int64)a3, a4);
  sub_12C760((__int64)v16, a1, -1, v7, a5);
  v8 = sub_339CA0();
  LOBYTE(v9) = sub_1255D0(v16, v8, (__int64)a3, 0, *(double *)a5.m128i_i64);
  v10 = v9;
  if ( !(_BYTE)v9 )
  {
    sub_11CDA0((__int64)v16);
    sub_123A40((__int64)v16, a3, v12, v13);
    sub_12C760((__int64)v16, a1, -1, -v7, a5);
    v14 = sub_339CA0();
    LOBYTE(v15) = sub_1255D0(v16, v14, (__int64)a2, 0, *(double *)a5.m128i_i64);
    v10 = v15;
  }
  sub_11CDA0((__int64)v16);
  return v10;
}

