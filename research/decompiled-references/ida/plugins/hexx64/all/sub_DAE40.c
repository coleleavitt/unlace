__int64 __fastcall sub_DAE40(__int64 a1, _DWORD *a2, double a3)
{
  __int64 *v3; // r12
  int v4; // r13d
  __int64 result; // rax
  _QWORD *v6; // r14
  char v7; // dl
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  int v14; // r15d
  __int64 v15; // rax
  int v16; // ebp
  int v17; // [rsp+Ch] [rbp-3Ch]

  v3 = (__int64 *)(a1 + 144);
  v4 = *(_QWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 144)) )
    v4 -= sub_64C00(v3) + 1;
  result = (unsigned int)(v4 != 1) + 2;
  if ( *a2 < (int)result )
  {
    *a2 = 0;
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0xFFFFFFFB) != 2 )
      goto LABEL_5;
    v16 = *(_QWORD *)(a1 + 40);
    if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 160)) )
      v16 -= sub_64C00((_QWORD *)(a1 + 160)) + 1;
    if ( v4 <= 0 || v16 <= 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCE0Cu, a3);
      BUG();
    }
    if ( v4 > v16 )
    {
      v6 = (_QWORD *)(a1 + 32);
      v3 = (__int64 *)(a1 + 160);
    }
    else
    {
LABEL_5:
      v6 = (_QWORD *)(a1 + 8);
    }
    v7 = sub_64880(v3);
    v8 = 0;
    if ( !v7 )
      v8 = sub_64C00(v3) + 1;
    v9 = v6[1];
    if ( (int)v9 <= v8 )
    {
      v17 = v9 - 1;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 184);
      v17 = v9 - 1;
      v11 = 4LL * v8;
      v12 = 4 * (v8 + (unsigned __int64)(unsigned int)(v9 - 1 - v8) + 1);
      do
      {
        v13 = *(_QWORD *)(a1 + 176);
        v14 = *(_DWORD *)(*v6 + v11);
        if ( *(_QWORD *)(a1 + 192) < (unsigned __int64)(v10 + 1) )
        {
          v15 = qvector_reserve(a1 + 176, v13, v10 + 1, 4);
          v10 = *(_QWORD *)(a1 + 184);
          *(_QWORD *)(a1 + 176) = v15;
          v13 = v15;
        }
        *(_DWORD *)(v13 + 4 * v10) = v14;
        v11 += 4;
        v10 = *(_QWORD *)(a1 + 184) + 1LL;
        *(_QWORD *)(a1 + 184) = v10;
      }
      while ( v12 != v11 );
    }
    return sub_64190(v3, v17, a3);
  }
  return result;
}

