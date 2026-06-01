__int64 __fastcall sub_368630(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v7; // edx
  int v8; // eax
  __int16 v9[12]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 64);
  v10 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v2 + 1504);
  v4 = sub_368530(a2, (unsigned int *)v3);
  if ( (_BYTE)v4 )
    return 1;
  v5 = v4;
  if ( (*(_BYTE *)(v3 + 50) & 2) != 0 && (get_tinfo_property() & 0xF) == 9 )
  {
    v7 = *(_DWORD *)(a2 + 36);
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL);
    if ( v7 < v8 )
    {
      if ( v7 != 4 || v8 != 8 )
      {
        if ( !under_debugger )
          sub_37E160(51946);
        BUG();
      }
      sub_11F840((__int64)v9, (unsigned __int8 *)(a2 + 64));
      sub_128B10(v9, v3, 1);
      sub_9F040(a1, a2, 61, 0, 0, (__int64)v9);
      sub_118BA0((__int64)v9);
      return 1;
    }
  }
  return v5;
}

