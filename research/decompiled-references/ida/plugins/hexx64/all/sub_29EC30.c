void __fastcall sub_29EC30(__int64 a1, double a2)
{
  void *v3; // rbp
  __int64 *v4; // rbp
  void *v5; // rdi

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 5:
    case 6:
    case 7:
      break;
    case 1:
      clear_tinfo_t();
      break;
    case 2:
    case 4:
      v3 = *(void **)(a1 + 8);
      if ( v3 )
      {
        sub_29EC30(*(_QWORD *)(a1 + 8));
        operator delete(v3, 0x10u);
      }
      break;
    case 3:
      v4 = *(__int64 **)(a1 + 8);
      if ( v4 )
      {
        if ( *v4 )
        {
          sub_29EB30(*(unsigned __int64 ***)(a1 + 8));
          if ( *v4 )
            qfree(*v4);
        }
        qfree((__int64)v4);
      }
      break;
    case 8:
      v5 = *(void **)(a1 + 8);
      if ( v5 )
        operator delete(v5, 0x10u);
      break;
    default:
      if ( !under_debugger )
        sub_383060(0xC523u, a2);
      BUG();
  }
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
}

