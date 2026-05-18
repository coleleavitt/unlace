__int64 __fastcall sub_11C510(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rbp
  __int64 v4; // rdi
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)a1;
  v5[1] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(*(_QWORD *)(v2 + 32) + 40LL) && !*(_BYTE *)(a1 + 291) )
  {
    v1 = sub_11B4B0(*(_QWORD *)v2, 0, v2, v5, 0, 542);
    if ( v1 )
    {
      sub_DBD10(a1, "unable to open a temporary database file for storing temporary tables");
      *(_DWORD *)(a1 + 24) = v1;
    }
    else
    {
      v4 = v5[0];
      *(_QWORD *)(*(_QWORD *)(v2 + 32) + 40LL) = v5[0];
      if ( (unsigned int)sub_D3060(v4, *(unsigned int *)(v2 + 116), 0, 0) != 7 )
        return v1;
      if ( !*(_BYTE *)(v2 + 103) && !*(_BYTE *)(v2 + 104) )
        sub_DBE60(v2);
    }
    return 1;
  }
  return v1;
}
