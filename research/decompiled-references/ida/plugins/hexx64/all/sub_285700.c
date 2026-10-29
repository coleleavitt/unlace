__int64 __fastcall sub_285700(__int64 a1, double a2)
{
  int tinfo_size; // eax
  int v3; // ebx
  int v4; // r13d
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // ebx
  signed int v16; // eax
  unsigned int v17; // ebp
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // ebx
  int v21; // ebp
  __int64 v22; // rax
  __int64 v23; // rax

  tinfo_size = get_tinfo_size();
  if ( tinfo_size == -1 )
    return 0;
  v3 = tinfo_size;
  v4 = tinfo_size;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 == 34 )
  {
    v14 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(v14 + 8) == 61 )
    {
      v19 = sub_255A30(*(__int64 **)(v14 + 24));
      if ( v19 > 0 )
      {
        v20 = v19;
        if ( (int)v19 == v19 )
        {
          v21 = sub_285700(*(_QWORD *)(a1 + 24));
          if ( v21 )
            return (unsigned int)(v20 + v21);
        }
      }
    }
    return 0;
  }
  if ( v5 > 0x22 )
  {
    if ( v5 == 48 )
    {
      if ( (get_tinfo_property() & 0xF) != 9 || (get_tinfo_property() & 0xF) == 9 )
      {
        v15 = 8 * v3;
        v16 = sub_285700(*(_QWORD *)(a1 + 24));
        v9 = v16;
        if ( v16 > (int)v15 )
          return v15;
        if ( v16 != v15 )
          return v9;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) != 61 || (unsigned int)get_tinfo_property() != 1 )
          return v15;
        v22 = sub_281A60(*(_QWORD *)(a1 + 24), a2);
        v23 = sub_32ABC0(-v22, v4, 1);
        if ( (int)v9 > 0 && v23 )
        {
          v9 = 0;
          while ( ++v9 != v15 )
          {
            if ( v9 == 64 )
              return 64;
            if ( (v23 & -(1LL << v9)) == 0 )
              return v9;
          }
          return v9;
        }
      }
    }
    else if ( v5 == 61 )
    {
      v6 = sub_255A30(*(__int64 **)(a1 + 24));
      v7 = -v6;
      if ( v6 > 0 )
        v7 = v6;
      v8 = 8 * v3;
      if ( v8 > 0 )
      {
        if ( v7 )
        {
          v9 = v8;
          v10 = 0;
          while ( ++v10 != v8 )
          {
            if ( v10 == 64 )
              return 64;
            if ( (v7 & -(1LL << v10)) == 0 )
              return v10;
          }
          return v9;
        }
      }
    }
    return 0;
  }
  if ( v5 == 19 )
  {
    v17 = sub_285700(*(_QWORD *)(a1 + 24));
    v18 = sub_285700(*(_QWORD *)(a1 + 32));
    if ( (int)v17 < (int)v18 )
      return v18;
    return v17;
  }
  else
  {
    if ( v5 != 21 )
      return 0;
    v12 = sub_285700(*(_QWORD *)(a1 + 24));
    v13 = sub_285700(*(_QWORD *)(a1 + 32));
    if ( (int)v12 > (int)v13 )
      return v13;
    return v12;
  }
}

