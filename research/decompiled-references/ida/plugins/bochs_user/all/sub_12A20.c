__int64 __fastcall sub_12A20(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rbp
  _DWORD v8[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 1072);
  v9 = __readfsqword(0x28u);
  v5 = a2;
  if ( v4 && *(_DWORD *)(*(_QWORD *)(v4 + 1200) + 8204LL) == 1 && a3 )
  {
    if ( *(_DWORD *)(a1 + 780) == a4 || *(_DWORD *)(a1 + 788) == a4 )
    {
      a4 = *(_DWORD *)(a1 + 944);
    }
    else if ( *(_DWORD *)(a1 + 784) == a4 )
    {
      a4 = *(_DWORD *)(a1 + 932);
    }
    else if ( *(_DWORD *)(a1 + 944) != a4
           && *(_DWORD *)(a1 + 932) != a4
           && *(_DWORD *)(a1 + 936) != a4
           && *(_DWORD *)(a1 + 940) != a4
           && *(_DWORD *)(a1 + 924) != a4
           && *(_DWORD *)(a1 + 928) != a4 )
    {
      return v5;
    }
    if ( a4 != -1 )
    {
      v7 = a3 + 32LL * a4;
      if ( *(_BYTE *)(v4 + 1187)
        || *(_BYTE *)(v4 + 1186)
        || (unsigned int)sub_25BD0(v4 + 1208, *(unsigned __int16 *)(v7 + 8), v8)
        || !v8[0] )
      {
        return 16LL * *(_QWORD *)(v7 + 8) + a2;
      }
      else
      {
        return v8[1] + a2;
      }
    }
  }
  return v5;
}

