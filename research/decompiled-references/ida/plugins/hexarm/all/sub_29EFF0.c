void __fastcall sub_29EFF0(__int64 a1)
{
  void *v2; // rbp
  _QWORD *v3; // rbp
  void *v4; // rdi

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
      v2 = *(void **)(a1 + 8);
      if ( v2 )
      {
        sub_29EFF0(*(_QWORD *)(a1 + 8));
        operator delete(v2, 0x10u);
      }
      break;
    case 3:
      v3 = *(_QWORD **)(a1 + 8);
      if ( v3 )
      {
        if ( *v3 )
        {
          sub_29EEF0(*(unsigned __int64 ***)(a1 + 8));
          if ( *v3 )
            qfree();
        }
        qfree();
      }
      break;
    case 8:
      v4 = *(void **)(a1 + 8);
      if ( v4 )
        operator delete(v4, 0x10u);
      break;
    default:
      if ( !under_debugger )
        sub_3835A0(50467);
      BUG();
  }
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
}

