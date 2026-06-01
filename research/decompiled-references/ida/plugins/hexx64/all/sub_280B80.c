__int64 __fastcall sub_280B80(__int64 a1, __int64 a2)
{
  char tinfo_property; // al
  char v3; // al
  __int64 *v5; // rdi
  __int64 v6; // rax
  char *v7; // rbx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) != 0 && ((tinfo_property & 0xFu) <= 9 || (tinfo_property & 0x3F) == 0x2D) )
  {
    v3 = get_tinfo_property();
    if ( (v3 & 0x3E) != 0 )
    {
      if ( (v3 & 0xFu) <= 9 )
        return 0;
      if ( (v3 & 0x3F) == 0x2D )
        return 0;
    }
  }
  if ( (unsigned __int8)sub_32A510(a1) )
    return 0;
  if ( *(_DWORD *)(a2 + 8) != 61 || sub_255A30(*(__int64 **)(a2 + 24)) || (get_tinfo_property() & 0x2F) == 0xD )
    return 1;
  v5 = *(__int64 **)(a2 + 24);
  v9 = 0;
  s1 = nullptr;
  sub_266270(v5, (__int64 *)&s1, (_QWORD *)(a2 + 48), 0, nullptr, 0.0);
  v6 = v9;
  if ( (unsigned __int64)v9 > 1 )
  {
    tag_remove();
    v6 = v9;
  }
  v7 = s1;
  if ( !v6 || (*s1 != 48 || s1[1]) && strcmp(s1, "NULL") && strcmp(v7, "nullptr") )
  {
    if ( v7 )
    {
      *(_QWORD *)&v9 = 0;
      qfree((__int64)v7);
    }
    return 1;
  }
  if ( !v7 )
    return 0;
  *(_QWORD *)&v9 = 0;
  qfree((__int64)v7);
  return 0;
}

