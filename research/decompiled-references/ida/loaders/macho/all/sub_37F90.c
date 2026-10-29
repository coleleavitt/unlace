__int64 __fastcall sub_37F90(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  result = *(_QWORD *)(a1 + 5208);
  v2 = result + 16;
  v3 = 48LL * *(_QWORD *)(a1 + 5216);
  v4 = result + v3;
  v10 = result + v3;
  if ( result + v3 != result )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 - 16);
      v6 = *(_QWORD *)(v2 - 8);
      v7 = 0;
      if ( v5 < v6 )
        break;
LABEL_13:
      result = v2 + 48;
      if ( v10 == v2 + 32 )
        return result;
      v2 += 48;
    }
    while ( 1 )
    {
      result = callui(27, v4, v3);
      if ( (_BYTE)result )
        break;
      v9 = *(_QWORD *)(a1 + 13680) + 1LL;
      *(_QWORD *)(a1 + 13680) = v9;
      if ( v9 == 10000 )
      {
        sub_19440((__int64)"Renaming section pointers (%a)");
        *(_QWORD *)(a1 + 13680) = 0;
      }
      v4 = v5;
      if ( !(unsigned __int8)sub_37B10(a1, v5, *(_DWORD *)(v2 + 24), v2, v7, *(unsigned __int8 *)(v2 + 28)) )
        goto LABEL_13;
      v8 = 8;
      if ( !*(_BYTE *)(a1 + 13692) )
        v8 = 4;
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) - v5;
      if ( v3 < v8 )
        goto LABEL_13;
      v5 += v8;
      if ( v5 >= v6 )
        goto LABEL_13;
      ++v7;
    }
  }
  return result;
}

