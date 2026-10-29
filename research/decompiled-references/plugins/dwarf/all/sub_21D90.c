__int64 __fastcall sub_21D90(__int64 *a1, const char *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-D0h] BYREF
  __m128i v5; // [rsp+8h] [rbp-C8h] BYREF
  _OWORD *v6; // [rsp+18h] [rbp-B8h]
  __int64 (__fastcall **v7[4])(_QWORD, __int64, __m128i *); // [rsp+28h] [rbp-A8h] BYREF
  _QWORD v8[2]; // [rsp+48h] [rbp-88h] BYREF
  __int64 v9; // [rsp+58h] [rbp-78h]
  __int128 v10; // [rsp+60h] [rbp-70h]
  _OWORD v11[2]; // [rsp+78h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+A0h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v2 = (unsigned int)a2;
  memset(v11, 0, 28);
  v6 = v11;
  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C7448, (__m128i)(unsigned __int64)&v4);
  if ( (unsigned int)sub_14A00(&v5) == 1 )
  {
    v8[1] = -1;
    v8[0] = v4;
    v9 = 0;
    v10 = 0;
    if ( (unsigned int)sub_21C90(
                         (__int64)a2,
                         (__int64)v11,
                         (__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64))&sub_227F0,
                         (__int64)v8) == -1 )
    {
      sub_1D740((__int64)"Failed to find a DWARF file for the kernel in %s\n", a2);
      v2 = 0;
    }
    else
    {
      sub_1D930(a1, (__int64)v8, "kernel", 0.0, COERCE_DOUBLE(&v4));
      sub_16EA0();
      v7[1] = (__int64 (__fastcall **)(_QWORD, __int64, __m128i *))a1;
      v7[0] = (__int64 (__fastcall **)(_QWORD, __int64, __m128i *))&off_C7460;
      v7[2] = (__int64 (__fastcall **)(_QWORD, __int64, __m128i *))a2;
      LOBYTE(v2) = (unsigned int)sub_14A00(v7) == 0;
      callui(24, 10);
    }
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9);
    }
  }
  else
  {
    v2 = 0;
    sub_1D740((__int64)"Failed to find the kernel base in the database\n");
  }
  return v2;
}
