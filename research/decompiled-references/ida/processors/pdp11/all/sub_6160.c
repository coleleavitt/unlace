__int64 __fastcall sub_6160(__int64 a1, __m128i *a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  __int16 v5; // ax
  unsigned __int16 v6; // dx
  __int16 v7; // ax
  unsigned __int16 v8; // bx
  __int16 v9; // dx
  _DWORD *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // r8
  _DWORD *v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // edx
  __int64 v26; // rsi
  char *v27; // rdx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // eax
  __int64 v31; // rsi
  _WORD v32[12]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-30h]

  v3 = a1;
  v33 = __readfsqword(0x28u);
  if ( a3 > 9u )
  {
    if ( a3 != 11 )
      return 0xFFFFFFFFLL;
LABEL_12:
    v8 = a3 & 3;
    emovi();
    v9 = v32[0];
    if ( v32[1] )
    {
      if ( v32[1] != 0x7FFF )
      {
        if ( !(unsigned __int8)emdnorm() || v32[1] > 0xFEu )
          return 4294967294LL;
        *(_WORD *)a1 = ((v32[0] != 0) << 15) | (v32[1] << 7);
        eshift();
        *(_WORD *)a1 |= v32[2] & 0x7F;
        if ( v8 )
        {
          v10 = (_DWORD *)(a1 + 2);
          v11 = 2LL * v8;
          if ( ((2 * (_BYTE)v8) & 4) != 0 )
          {
            *v10 = *(_DWORD *)&v32[3];
            *(_DWORD *)((char *)v10 + v11 - 4) = *(_DWORD *)&v32[v11 / 2 + 1];
          }
          else if ( (_DWORD)v11 )
          {
            *(_BYTE *)(a1 + 2) = v32[3];
            if ( ((2 * (_BYTE)v8) & 2) != 0 )
              *(_WORD *)(a1 + 2LL * v8) = v32[v8 + 2];
          }
        }
        return 1;
      }
      v13 = 2LL * (unsigned __int16)(v8 + 1);
      if ( (unsigned int)v13 >= 8 )
      {
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + v13 - 8) = 0;
        v22 = (a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v23 = (a1 - v22 + v13) & 0xFFFFFFF8;
        if ( v23 >= 8 )
        {
          v24 = v23 & 0xFFFFFFF8;
          v25 = 0;
          do
          {
            v26 = v25;
            v25 += 8;
            *(_QWORD *)(v22 + v26) = 0;
          }
          while ( v25 < v24 );
        }
      }
      else if ( (v13 & 4) != 0 )
      {
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + v13 - 4) = 0;
      }
      else if ( (_DWORD)v13 )
      {
        *(_BYTE *)a1 = 0;
        if ( (v13 & 2) != 0 )
          *(_WORD *)(a1 + v13 - 2) = 0;
      }
    }
    else
    {
      v14 = 2LL * (unsigned __int16)(v8 + 1);
      if ( (unsigned int)v14 >= 8 )
      {
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + v14 - 8) = 0;
        v15 = (a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v16 = (a1 - v15 + v14) & 0xFFFFFFF8;
        if ( v16 >= 8 )
        {
          v17 = v16 & 0xFFFFFFF8;
          v18 = 0;
          do
          {
            v19 = v18;
            v18 += 8;
            *(_QWORD *)(v15 + v19) = 0;
          }
          while ( v18 < v17 );
        }
      }
      else if ( (v14 & 4) != 0 )
      {
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + v14 - 4) = 0;
      }
      else if ( (_DWORD)v14 )
      {
        *(_BYTE *)a1 = 0;
        if ( (v14 & 2) != 0 )
          *(_WORD *)(a1 + v14 - 2) = 0;
      }
      if ( !v9 )
        return 1;
    }
    *(_WORD *)a1 = 0x8000;
    return 1;
  }
  if ( a3 > 7u )
    goto LABEL_12;
  if ( a3 > 1u && a3 != 3 )
    return 0xFFFFFFFFLL;
  v5 = *(_WORD *)a1;
  memset(v32, 0, 22);
  v6 = v5 & 0x7F80;
  if ( v5 < 0 )
  {
    v32[0] = -1;
    if ( v6 )
    {
LABEL_38:
      v32[1] = (v6 >> 7) + 16254;
      v32[2] = (unsigned __int8)v5 | 0x80;
      if ( a3 )
      {
        v20 = (_DWORD *)(a1 + 2);
        v21 = 2LL * a3;
        if ( (unsigned int)v21 >= 8 )
        {
          *(_QWORD *)&v32[3] = *(_QWORD *)(a1 + 2);
          *(_QWORD *)&v32[v21 / 2 - 1] = *(_QWORD *)((char *)v20 + v21 - 8);
          v27 = (char *)v20 - ((char *)&v32[3] - (char *)&v32[4]);
          v28 = ((char *)&v32[3] - (char *)&v32[4] + v21) & 0xFFFFFFF8;
          if ( v28 >= 8 )
          {
            v29 = v28 & 0xFFFFFFF8;
            v30 = 0;
            do
            {
              v31 = v30;
              v30 += 8;
              *(_QWORD *)((char *)&v32[4] + v31) = *(_QWORD *)&v27[v31];
            }
            while ( v30 < v29 );
          }
        }
        else if ( (v21 & 4) != 0 )
        {
          *(_DWORD *)&v32[3] = *v20;
          *(_DWORD *)&v32[v21 / 2 + 1] = *(_DWORD *)((char *)v20 + v21 - 4);
        }
        else if ( (_DWORD)v21 )
        {
          LOBYTE(v32[3]) = *(_BYTE *)(a1 + 2);
          if ( (v21 & 2) != 0 )
            v32[v21 / 2 + 2] = *(_WORD *)(a1 + v21);
        }
      }
      eshift();
LABEL_10:
      emovo();
      return 1;
    }
    *a2 = _mm_load_si128((const __m128i *)&xmmword_77B0);
    return 1;
  }
  if ( v6 )
    goto LABEL_38;
  v7 = 0x7FFF;
  while ( 1 )
  {
    v3 += 2;
    if ( (*(_WORD *)(v3 - 2) & (unsigned __int16)v7) != 0 )
      return 4294967293LL;
    v7 = -1;
    if ( v3 == a1 + 2LL * a3 + 2 )
      goto LABEL_10;
  }
}

