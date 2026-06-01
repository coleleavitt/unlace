__int64 __fastcall sub_255630(__int64 a1, double a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v8; // rbp
  __int64 *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rbp

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
    case 0x40:
    case 0x41:
    case 0x45:
      goto LABEL_10;
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
      v3 = *(_QWORD *)(a1 + 40);
      if ( v3 )
      {
        sub_255630(*(_QWORD *)(a1 + 40));
        clear_tinfo_t();
        j__qfree(v3);
      }
LABEL_4:
      v4 = *(_QWORD *)(a1 + 32);
      if ( v4 )
      {
        sub_255630(*(_QWORD *)(a1 + 32));
        clear_tinfo_t();
        j__qfree(v4);
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
      v5 = *(_QWORD *)(a1 + 24);
      if ( !v5 )
        goto LABEL_10;
      sub_255630(*(_QWORD *)(a1 + 24));
      clear_tinfo_t();
      break;
    case 0x39:
      v8 = *(_QWORD *)(a1 + 24);
      if ( v8 )
      {
        sub_255630(*(_QWORD *)(a1 + 24));
        clear_tinfo_t();
        j__qfree(v8);
      }
      v9 = *(__int64 **)(a1 + 32);
      if ( v9 )
      {
        clear_tinfo_t();
        v10 = *v9;
        if ( *v9 )
        {
          v11 = v9[1];
          if ( v11 )
          {
            v12 = 0;
            do
            {
              v13 = 9 * v12++;
              v14 = v10 + 8 * v13;
              clear_tinfo_t();
              sub_255630(v14);
              clear_tinfo_t();
              v10 = *v9;
            }
            while ( v11 != v12 );
          }
          v9[1] = 0;
          qfree(v10);
        }
        qfree((__int64)v9);
      }
      goto LABEL_10;
    case 0x3D:
      v5 = *(_QWORD *)(a1 + 24);
      if ( !v5 )
        goto LABEL_10;
      v15 = *(_QWORD *)(v5 + 16);
      if ( v15 )
      {
        *(_QWORD *)(v5 + 24) = 0;
        qfree(v15);
      }
      break;
    case 0x3E:
      v6 = *(_QWORD *)(a1 + 24);
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_9;
    case 0x3F:
    case 0x44:
      qfree(*(_QWORD *)(a1 + 24));
      goto LABEL_10;
    case 0x42:
      v16 = *(_QWORD *)(a1 + 24);
      if ( v16 )
      {
        sub_255050(*(_QWORD *)(a1 + 24), a2);
        j__qfree(v16);
      }
      goto LABEL_10;
    default:
      if ( !under_debugger )
        sub_383060(0xC38Fu, a2);
      BUG();
  }
  v6 = v5;
LABEL_9:
  j__qfree(v6);
LABEL_10:
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  return clear_tinfo_t();
}

