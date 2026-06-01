unsigned __int64 __fastcall sub_6BC0(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v3; // cl
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  next_byte = insn_get_next_byte();
  v3 = 2;
  *(_BYTE *)(a2 + 1) = 2;
  v4 = *(unsigned __int16 *)(a1 + 24);
  if ( (_WORD)v4 != 73 )
  {
    if ( (unsigned __int16)v4 <= 0x49u )
    {
      v3 = (_WORD)v4 == 8 || (unsigned __int16)(v4 - 58) <= 3u;
    }
    else
    {
      if ( (unsigned __int16)v4 > 0x116u )
        goto LABEL_17;
      if ( (unsigned __int16)v4 > 0xDCu )
      {
        v5 = 0x3F24C93E799F259LL;
        LOWORD(v4) = v4 - 221;
        v3 = _bittest64(&v5, v4);
        goto LABEL_6;
      }
      if ( (unsigned __int16)v4 > 0xDAu )
      {
LABEL_17:
        v3 = 0;
      }
      else if ( (unsigned __int16)v4 > 0xB2u )
      {
        v9 = 0xFF0000009DLL;
        LOWORD(v4) = v4 - 179;
        v3 = _bittest64(&v9, v4);
      }
      else
      {
        v3 = 1;
        if ( (unsigned __int16)v4 > 0x4Du )
        {
          v7 = 0x100007800000001LL;
          v8 = (unsigned int)(v4 - 82);
          v3 = _bittest64(&v7, v8);
          if ( (unsigned __int16)v8 >= 0x39u )
            v3 = 0;
        }
      }
    }
  }
LABEL_6:
  *(_BYTE *)(a2 + 5) = v3;
  *(_QWORD *)(a2 + 16) = next_byte;
  if ( (unsigned __int8)get_fixup() )
    *(_QWORD *)(a2 + 16) = 0;
  *(_BYTE *)(a2 + 32) |= 0x20u;
  return v10 - __readfsqword(0x28u);
}

