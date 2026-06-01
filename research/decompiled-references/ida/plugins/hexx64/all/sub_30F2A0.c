__int64 __fastcall sub_30F2A0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, double a5, double a6)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 *v8; // [rsp+8h] [rbp-10h]

  if ( a3[1] || *(_BYTE *)(a4 + 64) || a3 != (__int64 *)a4 )
    return 0;
  v7 = a3[5];
  if ( v7 >= a1[2] && v7 < a1[3] )
  {
    v8 = a3;
    result = sub_30E1C0((__int64)(a1 + 1), a2, (__int64)a3, a5);
    if ( (_BYTE)result )
      return result;
    a3 = v8;
    v7 = v8[5];
  }
  if ( v7 < a1[10] || v7 >= a1[11] )
    return 0;
  else
    return sub_30E6F0((__int64)(a1 + 9), a2, a3, a5, a6);
}

