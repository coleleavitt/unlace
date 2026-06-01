__int64 __fastcall sub_3D60(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  char v8; // al
  char v10; // di
  __int64 v11; // rsi
  char v12; // cl
  _BYTE *v13; // rdx
  _BYTE *v14; // rsi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  do
  {
    *a4 = qlseek(a1, 0, 1);
    if ( !(unsigned __int8)sub_3C00((__int64 *)a2, a1) )
      return 0;
    v8 = *(_BYTE *)(a2 + 58);
  }
  while ( v8 == -86 );
  if ( (v8 & 0xFE) == 0x8A || v8 == 4 )
  {
    do
      v15 = qlgetc(a1);
    while ( !v15 );
    if ( v15 != -1 )
      qlseek(a1, -1, 1);
    v8 = *(_BYTE *)(a2 + 58);
  }
  if ( (a3 & 2) == 0 )
  {
    v10 = *(_BYTE *)(a2 + 59);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_WORD *)(a2 + 56) + HIBYTE(*(_WORD *)(a2 + 56)) + v8;
      if ( v11 )
      {
        v13 = *(_BYTE **)a2;
        v14 = (_BYTE *)(*(_QWORD *)a2 + v11);
        do
          v12 += *v13++;
        while ( v13 != v14 );
      }
      if ( v10 + v12 && !byte_81B9 )
      {
        byte_81B9 = 1;
        if ( (a3 & 4) != 0 )
        {
          if ( (int)sub_2EA0() <= 0 )
            return 0;
        }
        else
        {
          sub_2C40((__int64)"Input file checksum error");
        }
        v8 = *(_BYTE *)(a2 + 58);
      }
    }
  }
  if ( v8 == -13 && !*a4 && *(_WORD *)(a2 + 56) > 4u )
  {
    sub_3D20(a2, 1, 4);
    v16 = *(_QWORD *)(a2 + 48);
    v17 = *(unsigned int *)(*(_QWORD *)a2 + v16);
    *(_QWORD *)(a2 + 48) = v16 + 4;
    qlseek(a1, v17, 1);
    v18 = 0;
    qlread(a1, &v18, 4);
    if ( v18 )
      qlseek(a1, v18, 0);
  }
  return 1;
}
