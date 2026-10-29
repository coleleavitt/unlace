__int64 __fastcall sub_1A8C0(_QWORD *a1, unsigned __int8 **a2)
{
  _BYTE *v2; // rdx
  __int64 v3; // r9
  unsigned __int8 *v5; // r8
  unsigned __int8 *v6; // r11
  unsigned int v7; // ecx
  _BYTE *v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // rsi
  unsigned __int8 *v11; // rax
  __int16 v12; // di
  __int16 v13; // bp
  int v14; // ebx
  int v15; // eax
  __int16 v16; // bp
  char v17; // di
  _BYTE v19[4120]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v20; // [rsp+1018h] [rbp-20h]

  v2 = (_BYTE *)*a1;
  v3 = a1[1];
  v20 = __readfsqword(0x28u);
  v5 = *a2;
  v6 = a2[1];
  memset(v19, 32, 4113);
  v7 = 0;
  v8 = &v2[v3];
  v9 = (unsigned __int64)&v6[(_QWORD)v5];
  if ( (unsigned __int64)v5 >= v9 )
    return 0;
  v10 = 4078;
  do
  {
    while ( 1 )
    {
      if ( (v7 & 0x100) != 0 )
      {
        v11 = v5;
      }
      else
      {
        v7 = *v5;
        v11 = v5 + 1;
        BYTE1(v7) = -1;
        if ( (unsigned __int64)(v5 + 1) >= v9 )
          return (unsigned int)((_DWORD)v2 - *(_DWORD *)a1);
      }
      v12 = *v11;
      v5 = v11 + 1;
      if ( (v7 & 1) != 0 )
        break;
      if ( (unsigned __int64)v5 < v9 )
      {
        v5 = v11 + 2;
        v13 = v11[1];
        v14 = (v13 & 0xF) + 2;
        v15 = 0;
        v16 = v12 | (16 * v13) & 0xF00;
        do
        {
          if ( v2 < v8 )
          {
            ++v2;
            v17 = v19[((_WORD)v15 + v16) & 0xFFF];
            *(v2 - 1) = v17;
            v19[v10] = v17;
            v10 = ((_WORD)v10 + 1) & 0xFFF;
          }
          ++v15;
        }
        while ( v14 >= v15 );
        v7 >>= 1;
        if ( (unsigned __int64)v5 < v9 )
          continue;
      }
      return (unsigned int)((_DWORD)v2 - *(_DWORD *)a1);
    }
    if ( v2 < v8 )
    {
      *v2++ = v12;
      v19[v10] = v12;
      v10 = ((_WORD)v10 + 1) & 0xFFF;
    }
    v7 >>= 1;
  }
  while ( (unsigned __int64)v5 < v9 );
  return (unsigned int)((_DWORD)v2 - *(_DWORD *)a1);
}

