unsigned __int64 __fastcall sub_38590(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 (*v6)(); // rcx
  __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  __m128i v9; // [rsp+8h] [rbp-70h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  __m128i v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  unsigned __int64 v16; // [rsp+58h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  sub_1CE50(&v8, a2);
  v4 = _mm_loadu_si128(&v9);
  v13 = a1;
  v11 = v8;
  v10 = &off_64600;
  v14 = a2;
  v15 = a3;
  v12 = v4;
  sub_38280(a3, (__int64)&v10, v5, v6);
  v10 = off_62A78;
  if ( v11 )
  {
    v12.m128i_i64[0] = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

