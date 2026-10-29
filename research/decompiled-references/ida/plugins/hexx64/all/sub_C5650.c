_DWORD *__fastcall sub_C5650(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // r13
  _DWORD *result; // rax
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  _DWORD **v9; // rsi
  _BYTE *v10; // rax
  int v11; // r13d
  __int64 v12; // r14
  _DWORD **v13; // rdx
  __int64 v14; // rdx

  v3 = a2;
  result = (_DWORD *)sub_330E60(*(_QWORD *)(*(_QWORD *)(a1[40] + 528LL) + 8LL * a2), a3);
  if ( (result[1] & 2) == 0 || *result != 62 )
  {
    result = (_DWORD *)a1[16];
    v7 = (_DWORD *)a1[18];
    v8 = (_DWORD *)a1[20];
    v9 = (_DWORD **)(a1[19] + 8LL);
LABEL_4:
    if ( v8 == result )
    {
LABEL_9:
      v10 = (_BYTE *)sub_330E60(*(_QWORD *)(*(_QWORD *)(a1[40] + 528LL) + 8 * v3), a3);
      v11 = sub_BD290((__int64)a1, v10);
      result = (_DWORD *)a1[16];
      if ( result == (_DWORD *)a1[17] )
      {
        v12 = a1[19];
        if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)(a1[18] - (_QWORD)result) >> 2) + ((__int64)(a1[20] - a1[21]) >> 2))
           + 42 * ((a1[23] == 0) + ((a1[23] - v12) >> 3) - 1) == 0xAAAAAAAAAAAAAAALL )
          std::__throw_length_error("cannot create std::deque larger than max_size()");
        if ( v12 == a1[14] )
        {
          sub_C5460((__int64)(a1 + 14), 1u, 1);
          v12 = a1[19];
        }
        *(_QWORD *)(v12 - 8) = operator new(0x1F8u);
        v13 = (_DWORD **)(a1[19] - 8LL);
        a1[19] = v13;
        result = *v13;
        v14 = (__int64)(*v13 + 126);
        a1[17] = result;
        a1[18] = v14;
        a1[16] = result + 123;
        result[123] = a2;
        result[124] = a3;
        result[125] = v11;
      }
      else
      {
        *(result - 3) = a2;
        *(result - 2) = a3;
        *(result - 1) = v11;
        a1[16] -= 12LL;
      }
    }
    else
    {
      while ( *result != (_DWORD)v3 || result[1] != a3 )
      {
        result += 3;
        if ( v7 != result )
          goto LABEL_4;
        result = *v9++;
        v7 = result + 126;
        if ( v8 == result )
          goto LABEL_9;
      }
    }
  }
  return result;
}

