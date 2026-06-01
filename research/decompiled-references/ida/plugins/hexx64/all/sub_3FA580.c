__int64 __fastcall sub_3FA580(int *a1, char a2, char a3, __m128i a4, __m128 a5, __m128 a6)
{
  __int64 v7; // r12
  __int64 v8; // rbp
  _DWORD *v9; // r13
  unsigned int v10; // r8d
  __int64 result; // rax
  int v12; // r15d
  char v13; // al
  int v14; // edx
  unsigned __int8 v15; // r14
  unsigned int v16; // eax
  unsigned __int16 v17; // ax
  unsigned int v18; // r9d
  __int64 v19; // [rsp-10h] [rbp-58h]
  __int64 v20; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD *)a1;
  v8 = a1[2];
  v9 = *(_DWORD **)(*(_QWORD *)a1 + 832LL);
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 == 1 )
      v10 = v9[114];
    else
      v10 = v9[115];
  }
  else
  {
    v10 = v9[113];
  }
  a1[3] = v10;
  if ( !a2 || (result = sub_3FA4D0((__int64 *)a1), !(_BYTE)result) )
  {
    result = sub_3F9DC0(v7, v8, v10, a4, a5, a6);
    v12 = result;
    if ( a3 )
      goto LABEL_6;
    if ( v9[117] != (_DWORD)result )
      goto LABEL_6;
    result = 40 * v8;
    if ( (unsigned __int8)(*(_BYTE *)(v7 + 40 * v8 + 65) - 2) > 2u )
      goto LABEL_6;
    *(_QWORD *)(*(_QWORD *)a1 + 880LL) = *(_QWORD *)(v7 + 40);
    v20 = *(_QWORD *)a1;
    v13 = sub_3FA390(*(_QWORD *)a1, v7 + result + 64);
    v14 = *(_DWORD *)(v7 + 52);
    v15 = v13;
    v16 = 8;
    if ( (v14 & 0x1018) != 0x1010 )
    {
      if ( (v14 & 0x1008) == 0 || (v16 = 2, (v14 & 0x1018) == 0x1008) )
        v16 = 4;
    }
    sub_3F7E20(v20, 2u, v15, v12 + v9[21], v12, a1[3], a4, a5, a6, v16);
    result = v19;
    v12 = a1[3];
    if ( *(int *)(*(_QWORD *)a1 + 892LL) < 0 )
      goto LABEL_6;
    if ( v15 == 15 )
      goto LABEL_6;
    result = 5 * v8;
    if ( *(_BYTE *)(v7 + 40 * v8 + 65) == 1 )
      goto LABEL_6;
    v17 = *(_WORD *)(v7 + 48);
    if ( v17 > 0x146u )
    {
      v18 = 2 * (v17 != 604) + 65;
    }
    else if ( v17 <= 0x10Cu )
    {
      v18 = (unsigned __int16)(v17 - 262) < 3u ? 65 : 67;
    }
    else
    {
      result = 1LL << ((unsigned __int8)v17 - 13);
      if ( (result & 0xC009249) != 0 )
      {
        v18 = 65;
      }
      else
      {
        v18 = 67;
        if ( (result & 0x240200000000000LL) != 0 )
        {
LABEL_6:
          a1[3] = v12;
          *((_BYTE *)a1 + 16) = 1;
          return result;
        }
      }
    }
    result = sub_1D6740(*(_QWORD *)a1, v15, 15, v12, v12, v18, a4, a5, a6);
    goto LABEL_6;
  }
  return result;
}

