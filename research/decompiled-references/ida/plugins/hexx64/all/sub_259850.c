int __fastcall sub_259850(__int64 a1, __int64 a2, int a3, double a4)
{
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rbx
  int result; // eax
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax

  v4 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a2 + 8) <= v4 )
  {
    if ( *(_DWORD *)(a2 + 8) < v4 )
      return 1;
    v5 = a2;
    v6 = a1;
    if ( !a3 || !(unsigned __int8)compare_tinfo() )
      goto LABEL_11;
    while ( 1 )
    {
      switch ( *(_DWORD *)(v6 + 8) )
      {
        case 0:
          return 0;
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
          result = sub_259850(*(_QWORD *)(v6 + 24), *(_QWORD *)(v5 + 24), 0);
          if ( result )
            return result;
          v6 = *(_QWORD *)(v6 + 32);
          v5 = *(_QWORD *)(v5 + 32);
          goto LABEL_9;
        case 0x10:
          result = sub_259850(*(_QWORD *)(v6 + 24), *(_QWORD *)(v5 + 24), 0);
          if ( result )
            return result;
          result = sub_259850(*(_QWORD *)(v6 + 32), *(_QWORD *)(v5 + 32), 0);
          if ( result )
            return result;
          v6 = *(_QWORD *)(v6 + 40);
          v5 = *(_QWORD *)(v5 + 40);
          goto LABEL_9;
        case 0x2E:
        case 0x2F:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x43:
          goto LABEL_8;
        case 0x30:
        case 0x45:
          result = lexcompare_tinfo();
          if ( result )
            return result;
          if ( *(_DWORD *)(v6 + 8) == 69 )
            return 0;
LABEL_8:
          v6 = *(_QWORD *)(v6 + 24);
          v5 = *(_QWORD *)(v5 + 24);
LABEL_9:
          v8 = *(_DWORD *)(v5 + 8);
          if ( *(_DWORD *)(v6 + 8) < v8 )
            return -1;
          if ( *(_DWORD *)(v6 + 8) > v8 )
            return 1;
LABEL_11:
          result = lexcompare_tinfo();
          if ( result )
            return result;
          break;
        case 0x39:
          result = sub_259850(*(_QWORD *)(v6 + 24), *(_QWORD *)(v5 + 24), 0);
          if ( !result )
            return sub_25A220(*(__int64 **)(v6 + 32), *(__int64 **)(v5 + 32));
          return result;
        case 0x3B:
        case 0x3C:
          result = sub_259850(*(_QWORD *)(v6 + 24), *(_QWORD *)(v5 + 24), 0);
          if ( result )
            return result;
          v9 = *(_DWORD *)(v5 + 32);
          v10 = *(_DWORD *)(v6 + 32);
          if ( v9 < v10 )
            return -1;
          return v10 < v9;
        case 0x3D:
          v11 = **(_QWORD **)(v6 + 24);
          v12 = **(_QWORD **)(v5 + 24);
          if ( v11 < v12 )
            return -1;
          return v12 < v11;
        case 0x3E:
          return ecmp();
        case 0x3F:
        case 0x44:
          return strcmp(*(const char **)(v6 + 24), *(const char **)(v5 + 24));
        case 0x40:
          v11 = *(_QWORD *)(v5 + 24);
          v12 = *(_QWORD *)(v6 + 24);
          if ( v11 < v12 )
            return -1;
          return v12 < v11;
        case 0x41:
          v13 = *(_QWORD *)(v6 + 24);
          v14 = *(_QWORD *)(v5 + 24);
          if ( v14 < v13 )
            return 1;
          if ( v13 < v14 )
            return -1;
          v15 = *(_DWORD *)(v6 + 32);
          if ( *(_DWORD *)(v5 + 32) < v15 )
            return -1;
          return *(_DWORD *)(v5 + 32) > v15;
        case 0x42:
          return sub_2596A0(*(_QWORD *)(v6 + 24), *(_QWORD *)(v5 + 24), a4);
        default:
          if ( !under_debugger )
            sub_383060(0xC392u, a4);
          BUG();
      }
    }
  }
  return -1;
}

