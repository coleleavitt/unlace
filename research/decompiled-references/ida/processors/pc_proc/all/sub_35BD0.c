void __fastcall sub_35BD0(__int64 a1)
{
  _QWORD *v1; // r12
  __int64 func; // rax
  __int128 v4; // rdi

  v1 = (_QWORD *)(a1 + 5360);
  if ( *(_BYTE *)(a1 + 144) )
  {
    while ( *(_QWORD *)(a1 + 5400) )
    {
      while ( 1 )
      {
        sub_23000(v1, *(_QWORD *)(*(_QWORD *)(a1 + 5384) + 32LL));
        func = get_func();
        if ( !func )
          break;
        *((_QWORD *)&v4 + 1) = func;
        *(_QWORD *)&v4 = a1;
        sub_32500(v4, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0);
        if ( !*(_QWORD *)(a1 + 5400) )
          return;
      }
    }
  }
}

