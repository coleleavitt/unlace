__int64 __fastcall sub_3E9DD0(_QWORD *a1, __m128i *a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 (__fastcall **v9)(int, int, int, int, int, int, char); // [rsp+0h] [rbp-508h] BYREF
  __int64 v10; // [rsp+8h] [rbp-500h]
  __int128 v11; // [rsp+10h] [rbp-4F8h]
  int v12; // [rsp+20h] [rbp-4E8h]
  __m128i v13; // [rsp+30h] [rbp-4D8h] BYREF
  __int128 v14; // [rsp+40h] [rbp-4C8h]
  __int16 v15; // [rsp+464h] [rbp-A4h]
  __int64 v16; // [rsp+468h] [rbp-A0h]
  _QWORD *v17; // [rsp+470h] [rbp-98h]
  char v18; // [rsp+478h] [rbp-90h]
  __int64 v19; // [rsp+480h] [rbp-88h]
  __int64 v20; // [rsp+488h] [rbp-80h]
  __int128 v21; // [rsp+490h] [rbp-78h]
  __int64 v22; // [rsp+4A0h] [rbp-68h]
  __int64 v23; // [rsp+4A8h] [rbp-60h]
  __int64 v24; // [rsp+4B0h] [rbp-58h]
  __int128 v25; // [rsp+4B8h] [rbp-50h]
  __int64 v26; // [rsp+4C8h] [rbp-40h]
  __int128 v27; // [rsp+4D0h] [rbp-38h]
  int v28; // [rsp+4E0h] [rbp-28h]
  __int16 v29; // [rsp+4E4h] [rbp-24h]
  char v30; // [rsp+4E6h] [rbp-22h]
  unsigned __int64 v31; // [rsp+4E8h] [rbp-20h]

  v31 = __readfsqword(0x28u);
  v12 = 0;
  v13.m128i_i64[1] = (__int64)&v9;
  v9 = &off_4DDCF8;
  v6 = a1[187];
  v10 = 0;
  v13.m128i_i64[0] = v6;
  v14 = 0u;
  v16 = 0xFFFFFFFFLL;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v11 = 0;
  v21 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v15 = 0;
  v17 = a1;
  v18 = 0;
  v7 = sub_3E9D80(&v13, a3, a2, (__m128)0LL);
  if ( v18 && v17 )
  {
    sub_84480(v17);
    j__qfree();
  }
  v17 = nullptr;
  v14 = 0;
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  qfree();
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  v9 = &off_4DDCF8;
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v7;
}

