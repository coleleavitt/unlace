__int64 __fastcall sub_3E7CA0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // [rsp+8h] [rbp-40h]
  __int64 v19[7]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(a4 + 24);
  v19[1] = __readfsqword(0x28u);
  v10 = sub_334C50(a1, a2, a3, v8, a5, (char *)a6);
  if ( !v10 )
    return 0;
  if ( v10 != 1 )
  {
    v11 = a3[169];
    if ( *(_BYTE *)a6 == 1 )
    {
      v15 = **(_DWORD **)(a1 + 712);
      if ( *(_DWORD *)(a6 + 8) == v15
        && v11 != -1
        && *(_DWORD *)a4 != 1
        && (*(_DWORD *)a4 != 12 || *(_BYTE *)(a4 + 64) != 1 || v15 != *(_DWORD *)(a4 + 72)) )
      {
        v18 = a3[169];
        sub_118BA0(a2);
        *(_BYTE *)a2 = 6;
        v16 = v18;
        v17 = 8 * *(_DWORD *)(a1 + 84);
        if ( (unsigned __int64)v17 <= 0x3F )
          v16 = ~(-1LL << v17) & v18;
        *(_QWORD *)(a2 + 8) = v16;
        return 1;
      }
    }
    else if ( *(_BYTE *)a6 == 4 && (unsigned __int8)sub_3E7800(v19, **(_DWORD **)(a1 + 712), v11, *(_QWORD *)(a6 + 8)) )
    {
      v13 = v19[0];
      sub_118BA0(a2);
      *(_BYTE *)a2 = 6;
      v14 = 8 * *(_DWORD *)(a1 + 84);
      if ( (unsigned __int64)v14 <= 0x3F )
        v13 &= ~(-1LL << v14);
      *(_QWORD *)(a2 + 8) = v13;
      return 1;
    }
    return 0;
  }
  return 1;
}

