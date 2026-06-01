__int64 __fastcall sub_6DBE0(__int64 a1)
{
  char v1; // al
  __int64 qword; // rbx
  int v4; // ecx
  __int64 v5; // rax

  if ( !(unsigned __int8)is_loaded() )
    return 0;
  v1 = *(_BYTE *)(a1 + 5);
  switch ( v1 )
  {
    case 7:
      qword = get_qword();
      break;
    case 2:
      qword = (unsigned int)get_dword();
      break;
    case 1:
      qword = (unsigned __int16)get_word();
      break;
    default:
      return 0;
  }
  if ( !qword )
    return 0;
  v4 = 8 * get_dtype_size();
  v5 = -1;
  if ( (unsigned __int64)v4 <= 0x3F )
    v5 = (1LL << v4) - 1;
  if ( qword == v5 )
    return 0;
  return qword;
}
