__int64 __fastcall sub_1D960(char **a1)
{
  __int64 result; // rax
  char *v2; // rcx
  char v3; // dl
  char v4; // si

  result = 6;
  while ( 1 )
  {
    v2 = *a1;
    v3 = aAxcxdxbxspbpsi[result + 32];
    v4 = **a1;
    if ( v3 != v4 && v4 != ((unsigned __int8)v3 | 0x20) )
      goto LABEL_4;
    *a1 = v2 + 1;
    if ( (v2[1] & 0xDF) == 0x53 )
      break;
    *a1 = v2;
LABEL_4:
    if ( !--result )
      return 0;
  }
  *a1 = v2 + 2;
  return result;
}

