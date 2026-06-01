__int64 __fastcall sub_267EB0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // r10d
  unsigned __int64 *v11; // rbx
  __int64 result; // rax
  int v13; // r8d
  int v14; // r10d
  int v15; // r11d
  unsigned __int64 **v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // r13d

  v6 = *(_DWORD *)(a1 + 8);
  if ( a5 == v6 )
    return 1;
  v11 = (unsigned __int64 *)a1;
  switch ( a5 )
  {
    case 20:
    case 21:
      if ( (unsigned int)(v6 - 20) <= 1 )
        return 1;
      goto LABEL_11;
    case 35:
    case 36:
    case 42:
    case 43:
      if ( (unsigned int)(v6 - 42) > 1 && (unsigned int)(v6 - 35) > 1 )
        goto LABEL_11;
      return 1;
    case 37:
    case 38:
    case 39:
    case 44:
    case 45:
      if ( (unsigned int)(v6 - 44) <= 1 || (unsigned int)(v6 - 37) <= 2 )
        return 1;
      goto LABEL_11;
    default:
LABEL_11:
      v13 = *(_DWORD *)(a2 + 600);
      break;
  }
  while ( 1 )
  {
    v18 = v13 - a3;
    if ( v13 - a3 <= 20 )
      return 0;
    result = sub_262260((__int64)v11, a4);
    if ( !(_BYTE)result )
      return result;
    if ( v14 != 57 )
      break;
    v16 = (unsigned __int64 **)v11[4];
    v17 = (unsigned __int64)v16[1];
    if ( v17 > 1 )
      break;
    if ( !v17 )
      return 0;
    v11 = *v16;
    a3 = *(_DWORD *)(a2 + 592) + v15;
    a4 = 0;
    if ( !*((_DWORD *)*v16 + 2) )
      return 1;
  }
  if ( (unsigned __int8)sub_257BC0(a6, *v11) )
    return 1;
  return sub_267DE0((__int64)v11, a2, v18, a6, nullptr);
}

