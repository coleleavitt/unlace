__int64 __fastcall sub_DE680(__int64 a1, __int64 a2)
{
  int v2; // eax
  _WORD *v3; // rax
  unsigned int v4; // ebx
  __int64 **v6; // r15
  __int64 v7; // r13
  __int64 v8; // rbx
  char v9; // r14
  __int16 v10; // ax
  int v11; // edx
  int v12; // eax
  __int16 v13; // ax
  int v14; // edx
  int v15; // eax
  unsigned __int16 *v16; // rdi
  __int64 *v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // r14
  _QWORD *v20; // rbx
  _QWORD *v21; // r12
  _QWORD *v22; // rax
  void *v23; // rdi
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 *v27; // rax

  v2 = *(_DWORD *)(a1 + 36);
  if ( v2 )
  {
    v6 = *(__int64 ***)a1;
    v7 = ***(_QWORD ***)a1;
    *(_DWORD *)(a1 + 36) = v2 - 1;
    if ( (*(_BYTE *)(a2 + 49) & 2) != 0 )
    {
      v8 = (__int64)v6[11];
      if ( v8 )
      {
        v9 = *(_BYTE *)(a2 + 16);
        do
        {
          if ( *(_BYTE *)(v8 + 16) == v9 && (*(_BYTE *)(v8 + 49) & 2) != 0 )
          {
            if ( (unsigned int)sub_C4FA0(v8, a2) )
            {
              v10 = *(_WORD *)(v8 + 20);
              v11 = *(__int16 *)(a2 + 22);
              if ( *(__int16 *)(a2 + 20) <= v10 )
                v10 = *(_WORD *)(a2 + 20);
              *(_WORD *)(a2 + 20) = v10;
              v12 = *(__int16 *)(v8 + 22) - 1;
              if ( v12 > v11 )
                LOWORD(v12) = v11;
              *(_WORD *)(a2 + 22) = v12;
            }
            else if ( (unsigned int)sub_C4FA0(a2, v8) )
            {
              v13 = *(_WORD *)(v8 + 20);
              v14 = *(__int16 *)(a2 + 22);
              if ( *(__int16 *)(a2 + 20) >= v13 )
                v13 = *(_WORD *)(a2 + 20);
              *(_WORD *)(a2 + 20) = v13;
              v15 = *(__int16 *)(v8 + 22) + 1;
              if ( v15 < v14 )
                LOWORD(v15) = v14;
              *(_WORD *)(a2 + 22) = v15;
            }
          }
          v8 = *(_QWORD *)(v8 + 72);
        }
        while ( v8 );
      }
    }
    v16 = *(unsigned __int16 **)(a1 + 24);
    if ( v16 )
    {
      v4 = 0;
      if ( *(_WORD *)(a2 + 52) )
        sub_C4EB0(v16, *(_QWORD *)a2, *(_WORD *)(a2 + 20), *(_WORD *)(a2 + 22));
    }
    else
    {
      v4 = 0;
      v17 = sub_C50C0(v6 + 11, (__int64 *)a2);
      v18 = v17;
      if ( v17 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = (_QWORD *)(v19 + 72);
          while ( *v20 )
          {
            v22 = sub_C50C0(v20, (__int64 *)a2);
            v20 = v22;
            if ( !v22 )
              break;
            v21 = (_QWORD *)*v22;
            if ( !*v22 )
              break;
            *v22 = v21[9];
            sub_D0E10(v7, (__int64)v21);
            sub_C9250(v7, v21);
          }
        }
        else
        {
          v27 = sub_DBF10(v7, 104);
          v19 = (__int64)v27;
          *v18 = v27;
          if ( !v27 )
            return 7;
          *((_DWORD *)v27 + 12) = 0;
          *((_WORD *)v27 + 28) = 3;
          v27[9] = 0;
          v27[8] = (__int64)(v27 + 10);
          *((_WORD *)v27 + 26) = 0;
        }
        sub_D0D80(v7, v19);
        if ( *(_WORD *)(v19 + 56) < *(_WORD *)(a2 + 52)
          && (unsigned int)sub_DE610(v7, v19, *(unsigned __int16 *)(a2 + 52)) )
        {
          *(_QWORD *)(v19 + 48) = 0;
          v4 = 7;
          *(_OWORD *)v19 = 0;
          *(_OWORD *)(v19 + 16) = 0;
          *(_OWORD *)(v19 + 32) = 0;
        }
        else
        {
          v23 = *(void **)(v19 + 64);
          *(__m128i *)v19 = _mm_loadu_si128((const __m128i *)a2);
          *(__m128i *)(v19 + 16) = _mm_loadu_si128((const __m128i *)(a2 + 16));
          *(__m128i *)(v19 + 32) = _mm_loadu_si128((const __m128i *)(a2 + 32));
          v24 = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(v19 + 48) = v24;
          memcpy(v23, *(const void **)(a2 + 64), (v24 >> 29) & 0x7FFF8);
          v25 = *(_DWORD *)(a2 + 48);
          if ( (v25 & 0x400) != 0 )
          {
            *(_BYTE *)(a2 + 28) &= ~1u;
            v4 = 0;
          }
          else
          {
            v4 = 0;
            if ( (v25 & 0x4000) != 0 )
              *(_QWORD *)(a2 + 32) = 0;
          }
        }
        if ( (*(_BYTE *)(v19 + 49) & 4) == 0 )
        {
          v26 = *(_QWORD *)(v19 + 32);
          if ( v26 )
          {
            if ( (*(_BYTE *)(v26 + 99) & 3) == 3 )
              *(_QWORD *)(v19 + 32) = 0;
          }
        }
      }
    }
  }
  else
  {
    v3 = *(_WORD **)(a1 + 24);
    v4 = 101;
    if ( v3 )
      *v3 = 0;
  }
  return v4;
}
