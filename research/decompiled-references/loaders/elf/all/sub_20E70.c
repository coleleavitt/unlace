__int64 __fastcall sub_20E70(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 result; // rax
  int dword; // r13d
  int v10; // r13d
  int v11; // ecx
  int v12; // r9d
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char byte; // r14
  char v18; // r14
  char v19; // al
  int v20; // r13d
  int v21; // r14d
  int v22; // r13d
  int v23; // r14d
  int v24; // r13d
  int v25; // r14d

  v5 = *(_QWORD *)(a2 + 4);
  v6 = *(_QWORD *)(a2 + 20);
  v7 = *(_QWORD *)(a4 + 16);
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      goto LABEL_7;
    case 1:
      sub_424F0(a1, v5, v6, v7, 4, 0, 0, 0);
      return 0;
    case 9:
      dword = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
      if ( (unsigned __int8)getinf_flag(3, 32) )
        v10 = (((_DWORD)v6 + 1 - (_DWORD)v5) << 8) | (unsigned __int8)dword;
      else
        v10 = (v6 + 1 - v5) & 0xFFFFFF | dword & 0xFF000000;
      auto_mark_range(v5 - 1, v5, 20);
      v11 = v10;
      v12 = 16;
      goto LABEL_6;
    case 0xA:
      v20 = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
      v21 = (unsigned __int16)(v6 + 1 - v5);
      if ( (unsigned __int8)getinf_flag(3, 32) )
      {
        v22 = (v21 << 16) | (unsigned __int16)v20;
      }
      else
      {
        LOWORD(v20) = 0;
        v22 = v21 | v20;
      }
      auto_mark_range(v5, v5 + 1, 20);
      v11 = v22;
      v12 = 15;
LABEL_6:
      sub_42050(a1, v5, v6, v11, 0, v12, 0, 0, 0);
      goto LABEL_7;
    case 0xB:
      v23 = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
      v24 = (unsigned __int8)(v6 + 1 - v5);
      if ( (unsigned __int8)getinf_flag(3, 32) )
      {
        v25 = ((unsigned __int8)v24 << 24) | v23 & 0xFFFFFF;
      }
      else
      {
        LOBYTE(v23) = 0;
        v25 = v24 | v23;
      }
      auto_mark_range(v5, v5 + 1, 20);
      sub_42050(a1, v5, v6, v25, 0, 14, 0, 0, 0);
LABEL_7:
      result = 0;
      break;
    case 0x12:
      v13 = v7 - v5;
      byte = get_byte(*(_QWORD *)(a2 + 4));
      if ( (unsigned __int64)(v7 - v5 - 3) > 7 )
        sub_40E00(v5, v7, v14, v15, v16);
      v18 = byte & 0xF8;
      v19 = v13 - 8;
      if ( v13 <= 7 )
        v19 = v7 - v5;
      put_byte(v5, (unsigned __int8)(v18 | v19));
      auto_mark_range(v5, v5 + 1, 20);
      sub_42050(a1, v5, v7, 0, 0, 13, 0, 0x80000000, 0);
      result = 0;
      break;
    default:
      result = 2;
      break;
  }
  return result;
}
