unsigned __int64 __fastcall sub_27D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v4; // [rsp+8h] [rbp-430h] BYREF
  _BYTE v5[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v6; // [rsp+418h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  qlseek(a1, a2, 0);
  while ( 1 )
  {
    v4 = 0;
    lread(a1, &v4, 1);
    v2 = v4;
    if ( !v4 )
      break;
    if ( v4 > 0x400 )
    {
      v4 = 1024;
      v2 = 1024;
    }
    lread(a1, v5, v2);
    v5[v4] = 0;
    lread(a1, &v4, 2);
    if ( (_WORD)v4 )
      rename_entry((unsigned __int16)v4, v5, 1);
  }
  return v6 - __readfsqword(0x28u);
}

