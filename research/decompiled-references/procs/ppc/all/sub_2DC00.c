__int64 __fastcall sub_2DC00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, unsigned __int64 a6)
{
  int v10; // r10d
  int v11; // esi
  int v12; // eax
  __int64 v13; // r8
  int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int16 v18; // ax

  if ( (unsigned __int8)getinf_flag(3, 32) )
  {
    v10 = a6;
    if ( (a6 & 0x80000000) == 0LL )
    {
      v11 = 0;
      while ( v11 < a6 )
      {
        v12 = v11 + (v10 - v11) / 2;
        v13 = a5 + 20LL * v12;
        v14 = *(_DWORD *)(v13 + 4);
        v15 = (unsigned __int16)v14;
        v16 = ((1 << (BYTE2(v14) - HIBYTE(v14) + 1)) - 1) & (a4 >> (31 - BYTE2(v14)));
        if ( v16 == (unsigned __int16)v14 )
        {
          v15 = *(_DWORD *)(v13 + 8);
          if ( !v15
            || (v15 = (unsigned __int16)v15,
                v16 = ((1 << (HIWORD(*(_DWORD *)(v13 + 8)) - HIBYTE(*(_DWORD *)(v13 + 8)) + 1)) - 1)
                    & (a4 >> (31 - HIWORD(*(_DWORD *)(v13 + 8)))),
                v16 == (unsigned __int16)v15) )
          {
            *(_WORD *)(a2 + 24) = *(_WORD *)v13;
            v18 = 4;
            if ( *(int *)(v13 + 16) < 0 )
              v18 = 2;
            *(_WORD *)(a2 + 26) = v18;
            *(_DWORD *)(a2 + 28) |= 0x2000u;
            return sub_2D910(a1, a2, a3, a4, v13);
          }
        }
        if ( v16 >= v15 )
        {
          v11 = v12 + 1;
          if ( v12 + 1 > v10 )
            return 0;
        }
        else
        {
          v10 = v12 - 1;
          if ( v11 > v12 - 1 )
            return 0;
        }
      }
    }
  }
  return 0;
}
