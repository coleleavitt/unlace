__int64 __fastcall sub_28F70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int16 v7; // cx

  v3 = *(unsigned __int16 *)(a1 + 24);
  result = (unsigned int)(v3 - 30);
  if ( (unsigned int)result > 3 )
  {
    if ( (_WORD)v3 == 119 )
    {
      if ( (_DWORD)a2 )
        return result;
    }
    else
    {
      if ( (unsigned __int16)v3 > 0x77u )
      {
        if ( (unsigned __int16)v3 > 0x445u )
        {
          if ( (unsigned __int16)v3 > 0x50Du )
          {
            if ( (unsigned __int16)(v3 - 1551) > 3u )
              return result;
          }
          else
          {
            if ( (unsigned __int16)v3 <= 0x4D9u )
              return result;
            result = 0xF000F0F00000FLL;
            LOWORD(v3) = v3 - 1242;
            if ( !_bittest64(&result, v3) )
              return result;
          }
          goto LABEL_18;
        }
        if ( (unsigned __int16)v3 <= 0x423u )
        {
          if ( (unsigned __int16)v3 <= 0x3A4u )
          {
            if ( (unsigned __int16)v3 <= 0x3A2u )
              return result;
            goto LABEL_18;
          }
          v7 = v3 - 948;
          if ( v7 > 0x39u )
            return result;
          result = 1LL << v7;
          if ( ((1LL << v7) & 0x3C0FC0FC1F00000LL) == 0 )
          {
            if ( (result & 7) == 0 )
              return result;
            goto LABEL_18;
          }
        }
        else
        {
          result = 1LL << ((unsigned __int8)v3 - 36);
          if ( (result & 0x398063401LL) == 0 )
          {
            if ( (result & 0x800020) == 0 )
              return result;
LABEL_18:
            if ( *(__int64 *)(a1 + 40LL * (int)a2 + 48) < 0 )
              toggle_sign(*(_QWORD *)(a1 + 16), (unsigned int)a2);
          }
        }
        return set_op_type(*(_QWORD *)(a1 + 16), 0x22222202200000LL, (unsigned int)a2);
      }
      if ( (_WORD)v3 != 36 )
      {
        if ( (unsigned __int16)v3 <= 0x24u )
        {
          if ( (unsigned __int16)(v3 - 15) > 8u )
            return result;
          return set_op_type(*(_QWORD *)(a1 + 16), 0x22222202200000LL, (unsigned int)a2);
        }
        if ( (_WORD)v3 != 38 )
          return result;
      }
    }
LABEL_12:
    v5 = *(_QWORD *)(a1 + 16);
    v6 = num_flag(a1, a2, a3, v3);
    return set_op_type(v5, v6, (unsigned int)a2);
  }
  if ( *(_BYTE *)(a1 + 41) == 1 && *(_WORD *)(a1 + 46) == 29 )
    goto LABEL_12;
  return result;
}
