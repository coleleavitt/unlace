__int64 __fastcall sub_18D340(__int64 *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  unsigned __int8 *v4; // r14
  int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r8d
  __int64 v12; // rax

  if ( !a2 )
    return 0;
  if ( !a1 || a3 < 0 )
    return 0;
  if ( a3 )
  {
    v3 = a2;
    v4 = &a2[a3];
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = *v3;
      if ( (_BYTE)v7 == 61 )
        break;
      v8 = dword_1D0820[v7];
      ++v3;
      if ( v8 < 0 )
        return 0;
      v6 = v8 | (v6 << 6);
      if ( v5 + 6 <= 7 )
      {
        v5 += 6;
        if ( v3 == v4 )
          return 1;
      }
      else
      {
        v9 = a1[1];
        v5 -= 2;
        v10 = *a1;
        v11 = v6 >> v5;
        if ( a1[2] < (unsigned __int64)(v9 + 1) )
        {
          v12 = sub_1987B0(a1, v10, v9 + 1, 1);
          v11 = v6 >> v5;
          *a1 = v12;
          v10 = v12;
          v9 = a1[1];
        }
        *(_BYTE *)(v10 + v9) = v11;
        ++a1[1];
        if ( v3 == v4 )
          return 1;
      }
    }
  }
  return 1;
}
