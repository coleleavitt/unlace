__int64 __fastcall sub_26A8B0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r15
  __int64 *v16; // r14
  __int64 v17; // r13
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx

  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
    case 1:
    case 0x10:
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
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
      return 0;
    case 2:
      v3 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v3 + 8) != 65 )
        return 0;
      v15 = *(int *)(v3 + 32);
      v16 = (__int64 *)(a1 + 96);
      v17 = 8 * v15;
      if ( !sub_64930((_QWORD *)(a1 + 96), *(_DWORD *)(v3 + 32)) )
      {
        sub_64190(v16, v15, a3);
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v15) = 0;
      }
      v18 = *(_QWORD *)(a2 + 32);
      if ( !sub_64930(v16, v15) )
        goto LABEL_32;
      v19 = *(_DWORD *)(v18 + 8);
      if ( v19 == 37 )
      {
        v20 = *(_QWORD *)(v18 + 24);
        if ( *(_DWORD *)(v20 + 8) == 61 || (v20 = *(_QWORD *)(v18 + 32), *(_DWORD *)(v20 + 8) == 61) )
        {
          if ( v20 )
          {
LABEL_24:
            v21 = sub_255A30(*(__int64 **)(v20 + 24));
            v22 = (unsigned __int64 *)(v17 + *(_QWORD *)(a1 + 72));
            v23 = *v22;
            if ( *v22 )
            {
              while ( 1 )
              {
                v24 = v21 % v23;
                v21 = v23;
                if ( !v24 )
                  break;
                v23 = v24;
              }
            }
            else
            {
              v23 = v21;
            }
LABEL_33:
            *v22 = v23;
            return 0;
          }
        }
      }
      else if ( v18 && v19 == 61 )
      {
        v20 = v18;
        goto LABEL_24;
      }
LABEL_32:
      v23 = 1;
      v22 = (unsigned __int64 *)(v17 + *(_QWORD *)(a1 + 72));
      goto LABEL_33;
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      v5 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v5 + 8) == 65 )
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * *(int *)(v5 + 32)) = 1;
      return 0;
    case 6:
    case 7:
      v6 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v6 + 8) != 65 )
        return 0;
      v7 = *(_QWORD *)(a2 + 32);
      v8 = 8LL * *(int *)(v6 + 32);
      if ( !sub_64930((_QWORD *)(a1 + 96), *(_DWORD *)(v6 + 32)) )
        goto LABEL_37;
      v9 = *(_DWORD *)(v7 + 8);
      if ( v9 != 37 )
      {
        if ( v7 && v9 == 61 )
        {
          v10 = v7;
          goto LABEL_12;
        }
LABEL_37:
        v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 72) + v8);
        v13 = 1;
        goto LABEL_38;
      }
      v10 = *(_QWORD *)(v7 + 24);
      if ( *(_DWORD *)(v10 + 8) != 61 )
      {
        v10 = *(_QWORD *)(v7 + 32);
        if ( *(_DWORD *)(v10 + 8) != 61 )
          goto LABEL_37;
      }
      if ( !v10 )
        goto LABEL_37;
LABEL_12:
      v11 = sub_255A30(*(__int64 **)(v10 + 24));
      v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 72) + v8);
      v13 = *v12;
      if ( *v12 )
      {
        while ( 1 )
        {
          v14 = v11 % v13;
          v11 = v13;
          if ( !v14 )
            break;
          v13 = v14;
        }
      }
      else
      {
        v13 = v11;
      }
LABEL_38:
      *v12 = v13;
      return 0;
    default:
      return 0;
  }
}

