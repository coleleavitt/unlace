__int64 __fastcall sub_5E510(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  char v5; // al
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r13d
  int v10; // edx
  _DWORD *v11; // rbx
  unsigned __int16 *v12; // rbp
  __int64 result; // rax
  char v14; // al
  int v15; // r14d
  __int64 v16; // rdx

  v4 = *(unsigned __int16 *)(a3 + 24);
  if ( (_WORD)v4 == 32 )
  {
LABEL_19:
    if ( (*(_BYTE *)(a3 + 28) & 0xA0) == 0 )
      goto LABEL_10;
    v14 = *(_BYTE *)(a3 + 81);
    if ( v14 == 4 )
    {
      if ( !*(_QWORD *)(a3 + 96) )
        goto LABEL_10;
    }
    else if ( v14 != 3 )
    {
      goto LABEL_10;
    }
    v6 = *(unsigned __int16 *)(a3 + 86);
    goto LABEL_8;
  }
  if ( (unsigned __int16)v4 <= 0x20u )
  {
    if ( (_WORD)v4 != 30 )
      goto LABEL_10;
    goto LABEL_19;
  }
  if ( (unsigned __int16)(v4 - 474) > 1u || (*(_BYTE *)(a3 + 28) & 0xA0) == 0 )
    goto LABEL_10;
  v5 = *(_BYTE *)(a3 + 121);
  if ( v5 == 4 )
  {
    if ( !*(_QWORD *)(a3 + 136) )
      goto LABEL_10;
  }
  else if ( v5 != 3 )
  {
    goto LABEL_10;
  }
  v6 = *(unsigned __int16 *)(a3 + 126);
LABEL_8:
  sub_5DF20(a1, v6);
  if ( v7 )
  {
    *(_DWORD *)(operator new(0x28u) + 32) = v6;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 40);
    v4 = *(unsigned __int16 *)(a3 + 24);
  }
LABEL_10:
  v8 = *(_QWORD *)(a2 + 16);
  v9 = 0;
  v10 = *(_DWORD *)(v8 + 104);
  if ( v10 <= v4 && *(_DWORD *)(v8 + 108) > v4 )
    v9 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * (v4 - v10) + 8);
  v11 = dword_8B1C0;
  v12 = (unsigned __int16 *)(a3 + 46);
  do
  {
    result = *v11 & v9;
    if ( (*v11 & v9) != 0 && *((_BYTE *)v12 - 5) == 1 )
    {
      v15 = *v12;
      result = sub_5DF20(a1, v15);
      if ( v16 )
      {
        *(_DWORD *)(operator new(0x28u) + 32) = v15;
        result = std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(a1 + 40);
      }
    }
    ++v11;
    v12 += 20;
  }
  while ( v11 != (_DWORD *)&unk_8B1D4 );
  return result;
}
