unsigned __int64 __fastcall sub_119360(__int64 a1)
{
  __int64 *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rbp

  switch ( *(_BYTE *)a1 )
  {
    case 2:
    case 5:
    case 9:
    case 0xD:
      if ( *(_QWORD *)(a1 + 8) )
        goto LABEL_3;
      break;
    case 3:
    case 0xB:
      qfree();
      break;
    case 4:
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 )
      {
        sub_119360(v9 + 64);
        sub_119360(v9 + 48);
        sub_119360(v9 + 32);
        j__qfree();
      }
      break;
    case 8:
      if ( *(_QWORD *)(a1 + 8) )
      {
        sub_B76E0(*(_QWORD **)(a1 + 8));
        j__qfree();
      }
      break;
    case 0xA:
      if ( *(_QWORD *)(a1 + 8) )
      {
        sub_119360(*(_QWORD *)(a1 + 8));
        j__qfree();
      }
      break;
    case 0xC:
      v2 = *(__int64 **)(a1 + 8);
      if ( v2 )
      {
        if ( v2[3] )
        {
          v2[4] = 0;
          qfree();
        }
        v3 = *v2;
        if ( *v2 )
        {
          v4 = v2[1];
          if ( v4 )
          {
            for ( i = 0; i != v4; ++i )
            {
              v6 = (_QWORD *)(v3 + 24 * i);
              if ( *v6 )
              {
                v6[1] = 0;
                qfree();
                v3 = *v2;
              }
            }
          }
          v2[1] = 0;
          qfree();
        }
        goto LABEL_3;
      }
      break;
    case 0xE:
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 )
      {
        sub_119360(v8 + 16);
        sub_119360(v8);
LABEL_3:
        j__qfree();
      }
      break;
    case 0xF:
      v7 = *(_QWORD *)(a1 + 8);
      if ( v7 )
      {
        clear_tinfo_t();
        if ( *(_QWORD *)(v7 + 24) )
        {
          *(_QWORD *)(v7 + 32) = 0;
          qfree();
        }
        cleanup_argloc();
        qfree();
      }
      break;
    default:
      break;
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
  return 0xFFFFFFFF00000000LL;
}

