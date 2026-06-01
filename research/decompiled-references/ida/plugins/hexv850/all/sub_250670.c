__int64 __fastcall sub_250670(__int64 *a1)
{
  int tinfo_size; // ebx
  int tinfo_property; // eax
  __int64 v3; // rdi
  bool v4; // zf
  unsigned int v5; // eax

  tinfo_size = get_tinfo_size();
  tinfo_property = get_tinfo_property();
  v3 = *a1;
  v4 = tinfo_property == 1;
  v5 = 16;
  if ( tinfo_size <= 16 )
    v5 = tinfo_size;
  return sub_325150(v3, v5, v4);
}

