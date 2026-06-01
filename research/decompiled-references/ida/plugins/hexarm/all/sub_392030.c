unsigned __int64 __fastcall sub_392030(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, char **, void **, __int64),
        unsigned __int8 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int ordinal_limit; // r14d
  __int64 idati; // rax
  __int64 *v9; // rbx
  __int64 v11; // r14
  __int64 v13[3]; // [rsp+18h] [rbp-60h] BYREF
  __int16 v14; // [rsp+30h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 && (v4 = *(_QWORD *)(v3 + 8)) != 0 )
  {
    v9 = *(__int64 **)v3;
    v11 = *(_QWORD *)v3 + 8 * v4;
    if ( v11 != *(_QWORD *)v3 )
    {
      do
        sub_391E70(a1, a2, a3, v9++);
      while ( (__int64 *)v11 != v9 );
    }
  }
  else
  {
    v5 = 1;
    ordinal_limit = get_ordinal_limit();
    if ( ordinal_limit > 1 )
    {
      do
      {
        while ( 1 )
        {
          v13[0] = 0;
          idati = get_idati();
          v14 = 257;
          v13[2] = v5;
          if ( !idati )
            idati = get_idati();
          v13[1] = idati;
          create_tinfo();
          if ( (get_tinfo_property() & 0x2F) != 0xD )
            break;
          sub_391E70(a1, a2, a3, v13);
          ++v5;
          clear_tinfo_t();
          if ( ordinal_limit == v5 )
            return v15 - __readfsqword(0x28u);
        }
        ++v5;
        clear_tinfo_t();
      }
      while ( ordinal_limit != v5 );
    }
  }
  return v15 - __readfsqword(0x28u);
}

