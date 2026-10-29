__int64 __fastcall sub_347D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned __int8 *a7)
{
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 flags; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  if ( a5 != 2 )
  {
    v10 = *(unsigned int *)(a1 + 288);
    if ( (unsigned int)v10 <= 9 )
    {
      v11 = 790;
      if ( _bittest64(&v11, v10) )
        return 0;
    }
    if ( a5 != 13 )
      return 0;
  }
  v17 = *a7;
  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  if ( !(unsigned __int8)is_off(flags, v17)
    || !(unsigned __int8)get_refinfo(a4, *(_QWORD *)(a2 + 16), *a7)
    || !(unsigned __int8)calc_reference_data(a3, v18, *(_QWORD *)(a2 + 16) + (char)a7[2], a4, a6) )
  {
    return 0;
  }
  v14 = *(unsigned int *)(a1 + 288);
  if ( (unsigned int)v14 <= 9 && (v15 = 790, _bittest64(&v15, v14)) )
  {
    if ( a5 == 2 )
      return *(_QWORD *)(a1 + 424) == v18[0];
  }
  else if ( a5 != 13 )
  {
    if ( *(_QWORD *)(a1 + 424) == v18[0] )
    {
      result = 3;
      if ( *(_QWORD *)(a1 + 432) != -1 )
        return 4;
      return result;
    }
    return 0;
  }
  if ( *(_QWORD *)(a1 + 432) != v18[0] )
    return 0;
  result = 2;
  if ( *(_QWORD *)(a1 + 424) != -1 )
    return 4;
  return result;
}
