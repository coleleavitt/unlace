_DWORD *__fastcall sub_C5090(_QWORD *a1, int a2, unsigned int a3)
{
  __int64 v3; // r13
  _DWORD *result; // rax
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  _DWORD **v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r13d
  __int64 v16; // r14
  _DWORD **v17; // rdx
  __int64 v18; // rdx

  v3 = a2;
  result = (_DWORD *)sub_331180(*(_QWORD *)(*(_QWORD *)(a1[40] + 528LL) + 8LL * a2), a3);
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
      v10 = sub_331180(*(_QWORD *)(*(_QWORD *)(a1[40] + 528LL) + 8 * v3), a3);
      v15 = sub_BCCD0((__int64)a1, v10, v11, v12, v13, v14);
      result = (_DWORD *)a1[16];
      if ( result == (_DWORD *)a1[17] )
      {
        v16 = a1[19];
        if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)(a1[18] - (_QWORD)result) >> 2) + ((__int64)(a1[20] - a1[21]) >> 2))
           + 42 * ((a1[23] == 0) + ((a1[23] - v16) >> 3) - 1) == 0xAAAAAAAAAAAAAAALL )
          std::__throw_length_error("cannot create std::deque larger than max_size()");
        if ( v16 == a1[14] )
        {
          sub_C4EA0((__int64)(a1 + 14), 1u, 1u);
          v16 = a1[19];
        }
        *(_QWORD *)(v16 - 8) = operator new(0x1F8u);
        v17 = (_DWORD **)(a1[19] - 8LL);
        a1[19] = v17;
        result = *v17;
        v18 = (__int64)(*v17 + 126);
        a1[17] = result;
        a1[18] = v18;
        a1[16] = result + 123;
        result[123] = a2;
        result[124] = a3;
        result[125] = v15;
      }
      else
      {
        *(result - 3) = a2;
        *(result - 2) = a3;
        *(result - 1) = v15;
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

