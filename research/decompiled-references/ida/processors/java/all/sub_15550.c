_WORD *__fastcall sub_15550(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  _WORD *v4; // rbx
  unsigned __int16 v5; // ax
  int v6; // r13d
  unsigned __int16 v8; // r14

  if ( *a3 > 1u )
  {
    *a3 -= 2;
    v4 = a2 + 1;
    v5 = sub_19930(a1);
    v6 = v5;
    *a2 = v5;
    if ( !v5 )
      return v4;
    while ( *a3 > 1u )
    {
      *a3 -= 2;
      v8 = sub_19930(a1);
      if ( !sub_13D40(a1, 1, v8, 0x61u, nullptr) )
        break;
      *v4 = v8;
      v4 = (_WORD *)sub_152A0(a1, (__int64)(v4 + 1), a3, 0);
      if ( !v4 )
        break;
      if ( !--v6 )
        return v4;
    }
  }
  return nullptr;
}

