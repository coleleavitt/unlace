__int64 __fastcall sub_10A630(__int64 a1, char *a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 result; // rax
  __int64 *v11; // r8

  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    xmmword_241500(v5);
  v6 = sub_E32F0((_BYTE *)a1, a2, a3, 1u, 0);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = v6;
  if ( v8 )
    xmmword_241510(v8, a2, v7);
  result = 0;
  if ( !v9 )
  {
    v11 = sub_105970(a2);
    result = 7;
    if ( v11 )
      return sub_F6890(
               a1,
               (__int64)a2,
               a3,
               1,
               (__int64)v11,
               (__int64)sub_10A6F0,
               0,
               0,
               0,
               0,
               (void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))sub_C91C0);
  }
  return result;
}
