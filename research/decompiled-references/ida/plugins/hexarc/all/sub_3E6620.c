__int64 __fastcall sub_3E6620(__int64 a1, int a2, char a3)
{
  char v3; // r12
  int v4; // ebx
  __int64 result; // rax
  int dtype_size; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax

  v3 = a3;
  switch ( a2 )
  {
    case 1:
      v4 = 1;
      goto LABEL_4;
    case 2:
      v3 = a3 ^ 1;
      v4 = 1;
      goto LABEL_4;
    case 3:
      v3 = a3 ^ 1;
      goto LABEL_15;
    case 4:
LABEL_15:
      v4 = 2;
      goto LABEL_4;
    case 5:
      goto LABEL_17;
    case 6:
      v3 = a3 ^ 1;
LABEL_17:
      v4 = 0;
      goto LABEL_4;
    case 7:
      goto LABEL_3;
    case 8:
      v3 = a3 ^ 1;
LABEL_3:
      v4 = 3;
      goto LABEL_4;
    case 9:
      v3 = a3 ^ 1;
      goto LABEL_10;
    case 10:
      v3 = a3 ^ 1;
      goto LABEL_7;
    case 11:
LABEL_7:
      dtype_size = get_dtype_size();
      sub_1CF210(a1, 0x15u, dtype_size, 2, 3, 280, 0);
      v4 = 280;
      if ( v3 )
        goto LABEL_8;
      goto LABEL_5;
    case 12:
LABEL_10:
      v8 = get_dtype_size();
      sub_1CF210(a1, 0x15u, v8, 2, 3, 280, 0);
      v9 = get_dtype_size();
      v10 = 1;
      v11 = 280;
      goto LABEL_11;
    case 13:
      v3 = a3 ^ 1;
      goto LABEL_13;
    case 14:
LABEL_13:
      v9 = get_dtype_size();
      v10 = 0;
      v11 = 1;
LABEL_11:
      v4 = 280;
      sub_1CF210(a1, 0x13u, v9, v11, v10, 280, 0);
      goto LABEL_4;
    case 15:
      v3 = a3 ^ 1;
      v4 = 280;
      v12 = get_dtype_size();
      sub_1CF210(a1, 0x13u, v12, 2, 1, 280, 0);
LABEL_4:
      if ( !v3 )
        goto LABEL_5;
LABEL_8:
      v7 = get_dtype_size();
      sub_1CF210(a1, 6u, v7, v4, 0x3BEA45E214ADDC55LL, 280, 0);
      result = 280;
      break;
    default:
      v4 = -1;
LABEL_5:
      result = (unsigned int)v4;
      break;
  }
  return result;
}

