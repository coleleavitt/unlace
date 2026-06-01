__int64 __fastcall sub_23050(char a1, int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebp
  int v11; // ecx
  __int64 result; // rax
  unsigned int v13; // ebp

  v9 = a2;
  if ( (a1 & 8) != 0 )
    LOBYTE(v11) = sub_22FB0(a3, *(unsigned __int8 *)(a4 + 32), a5, a6);
  else
    v11 = *(_DWORD *)(a4 + 8);
  switch ( *(_BYTE *)(a4 + 33) )
  {
    case 0:
      result = (unsigned int)(a2 << v11);
      break;
    case 1:
      result = (unsigned int)a2 >> v11;
      break;
    case 2:
      result = (unsigned int)(a2 >> v11);
      break;
    case 3:
      v9 = rotate_left();
      goto LABEL_5;
    case 4:
      v13 = (unsigned int)a2 >> 1;
      if ( (sub_22FB0(a3, 16, a5, a6) & 0x20000000) != 0 )
        v13 |= 0x80000000;
      result = v13;
      break;
    default:
LABEL_5:
      result = v9;
      break;
  }
  return result;
}

