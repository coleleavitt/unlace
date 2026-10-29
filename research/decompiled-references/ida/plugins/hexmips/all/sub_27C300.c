__int64 __fastcall sub_27C300(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char tinfo_property; // al
  char v7; // al
  __int64 *v9; // rdi
  __int64 v10; // rax
  char *v11; // rbx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) != 0 && ((tinfo_property & 0xFu) <= 9 || (tinfo_property & 0x3F) == 0x2D) )
  {
    v7 = get_tinfo_property();
    if ( (v7 & 0x3E) != 0 )
    {
      if ( (v7 & 0xFu) <= 9 )
        return 0;
      if ( (v7 & 0x3F) == 0x2D )
        return 0;
    }
  }
  if ( (unsigned __int8)sub_325700(a1, a4, a3) )
    return 0;
  if ( *(_DWORD *)(a2 + 8) != 61 || sub_2511B0(*(__int64 **)(a2 + 24)) || (get_tinfo_property() & 0x2F) == 0xD )
    return 1;
  v9 = *(__int64 **)(a2 + 24);
  v13 = 0;
  s1 = nullptr;
  sub_2619F0(v9, (__int64 *)&s1, a2 + 48, 0, nullptr);
  v10 = v13;
  if ( (unsigned __int64)v13 > 1 )
  {
    tag_remove();
    v10 = v13;
  }
  v11 = s1;
  if ( !v10 || (*s1 != 48 || s1[1]) && strcmp(s1, "NULL") && strcmp(v11, "nullptr") )
  {
    if ( v11 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    return 1;
  }
  if ( !v11 )
    return 0;
  *(_QWORD *)&v13 = 0;
  qfree();
  return 0;
}

