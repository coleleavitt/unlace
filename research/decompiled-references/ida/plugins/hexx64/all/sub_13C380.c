__int64 __fastcall sub_13C380(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rbx
  unsigned int *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rsi
  char v16; // al
  __int64 j; // rbx
  __int64 v18; // rbp
  unsigned int v19; // r15d
  __int64 v20; // r15
  int v21; // eax
  _DWORD *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int *v25; // rcx
  unsigned int *v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbp
  _QWORD *func; // rax
  char v35; // [rsp+Bh] [rbp-5Dh]
  int v36; // [rsp+Ch] [rbp-5Ch]
  __int64 v37[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_DWORD *)(a1 + 64);
  v37[3] = __readfsqword(0x28u);
  if ( v4 <= 0 )
    return 0;
  result = sub_1BA020(a1);
  if ( (int)result >= 0 )
  {
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      v9 = *(unsigned int **)(i + 56);
      if ( v9 )
      {
        v7 = *v9;
        v6 = (unsigned int)(v7 - 55);
        if ( (unsigned int)v6 <= 1 && *((_BYTE *)v9 + 32) == 6 )
        {
          v33 = *((_QWORD *)v9 + 5);
          func = (_QWORD *)get_func();
          if ( func )
          {
            if ( v33 == *func )
              func_does_return();
          }
        }
      }
    }
    v10 = sub_1D5170(a1, a2, v6, v7);
    v13 = *(_QWORD *)(a1 + 520);
    v35 = 0;
    v36 = 0;
    v14 = v10;
    if ( v13 )
    {
      do
      {
        v15 = v14;
        sub_1D51C0(v13, v14, v11, v12);
        v11 = *(unsigned int *)(v13 + 76);
        if ( !(_DWORD)v11 )
        {
          ++v36;
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(*(_QWORD *)(v13 + 56) + 24LL);
        }
        v16 = *(_BYTE *)(v13 + 24);
        v13 = *(_QWORD *)(v13 + 8);
        v35 |= (v16 & 8) != 0;
      }
      while ( v13 );
      for ( j = *(_QWORD *)(a1 + 520); j; j = *(_QWORD *)(j + 8) )
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)(j + 56);
          if ( v18 )
          {
            if ( *(_DWORD *)v18 == 42 )
              break;
          }
          j = *(_QWORD *)(j + 8);
          if ( !j )
            goto LABEL_40;
        }
        v37[0] = 0;
        v19 = *(_DWORD *)(v18 + 72);
        v37[1] = 0;
LABEL_20:
        v15 = v19;
        sub_64190(v37, v19, a3);
        while ( 1 )
        {
          if ( v19 >= *(_DWORD *)(a1 + 64) )
            sub_1346B0(a3);
          v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v19) + 48LL);
          if ( !v20 )
            break;
          if ( *(_DWORD *)v20 != *(_DWORD *)v18 )
            break;
          v15 = v18 + 32;
          if ( !sub_125B60((unsigned __int8 *)(v20 + 32), v18 + 32, 0, a3) )
            break;
          v19 = *(_DWORD *)(v20 + 72);
          v15 = v19;
          if ( sub_64930(v37, v19) )
            break;
          *(_DWORD *)(v18 + 72) = v19;
          v21 = *(_DWORD *)(j + 76);
          if ( v21 == 3 )
          {
            v23 = *(_QWORD *)(j + 368);
            v24 = *(_QWORD *)(j + 376);
            v25 = (unsigned int *)(v23 + 4 * v24);
            if ( (unsigned int *)v23 == v25 )
              goto LABEL_35;
            v26 = *(unsigned int **)(j + 368);
            while ( v19 != *v26 )
            {
              if ( v25 == ++v26 )
                goto LABEL_35;
            }
            if ( v26 == v25 )
            {
LABEL_35:
              v27 = v24 + 1;
              if ( *(_QWORD *)(j + 384) < v27 )
              {
                v31 = qvector_reserve(j + 368, v23, v27, 4);
                v32 = *(_QWORD *)(j + 376);
                *(_QWORD *)(j + 368) = v31;
                v25 = (unsigned int *)(v31 + 4 * v32);
              }
              *v25 = v19;
              *(_DWORD *)(j + 76) = 4;
              ++*(_QWORD *)(j + 376);
            }
            goto LABEL_20;
          }
          if ( v21 != 4 )
          {
            if ( !under_debugger )
              sub_383060(0xC80Bu, a3);
            BUG();
          }
          v22 = *(_DWORD **)(j + 368);
          if ( v19 == *v22 )
          {
            sub_159D40((_BYTE *)(v18 + 32), *(_QWORD *)(a1 + 1504), j, v18, 0);
            sub_A3480(j, (_BYTE *)v18);
            v15 = (unsigned int)(*(_DWORD *)(j + 72) + 1);
            sub_6B2C0(j, v15, a3);
            v28 = *(_DWORD *)(j + 24);
            BYTE1(v28) &= ~2u;
            LOBYTE(v28) = v28 | 0x80;
            *(_DWORD *)(j + 24) = v28;
            break;
          }
          v22[1] = v19;
          v15 = v19;
          sub_64190(v37, v19, a3);
        }
        qfree(v37[0]);
      }
LABEL_40:
      sub_1D4FD0(a1);
      if ( v35 )
        sub_F7840(a1, v15, v29, v30, a3);
      sub_13BD70(a1, a3, a4);
      if ( v36 )
        return 4294967292LL;
    }
    else
    {
      sub_1D4FD0(a1);
      sub_13BD70(a1, a3, a4);
    }
    return 0;
  }
  return result;
}

