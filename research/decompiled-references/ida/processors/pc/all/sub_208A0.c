__int64 __fastcall sub_208A0(unsigned __int16 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // edx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx

  if ( a1 > 0x5FAu )
  {
    if ( a1 > 0x760u )
      return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    if ( a1 <= 0x721u )
    {
      if ( a1 > 0x704u )
      {
        v10 = 1LL << ((unsigned __int8)a1 - 5);
        v2 = 4;
        if ( (v10 & 0x84920F0) == 0 )
        {
          v2 = 8;
          if ( (v10 & 0x10924003) == 0 )
            return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
        }
        return v2;
      }
      if ( a1 == 1759 )
        return 4;
      v2 = 8;
      if ( a1 == 1760 )
        return v2;
      goto LABEL_45;
    }
    v5 = 1LL << ((unsigned __int8)a1 - 34);
    v2 = 2;
    if ( (v5 & 0x7FFFF7FDCE7E7F98LL) != 0 )
      return v2;
    if ( (v5 & 0x80230808027LL) != 0 )
      return 4;
    if ( (v5 & 0x1010040) == 0 )
      return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    return 8;
  }
  if ( a1 > 0x5C0u )
  {
    v9 = 1LL << ((unsigned __int8)a1 + 63);
    if ( (v9 & 0x8A022222351541LL) == 0 )
    {
      if ( (v9 & 0x224088888488AA0LL) == 0 )
        return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
      return 4;
    }
    return 8;
  }
  if ( a1 > 0x417u )
  {
    if ( a1 > 0x53Eu )
    {
      if ( a1 <= 0x57Du )
      {
        v11 = 1LL << ((unsigned __int8)a1 - 63);
        v2 = 8;
        if ( (v11 & 0x302A00008888003LL) == 0 )
        {
          v2 = 4;
          if ( (v11 & 0x40C1400011110000LL) == 0 )
            return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
        }
      }
      else
      {
        if ( (unsigned __int16)(a1 - 1406) > 0x3Eu )
          return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
        v6 = 1LL << ((unsigned __int8)a1 - 126);
        v2 = 8;
        if ( (v6 & 0x6658000001FC5141LL) == 0 )
        {
          v2 = 4;
          if ( (v6 & 0x19A00000000228A0LL) == 0 )
            return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
        }
      }
      return v2;
    }
    if ( a1 > 0x516u )
    {
      v13 = 1LL << ((unsigned __int8)a1 - 23);
      if ( (v13 & 0xCE03800049LL) == 0 )
      {
        if ( (v13 & 0x1CC700086LL) != 0 )
          return 8;
        return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
      }
      return 4;
    }
    if ( (unsigned __int16)(a1 - 1053) <= 0x3Du )
    {
      v4 = 1LL << ((unsigned __int8)a1 - 29);
      v2 = 4;
      if ( (v4 & 0x2A021400220112C9LL) == 0 )
      {
        v2 = 8;
        if ( (v4 & 0x15010A0044022814LL) == 0 )
          return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
      }
      return v2;
    }
LABEL_45:
    if ( (unsigned __int16)(a1 - 1175) <= 0x1Fu || (unsigned __int16)(a1 - 1559) <= 0xAu )
      return 8;
    if ( (unsigned __int16)(a1 - 1207) > 0x1Fu && (unsigned __int16)(a1 - 1548) > 4u )
      return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    return 4;
  }
  if ( a1 > 0x3D8u )
  {
    v12 = 1LL << ((unsigned __int8)a1 + 39);
    if ( (v12 & 0x4100002490000005LL) == 0 )
    {
      if ( (v12 & 0x41000000000000ALL) != 0 )
        return 8;
      return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    }
    return 4;
  }
  if ( a1 > 0x38Au )
  {
    if ( (unsigned __int16)(a1 - 935) > 0x31u )
      return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    v7 = 1LL << ((unsigned __int8)a1 + 89);
    v2 = 4;
    if ( (v7 & 0x1020800004AA2LL) == 0 )
    {
      v2 = 8;
      if ( (v7 & 0x2041000008011LL) == 0 )
        return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    }
  }
  else if ( a1 > 0x34Bu )
  {
    v8 = 1LL << ((unsigned __int8)a1 - 76);
    v2 = 4;
    if ( (v8 & 0x4400004444455111LL) == 0 )
    {
      v2 = 8;
      if ( (v8 & 0x220000222222A888LL) == 0 )
        return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    }
  }
  else if ( a1 <= 0x30Cu )
  {
    v2 = 4;
    if ( a1 != 769 )
    {
      v2 = 8;
      if ( a1 != 780 && a1 != 768 )
        return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    }
  }
  else
  {
    v1 = 1LL << ((unsigned __int8)a1 - 13);
    v2 = 4;
    if ( (v1 & 0x2A22201100C61005LL) == 0 )
    {
      v2 = 8;
      if ( (v1 & 0x5511100880180802LL) == 0 )
        return 4 * (unsigned int)((unsigned __int16)(a1 - 1553) <= 5u);
    }
  }
  return v2;
}
