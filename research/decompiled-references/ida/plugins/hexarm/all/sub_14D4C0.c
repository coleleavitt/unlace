_BYTE *__fastcall sub_14D4C0(_QWORD *a1, _BYTE *a2)
{
  __int64 v2; // rdx
  _BYTE *result; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx

  v2 = 0;
  result = a2;
  if ( *a2 == 4 )
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)result + 1);
      if ( (unsigned int)(*(_DWORD *)v6 - 12) > 1 )
        break;
      if ( *(_BYTE *)(v6 + 48) == 2 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL);
        v5 = v2 - v4;
        v2 += v4;
        result = (_BYTE *)(v6 + 32);
        if ( *(_DWORD *)v6 != 12 )
          v2 = v5;
        if ( *(_BYTE *)(v6 + 32) == 4 )
          continue;
      }
      goto LABEL_2;
    }
    *a1 = v2;
  }
  else
  {
LABEL_2:
    *a1 = v2;
  }
  return result;
}

