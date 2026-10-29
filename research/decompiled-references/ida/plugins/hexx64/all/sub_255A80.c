__int64 __fastcall sub_255A80(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 i; // r12
  __int64 *v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // r12

  v6 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v6 & 0xFFFFFFFE;
  if ( (v6 & 0x10) != 0 )
  {
    if ( *(int *)(a2 + 8) <= 69 )
      return 0;
    if ( (v6 & 2) == 0 )
    {
LABEL_4:
      result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 16))(a1, a2);
      v8 = *((_DWORD *)a1 + 2);
      if ( (_DWORD)result )
        goto LABEL_5;
      goto LABEL_12;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    if ( *(int *)(a2 + 8) > 69 )
      goto LABEL_4;
    goto LABEL_11;
  }
  v10 = a1[3];
  v11 = a1[2];
  if ( a1[4] < (unsigned __int64)(v10 + 1) )
  {
    v15 = qvector_reserve((__int64)(a1 + 2), v11, v10 + 1, 8);
    a1[2] = v15;
    v11 = v15;
    v10 = a1[3];
  }
  *(_QWORD *)(v11 + 8 * v10) = a3;
  ++a1[3];
  if ( *(int *)(a2 + 8) > 69 )
    goto LABEL_4;
LABEL_11:
  result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 24))(a1, a2);
  v8 = *((_DWORD *)a1 + 2);
  if ( (_DWORD)result )
    goto LABEL_5;
LABEL_12:
  if ( (v8 & 1) == 0 )
  {
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 0:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x4E:
      case 0x4F:
      case 0x51:
      case 0x52:
        goto LABEL_23;
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
        result = sub_255A80(a1, *(_QWORD *)(a2 + 24), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        v16 = *(_QWORD *)(a2 + 32);
        goto LABEL_33;
      case 0x10:
        result = sub_255A80(a1, *(_QWORD *)(a2 + 24), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        result = sub_255A80(a1, *(_QWORD *)(a2 + 32), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        v16 = *(_QWORD *)(a2 + 40);
        goto LABEL_33;
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
      case 0x42:
      case 0x43:
      case 0x48:
      case 0x50:
      case 0x54:
        goto LABEL_32;
      case 0x39:
        result = sub_255A80(a1, *(_QWORD *)(a2 + 24), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        v12 = *(__int64 **)(a2 + 32);
        v13 = *v12;
        if ( !(72 * v12[1]) )
          goto LABEL_22;
        while ( 1 )
        {
          result = sub_255A80(a1, v13, a2);
          if ( (_DWORD)result )
            goto LABEL_26;
          v13 += 72;
          if ( v13 == **(_QWORD **)(a2 + 32) + 72LL * *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) )
            goto LABEL_22;
        }
      case 0x47:
        result = sub_256240((__int64)a1, *(_QWORD ***)(a2 + 24), a2);
        v8 = *((_DWORD *)a1 + 2);
        if ( (_DWORD)result )
          goto LABEL_5;
        goto LABEL_23;
      case 0x49:
        v22 = *(__int64 **)(a2 + 24);
        result = sub_255A80(a1, v22[8], a2);
        if ( !(_DWORD)result )
        {
          v23 = v22[9];
          if ( !v23 )
            goto LABEL_49;
          result = sub_255A80(a1, v23, a2);
          if ( !(_DWORD)result )
            goto LABEL_49;
        }
        goto LABEL_26;
      case 0x4A:
        result = sub_255A80(a1, *(_QWORD *)(a2 + 24) + 72LL, a2);
        if ( !(_DWORD)result )
        {
          result = sub_255A80(a1, *(_QWORD *)(a2 + 24) + 136LL, a2);
          if ( !(_DWORD)result )
            goto LABEL_31;
        }
        goto LABEL_26;
      case 0x4B:
      case 0x4C:
LABEL_31:
        result = sub_255A80(a1, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
LABEL_32:
        v16 = *(_QWORD *)(a2 + 24);
        goto LABEL_33;
      case 0x4D:
        v22 = *(__int64 **)(a2 + 24);
        v24 = v22[14];
        if ( !(56 * v22[15]) )
          goto LABEL_49;
        while ( 1 )
        {
          result = sub_255A80(a1, v24, a2);
          if ( (_DWORD)result )
            goto LABEL_26;
          v24 += 56;
          if ( v24 == v22[14] + 56 * v22[15] )
          {
            v22 = *(__int64 **)(a2 + 24);
LABEL_49:
            v16 = (__int64)v22;
LABEL_33:
            if ( !v16 )
              goto LABEL_22;
            result = sub_255A80(a1, v16, a2);
            v8 = *((_DWORD *)a1 + 2);
            if ( !(_DWORD)result )
              goto LABEL_23;
            goto LABEL_5;
          }
        }
      case 0x53:
        result = sub_256240((__int64)a1, *(_QWORD ***)(a2 + 24), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        v17 = *(_QWORD *)(a2 + 24);
        v18 = *(_QWORD *)(v17 + 24);
        v19 = v18 + 48LL * *(_QWORD *)(v17 + 32);
        if ( v19 == v18 )
          goto LABEL_22;
        break;
      default:
        if ( !under_debugger )
          sub_383060(0xC391u, a4);
        BUG();
    }
    while ( 1 )
    {
      result = sub_256240((__int64)a1, (_QWORD **)v18, a2);
      if ( (_DWORD)result )
        goto LABEL_26;
      v20 = *(_QWORD *)(v18 + 24);
      for ( i = v20 + 88LL * *(_QWORD *)(v18 + 32); i != v20; v20 += 88 )
      {
        result = sub_255A80(a1, v20, a2);
        if ( (_DWORD)result )
          goto LABEL_26;
      }
      v18 += 48;
      if ( v19 == v18 )
      {
LABEL_22:
        v8 = *((_DWORD *)a1 + 2);
        break;
      }
    }
  }
LABEL_23:
  result = v8 & 4;
  if ( (v8 & 4) == 0 )
    goto LABEL_5;
  v14 = *a1;
  if ( *(int *)(a2 + 8) > 69 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v14 + 32))(a1, a2);
LABEL_26:
    v8 = *((_DWORD *)a1 + 2);
    goto LABEL_5;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v14 + 40))(a1, a2);
  v8 = *((_DWORD *)a1 + 2);
LABEL_5:
  if ( (v8 & 2) != 0 )
  {
    v9 = a1[3];
    if ( v9 )
      a1[3] = v9 - 1;
  }
  return result;
}

