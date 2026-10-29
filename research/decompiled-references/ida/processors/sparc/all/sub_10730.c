void __fastcall sub_10730(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // r14
  void *v6; // rsi

  if ( *(_QWORD *)(a1 + 136) )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = 88 * v1;
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 88 * v1);
        if ( (unsigned __int8)is_mapped(v4) )
        {
          if ( (get_flags_ex(v4, 4) & 0xC000) != 0x4000 )
            break;
        }
        v1 = ++v2;
        if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 136) )
          return;
      }
      v5 = *(_QWORD *)(a1 + 128) + v3;
      v6 = &unk_13D10;
      if ( *(_QWORD *)(v5 + 16) )
        v6 = *(void **)(v5 + 8);
      ++v2;
      set_name(v4, v6, 4096);
      v1 = v2;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 136) );
  }
}

