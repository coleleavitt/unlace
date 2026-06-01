__int64 __fastcall sub_20160(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned __int64 v4; // rax
  int v5; // r14d
  int v6; // r15d
  unsigned __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned __int64 v9; // r12
  int v10; // r13d
  int dword; // edx
  int v12; // ecx
  unsigned __int64 v13; // rsi
  __int64 *v14; // rdi
  int v15; // edx
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  if ( *(_WORD *)(a1 + 40) == 71 && *(_BYTE *)(a1 + 57) == 5 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( (v4 & 3) == 0
      && v4 > 0xFFFFFFFFFFFFFFCFLL
      && *(_BYTE *)(a1 + 97) == 1
      && *(_WORD *)(a1 + 102) == 3
      && !*(_BYTE *)(a1 + 137) )
    {
      v16 = (unsigned __int64)-(__int64)v4 >> 2;
      v5 = v16;
      v6 = v16 - 1;
      v7 = *(_QWORD *)(a1 + 384);
      v8 = 0;
      v9 = *(_QWORD *)(a1 + 376) + *(unsigned __int16 *)(a1 + 42);
      v10 = 2 * (v16 == 12) + 29;
      if ( v9 < v7 )
      {
        while ( 1 )
        {
          if ( v7 - v9 <= 3 )
            return 0;
          dword = get_dword(v9);
          if ( v8 == 10 )
            break;
          if ( v8 != 11 )
          {
            v12 = -2048 * v8 + 59392;
            goto LABEL_15;
          }
LABEL_16:
          if ( v6 != v8 || ((v6 << 18) | 0x1FF63) != dword )
            return 0;
          v10 = 31;
LABEL_19:
          ++v8;
          v13 = v9 + 4;
          if ( v8 >= (unsigned int)v16 )
          {
            v2 = sub_1F980(*(_QWORD *)(a1 + 384), v13, 0x6Au);
            if ( !(_BYTE)v2 )
              return 0;
            v14 = *(__int64 **)a1;
            if ( v16 == 1 )
            {
              if ( v10 == 31 )
                sub_1F9B0(v14, "__ghssavelpa");
              else
                sub_200A0(v14, (__int64)"__save_r%u", 29);
            }
            else
            {
              if ( v10 == 31 )
                v5 = v16 - 1;
              if ( v5 == 11 )
                v15 = 2;
              else
                v15 = 30 - v5;
              sub_200A0(v14, (__int64)"__save_r%u_r%u", v15, v10);
            }
            **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v9 + 6;
            return v2;
          }
          v7 = *(_QWORD *)(a1 + 384);
          v9 += 4LL;
          if ( v13 >= v7 )
            return 0;
        }
        v12 = 4096;
LABEL_15:
        if ( (v12 | (v8 << 18) | 0x10763) == dword )
          goto LABEL_19;
        goto LABEL_16;
      }
    }
  }
  return 0;
}
