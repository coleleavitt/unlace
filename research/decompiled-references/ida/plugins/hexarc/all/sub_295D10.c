__int64 __fastcall sub_295D10(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  _DWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax

  while ( 2 )
  {
    v3 = sub_295900((_QWORD *)(a1 + 48));
    if ( !(_BYTE)v3 )
    {
      switch ( *(_DWORD *)(a1 + 8) )
      {
        case 3:
        case 4:
        case 0x13:
        case 0x14:
          if ( (unsigned __int8)sub_295D10(*(_QWORD *)(a1 + 24), a2) )
            goto LABEL_6;
          return v3;
        case 5:
        case 0x15:
          if ( (unsigned __int8)sub_295D10(*(_QWORD *)(a1 + 24), a2) )
            return 1;
LABEL_6:
          a1 = *(_QWORD *)(a1 + 32);
          continue;
        case 0x10:
          if ( !(unsigned __int8)sub_295D10(*(_QWORD *)(a1 + 32), a2) )
            return v3;
          a1 = *(_QWORD *)(a1 + 40);
          continue;
        case 0x21:
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 61 )
          {
            v6 = *(_QWORD *)(a1 + 48);
            v7 = 8 * get_tinfo_size();
            v8 = *(_QWORD *)(a1 + 32);
            if ( *(_DWORD *)(v8 + 8) != 61 )
              sub_291F30(0, v6);
            LOBYTE(v3) = v7 - 1 == sub_24E6B0(*(__int64 **)(v8 + 24));
          }
          return v3;
        case 0x30:
          a1 = *(_QWORD *)(a1 + 24);
          continue;
        case 0x3D:
          LOBYTE(v3) = (unsigned __int64)sub_24E6B0(*(__int64 **)(a1 + 24)) <= 1;
          return v3;
        case 0x41:
          v5 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL) + 104LL * *(int *)(a1 + 32));
          if ( *v5 == 3 )
            LOBYTE(v3) = v5[2] <= 7;
          return v3;
        default:
          return v3;
      }
    }
    return 1;
  }
}

