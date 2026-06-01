__int64 __fastcall sub_248280(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  unsigned __int64 v6; // r15
  bool v7; // r15
  int v8; // eax
  __int64 tinfo_size; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  char tinfo_property; // al
  unsigned __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rsi
  _QWORD v17[8]; // [rsp+10h] [rbp-40h] BYREF

  v17[1] = __readfsqword(0x28u);
  v17[0] = 0;
  copy_tinfo_t();
  if ( !*(_BYTE *)a3 || (get_tinfo_property() & 0x3F) == 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC4DFu, a4);
    BUG();
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(a2 + 8);
    if ( v8 != 48 )
    {
      if ( v8 == 57 )
        goto LABEL_15;
LABEL_9:
      if ( (unsigned int)(v8 - 64) <= 1 )
        goto LABEL_16;
LABEL_10:
      tinfo_size = get_tinfo_size();
      if ( tinfo_size != get_tinfo_size() )
        sub_244D80((__int64 *)a2, (__int64)v17, v10, v11);
      sub_246640(a1, a2, (__int64)a3, v11);
      goto LABEL_13;
    }
    v6 = get_tinfo_size();
    if ( v6 < get_tinfo_size() )
      break;
    v7 = (get_tinfo_property() & 0xF) == 9;
    if ( v7 != ((get_tinfo_property() & 0xF) == 9) )
      break;
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
  }
  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 != 57 )
    goto LABEL_9;
LABEL_15:
  if ( !get_tinfo_property() )
  {
    v8 = *(_DWORD *)(a2 + 8);
    goto LABEL_9;
  }
LABEL_16:
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D && !get_tinfo_property() )
    goto LABEL_10;
  v14 = get_tinfo_size();
  if ( get_tinfo_size() < v14 )
    goto LABEL_10;
  v15 = get_tinfo_size();
  v16 = sub_2476A0(a1, -1, a2, 0, a3, v15, a4, 0);
  if ( a2 != v16 )
    sub_23EB80((_QWORD *)a2, v16);
LABEL_13:
  clear_tinfo_t();
  return 1;
}

