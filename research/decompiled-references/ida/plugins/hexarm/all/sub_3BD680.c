__int64 __fastcall sub_3BD680(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // eax
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 16);
  v10 = __readfsqword(0x28u);
  v6 = *a2;
  v7 = sub_38A130(v4, *a2);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    if ( !v8 )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v7, a2);
    if ( v8 != 1 )
      sub_3BAF10(a3);
    if ( v6 == *(_QWORD *)(v7 + 8) )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v7, a2);
  }
  if ( !*(_BYTE *)(a1 + 28) )
  {
    v7 = 0;
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v7, a2);
  }
  return 0;
}

