__int64 __fastcall sub_280E80(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int tinfo_size; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r13d
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
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // ebx
  int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rax

  v1 = *(_QWORD *)(a1 + 48);
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
      v19 = v14 + 48;
      v20 = sub_2511B0(*(__int64 **)(v14 + 24));
      if ( v20 > 0 )
      {
        v21 = v20;
        if ( (int)v20 == v20 )
        {
          v22 = sub_280E80(*(_QWORD *)(a1 + 24), v19);
          if ( v22 )
            return (unsigned int)(v21 + v22);
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
        v16 = sub_280E80(*(_QWORD *)(a1 + 24), 2);
        v9 = v16;
        if ( v16 > (int)v15 )
          return v15;
        if ( v16 != v15 )
          return v9;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) != 61 || (unsigned int)get_tinfo_property() != 1 )
          return v15;
        v23 = sub_27D1E0(*(_QWORD *)(a1 + 24));
        v24 = sub_325C90(-v23, v4, 1);
        if ( (int)v9 > 0 && v24 )
        {
          v9 = 0;
          while ( ++v9 != v15 )
          {
            if ( v9 == 64 )
              return 64;
            if ( (v24 & -(1LL << v9)) == 0 )
              return v9;
          }
          return v9;
        }
      }
    }
    else if ( v5 == 61 )
    {
      v6 = sub_2511B0(*(__int64 **)(a1 + 24));
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
    v17 = sub_280E80(*(_QWORD *)(a1 + 24), v1);
    v18 = sub_280E80(*(_QWORD *)(a1 + 32), v1);
    if ( (int)v17 < (int)v18 )
      return v18;
    return v17;
  }
  else
  {
    if ( v5 != 21 )
      return 0;
    v12 = sub_280E80(*(_QWORD *)(a1 + 24), v1);
    v13 = sub_280E80(*(_QWORD *)(a1 + 32), v1);
    if ( (int)v12 > (int)v13 )
      return v13;
    return v12;
  }
}

