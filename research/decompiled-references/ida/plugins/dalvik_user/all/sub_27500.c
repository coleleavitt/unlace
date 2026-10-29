__int64 __fastcall sub_27500(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax

  sub_58110(a1, (unsigned int)"dalvik_debmod_t::del_thread(0x%llx)\n", a2, a4, a5, a6);
  v6 = *(_QWORD *)(a1 + 1848);
  v7 = v6 + 40LL * *(_QWORD *)(a1 + 1856);
  if ( 40LL * *(_QWORD *)(a1 + 1856) )
  {
    do
    {
      if ( *(_QWORD *)(v6 + 8) == a2 )
      {
        set_debug_event_code();
        sub_16810();
      }
      v6 += 40;
    }
    while ( v6 != v7 );
  }
  return 0;
}

