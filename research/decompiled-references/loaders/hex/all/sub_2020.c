__int64 __fastcall sub_2020(int a1)
{
  int v1; // r8d
  char *v2; // rdx
  __int64 v3; // rax
  char v4; // cl
  char *v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int16 v8; // cx
  __int16 v9; // ax
  __int16 v11; // di
  char *v12; // [rsp+0h] [rbp-38h] BYREF
  char nptr[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( BYTE14(xmmword_51C0) < a1 )
      goto LABEL_20;
    v1 = 2 * a1 - 1;
    BYTE14(xmmword_51C0) -= a1;
  }
  else
  {
    v1 = 1;
  }
  v2 = nptr;
  v3 = xmmword_51C0 + 1;
  do
  {
    *(_QWORD *)&xmmword_51C0 = v3;
    v4 = *(_BYTE *)(v3 - 1);
    ++v2;
    ++v3;
    *(v2 - 1) = v4;
  }
  while ( v2 != &nptr[v1 + 1] );
  v5 = &nptr[v1 + 1];
  *v5 = 0;
  v6 = strtoul(nptr, &v12, 16);
  v7 = v6;
  if ( v12 != v5 )
LABEL_20:
    sub_2000();
  v8 = (unsigned __int8)v6;
  switch ( a1 )
  {
    case 3:
      v11 = WORD6(xmmword_51C0);
      goto LABEL_16;
    case 4:
      v11 = WORD6(xmmword_51C0) + HIBYTE(v6);
LABEL_16:
      v9 = v11 + BYTE2(v6) + BYTE1(v6);
      break;
    case 0:
      BYTE14(xmmword_51C0) = v6;
      goto LABEL_14;
    case 2:
      v9 = WORD6(xmmword_51C0) + BYTE1(v6);
      break;
    default:
      v9 = WORD6(xmmword_51C0);
      break;
  }
  v8 += v9;
LABEL_14:
  WORD6(xmmword_51C0) = v8;
  return v7;
}
