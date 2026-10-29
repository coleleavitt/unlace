unsigned __int64 __fastcall sub_2A7C0(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 result; // rax
  __int64 *v5; // r14
  unsigned __int64 v6; // rdx
  int v7; // eax
  int v8; // r13d
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rsi
  __int64 v17; // rax

  result = (unsigned __int16)a3 >> 11;
  *(_BYTE *)(a2 + 1) = 4;
  *(_BYTE *)(a2 + 5) = a4;
  if ( a4 == 2 )
  {
    result = (unsigned int)(4 * result);
  }
  else if ( a4 > 2 )
  {
    result = (unsigned int)(8 * result);
  }
  else if ( a4 )
  {
    result = (unsigned int)(2 * result);
  }
  *(_QWORD *)(a2 + 16) = result;
  *(_WORD *)(a2 + 6) = BYTE2(a3) & 0x1F;
  if ( a1 )
  {
    v5 = *(__int64 **)a1;
    *(_BYTE *)(a1 + 24) = 1;
    if ( v5 )
    {
      v6 = v5[1];
      v7 = 8 * *(_DWORD *)(a1 + 8);
      v8 = v7 + 30;
      v9 = v7 + 16;
      v10 = v7 + 11;
      v11 = v7 + 23;
      if ( v11 >= 0 )
        v8 = v11;
      v12 = v8 >> 3;
      if ( v6 < v12 )
      {
        v16 = *v5;
        if ( v5[2] < v12 )
        {
          v17 = qvector_reserve(v5, v16, v12, 1);
          v6 = v5[1];
          *v5 = v17;
          v16 = v17;
        }
        memset((void *)(v16 + v6), 0, v12 - v6);
        v5[1] = v12;
        v5 = *(__int64 **)a1;
      }
      result = v10;
      v13 = *v5;
      if ( v10 < (unsigned __int64)v9 )
      {
        do
        {
          v14 = result;
          v15 = result++;
          *(_BYTE *)(v13 + (v14 >> 3)) |= 1 << (v15 & 7);
        }
        while ( v9 != result );
      }
    }
  }
  return result;
}

