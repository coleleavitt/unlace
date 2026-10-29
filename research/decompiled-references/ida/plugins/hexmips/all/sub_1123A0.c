__int64 __fastcall sub_1123A0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int128 v4; // rax
  __int64 v6; // r13
  int v7; // ecx
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  int v13; // edx
  int v14; // r9d
  unsigned __int64 v15; // rdi
  int v16; // eax
  int v17; // r9d
  int v18; // ebx
  int v20; // ebp
  int v21; // r15d

  *((_QWORD *)&v4 + 1) = a3;
  *(_QWORD *)&v4 = 256;
  v6 = *((_QWORD *)&v4 + 1);
  v7 = *(_DWORD *)(a1 + 120);
  if ( v7 == 8 )
    *(_QWORD *)&v4 = 16;
  if ( __PAIR128__(*((unsigned __int64 *)&v4 + 1), a2) >= (unsigned __int64)v4 )
  {
    *(_QWORD *)&v4 = a2;
    if ( *((_QWORD *)&v4 + 1) & (unsigned __int64)(((v4 + (unsigned __int128)0xFFFFFFFFFFFFFFFFLL) >> 64) - 1)
       | a2 & (a2 - 1) )
    {
      v9 = 8;
      v10 = __udivti3();
      if ( *(int *)(a1 + 36) <= 4 )
        v9 = 4;
      v11 = sub_325C90(v10, v9, 0);
      *(_QWORD *)(a1 + 112) = v11;
      v12 = v11;
      if ( v11 > 1 )
      {
        v13 = *(_DWORD *)(a1 + 120);
        v14 = *(_DWORD *)(a1 + 128);
        v15 = v11;
        while ( 1 )
        {
          v18 = v13 - (*(_DWORD *)(a1 + 124) + *(unsigned __int8 *)(a1 + 133));
          if ( (unsigned __int8)sub_111ED0(v15, v18, v13, a2, v6, v14) )
          {
LABEL_13:
            *(_QWORD *)(a1 + 112) <<= *(_DWORD *)(a1 + 124);
            return 1;
          }
          v16 = *(_DWORD *)(a1 + 120);
          if ( v16 > 31 )
            break;
          v17 = *(_DWORD *)(a1 + 128);
          if ( v16 > v17 )
            return 0;
          v14 = v17 - v16;
          v13 = 2 * v16;
          v15 = *(_QWORD *)(a1 + 112);
          *(_DWORD *)(a1 + 128) = v14;
          *(_DWORD *)(a1 + 120) = 2 * v16;
        }
        if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v12, 1) <= 0x1999999999999999uLL || a4 )
        {
          v20 = 8 * *(_DWORD *)(a1 + 36) - *(unsigned __int8 *)(a1 + 133);
          while ( 1 )
          {
            v21 = v18--;
            if ( v20 > v18 )
              break;
            if ( (unsigned __int8)sub_111ED0(
                                    *(_QWORD *)(a1 + 112),
                                    v18,
                                    *(_DWORD *)(a1 + 120),
                                    a2,
                                    v6,
                                    *(_DWORD *)(a1 + 128)) )
            {
              if ( *(_DWORD *)(a1 + 120) == v21 )
                *(_BYTE *)(a1 + 133) = 1;
              goto LABEL_13;
            }
          }
        }
      }
    }
  }
  return 0;
}

