__int64 __fastcall sub_3F9010(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  char v4; // al
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v22; // [rsp+108h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 120) )
    return 1;
  if ( (*(_DWORD *)(a2 + 16) & 0x40) != 0 )
    return 0;
  v3 = *(_DWORD *)(a2 + 16) & 1;
  if ( v3 )
    return 0;
  v4 = *(_BYTE *)(a1 + 176);
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 176) = v4 & 0xF | 0x70;
  v5 = *(_DWORD *)(a2 + 16);
  if ( (v5 & 8) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 96);
    v9 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v8 + 1) )
    {
      v19 = qvector_reserve();
      *(_QWORD *)(a1 + 88) = v19;
      v9 = v19;
      v8 = *(_QWORD *)(a1 + 96);
    }
    v10 = 0;
    v11 = v9 + 80 * v8;
    *(_DWORD *)v11 = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 64) = 0;
    *(_DWORD *)(v11 + 72) = 0;
    *(_OWORD *)(v11 + 24) = 0;
    *(_OWORD *)(v11 + 48) = 0;
    ++*(_QWORD *)(a1 + 96);
    v12 = *(unsigned __int8 *)(a2 + 12);
    if ( (unsigned __int8)v12 <= 0xFu )
      v10 = byte_419B10[v12];
    *(_QWORD *)&v21 = v10;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( !*(_BYTE *)(v11 + 64) )
      return 0;
    v5 = *(_DWORD *)(a2 + 16);
    if ( (v5 & 0x2A) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 96);
      v15 = *(_QWORD *)(a1 + 88);
      if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v14 + 1) )
      {
        v20 = qvector_reserve();
        *(_QWORD *)(a1 + 88) = v20;
        v15 = v20;
        v14 = *(_QWORD *)(a1 + 96);
      }
      v16 = v15 + 80 * v14;
      *(_DWORD *)v16 = 0;
      *(_QWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 64) = 0;
      *(_DWORD *)(v16 + 72) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      ++*(_QWORD *)(a1 + 96);
      if ( (*(_BYTE *)(a2 + 16) & 0x28) != 0 )
      {
        if ( !under_debugger )
          sub_37E160(0xCA0Eu, 0.0);
        BUG();
      }
      v17 = 18;
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 22) > 2 )
      {
        v18 = *(unsigned __int8 *)(a2 + 12);
        if ( (unsigned __int8)v18 <= 0xFu )
          v17 = byte_419B10[v18];
        else
          v17 = 0;
      }
      *(_QWORD *)&v21 = v17;
      copy_tinfo_t();
      clear_tinfo_t();
      if ( !*(_BYTE *)(v16 + 64) )
        return 0;
      v5 = *(_DWORD *)(a2 + 16);
    }
  }
  if ( (v5 & 0x100) != 0 && !*(_DWORD *)(a2 + 8) )
  {
    *(_QWORD *)&v21 = 23;
  }
  else
  {
    v6 = *(unsigned __int8 *)(a2 + 13);
    if ( (unsigned __int8)v6 <= 0xFu )
      v7 = byte_419B10[v6];
    else
      v7 = 0;
    *(_QWORD *)&v21 = v7;
  }
  copy_tinfo_t();
  clear_tinfo_t();
  if ( !*(_BYTE *)(a1 + 120) )
    return 0;
  if ( sub_CBD70() == 1 )
    return (unsigned int)calc_arglocs();
  return v3;
}

