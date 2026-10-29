unsigned __int64 __fastcall sub_38640(__int64 a1, __int64 a2, __int64 (*a3)())
{
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 (*v6)(); // rcx
  _QWORD v8[4]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v9; // [rsp+20h] [rbp-78h] BYREF
  __m128i v10; // [rsp+28h] [rbp-70h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+48h] [rbp-50h]
  __m128i v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]
  unsigned __int64 v16; // [rsp+78h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v8[1] = a2;
  v8[0] = off_646B0;
  v8[2] = a1 + 24;
  sub_31540((__int64)a3, (__int64)v8, a3);
  sub_1CE50(&v9, a2);
  v4 = _mm_loadu_si128(&v10);
  v14 = a2;
  v12 = v9;
  v11 = off_646D0;
  v15 = a1 + 24;
  v13 = v4;
  sub_38280((__int64)a3, (__int64)&v11, v5, v6);
  v11 = off_62A78;
  if ( v12 )
  {
    v13.m128i_i64[0] = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

