__int64 __fastcall sub_2A300(__int64 a1, unsigned __int64 *a2, unsigned __int8 a3)
{
  __int64 v4; // r15
  unsigned __int64 v6; // rdx
  int v7; // r14d
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 680);
  v16 = __readfsqword(0x28u);
  v6 = a2[1];
  v15 = 0;
  v7 = v4 + 14;
  if ( (int)v4 + 7 >= 0 )
    v7 = v4 + 7;
  v8 = v7 >> 3;
  if ( v8 >= v6 )
  {
    if ( v6 >= v8 )
      goto LABEL_5;
    v11 = *a2;
    v12 = a2[2];
    if ( (unsigned __int64)&v15 < v11 || (unsigned __int64)&v15 >= v11 + v12 )
    {
      if ( v12 >= v8 || (v14 = qvector_reserve(), v6 = a2[1], *a2 = v14, v11 = v14, v6 < v8) )
      {
        while ( 1 )
        {
          *(_BYTE *)(v11 + v6++) = 0;
          if ( v8 == v6 )
            break;
          v11 = *a2;
        }
      }
    }
    else if ( v12 >= v8 || (v13 = qvector_reserve(), v6 = a2[1], *a2 = v13, v11 = v13, v6 < v8) )
    {
      while ( 1 )
      {
        *(_BYTE *)(v11 + v6++) = 0;
        if ( v8 == v6 )
          break;
        v11 = *a2;
      }
    }
  }
  a2[1] = v8;
LABEL_5:
  v9 = 0;
  if ( (int)v4 > 0 )
  {
    while ( 1 )
    {
      if ( (a3 & *(_BYTE *)(*(_QWORD *)(a1 + 672) + 32 * v9 + 12)) != 0 )
        *(_BYTE *)(*a2 + (v9 >> 3)) |= 1 << (v9 & 7);
      if ( (_DWORD)v4 - 1 == v9 )
        break;
      ++v9;
    }
  }
  return (unsigned int)v4;
}

