__int64 __fastcall sub_9A850(__int64 *a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v6; // rax
  int v7; // [rsp+4h] [rbp-7Ch] BYREF
  __m128i v8; // [rsp+8h] [rbp-78h] BYREF
  _UNKNOWN **v9; // [rsp+18h] [rbp-68h] BYREF
  __m128i si128; // [rsp+20h] [rbp-60h]
  unsigned __int64 v11; // [rsp+30h] [rbp-50h]
  unsigned __int8 v12; // [rsp+38h] [rbp-48h]
  unsigned __int64 v13; // [rsp+40h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v8 = 0;
  LOBYTE(v2) = sub_945B0(a1, &v8, 85);
  v3 = v2;
  if ( (_BYTE)v2 )
  {
    v9 = &off_C95A8;
    v11 = a2;
    v12 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_AB150);
    sub_96BC0(a1, 0x55u, (__int64)&v9);
    v3 = v12;
  }
  else
  {
    v4 = *a1;
    v9 = nullptr;
    v7 = 0;
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _UNKNOWN ***))(a1[32] + 112))(
            *(_QWORD *)(v4 + 24),
            17,
            &v7,
            &v9) )
    {
      if ( v7 )
      {
        v6 = *a1;
        v9 = nullptr;
        v7 = 0;
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _UNKNOWN ***))(a1[32] + 112))(
                *(_QWORD *)(v6 + 24),
                18,
                &v7,
                &v9)
          && v7
          && a2 >= sub_9A0A0((__int64)a1) )
        {
          LOBYTE(v3) = a2 < sub_9A220(a1);
        }
      }
    }
  }
  sub_84A10(&v8);
  return v3;
}

