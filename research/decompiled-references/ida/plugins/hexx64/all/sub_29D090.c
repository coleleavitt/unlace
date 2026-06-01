__int64 __fastcall sub_29D090(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // r12d
  _DWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax

  while ( 2 )
  {
    v4 = sub_29CC80((_QWORD *)(a1 + 48));
    if ( !(_BYTE)v4 )
    {
      switch ( *(_DWORD *)(a1 + 8) )
      {
        case 3:
        case 4:
        case 0x13:
        case 0x14:
          if ( (unsigned __int8)sub_29D090(*(_QWORD *)(a1 + 24), a2) )
            goto LABEL_6;
          return v4;
        case 5:
        case 0x15:
          if ( (unsigned __int8)sub_29D090(*(_QWORD *)(a1 + 24), a2) )
            return 1;
LABEL_6:
          a1 = *(_QWORD *)(a1 + 32);
          continue;
        case 0x10:
          if ( !(unsigned __int8)sub_29D090(*(_QWORD *)(a1 + 32), a2) )
            return v4;
          a1 = *(_QWORD *)(a1 + 40);
          continue;
        case 0x21:
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 61 )
          {
            v7 = 8 * get_tinfo_size();
            v8 = *(_QWORD *)(a1 + 32);
            if ( *(_DWORD *)(v8 + 8) != 61 )
              sub_2992B0(a3);
            LOBYTE(v4) = v7 - 1 == sub_255A30(*(__int64 **)(v8 + 24));
          }
          return v4;
        case 0x30:
          a1 = *(_QWORD *)(a1 + 24);
          continue;
        case 0x3D:
          LOBYTE(v4) = (unsigned __int64)sub_255A30(*(__int64 **)(a1 + 24)) <= 1;
          return v4;
        case 0x41:
          v6 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL) + 104LL * *(int *)(a1 + 32));
          if ( *v6 == 3 )
            LOBYTE(v4) = v6[2] <= 7;
          return v4;
        default:
          return v4;
      }
    }
    return 1;
  }
}

