__int64 __fastcall sub_3E61F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r13
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  char v7[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v1 == 23 && *(_BYTE *)(v1 + 32) == 4 && (unsigned __int8)sub_11C340((char *)(v1 + 48), &v6, 1u) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 144LL)
      && *(_BYTE *)(v1 + 32) == 4
      && (v5 = *(_QWORD *)(v1 + 40), *(_DWORD *)v5 == 10)
      && *(_BYTE *)(v5 + 32) == 4 )
    {
      v3 = *(_QWORD *)(v5 + 40);
    }
    else
    {
      v3 = *(_QWORD *)(v1 + 40);
    }
    if ( (unsigned __int8)sub_11CB20(v3, "_cntlzw") && v6 == 5 || (unsigned __int8)sub_11CB20(v3, "_cntlzd") && v6 == 6 )
    {
      sub_120000((__int64)v7, *(unsigned __int8 **)(*(_QWORD *)(v3 + 72) + 24LL));
      v4 = *(_QWORD *)(v1 + 40);
      sub_118FD0((char *)(v4 + 32), v7);
      sub_11CFD0(
        v4 + 48,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL),
        0,
        *(_DWORD *)(v4 + 36),
        *(_QWORD *)(v4 + 24),
        0);
      sub_119360(v4 + 64);
      *(_DWORD *)(v4 + 68) = 1;
      *(_DWORD *)v4 = 33;
      *(_DWORD *)(v1 + 36) = 1;
      *(_DWORD *)v1 = 9;
      sub_119360(v1 + 48);
      ++*(_DWORD *)(a1 + 48);
      sub_119360((__int64)v7);
    }
  }
  return 0;
}

