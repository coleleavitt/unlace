__int64 __fastcall sub_2559F0(__int64 a1)
{
  __int64 *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbp

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
    case 0x40:
    case 0x41:
    case 0x45:
      goto LABEL_9;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x3A:
      goto LABEL_4;
    case 0x10:
      if ( *(_QWORD *)(a1 + 40) )
      {
        sub_2559F0(*(_QWORD *)(a1 + 40));
        clear_tinfo_t();
        j__qfree();
      }
LABEL_4:
      if ( *(_QWORD *)(a1 + 32) )
      {
        sub_2559F0(*(_QWORD *)(a1 + 32));
        clear_tinfo_t();
        j__qfree();
      }
      goto LABEL_6;
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x3B:
    case 0x3C:
    case 0x43:
LABEL_6:
      if ( !*(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      sub_2559F0(*(_QWORD *)(a1 + 24));
      clear_tinfo_t();
      goto LABEL_8;
    case 0x39:
      if ( *(_QWORD *)(a1 + 24) )
      {
        sub_2559F0(*(_QWORD *)(a1 + 24));
        clear_tinfo_t();
        j__qfree();
      }
      v3 = *(__int64 **)(a1 + 32);
      if ( !v3 )
        goto LABEL_9;
      clear_tinfo_t();
      v4 = *v3;
      if ( *v3 )
      {
        v5 = v3[1];
        if ( v5 )
        {
          v6 = 0;
          do
          {
            v7 = 9 * v6++;
            v8 = v4 + 8 * v7;
            clear_tinfo_t();
            sub_2559F0(v8);
            clear_tinfo_t();
            v4 = *v3;
          }
          while ( v5 != v6 );
        }
        v3[1] = 0;
        qfree();
      }
LABEL_18:
      qfree();
      goto LABEL_9;
    case 0x3D:
      v9 = *(_QWORD *)(a1 + 24);
      if ( !v9 )
        goto LABEL_9;
      if ( *(_QWORD *)(v9 + 16) )
      {
        *(_QWORD *)(v9 + 24) = 0;
        qfree();
      }
LABEL_8:
      j__qfree();
LABEL_9:
      *(_QWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      return clear_tinfo_t();
    case 0x3E:
      if ( !*(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      goto LABEL_8;
    case 0x3F:
    case 0x44:
      goto LABEL_18;
    case 0x42:
      if ( *(_QWORD *)(a1 + 24) )
      {
        sub_255410(*(_QWORD *)(a1 + 24));
        j__qfree();
      }
      goto LABEL_9;
    default:
      if ( !under_debugger )
        sub_3835A0(50063);
      BUG();
  }
}

