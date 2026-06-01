__int64 __fastcall sub_12C0C0(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v12; // r9
  __int64 v13; // rax

  v12 = a8;
  if ( a6 && (v13 = sub_120B40((__int64)a2, a3, a5, a6, a7, a8), v12 = a8, (a6 = v13) == 0) )
    return 0;
  else
    return sub_12BFC0(a1, a2, a3, a4, a6, a7, v12, a9);
}

