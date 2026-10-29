bool __fastcall sub_3279E0(__int64 a1, __int64 a2, __int64 a3)
{
  int **v6; // rdx
  int *v7; // rax
  __int64 v8; // rdi
  char v9; // si
  char v10; // r8
  int v11; // edx
  unsigned int v13; // eax
  bool v14; // zf
  int tinfo_size; // eax
  int v16; // r13d
  unsigned int v17; // r13d
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx

  if ( *(_DWORD *)a3 == 2 )
  {
    v6 = *(int ***)(a3 + 8);
    v7 = *v6;
    v8 = (__int64)&(*v6)[6 * (_QWORD)v6[1]];
    if ( *v6 != (int *)v8 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        while ( 1 )
        {
          v11 = *v7;
          if ( (unsigned int)(*v7 - 3) <= 1 )
            break;
          v7 += 6;
          v9 |= v11 == 1;
          if ( (int *)v8 == v7 )
            goto LABEL_7;
        }
        v7 += 6;
        v10 = 1;
      }
      while ( (int *)v8 != v7 );
LABEL_7:
      if ( v10 && v9 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 148LL) != 2 )
          return 0;
        v13 = *(_DWORD *)(a1 + 72);
        if ( v13 - 208 > 0x2F )
        {
          if ( v13 <= 0x10 )
            v13 = getinf();
          if ( v13 != 176 )
            return 0;
          if ( (unsigned __int64)getinf() <= 0x397 )
          {
            if ( !(unsigned __int8)getinf_flag() )
              return 0;
            netnode_check();
            v17 = netnode_altval();
            if ( v17 <= 0x74 )
              return 0;
            v18 = *(_DWORD *)(get_ph() + 4);
            if ( v18 )
            {
              v19 = (unsigned int)(v18 - 13);
              if ( (unsigned int)v19 > 0x3B )
                return 0;
              v20 = 0x800000000000005LL;
              if ( !_bittest64(&v20, v19) || v17 == 117 )
                return 0;
            }
          }
        }
      }
    }
  }
  v14 = *(_BYTE *)(a1 + 76) == 0;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  if ( v14 && (unsigned int)(*(_DWORD *)a3 - 3) <= 1 )
    return 0;
  tinfo_size = get_tinfo_size();
  v16 = tinfo_size;
  if ( tinfo_size <= 0 || tinfo_size > 0xFFFF && *(_DWORD *)a3 == 2 )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 9 && !sub_118940(v16) || (unsigned int)verify_argloc() )
    return 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 64) = a3;
  return (unsigned int)for_all_arglocs() == 0;
}

