bool __fastcall sub_A4C00(const __m128i *a1, __int64 a2, const void **a3, __int64 a4)
{
  const void *v4; // r12
  bool result; // al
  __int64 v7; // r15
  void *v8; // rax
  const void *v9; // rsi
  bool v10; // [rsp+Fh] [rbp-89h]
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-88h] BYREF
  __int64 v12; // [rsp+18h] [rbp-80h]
  __int64 v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  __int64 v16; // [rsp+38h] [rbp-60h]
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+48h] [rbp-50h]
  unsigned __int64 v19; // [rsp+58h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[30].m128i_i64[0] + 605) & 0x40) == 0 )
    return 0;
  v4 = a3[1];
  result = 0;
  if ( v4 )
  {
    v7 = a1[4].m128i_i64[0];
    v16 = a2;
    v18 = 0;
    v11 = off_4DBED8;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v17 = 0;
    v8 = (void *)qalloc_or_throw(8LL * (_QWORD)v4, a2, (__int64)a3, a4);
    v9 = *a3;
    v17 = (__int64)v8;
    *((_QWORD *)&v18 + 1) = v4;
    memcpy(v8, v9, 8LL * (_QWORD)v4);
    *(_QWORD *)&v18 = v4;
    v12 = v7;
    sub_11F830(a1, (__int64)&v11);
    v11 = off_4DBED8;
    result = (_QWORD)v18 != 0;
    if ( v17 )
    {
      v10 = (_QWORD)v18 != 0;
      *(_QWORD *)&v18 = 0;
      qfree(v17);
      return v10;
    }
  }
  return result;
}

