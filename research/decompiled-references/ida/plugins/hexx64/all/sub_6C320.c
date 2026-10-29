unsigned __int64 __fastcall sub_6C320(_QWORD *a1, int a2, double a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v4 = a2;
  v13 = __readfsqword(0x28u);
  sub_673C0((__int64)a1, a2, a3);
  v5 = a1[39];
  v12 = 0;
  if ( a2 < v5 )
  {
LABEL_9:
    a1[39] = v4;
    return v13 - __readfsqword(0x28u);
  }
  if ( v5 < a2 )
  {
    v7 = a1[38];
    v8 = a1[40];
    v9 = a1 + 38;
    if ( (unsigned __int64)&v12 < v7 || (unsigned __int64)&v12 >= v7 + 4 * v8 )
    {
      if ( v8 >= v4 || (v11 = qvector_reserve((__int64)v9, v7, v4, 4), v5 = a1[39], a1[38] = v11, v7 = v11, v5 < v4) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v7 + 4 * v5++) = 0;
          if ( v4 == v5 )
            break;
          v7 = a1[38];
        }
      }
    }
    else if ( v8 >= v4 || (v10 = qvector_reserve((__int64)v9, v7, v4, 4), v5 = a1[39], a1[38] = v10, v7 = v10, v5 < v4) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v7 + 4 * v5++) = 0;
        if ( v4 == v5 )
          break;
        v7 = a1[38];
      }
    }
    goto LABEL_9;
  }
  return v13 - __readfsqword(0x28u);
}

