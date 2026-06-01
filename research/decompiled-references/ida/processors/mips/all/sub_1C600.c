__int64 __fastcall sub_1C600(unsigned int a1, int a2, int *a3, int *a4)
{
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // eax

  v6 = (unsigned __int16)a1 >> 11;
  v7 = (a1 >> 6) & 0x1F;
  v8 = (unsigned __int16)(a2 - 512);
  switch ( a2 )
  {
    case 512:
    case 560:
      v10 = v6 + 1;
      *a3 = v7;
      *a4 = v10;
      v11 = v7 + v10;
      goto LABEL_5;
    case 516:
    case 563:
      *a3 = v7;
      v6 = v6 + 1 - v7;
      *a4 = v6;
      goto LABEL_7;
    case 561:
      v12 = v6 + 33;
      *a3 = v7;
      *a4 = v12;
      v11 = v7 + v12;
      goto LABEL_5;
    case 562:
      v13 = v6 + 1;
      v14 = v7 + 32;
      *a3 = v14;
      *a4 = v13;
      v11 = v14 + v13;
      goto LABEL_5;
    case 564:
      v11 = v6 + 33;
      *a3 = v7;
      v8 = v11 - v7;
      *a4 = v11 - v7;
      goto LABEL_5;
    case 565:
      v6 = v6 + 1 - v7;
      v7 += 32;
      *a3 = v7;
      *a4 = v6;
      goto LABEL_7;
    default:
      *a3 = v7;
      v8 = 1;
      *a4 = v6;
      if ( (unsigned __int16)(a2 - 578) <= 1u )
        return v8;
LABEL_7:
      v8 = 0;
      if ( v6 <= 0 )
        return v8;
      v11 = v7 + v6;
LABEL_5:
      LOBYTE(v8) = v11 <= 64;
      return v8;
  }
}

