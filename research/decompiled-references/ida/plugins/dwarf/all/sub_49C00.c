__int64 __fastcall sub_49C00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  __int64 v7; // rax
  __int64 v10; // [rsp+0h] [rbp-48h]
  __int64 v11; // [rsp+8h] [rbp-40h]

  v7 = (__int64)(0x8E38E38E38E38E39LL * ((a2 - a1) >> 4) + 1) / 2;
  v10 = 144 * v7;
  if ( v7 <= a4 )
    return sub_49B80(a1, a1 + 144 * v7, a2, a3, a5);
  v11 = a1 + 144 * v7;
  sub_49C00(a1, v11, a3);
  sub_49C00(v11, a2, a3);
  return sub_45340(
           a1,
           v11,
           a2,
           0x8E38E38E38E38E39LL * (v10 >> 4),
           0x8E38E38E38E38E39LL * ((a2 - v11) >> 4),
           a3,
           a4,
           (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))a5);
}

