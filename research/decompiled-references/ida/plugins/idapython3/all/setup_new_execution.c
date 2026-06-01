void __fastcall setup_new_execution(_BYTE *a1, const char *a2)
{
  if ( (_BYTE)a2 )
  {
    if ( *(_BYTE *)(qword_24798 + 1154) && (int)qword_24618 > 0 )
    {
      *a1 = 1;
      sub_10B60((__int64)&qword_24600);
    }
    else
    {
      *a1 = 0;
    }
  }
  else if ( !(_QWORD)xmmword_24608 || (*(_QWORD *)&xmmword_24608 = xmmword_24608 - 1, !(_QWORD)xmmword_24608) )
  {
    sub_10CB0((__int64)&qword_24600, a2);
  }
}

