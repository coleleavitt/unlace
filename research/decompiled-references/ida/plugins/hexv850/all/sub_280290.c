__int64 __fastcall sub_280290(__int16 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int tinfo_size; // eax
  __int16 v9; // si
  int v10; // edi
  int v11; // eax
  __int16 v12; // dx
  bool v13; // zf

  if ( (unsigned int)get_tinfo_property() != 1 )
    return 0;
  tinfo_size = get_tinfo_size();
  v9 = *a1;
  if ( *a1 < 8 * tinfo_size )
    return 0;
  if ( !a4 )
  {
    v10 = tinfo_size;
    if ( *(unsigned __int8 *)(a2 + 130) >= tinfo_size )
      v10 = *(unsigned __int8 *)(a2 + 130);
    a4 = v10;
  }
  if ( a4 <= tinfo_size )
    return 0;
  v11 = 8 * (a4 - tinfo_size);
  v12 = v11 + a1[1];
  *a1 = v11 + v9;
  v13 = v12 == v11;
  result = 1;
  if ( v13 )
    ++v12;
  a1[1] = v12;
  return result;
}

