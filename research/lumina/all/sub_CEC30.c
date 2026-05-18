__int64 __fastcall sub_CEC30(char *a1, char a2)
{
  char v2; // dl
  int i; // eax
  __int64 result; // rax

  v2 = *a1;
  for ( i = 0; (unsigned __int8)(*a1 + 83) <= 1u; v2 = *a1 )
  {
    a1 = *((char **)a1 + 2);
    if ( v2 == -83 )
      i = 1;
  }
  if ( v2 == -80 )
    v2 = a1[2];
  switch ( v2 )
  {
    case 117:
      result = (a2 == 66) & (i ^ 1u);
      break;
    case -103:
    case -101:
      result = a2 > 66;
      break;
    case -102:
      result = i ^ 1u;
      break;
    case -89:
      result = 0;
      if ( a2 > 66 )
        result = (unsigned int)*((__int16 *)a1 + 24) >> 31;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
