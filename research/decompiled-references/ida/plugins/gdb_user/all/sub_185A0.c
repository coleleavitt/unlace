__int64 __fastcall sub_185A0(__int64 a1)
{
  char *v1; // rax
  __int64 v2; // r12
  char v4; // cl
  __int16 v5; // di
  __int16 v6; // si
  char v7; // bp
  __int16 v8; // dx
  __int64 v9; // rdx
  __int64 result; // rax
  char v11; // al

  v1 = byte_59620;
  v2 = 0;
  v4 = *(_BYTE *)(a1 + 616);
  v5 = *(_WORD *)(a1 + 522);
  v6 = __ROL2__(v5, 8);
  while ( 1 )
  {
    v7 = v1[2];
    if ( v4 != v7 )
      break;
    if ( *(_WORD *)v1 == v5 && (unsigned __int16)(*(_WORD *)(a1 + 520) - 2) <= 1u )
      goto LABEL_7;
LABEL_10:
    ++v2;
    v1 += 4;
    if ( v2 == 3 )
      return 1;
  }
  if ( *(_WORD *)v1 != v6 )
    goto LABEL_10;
  v8 = *(_WORD *)(a1 + 520);
  HIBYTE(v8) &= ~1u;
  if ( v8 != 512 )
    goto LABEL_10;
  *(_WORD *)(a1 + 522) = v6;
  v9 = *(unsigned __int8 *)(a1 + 509);
  *(_WORD *)(a1 + 520) = __ROL2__(*(_WORD *)(a1 + 520), 8);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 496))(a1, 3, v9);
  if ( !(_BYTE)result )
    return result;
  *(_BYTE *)(a1 + 616) = v7;
LABEL_7:
  v11 = byte_59620[4 * v2 + 3];
  *(_BYTE *)(a1 + 618) = v11;
  if ( !v11 )
    *(_BYTE *)(a1 + 617) = 0;
  return 1;
}

