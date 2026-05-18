__int64 __fastcall sub_CA2B0(_BYTE *a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  while ( 1 )
  {
    result = (unsigned __int8)*a1;
    v3 = *a2;
    if ( (_DWORD)result == (_DWORD)v3 )
      break;
    result = byte_1BF000[result] - (unsigned int)byte_1BF000[v3];
    if ( (_DWORD)result )
      return result;
LABEL_3:
    ++a1;
    ++a2;
  }
  if ( *a1 )
    goto LABEL_3;
  return result;
}
