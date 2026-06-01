__int64 __fastcall sub_29BB40(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  unsigned __int64 tinfo_size; // r13
  unsigned int v8; // ebx
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v10[0] = 0;
  tinfo_size = get_tinfo_size();
  if ( (unsigned __int8)sub_29B3C0(*(_QWORD *)a3 + 32LL, a2, v10, a5) && !get_tinfo_property() && (int)tinfo_size > 0 )
  {
    if ( (get_tinfo_property() & 0x3F) != 1 )
    {
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        if ( !sub_29B010(*(_QWORD *)(a2 + 1504), a4, *(_QWORD *)(*(_QWORD *)a3 + 24LL) % tinfo_size, (int)v10) )
        {
LABEL_9:
          v8 = -1;
          goto LABEL_3;
        }
        if ( (get_tinfo_property() & 0x2F) != 0xD )
        {
          v8 = lexcompare_tinfo() == 0;
          goto LABEL_3;
        }
      }
      else if ( !(unsigned __int8)compare_tinfo() )
      {
        goto LABEL_9;
      }
    }
    v8 = 1;
    goto LABEL_3;
  }
  v8 = 0;
LABEL_3:
  clear_tinfo_t();
  return v8;
}

