__int64 __fastcall sub_14E480(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v5; // [rsp-8h] [rbp-B8h]
  int v7; // [rsp+10h] [rbp-A0h]
  int v8; // [rsp+18h] [rbp-98h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-90h] BYREF
  __m128i si128; // [rsp+30h] [rbp-80h]
  __int64 v11; // [rsp+40h] [rbp-70h]
  __int128 v12; // [rsp+48h] [rbp-68h]
  __int64 v13; // [rsp+58h] [rbp-58h]
  __int64 v14; // [rsp+60h] [rbp-50h]
  int v15; // [rsp+68h] [rbp-48h]
  char v16; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  qsnprintf();
  v9[0] = 0xFFFFFFFF00000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400170);
  v9[1] = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v12 = 0;
  sub_1205C0((__int64)v9, (unsigned __int8 *)a2);
  sub_3269C0(&v8, *(_QWORD *)(a1 + 1504), *(unsigned int *)(a2 + 4), 1);
  copy_tinfo_t();
  clear_tinfo_t();
  sub_3269C0(&v8, *(_QWORD *)(a1 + 1504), *(unsigned int *)(a2 + 4), 2);
  v3 = sub_32FDB0(a1, a3, (unsigned int)&v16, (unsigned int)&v8, 1, (unsigned int)v9, 1, v5, a3, a2, v7, v8);
  *(_DWORD *)(*(_QWORD *)(v3 + 72) + 280LL) |= 0x10u;
  *(_DWORD *)(*(_QWORD *)(v3 + 72) + 284LL) = 31;
  clear_tinfo_t();
  cleanup_argloc();
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_1181E0((__int64)v9);
  return v3;
}

