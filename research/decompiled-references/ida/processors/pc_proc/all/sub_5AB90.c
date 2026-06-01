unsigned __int64 __fastcall sub_5AB90(__int64 *a1, __int64 a2)
{
  char v3; // r13
  char v4; // al
  unsigned int v5; // ebx
  int i; // r13d
  int tinfo_size; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  char tinfo_property; // r14
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v3 = getinf();
  v4 = *(_BYTE *)(a2 + 88);
  v5 = v4 & 0xF0;
  if ( (v4 & 0xF0) == 0xC0 )
    v5 = *(_DWORD *)(a2 + 28);
  if ( v5 <= 0x10 )
    v5 = getinf();
  if ( (get_tinfo_property() & 0x2F) == 0xD && !get_tinfo_property() )
  {
    if ( (getinf() & 0xF) != 6 && !(unsigned __int8)getinf_flag()
      || (get_tinfo_property(), tinfo_property = get_tinfo_property(), clear_tinfo_t(), (tinfo_property & 0xF) != 9) )
    {
      if ( (getinf() & 0xF) != 6
        || !(unsigned __int8)getinf_flag()
        || (unsigned __int64)get_tinfo_size() > 0x10 && !get_tinfo_property() )
      {
        if ( v5 == 112 )
          v12 = ~((0x104uLL >> (v3 & 0xF)) & 1);
        else
          v12 = -1;
        v13 = a1[1];
        v14 = *a1;
        if ( a1[2] < (unsigned __int64)(v13 + 1) )
        {
          v17 = qvector_reserve();
          *a1 = v17;
          v14 = v17;
          v13 = a1[1];
        }
        *(_DWORD *)(v14 + 4 * v13) = v12;
        ++a1[1];
      }
    }
  }
  if ( (unsigned __int8)getinf_flag() )
  {
    if ( v5 == 80 || (v15 = getinf() & 0xF, v15 == 1) || !v15 && (unsigned int)getinf() == 11 )
    {
      for ( i = 0; (unsigned __int64)i < *(_QWORD *)(a2 + 8); ++i )
      {
        if ( (get_tinfo_property() & 0xF) != 0xB )
        {
          tinfo_size = get_tinfo_size();
          if ( tinfo_size > 8 || (tinfo_size & (tinfo_size - 1)) != 0 )
          {
            v8 = a1[1];
            v9 = *a1;
            if ( a1[2] < (unsigned __int64)(v8 + 1) )
            {
              v16 = qvector_reserve();
              *a1 = v16;
              v9 = v16;
              v8 = a1[1];
            }
            *(_DWORD *)(v9 + 4 * v8) = i;
            ++a1[1];
          }
        }
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}

