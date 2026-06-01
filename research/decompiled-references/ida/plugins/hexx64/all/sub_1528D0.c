__int64 __fastcall sub_1528D0(
        unsigned __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  int v9; // eax
  unsigned int v11; // ebx
  _BYTE v16[24]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-38h]

  v9 = *(_DWORD *)(a6 + 4);
  v17 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) > v9 )
  {
    sub_123A40((__int64)v16, (unsigned __int8 *)a4, a3, a4);
    sub_1279B0((__int64)v16, a1, -1, *(_DWORD *)(a6 + 4), a7);
    v11 = sub_12EA80((__int64)a1, a2, a3, a4, a5, (__int64)v16, a7, a8, 0);
    sub_11CDA0((__int64)v16);
  }
  else if ( *(_DWORD *)(a4 + 4) >= v9 )
  {
    return (unsigned int)sub_12EA80((__int64)a1, a2, a3, a4, a5, a6, a7, a8, 0);
  }
  else
  {
    sub_123A40((__int64)v16, (unsigned __int8 *)a6, a3, a4);
    sub_1279B0((__int64)v16, a1, -1, *(_DWORD *)(a4 + 4), a7);
    v11 = sub_12EA80((__int64)a1, a2, a3, (__int64)v16, a5, a6, a7, a8, 0);
    sub_11CDA0((__int64)v16);
  }
  return v11;
}

