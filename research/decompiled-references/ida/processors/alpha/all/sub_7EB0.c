__int64 __fastcall sub_7EB0(__int64 a1, _WORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  v13[0] = 0;
  copy_tinfo_t();
  v7 = a2[12];
  if ( v7 != 118 )
  {
    if ( v7 > 0x76u )
    {
      if ( v7 == 208 )
      {
        v8 = (__int64)(a2 + 20);
        if ( (unsigned __int16)a2[43] == a3 )
          goto LABEL_8;
        goto LABEL_17;
      }
LABEL_13:
      if ( (unsigned int)get_spoiled_reg() == -1 )
        goto LABEL_17;
LABEL_14:
      v9 = -2;
      goto LABEL_9;
    }
    if ( v7 == 108 )
    {
      if ( (unsigned __int16)a2[23] == a3 )
      {
        remove_tinfo_pointer();
        goto LABEL_6;
      }
LABEL_17:
      v9 = -1;
      goto LABEL_9;
    }
    if ( v7 != 116 )
    {
      if ( v7 == 22 || v7 == 106 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
LABEL_6:
  if ( (unsigned __int16)a2[23] != a3 )
    goto LABEL_17;
  v8 = (__int64)(a2 + 40);
LABEL_8:
  v9 = (unsigned __int8)sub_7B80(a1, a2, v8, (__int64)v13, a5, a6);
LABEL_9:
  clear_tinfo_t();
  return v9;
}

