__int64 __fastcall sub_B1520(
        __int128 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned __int8 *a4,
        __int64 a5,
        double a6,
        __int64 a7,
        int a8)
{
  __int64 result; // rax
  int v11; // r14d
  _QWORD *v12; // r13
  __int64 v13; // [rsp-10h] [rbp-38h]
  __int64 v14; // [rsp-8h] [rbp-30h]

  result = sub_B0800(a1, a2, a3, (__int64)a4, a5, a6, a7, a8);
  if ( !(_BYTE)result )
  {
    v11 = 2 * *(_DWORD *)(a7 + 4);
    v12 = (_QWORD *)j__qalloc_or_throw(32, *((__int64 *)&a1 + 1), v13, v14);
    *v12 = 0xFFFFFFFF00000000LL;
    v12[1] = 0;
    v12[2] = 0xFFFFFFFF00000000LL;
    v12[3] = 0;
    sub_125180((__int64)v12, a4);
    sub_125180((__int64)(v12 + 2), (unsigned __int8 *)a7);
    result = sub_11CDA0(a2);
    *(_BYTE *)a2 = 14;
    *(_QWORD *)(a2 + 8) = v12;
    *(_DWORD *)(a2 + 4) = v11;
  }
  return result;
}

