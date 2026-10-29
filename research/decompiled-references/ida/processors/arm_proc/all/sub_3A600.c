__int64 __fastcall sub_3A600(__int64 *a1, __int64 a2, int a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebp
  unsigned __int64 dtype_size; // rax

  v3 = *(unsigned __int8 *)(a2 + 5);
  if ( a3 )
    goto LABEL_9;
  v4 = *(unsigned __int16 *)(a2 + 6);
  if ( v4 - 129 > 0x41 )
  {
LABEL_13:
    sub_3A4C0(a1, v4, -1);
  }
  else
  {
    if ( (_BYTE)v3 != 17 || v4 != 162 )
LABEL_5:
      v3 = 7;
    while ( 1 )
    {
      dtype_size = get_dtype_size();
      a2 = v4;
      if ( sub_248F0(a1 + 1, v4, dtype_size) > 0 )
        break;
      if ( under_debugger )
        BUG();
      interr();
LABEL_9:
      v4 = *(unsigned __int8 *)(a2 + 32);
      if ( v4 - 129 > 0x41 )
        goto LABEL_13;
      if ( (_BYTE)v3 != 17 && (*(_BYTE *)(a2 + 33) & 0xFB) != 8 )
        goto LABEL_5;
      v3 = 2;
    }
  }
  return v3;
}

