__int64 __fastcall sub_250510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  _DWORD *exception; // rdi
  __int64 v6; // rax
  char v7; // bp
  int v9; // r8d
  __int64 result; // rax
  char v11; // dl
  __int64 v12; // rax
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rax

  v7 = a4;
  if ( a3 )
  {
    v9 = *(_DWORD *)(a1 + 344);
    *(_DWORD *)(a1 + 344) = v9 + 1;
    if ( v9 + 1 > 1023 )
    {
      exception = __cxa_allocate_exception(0x30u);
      v6 = **(_QWORD **)(a1 + 176);
      *(_QWORD *)exception = off_4DBCD0;
      exception[2] = -22;
      *((_QWORD *)exception + 2) = v6;
      *((_QWORD *)exception + 3) = 0;
      *((_OWORD *)exception + 2) = 0;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
    }
    switch ( *(_DWORD *)(*(_QWORD *)(a1 + 304) + 4LL * (int)a2) )
    {
      case 0:
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
        if ( *(_DWORD *)(v12 + 64) > (int)a2 )
        {
          result = (__int64)sub_24FAB0(
                              a1,
                              *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8LL * (int)a2),
                              a3,
                              (unsigned __int8)a4,
                              a5);
          v9 = *(_DWORD *)(a1 + 344) - 1;
          v11 = result != 0;
        }
        else
        {
          v13 = *(_QWORD **)(a1 + 240);
          if ( !v13 )
            goto LABEL_19;
          v14 = *v13 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v14 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( (*(_BYTE *)v14 & 2) != 0 )
                  goto LABEL_19;
                if ( *(_DWORD *)(v14 + 24) <= (int)a2 )
                  break;
                v14 = *(_QWORD *)(v14 + 8);
              }
              if ( *(_DWORD *)(v14 + 24) >= (int)a2 )
                break;
              v14 = *(_QWORD *)(v14 + 16);
            }
            if ( (_QWORD *)v14 == v13 )
            {
LABEL_19:
              if ( !under_debugger )
                sub_383060(0xC4C7u, a5);
              goto LABEL_35;
            }
          }
          v11 = 0;
          result = 0;
        }
LABEL_9:
        *(_DWORD *)(a1 + 344) = v9;
        break;
      case 1:
        result = sub_251610((_QWORD *)a1, a2, a3, a4);
        v9 = *(_DWORD *)(a1 + 344) - 1;
        v11 = result != 0;
        goto LABEL_9;
      case 2:
      case 3:
      case 4:
      case 0x10:
      case 0x11:
        sub_251760((_QWORD *)a1, a2, a3);
        v11 = 0;
        v9 = *(_DWORD *)(a1 + 344) - 1;
        result = 0;
        goto LABEL_9;
      case 5:
        sub_250A00((_QWORD *)a1, a2, a3);
        v11 = 0;
        v9 = *(_DWORD *)(a1 + 344) - 1;
        result = 0;
        goto LABEL_9;
      case 6:
      case 7:
      case 8:
      case 9:
        result = (__int64)sub_250350((_QWORD *)a1, a2, a3, a5);
        v9 = *(_DWORD *)(a1 + 344) - 1;
        v11 = result != 0;
        goto LABEL_9;
      case 0xA:
      case 0xB:
      case 0xC:
        sub_251B60((_QWORD *)a1, a2, a3);
        v11 = 0;
        v9 = *(_DWORD *)(a1 + 344) - 1;
        result = 0;
        goto LABEL_9;
      case 0xD:
      case 0xE:
        sub_250790((_QWORD *)a1, a2, a3);
        v11 = 0;
        v9 = *(_DWORD *)(a1 + 344) - 1;
        result = 0;
        goto LABEL_9;
      case 0xF:
        sub_251520((_QWORD *)a1, a2, a3);
        v11 = 0;
        v9 = *(_DWORD *)(a1 + 344) - 1;
        result = 0;
        goto LABEL_9;
      default:
        if ( !under_debugger )
          sub_383060(0xC4C8u, a5);
        goto LABEL_35;
    }
  }
  else
  {
    if ( !(_BYTE)a4 )
    {
      if ( !under_debugger )
        sub_383060(0xC4C6u, a5);
LABEL_35:
      BUG();
    }
    result = (__int64)sub_24FFD0((_QWORD *)a1, a2, 0, a4, a5);
    v11 = result != 0;
  }
  if ( v7 != v11 )
  {
    if ( !under_debugger )
      sub_383060(0xC4C9u, a5);
    goto LABEL_35;
  }
  return result;
}

