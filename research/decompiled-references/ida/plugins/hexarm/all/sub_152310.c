__int64 __fastcall sub_152310(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  unsigned int v9; // ebx
  _BYTE v14[24]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-38h]

  v7 = *(_DWORD *)(a6 + 4);
  v15 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) > v7 )
  {
    sub_123480((__int64)v14, (unsigned __int8 *)a4);
    sub_1273F0((unsigned __int64)v14, a1, -1, *(_DWORD *)(a6 + 4));
    v9 = sub_12E4C0(a1, a2, a3, a4, a5, (__int64)v14, 0);
    sub_11C7E0((__int64)v14);
  }
  else if ( *(_DWORD *)(a4 + 4) >= v7 )
  {
    return (unsigned int)sub_12E4C0(a1, a2, a3, a4, a5, a6, 0);
  }
  else
  {
    sub_123480((__int64)v14, (unsigned __int8 *)a6);
    sub_1273F0((unsigned __int64)v14, a1, -1, *(_DWORD *)(a4 + 4));
    v9 = sub_12E4C0(a1, a2, a3, (__int64)v14, a5, a6, 0);
    sub_11C7E0((__int64)v14);
  }
  return v9;
}

