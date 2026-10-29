__int64 __fastcall sub_36B7F0(__int64 a1, _QWORD *a2, int a3, char a4, _DWORD *a5, double a6)
{
  char v6; // r11
  __int64 v9; // r13
  _QWORD *v10; // r13
  __int64 v11; // rdx
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // ebp
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // rbp
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rcx
  _DWORD *v26; // rdx
  int v27; // ebp
  _DWORD *v28; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  char tinfo_property; // bl
  int *v36; // [rsp+0h] [rbp-58h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  char v38; // [rsp+10h] [rbp-48h]
  _DWORD *v39; // [rsp+10h] [rbp-48h]
  _DWORD *v40; // [rsp+18h] [rbp-40h]
  _DWORD *v41; // [rsp+18h] [rbp-40h]

  v6 = a4;
  v9 = *(_QWORD *)a1;
  if ( a4 )
  {
    v10 = (_QWORD *)(v9 + 208);
    v36 = (int *)(a1 + 36);
  }
  else
  {
    v10 = (_QWORD *)(v9 + 184);
    v36 = (int *)(a1 + 32);
  }
  if ( (unsigned __int64)a3 >= v10[1] )
    return 0;
  v11 = *(int *)(*v10 + 4LL * a3);
  if ( (_DWORD)v11 == -1 )
    return 0;
  v37 = a2[54] + 104LL * *(int *)(a2[57] + 4 * v11);
  if ( a5 )
  {
    if ( *a5 == *(_DWORD *)v37 )
    {
      v12 = *v36;
      if ( a3 < *v36 )
      {
LABEL_43:
        if ( (*(_BYTE *)(v37 + 26) & 8) != 0 )
        {
          v39 = a5;
          tinfo_property = get_tinfo_property();
          if ( ((get_tinfo_property() & 0xF) == 9) == ((tinfo_property & 0xF) == 9) )
            sub_1EF8F0(v37, a2[188], (_BYTE *)v39 + 64, 0, a6);
        }
        goto LABEL_35;
      }
LABEL_8:
      v13 = *(int *)(*v10 + 4LL * v12);
      if ( (_DWORD)v13 == -1 )
        goto LABEL_19;
LABEL_9:
      if ( (!v6 || **(_DWORD **)(*(_QWORD *)a1 + 280LL) != 4) && *(_DWORD *)(a1 + 40) )
      {
        if ( !under_debugger )
          sub_383060(0xCB6Eu, a6);
LABEL_54:
        BUG();
      }
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(_DWORD *)(a2[57] + 4 * v13);
      v16 = *(_QWORD *)(a1 + 16);
      v17 = (_DWORD *)(v14 + 4 * v16);
      if ( (_DWORD *)v14 != v17 )
      {
        v18 = *(_DWORD **)(a1 + 8);
        while ( v15 != *v18 )
        {
          if ( v17 == ++v18 )
            goto LABEL_36;
        }
        if ( v18 != v17 )
          goto LABEL_17;
      }
LABEL_36:
      v30 = v16 + 1;
      if ( *(_QWORD *)(a1 + 24) < v30 )
      {
        v41 = a5;
        v38 = v6;
        v31 = qvector_reserve(a1 + 8, v14, v30, 4);
        v32 = *(_QWORD *)(a1 + 16);
        a5 = v41;
        *(_QWORD *)(a1 + 8) = v31;
        v6 = v38;
        v17 = (_DWORD *)(v31 + 4 * v32);
      }
      *v17 = v15;
      ++*(_QWORD *)(a1 + 16);
LABEL_17:
      while ( a3 >= ++v12 )
      {
        v13 = *(int *)(*v10 + 4LL * v12);
        if ( (_DWORD)v13 != -1 )
          goto LABEL_9;
LABEL_19:
        if ( v6 || (v19 = *(_QWORD *)a1, **(_DWORD **)(*(_QWORD *)a1 + 280LL) != 4) )
        {
          if ( !under_debugger )
            sub_383060(0xCB6Cu, a6);
          goto LABEL_54;
        }
        v20 = *(_DWORD *)(a1 + 40);
        if ( v20 <= 0 )
        {
          v21 = *(int *)(a1 + 36);
          if ( v21 >= *(_QWORD *)(v19 + 216) )
          {
            if ( !under_debugger )
              sub_383060(0xCB6Du, a6);
            goto LABEL_54;
          }
          v22 = *(int *)(*(_QWORD *)(v19 + 208) + 4 * v21);
          if ( (_DWORD)v22 == -1 )
          {
            if ( !under_debugger )
              sub_383060(0xCB61u, a6);
            goto LABEL_54;
          }
          v40 = a5;
          v23 = sub_369A00(a1, a2, v21, a6);
          v6 = 0;
          a5 = v40;
          if ( !v23 )
            return 0;
          v24 = *(_QWORD *)(a1 + 8);
          v25 = *(_QWORD *)(a1 + 16);
          v26 = (_DWORD *)(v24 + 4 * v25);
          v27 = *(_DWORD *)(a2[57] + 4 * v22);
          if ( (_DWORD *)v24 == v26 )
            goto LABEL_39;
          v28 = *(_DWORD **)(a1 + 8);
          while ( v27 != *v28 )
          {
            if ( v26 == ++v28 )
              goto LABEL_39;
          }
          if ( v28 == v26 )
          {
LABEL_39:
            if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v25 + 1) )
            {
              v33 = qvector_reserve(a1 + 8, v24, v25 + 1, 4);
              v34 = *(_QWORD *)(a1 + 16);
              a5 = v40;
              *(_QWORD *)(a1 + 8) = v33;
              v6 = 0;
              v26 = (_DWORD *)(v33 + 4 * v34);
            }
            *v26 = v27;
            ++*(_QWORD *)(a1 + 16);
          }
          ++*(_DWORD *)(a1 + 36);
          v20 = *(_DWORD *)(a1 + 40);
        }
        *(_DWORD *)(a1 + 40) = v20 - 1;
      }
      if ( !a5 )
        goto LABEL_35;
      goto LABEL_43;
    }
    return 0;
  }
  v12 = *v36;
  if ( *v36 <= a3 )
    goto LABEL_8;
LABEL_35:
  *v36 = a3 + 1;
  return 1;
}

