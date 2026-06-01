unsigned __int64 __fastcall sub_14440(__int64 a1, char a2)
{
  unsigned __int8 v2; // si
  unsigned __int8 v3; // cl
  char *v4; // rbp
  char *v5; // rsi
  int v7; // [rsp+Ch] [rbp-2Ch] BYREF
  __int16 v8; // [rsp+10h] [rbp-28h]
  int v9; // [rsp+12h] [rbp-26h] BYREF
  __int16 v10; // [rsp+16h] [rbp-22h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v7 = 5067606;
  v8 = 0;
  v9 = 5067606;
  v10 = 0;
  if ( a2 < 0 )
  {
    v2 = 2 * a2;
    v3 = v2 + 1;
    if ( (unsigned __int8)(v2 + 1) <= 9u )
    {
      HIBYTE(v7) = v2 + 49;
      HIBYTE(v9) = v2 + 48;
    }
    else
    {
      HIBYTE(v7) = v3 / 0xAu + 48;
      LOBYTE(v8) = v3 % 0xAu + 48;
      HIBYTE(v9) = v2 / 0xAu + 48;
      LOBYTE(v10) = v2 % 0xAu + 48;
    }
    v4 = (char *)&v9;
    v5 = (char *)&v7;
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        v4 = "AR0H";
        v5 = "AR1H";
        break;
      case 2:
        v4 = (char *)&word_1AB32;
        v5 = "ACC";
        break;
      case 3:
        v4 = "AR0";
        v5 = "AR1";
        break;
      case 4:
        v4 = "AR2";
        v5 = "AR3";
        break;
      case 5:
        v4 = "AR4";
        v5 = "AR5";
        break;
      case 6:
        v4 = "ST1";
        v5 = "DP";
        break;
      case 7:
        v4 = "ST0";
        v5 = "T";
        break;
      case 8:
        v4 = "R0H";
        v5 = "R1H";
        break;
      case 9:
        v4 = "R4H";
        v5 = "R2H";
        break;
      case 10:
        v4 = "R5H";
        v5 = "R3H";
        break;
      default:
        if ( !under_debugger )
          interr();
        BUG();
    }
  }
  (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v5, 33);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 58);
  (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 33);
  return v11 - __readfsqword(0x28u);
}

