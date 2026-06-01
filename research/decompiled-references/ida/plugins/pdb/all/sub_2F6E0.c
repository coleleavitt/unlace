__int64 __fastcall sub_2F6E0(__int64 a1, double a2, double a3, double a4)
{
  int v4; // eax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 1148);
  v8 = __readfsqword(0x28u);
  if ( v4 > 0 )
  {
    v6 = 0;
    v7 = 0;
    sub_2F320(a1, 4u, (__int64)&v6, nullptr, 0.0, a3, a4);
    *(_DWORD *)(a1 + 1148) = -1;
  }
  if ( *(_BYTE *)(a1 + 1144) || !dbg )
    return v8 - __readfsqword(0x28u);
  else
    return sub_29F00(dbg, 1);
}

