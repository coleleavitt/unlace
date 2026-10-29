unsigned __int64 __fastcall sub_68120(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v2 = a2;
  v10 = __readfsqword(0x28u);
  sub_631C0((__int64)a1, a2);
  v3 = a1[39];
  v9 = 0;
  if ( a2 < v3 )
  {
LABEL_9:
    a1[39] = v2;
    return v10 - __readfsqword(0x28u);
  }
  if ( v3 < a2 )
  {
    v5 = a1[38];
    v6 = a1[40];
    if ( (unsigned __int64)&v9 < v5 || (unsigned __int64)&v9 >= v5 + 4 * v6 )
    {
      if ( v6 >= v2 || (v8 = qvector_reserve(), v3 = a1[39], a1[38] = v8, v5 = v8, v3 < v2) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v5 + 4 * v3++) = 0;
          if ( v2 == v3 )
            break;
          v5 = a1[38];
        }
      }
    }
    else if ( v6 >= v2 || (v7 = qvector_reserve(), v3 = a1[39], a1[38] = v7, v5 = v7, v3 < v2) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v5 + 4 * v3++) = 0;
        if ( v2 == v3 )
          break;
        v5 = a1[38];
      }
    }
    goto LABEL_9;
  }
  return v10 - __readfsqword(0x28u);
}

