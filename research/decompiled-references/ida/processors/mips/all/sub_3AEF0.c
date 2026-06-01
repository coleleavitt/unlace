unsigned __int64 __fastcall sub_3AEF0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v2 = *a2;
  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  get_ea_name(&v4, v2, 23, 0);
  if ( (unsigned __int64)v5 > 1 )
  {
    sub_37E50(a1, 0, (__int64)&unk_51484, v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4);
  }
  return v6 - __readfsqword(0x28u);
}

