unsigned __int64 __fastcall sub_1C670(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( a3 || !(unsigned __int8)is_valid_utf8() )
  {
    if ( (unsigned __int8)idb_utf8() )
      qstrncpy();
  }
  return v4 - __readfsqword(0x28u);
}

