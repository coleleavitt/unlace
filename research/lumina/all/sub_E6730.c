void __fastcall sub_E6730(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 *v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // rax

  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 352) )
    sub_DBD10(a1, "cannot use RETURNING in a trigger");
  *(_BYTE *)(a1 + 213) = 1;
  v3 = sub_DC1C0(v2, 0xC8u);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 192) = v3;
    *v3 = a1;
    v3[1] = (__int64)a2;
    sub_DC930((__int64 *)a1, (__int64 *)(a1 + 184), (void (__fastcall *)(__int64, __int64))sub_D7A50, (__int64)v3);
    if ( !*(_BYTE *)(v2 + 103) )
    {
      *((_BYTE *)v4 + 34) = 1;
      *((_WORD *)v4 + 16) = 662;
      v4[2] = (__int64)"sqlite_returning";
      v4[7] = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 56LL);
      v5 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 56LL);
      *((_BYTE *)v4 + 88) = -106;
      v4[12] = (__int64)(v4 + 2);
      v4[17] = (__int64)a2;
      v4[8] = v5;
      v4[9] = (__int64)(v4 + 11);
      if ( v4 + 2 == (__int64 *)sub_D1F90(
                                  *(_QWORD *)(*(_QWORD *)(v2 + 32) + 56LL) + 56LL,
                                  "sqlite_returning",
                                  (__int64)(v4 + 2))
        && !*(_BYTE *)(v2 + 103)
        && !*(_BYTE *)(v2 + 104) )
      {
        sub_DBE60(v2);
      }
    }
  }
  else if ( a2 )
  {
    sub_D7810(v2, a2);
  }
}
