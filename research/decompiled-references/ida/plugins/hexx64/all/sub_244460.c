_QWORD *__fastcall sub_244460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // rbp

  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(0xC4CAu, a6);
    BUG();
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 != 1 )
  {
    switch ( v7 )
    {
      case 0x11u:
        *(_DWORD *)(a2 + 8) = 18;
        goto LABEL_10;
      case 0x12u:
        *(_DWORD *)(a2 + 8) = 17;
LABEL_10:
        *(_QWORD *)(a2 + 24) = sub_244460(a1, *(_QWORD *)(a2 + 24), a3, a4, a5);
        break;
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
        *(_DWORD *)(a2 + 8) = sub_254C70(v7);
        return (_QWORD *)a2;
      case 0x31u:
        v8 = *(_DWORD *)(a2 + 12);
        if ( v8 == -1 )
          goto LABEL_17;
        a3 = *(_QWORD *)(a2 + 24);
        if ( *(_DWORD *)(a3 + 12) != -1 )
          goto LABEL_6;
        *(_DWORD *)(a3 + 12) = v8;
LABEL_17:
        v10 = *(_QWORD **)(a2 + 24);
        if ( *v10 == -1 )
        {
          *v10 = *(_QWORD *)a2;
          v10 = *(_QWORD **)(a2 + 24);
        }
        *(_DWORD *)(a2 + 8) = 0;
        sub_255630(a2);
        clear_tinfo_t();
        j__qfree(a2);
        return v10;
      case 0x3Du:
        **(_QWORD **)(a2 + 24) = sub_255A30(*(__int64 **)(a2 + 24)) == 0;
        return (_QWORD *)a2;
      default:
LABEL_6:
        v9 = j__qalloc_or_throw(64, a2, a3, a4);
        *(_QWORD *)v9 = -1;
        v10 = (_QWORD *)v9;
        *(_DWORD *)(v9 + 8) = 49;
        *(_QWORD *)(v9 + 12) = -1;
        *(_QWORD *)(v9 + 24) = a2;
        *(_QWORD *)(v9 + 32) = 0;
        *(_QWORD *)(v9 + 40) = 0;
        *(_QWORD *)(v9 + 48) = 0;
        *(_DWORD *)(v9 + 56) = 0;
        *(_QWORD *)v9 = *(_QWORD *)a2;
        goto LABEL_7;
    }
  }
  v10 = (_QWORD *)a2;
  *(_QWORD *)(a2 + 32) = sub_244460(a1, *(_QWORD *)(a2 + 32), a3, a4, a5);
LABEL_7:
  sub_2441C0((__int64)v10, a1, 0, a6);
  return v10;
}

