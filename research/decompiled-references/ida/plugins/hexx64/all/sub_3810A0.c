__int64 __fastcall sub_3810A0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, double a5, __m128 a6)
{
  char v8; // cl
  __int64 v9; // r12
  unsigned __int64 *v10; // rax
  signed int v11; // ebx
  __int64 v13; // rdx

  if ( a2 == -1 )
    return 0;
  v8 = 1;
  v9 = *(_QWORD *)(a1 + 1136);
  if ( v9 )
  {
    if ( (a4 & 0x2000000) == 0 )
    {
      sub_369F00(*(_QWORD *)(a1 + 1136), a2);
      v8 = 0;
      if ( v13 )
      {
        *(_QWORD *)(operator new(0x28u) + 32) = a2;
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(v9 + 40);
        v8 = 1;
      }
    }
  }
  v10 = sub_380880(*(_QWORD *)(a1 + 1128), a2, a4, v8, a5, a6);
  if ( !v10 )
    return 0;
  v11 = a4 & 0xF1FFFFFF;
  if ( v11 <= 1 && v11 < *((_DWORD *)v10 + 14) )
    return 0;
  if ( (v10[6] & 0x3F) == 0x30 )
    return 0;
  if ( a3 )
    copy_tinfo_t();
  return 1;
}

