__int64 __fastcall sub_27FDE0(_DWORD a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 result; // rax
  unsigned int v7; // r14d
  unsigned int tinfo_size; // eax
  char tinfo_property; // al
  char v10; // al
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 1504);
  switch ( *(_DWORD *)(a3 + 8) )
  {
    case 2:
      if ( *(_QWORD *)(a3 + 32) == a4 )
        goto LABEL_17;
      goto LABEL_3;
    case 3:
    case 4:
    case 5:
      if ( *(_QWORD *)(a3 + 32) == a4 )
        goto LABEL_8;
      goto LABEL_3;
    case 6:
    case 7:
      if ( *(_QWORD *)(a3 + 32) != a4 )
        goto LABEL_3;
      v7 = 1;
      if ( (get_tinfo_property() & 0xF) == 0xA )
        goto LABEL_9;
LABEL_17:
      copy_tinfo_t();
      goto LABEL_6;
    case 9:
    case 0xA:
    case 0xB:
    case 0x20:
    case 0x21:
    case 0x22:
      if ( *(_QWORD *)(a3 + 24) == a4 )
        goto LABEL_3;
      v11[0] = 50;
      copy_tinfo_t();
      clear_tinfo_t();
      goto LABEL_6;
    case 0x33:
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
        goto LABEL_17;
      sub_327610(v11, v4, a3 + 48);
      copy_tinfo_t();
      clear_tinfo_t();
      goto LABEL_6;
    case 0x39:
      if ( *(_QWORD *)(a3 + 24) == a4 )
        goto LABEL_3;
      sub_27FAE0(a3, a4, nullptr);
      copy_tinfo_t();
      goto LABEL_6;
    case 0x3A:
      if ( *(_QWORD *)(a3 + 24) != a4 )
        goto LABEL_3;
      sub_327610(v11, *(_QWORD *)(a2 + 1504), a3 + 48);
      copy_tinfo_t();
      clear_tinfo_t();
      goto LABEL_6;
    case 0x4D:
      v10 = get_tinfo_property();
      if ( (v10 & 0x3E) != 0 && (v10 & 0xFu) <= 8 )
        goto LABEL_3;
LABEL_8:
      v7 = 2;
LABEL_9:
      tinfo_size = get_tinfo_size();
      sub_327500(v11, v4, tinfo_size, v7);
      copy_tinfo_t();
      clear_tinfo_t();
      goto LABEL_6;
    case 0x50:
      if ( !*(_DWORD *)(a4 + 8) )
        goto LABEL_3;
      sub_368820(v11, a2, 0);
      copy_tinfo_t();
      clear_tinfo_t();
LABEL_6:
      result = 1;
      break;
    default:
LABEL_3:
      result = 0;
      break;
  }
  return result;
}

