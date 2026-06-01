__int64 __fastcall sub_ED20(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx

  result = (unsigned int)*(unsigned __int8 *)(a2 + 24) - 10;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u )
  {
    v3 = *(_QWORD *)(a2 + 8);
    result = *(_QWORD *)a2;
    v4 = 24 * v3;
    v5 = *(_QWORD *)result;
    v6 = (_QWORD *)(result + 24 * v3);
    if ( v3 == 1 || (v7 = (_QWORD *)(result + 24), v4 == 24) )
    {
LABEL_8:
      if ( (_QWORD *)result == v6 )
      {
LABEL_14:
        *a1 &= ~0x80u;
        result = get_flags_ex(v5, 4);
        if ( (result & 0x4000) == 0 )
          return set_name(v5, "localpic", 6912);
      }
      else
      {
        while ( (*(_BYTE *)(result + 18) & 0x10) != 0 )
        {
          result += 24;
          if ( v6 == (_QWORD *)result )
            goto LABEL_14;
        }
      }
    }
    else
    {
      while ( *v7 == v5 )
      {
        v7 += 3;
        if ( v6 == v7 )
          goto LABEL_8;
      }
    }
  }
  return result;
}

