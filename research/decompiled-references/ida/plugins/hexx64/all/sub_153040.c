__int64 __fastcall sub_153040(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v6; // [rsp+18h] [rbp-98h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-90h] BYREF
  __m128i si128; // [rsp+30h] [rbp-80h]
  __int64 v9; // [rsp+40h] [rbp-70h]
  __int128 v10; // [rsp+48h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-58h]
  __int64 v12; // [rsp+60h] [rbp-50h]
  int v13; // [rsp+68h] [rbp-48h]
  _BYTE v14[8]; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  qsnprintf();
  v7[0] = 0xFFFFFFFF00000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v7[1] = 0;
  v9 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v10 = 0;
  sub_125180((unsigned __int8 *)v7, (unsigned __int8 *)a2);
  sub_32C430(&v6, *(_QWORD *)(a1 + 1504), *(_DWORD *)(a2 + 4), 1);
  copy_tinfo_t();
  clear_tinfo_t();
  sub_32C430(&v6, *(_QWORD *)(a1 + 1504), *(_DWORD *)(a2 + 4), 2);
  v3 = sub_335B10(a1, a3, (__int64)v14, (__int64)&v6, 1, (__int64)v7, 1);
  *(_DWORD *)(*(_QWORD *)(v3 + 72) + 280LL) |= 0x10u;
  *(_DWORD *)(*(_QWORD *)(v3 + 72) + 284LL) = 31;
  clear_tinfo_t();
  cleanup_argloc();
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v7);
  return v3;
}

