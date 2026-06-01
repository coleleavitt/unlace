void __fastcall sub_3B380(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // r13
  const char *v4; // rsi

  if ( *(_QWORD *)(a1 + 168) )
  {
    v1 = 0;
    do
    {
      while ( 1 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 88 * v1);
        if ( (unsigned __int8)is_mapped(v2) )
        {
          if ( (get_flags_ex(v2, 4) & 0xC000) != 0x4000 )
            break;
        }
        if ( ++v1 >= *(_QWORD *)(a1 + 168) )
          return;
      }
      v3 = *(_QWORD *)(a1 + 160) + 88 * v1;
      v4 = byte_51ACD;
      if ( *(_QWORD *)(v3 + 16) )
        v4 = *(const char **)(v3 + 8);
      ++v1;
      set_name(v2, v4, 4096);
    }
    while ( v1 < *(_QWORD *)(a1 + 168) );
  }
}
