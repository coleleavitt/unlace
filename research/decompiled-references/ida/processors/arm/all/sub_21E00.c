__int64 __fastcall sub_21E00(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+0h] [rbp-38h]
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]
  __int64 v15; // [rsp+18h] [rbp-20h]

  v7 = (-(__int64)(a4 == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8;
  v8 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD *, unsigned __int64, __int64, __int64))callui)(
         1110,
         v7 + a3,
         a1,
         v7,
         a5,
         a6);
  if ( v8 != v7 || callui(1110, a3, a2, v8, v9, v10, v12, v13, v14, v15) != v8 )
    return 0;
  if ( *a1 > 0xFFFFFFFFFuLL )
    *a1 &= 0xFFFFFFFFFuLL;
  return 1;
}
