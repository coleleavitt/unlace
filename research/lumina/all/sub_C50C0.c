_QWORD *__fastcall sub_C50C0(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rdx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = (__int64 *)*a1;
  if ( *a1 )
  {
    result = a1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *((_WORD *)v2 + 8) != *((_WORD *)a2 + 8) )
          goto LABEL_3;
        v4 = *v2;
        v5 = *a2;
        v6 = *a2 & *v2;
        if ( (*((_BYTE *)v2 + 49) & 0x40) != 0 && (a2[6] & 0xFFFF000000000201LL) == 0x201 )
          break;
        if ( v4 != v6 || *((_WORD *)v2 + 9) > *((_WORD *)a2 + 9) )
          goto LABEL_8;
        if ( *((_WORD *)v2 + 10) <= *((_WORD *)a2 + 10) )
          goto LABEL_21;
        if ( v5 == v4 )
          goto LABEL_10;
        result = v2 + 9;
        v2 = (__int64 *)v2[9];
        if ( !v2 )
          return result;
      }
      if ( v5 == v6 )
        return result;
      if ( v4 == v6 && *((_WORD *)v2 + 9) <= *((_WORD *)a2 + 9) && *((_WORD *)v2 + 10) <= *((_WORD *)a2 + 10) )
      {
LABEL_21:
        if ( *((_WORD *)v2 + 11) <= *((_WORD *)a2 + 11) )
          return nullptr;
LABEL_8:
        if ( v5 != v6 || *((_WORD *)v2 + 10) < *((_WORD *)a2 + 10) )
          goto LABEL_3;
LABEL_10:
        if ( *((_WORD *)v2 + 11) >= *((_WORD *)a2 + 11) )
          return result;
      }
LABEL_3:
      result = v2 + 9;
      v2 = (__int64 *)v2[9];
      if ( !v2 )
        return result;
    }
  }
  return a1;
}
