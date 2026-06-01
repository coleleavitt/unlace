__int64 __fastcall sub_E900(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int tinfo_size; // eax
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // edx

  if ( (get_tinfo_property(*a2, 2) & 0x3F) == 1 )
    return 1;
  tinfo_size = get_tinfo_size(0, *a2, 0);
  v4 = tinfo_size + 6;
  v5 = tinfo_size;
  v6 = tinfo_size + 3;
  if ( v6 >= 0 )
    v4 = v6;
  result = 0;
  v7 = v4 >> 2;
  if ( (unsigned __int64)v7 <= 8 )
  {
    sub_BC80(a1, 0, v7, v5, 0);
    return 1;
  }
  return result;
}
