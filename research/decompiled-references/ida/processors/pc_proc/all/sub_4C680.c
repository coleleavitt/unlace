__int64 __fastcall sub_4C680(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v10; // rdi
  int v11; // edx

  v1 = a1[47];
  if ( a1[53] == -1 )
  {
    v10 = a1[118];
    v11 = *(_DWORD *)v1 & 0x404;
    if ( v11 )
    {
      if ( v11 == 4 )
      {
        v10 *= 4;
      }
      else if ( v11 != 1024 )
      {
        v10 *= 8;
      }
    }
    else
    {
      v10 *= 2;
    }
    *(_QWORD *)(v1 + 8) = *(_QWORD *)(*(_QWORD *)(a1[111] + 32LL) + 16LL) & (*(_QWORD *)(v1 + 8) - v10);
    return 1;
  }
  else
  {
    *(_DWORD *)v1 |= 0x10001u;
    v3 = a1[47];
    v4 = *(_QWORD *)(v3 + 48);
    v5 = *(_QWORD *)(v3 + 16);
    if ( *(_DWORD *)(*(_QWORD *)(a1[111] + 32LL) + 24LL) != 8 )
      v5 = (int)v5;
    *(_QWORD *)(v3 + 48) = v5;
    v6 = a1[47];
    v7 = a1[118];
    v8 = *(_DWORD *)v6 & 0x802;
    if ( v8 )
    {
      if ( v8 == 2 )
      {
        v7 *= 4;
      }
      else if ( v8 != 2048 )
      {
        v7 *= 8;
      }
    }
    else
    {
      v7 *= 2;
    }
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(*(_QWORD *)(a1[111] + 32LL) + 16LL) & (v4 - v7);
    return find_jtable_size();
  }
}

