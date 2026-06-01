__int64 __fastcall sub_8B50(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  __int64 result; // rax
  int v5; // r13d
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // ebp
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  char v21; // cl
  __int64 v22; // rsi
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rax
  int v26; // ecx
  int v27; // esi

  v3 = *(_WORD *)(a2 + 24);
  if ( v3 == 96 )
  {
    result = 2;
    if ( *(_BYTE *)(a2 + 41) != 1 || *(_BYTE *)(a2 + 33) != 3 )
      return result;
    v14 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 64) -= 4LL;
    v15 = *(_QWORD *)(a2 + 16);
    v16 = *(unsigned __int16 *)(a2 + 46);
    v17 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v14 + 1) )
    {
      v25 = qvector_reserve();
      *(_QWORD *)(a1 + 16) = v25;
      v17 = v25;
      v14 = *(_QWORD *)(a1 + 24);
    }
    v18 = v17 + 32 * v14;
    *(_QWORD *)v18 = -1;
    *(_QWORD *)(v18 + 8) = 0;
    *(_QWORD *)(v18 + 16) = 0;
    *(_DWORD *)(v18 + 24) = -1;
    ++*(_QWORD *)(a1 + 24);
    *(_QWORD *)v18 = v15;
    v19 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v18 + 16) = 4;
    *(_QWORD *)(v18 + 8) = v19;
    *(_DWORD *)(v18 + 24) = v16;
    return 0;
  }
  if ( v3 > 0x60u )
  {
    if ( v3 == 98 )
    {
      v5 = *(unsigned __int16 *)(a2 + 46);
      v6 = *(char *)(a2 + 73);
      v7 = 4;
    }
    else
    {
      if ( v3 != 164 )
        return 2;
      v5 = *(unsigned __int16 *)(a2 + 46);
      v6 = *(char *)(a2 + 73);
      v7 = 8;
    }
    for ( ; v6 >= v5; *(_QWORD *)(v8 + 16) = v7 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 64) -= v7;
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v10 + 1) )
      {
        v13 = qvector_reserve();
        *(_QWORD *)(a1 + 16) = v13;
        v11 = v13;
        v10 = *(_QWORD *)(a1 + 24);
      }
      v8 = 32 * v10 + v11;
      *(_QWORD *)v8 = -1;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 24) = -1;
      ++*(_QWORD *)(a1 + 24);
      *(_QWORD *)v8 = v12;
      v9 = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(v8 + 24) = v5++;
      *(_QWORD *)(v8 + 8) = v9;
    }
    return 0;
  }
  if ( v3 != 3 )
  {
    if ( v3 == 68 )
    {
      result = 1;
      if ( *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) )
      {
        v24 = *(_DWORD *)(a1 + 80);
        if ( v24 != -1 && *(_BYTE *)(a2 + 41) == 1 && v24 == *(unsigned __int16 *)(a2 + 46) )
        {
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 72);
          return 0;
        }
      }
      return result;
    }
    return 2;
  }
  result = 1;
  if ( *(_BYTE *)(a2 + 41) == 5 )
  {
    v20 = *(_QWORD *)(a2 + 48);
    if ( v20 < 0 )
    {
      v21 = *(_BYTE *)(a2 + 121);
      v22 = a2 + 120;
      if ( !v21 )
      {
        v21 = *(_BYTE *)(a2 + 81);
        v22 = a2 + 80;
      }
      result = 1;
      if ( v21 == 1 )
      {
        v23 = *(unsigned __int16 *)(v22 + 6);
        if ( (_WORD)v23 )
        {
          if ( *(_DWORD *)(a1 + 80) == -1 && !*(_WORD *)(a2 + 86) )
          {
            *(_DWORD *)(a1 + 80) = v23;
            *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 64) + *(_QWORD *)(a2 + 48);
            return 0;
          }
        }
        else
        {
          v26 = *(unsigned __int16 *)(a2 + 86);
          if ( (_WORD)v26 )
          {
            v27 = *(_DWORD *)(a1 + 80);
            if ( v27 != -1 && v27 == v26 )
            {
              *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 72) + v20;
              return 0;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 64) += v20;
            return 0;
          }
        }
      }
    }
  }
  return result;
}

