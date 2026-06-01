__int64 __fastcall sub_1297E0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v7; // r15
  int v9; // ebx
  __int64 v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  _DWORD *v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // rdx
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // eax
  _DWORD *v20; // [rsp+8h] [rbp-58h] BYREF
  __int128 v21; // [rsp+10h] [rbp-50h]
  unsigned __int64 v22; // [rsp+20h] [rbp-40h]

  v7 = *a2;
  v22 = __readfsqword(0x28u);
  v20 = nullptr;
  v9 = *(_DWORD *)(v7 + 72);
  v21 = 0;
  v20 = (_DWORD *)qvector_reserve((__int64)&v20, 0, 1, 4);
  v20[(_QWORD)v21] = v9;
  *(_QWORD *)&v21 = v21 + 1;
  while ( 1 )
  {
    v10 = sub_129440(v7, a4, (__int64)a3, 0, 0.0, a6);
    if ( v10 )
      break;
    if ( *(_DWORD *)(v7 + 72) == 1 || *(_DWORD *)(v7 + 352) != 1 )
      goto LABEL_10;
    v11 = &v20[v21];
    v12 = **(unsigned int **)(v7 + 344);
    if ( v20 != v11 )
    {
      v13 = v20;
      while ( (_DWORD)v12 != *v13 )
      {
        if ( v11 == ++v13 )
          goto LABEL_15;
      }
      if ( v11 != v13 )
      {
LABEL_10:
        *a2 = v7;
        *a3 = 0;
LABEL_11:
        v14 = 0;
        goto LABEL_12;
      }
    }
LABEL_15:
    if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
    {
      v20 = (_DWORD *)qvector_reserve((__int64)&v20, (__int64)v20, v21 + 1, 4);
      v11 = &v20[v21];
    }
    *v11 = v12;
    *(_QWORD *)&v21 = v21 + 1;
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, 0.0);
      BUG();
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v12);
    *a3 = 0;
  }
  *a2 = v7;
  v16 = *a3;
  *a3 = v10;
  if ( v16 != v10 )
    goto LABEL_11;
  v17 = (unsigned __int8 *)(v16 + 64);
  v18 = sub_339CA0();
  LOBYTE(v19) = sub_1255D0(v17, v18, a4, 0, 0.0);
  v14 = v19;
LABEL_12:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree((__int64)v20);
  }
  return v14;
}

