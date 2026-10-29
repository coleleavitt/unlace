__int64 __fastcall sub_18A670(__int64 a1, char a2)
{
  unsigned __int16 v2; // ax
  double v3; // rax
  unsigned int v4; // ebx
  double v6; // xmm0_8
  __int64 v7; // rax
  size_t v8; // r12
  _QWORD *v9; // rbp
  void *v10; // rax
  const void *v11; // rsi
  double v12; // [rsp+18h] [rbp-40h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  double v14; // [rsp+28h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v2 = *(_WORD *)(a1 + 64);
  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0.0;
  if ( v2 == 8 )
  {
    v3 = *(double *)(a1 + 88);
    goto LABEL_7;
  }
  if ( v2 <= 8u )
  {
    switch ( v2 )
    {
      case 4u:
        v7 = operator new(0x18u);
        v8 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)v7 = 0;
        v9 = (_QWORD *)v7;
        *(_OWORD *)(v7 + 8) = 0;
        if ( v8 )
        {
          v10 = (void *)sub_198760(v8);
          *v9 = v10;
          v11 = *(const void **)(a1 + 40);
          v9[2] = v8;
          memcpy(v10, v11, v8);
          v9[1] = v8;
        }
        if ( (_DWORD)v13 )
          sub_189C20((__int64)&v13);
        LODWORD(v13) = 2;
        v14 = *(double *)&v9;
        goto LABEL_10;
      case 7u:
        if ( (unsigned int)sub_190820(&v12, a1 + 88, 11) == 1 )
        {
          v6 = v12;
          if ( a2 )
          {
            v6 = -v12;
            v12 = -v12;
          }
          if ( (_DWORD)v13 )
            sub_189C20((__int64)&v13);
          LODWORD(v13) = 7;
          v14 = v6;
          goto LABEL_10;
        }
        break;
      case 3u:
        v3 = *(double *)(a1 + 72);
LABEL_7:
        LODWORD(v13) = 1;
        if ( a2 )
          *(_QWORD *)&v3 = -*(_QWORD *)&v3;
        v14 = v3;
        goto LABEL_10;
    }
LABEL_30:
    v4 = 47;
    goto LABEL_11;
  }
  switch ( v2 )
  {
    case 0x81u:
      LODWORD(v13) = 5;
      break;
    case 0x82u:
      LODWORD(v13) = 6;
      break;
    case 0x80u:
      LODWORD(v13) = 5;
      LOBYTE(v14) = 1;
      break;
    default:
      goto LABEL_30;
  }
LABEL_10:
  sub_18A3C0(a1, &v13, 0);
  v4 = 0;
LABEL_11:
  sub_189C20((__int64)&v13);
  return v4;
}
