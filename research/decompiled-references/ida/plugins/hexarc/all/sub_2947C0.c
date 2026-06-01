__int64 __fastcall sub_2947C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 tinfo_size; // r13
  unsigned int v7; // ebx
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v9[0] = 0;
  tinfo_size = get_tinfo_size();
  if ( (unsigned __int8)sub_294040(*(_QWORD *)a3 + 32LL, a2, v9) && !get_tinfo_property() && (int)tinfo_size > 0 )
  {
    if ( (get_tinfo_property() & 0x3F) != 1 )
    {
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        if ( !sub_293C90(*(_QWORD *)(a2 + 1504), a4, *(_QWORD *)(*(_QWORD *)a3 + 24LL) % tinfo_size, (int)v9) )
        {
LABEL_9:
          v7 = -1;
          goto LABEL_3;
        }
        if ( (get_tinfo_property() & 0x2F) != 0xD )
        {
          v7 = lexcompare_tinfo() == 0;
          goto LABEL_3;
        }
      }
      else if ( !(unsigned __int8)compare_tinfo() )
      {
        goto LABEL_9;
      }
    }
    v7 = 1;
    goto LABEL_3;
  }
  v7 = 0;
LABEL_3:
  clear_tinfo_t();
  return v7;
}

