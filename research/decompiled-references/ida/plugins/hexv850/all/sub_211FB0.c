__int64 __fastcall sub_211FB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  int v5; // [rsp+0h] [rbp-88h] BYREF
  __m128i si128; // [rsp+8h] [rbp-80h]
  __int64 v7; // [rsp+18h] [rbp-70h]
  __int128 v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+30h] [rbp-58h]
  __int64 v10; // [rsp+38h] [rbp-50h]
  __int128 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  unsigned __int64 v14; // [rsp+68h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v5 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v12 = -1;
  v13 = 0;
  v8 = 0;
  v11 = 0;
  copy_argloc();
  v2 = *(_QWORD *)(a2 + 16);
  v13 = 33;
  si128.m128i_i64[1] = v2;
  v3 = sub_210E40((__int64 *)(a1 + 1256), (__int64)&v5, 8);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  cleanup_argloc();
  return v3;
}

