unsigned __int64 __fastcall sub_373590(__int64 a1, double a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v7[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  *(_DWORD *)a1 |= 0x10u;
  if ( (get_aflags() & 0x4000000) == 0 )
  {
    set_abits();
    if ( !*(_BYTE *)(a1 + 320) )
    {
      if ( *(_BYTE *)(a1 + 328) )
      {
        v5 = *(_QWORD *)(a1 + 1496);
        v7[0] = 0;
        v7[1] = 0;
        v6 = 25;
        if ( !(unsigned __int8)sub_32DC20(v5, (__int64 *)(a1 + 328), -1, &v6, v7, a2, a3) )
        {
          clear_tinfo_t();
          cleanup_argloc();
          if ( !under_debugger )
            sub_383060(0xC42Bu, a2);
          BUG();
        }
        clear_tinfo_t();
        cleanup_argloc();
      }
    }
  }
  return v8 - __readfsqword(0x28u);
}

