__int64 __fastcall sub_22650(__int64 a1)
{
  _BYTE *v2; // r14
  __int64 v3; // rbx
  char *v4; // r15
  __int64 v5; // r14

  if ( (get_flags_ex() & 0x4000) == 0 )
  {
    v2 = &unk_8B140;
    v3 = a1;
    while ( ((unsigned __int8)get_byte() & (unsigned __int8)~byte_8B120[++v3 - a1 - 1]) == *v2++ )
    {
      if ( v2 == (_BYTE *)&unk_8B158 )
      {
LABEL_6:
        set_name();
        return 1;
      }
    }
    v4 = (char *)&unk_8B0E0;
    v5 = a1;
    while ( ((unsigned __int8)get_byte() & (unsigned __int8)~*v4++) == byte_8B100[++v5 - a1 - 1] )
    {
      if ( v4 == (char *)&unk_8B0FA )
        goto LABEL_6;
    }
  }
  return 0;
}

