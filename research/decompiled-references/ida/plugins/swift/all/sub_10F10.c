__int64 __fastcall sub_10F10(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int64 v4; // rsi
  const char *v5; // rax
  __int64 result; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_DWORD *)(a2 + 68);
  v4 = *(_QWORD *)(a3 + 8);
  switch ( v3 )
  {
    case 3:
      v8 = s1;
      if ( v4 )
        v8 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the type '%s' with the unsupported description", v8);
      result = a1;
      break;
    case 4:
      v9 = s1;
      if ( v4 )
        v9 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the unknown type '%s'", v9);
      result = a1;
      break;
    case 5:
      v10 = s1;
      if ( v4 )
        v10 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the incorrect type '%s'", v10);
      result = a1;
      break;
    case 6:
      v11 = s1;
      if ( v4 )
        v11 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the type '%s' that is not compatible with IDA", v11);
      result = a1;
      break;
    case 7:
      v12 = s1;
      if ( v4 )
        v12 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the type '%s' without definition in IDA", v12);
      result = a1;
      break;
    case 8:
      v13 = s1;
      if ( v4 )
        v13 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the type '%s' that already exists in IDA", v13);
      result = a1;
      break;
    case 9:
      v14 = s1;
      if ( v4 )
        v14 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the type '%s' with a bad nested element type", v14);
      result = a1;
      break;
    case 10:
      v5 = s1;
      if ( v4 )
        v5 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the type '%s' with a bad field type", v5);
      result = a1;
      break;
    case 11:
      v7 = s1;
      if ( v4 )
        v7 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the type '%s' with a bad value type", v7);
      result = a1;
      break;
    default:
      v15 = s1;
      if ( v4 )
        v15 = *(const char **)a3;
      sub_10D20((__int64 *)a1, (__int64)"the type '%s' with bad state %u", v15, v3);
      result = a1;
      break;
  }
  return result;
}

