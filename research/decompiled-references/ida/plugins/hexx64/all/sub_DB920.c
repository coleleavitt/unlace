__int64 __fastcall sub_DB920(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rdx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0
    || *(_DWORD *)a2 != 4
    || *(_BYTE *)(a2 + 32) != 1
    || *(_DWORD *)(a1 + 132) != *(_DWORD *)(a2 + 40) )
  {
    return 0;
  }
  if ( *(_BYTE *)(a2 + 64) != 1 )
    goto LABEL_15;
  v3 = *(_DWORD **)(a1 + 56);
  v4 = &v3[*(_QWORD *)(a1 + 64)];
  if ( v3 != v4 )
  {
    while ( *(_DWORD *)(a2 + 72) != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_16;
    }
    if ( v4 != v3 )
    {
LABEL_15:
      if ( !(unsigned __int8)sub_32F330(a2 + 64, v8) )
        return 0;
      v5 = v8[0];
      v6 = sub_D7360(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
      v7 = sub_D7430(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL));
      if ( v7 > 0 && v5 >= v6 && v6 + v7 - 1 >= v5 )
        return 0;
    }
  }
LABEL_16:
  *(_BYTE *)(a1 + 141) = 1;
  return 1;
}

