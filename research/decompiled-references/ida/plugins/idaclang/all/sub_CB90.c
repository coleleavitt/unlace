// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall sub_CB90(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+30h] [rbp-18h]
  unsigned __int64 v25; // [rsp+38h] [rbp-10h]

  v25 = __readfsqword(0x28u);
  v8 = sub_BB20();
  if ( (unsigned int)sub_A470(
                       v8,
                       a2,
                       v9,
                       v10,
                       v11,
                       v12,
                       (__int128)_mm_loadu_si128((const __m128i *)&a7),
                       (__int128)_mm_loadu_si128((const __m128i *)&a8)) )
    return 64;
  v13 = sub_BB20();
  if ( !(unsigned int)sub_B1C0(v13) )
    return getinf(99);
  v15 = sub_BB20();
  v16 = v15;
  sub_A290((__int64)&v23, v15, v17, v18);
  return sub_CAD0((__int64)&v23, v16, v19, v20, v21, v22, (__int128)_mm_load_si128(&v23), v24);
}

