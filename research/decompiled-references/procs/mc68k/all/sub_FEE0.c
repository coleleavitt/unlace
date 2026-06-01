__int64 __fastcall sub_FEE0(__int64 a1, __int64 *a2, unsigned __int64 *a3, const void *a4, __int16 a5)
{
  __int64 v6[45]; // [rsp+0h] [rbp-1A8h] BYREF
  int v7; // [rsp+170h] [rbp-38h] BYREF
  __int16 v8; // [rsp+174h] [rbp-34h]
  __int16 v9; // [rsp+176h] [rbp-32h]
  __int128 v10; // [rsp+178h] [rbp-30h]
  __int64 v11; // [rsp+188h] [rbp-20h]
  int v12; // [rsp+190h] [rbp-18h]
  unsigned __int64 v13; // [rsp+198h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v7 = 256;
  v11 = 0;
  v9 = a5;
  v8 = 512;
  v10 = 0;
  v12 = 0;
  qmemcpy(v6, a4, sizeof(v6));
  return sub_F9F0(
           a1,
           a2,
           a3,
           (__m128i *)&v7,
           (__int64)&v7,
           (__int64)a2,
           v6[0],
           v6[1],
           v6[2],
           v6[3],
           v6[4],
           *(__int128 *)&v6[5],
           *(__int128 *)&v6[7],
           v6[9],
           v6[10],
           v6[11],
           v6[12],
           v6[13],
           v6[14],
           v6[15]);
}
