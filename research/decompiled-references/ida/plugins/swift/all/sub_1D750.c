bool __fastcall sub_1D750(_DWORD a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  char v10; // r15
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a3 + 4;
  v23[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1D650(a3 + 4) )
  {
    v6 = a2[1];
    v7 = a2[2];
    LODWORD(v23[0]) = -3;
    v8 = *a2;
    if ( v7 < v6 + 1 )
    {
      v22 = qvector_reserve(a2, v8, v6 + 1, 4);
      *a2 = v22;
      v8 = v22;
      v6 = a2[1];
    }
    *(_DWORD *)(v8 + 4 * v6) = -3;
    v9 = a2[1] + 1;
    a2[1] = v9;
    if ( !a3[1] )
      return v9 != 0;
  }
  else
  {
    if ( !get_tinfo_size(0, a3[4], 0) )
    {
      v23[0] = 1;
      copy_tinfo_t(v4, v23);
      v10 = 1;
      clear_tinfo_t();
      if ( !a3[1] )
        return 1;
      goto LABEL_6;
    }
    if ( !a3[1] )
    {
LABEL_19:
      v9 = a2[1];
      return v9 != 0;
    }
  }
  v10 = 0;
LABEL_6:
  v11 = 0;
  v12 = 0;
  do
  {
    v15 = *a3;
    v23[0] = 0;
    v16 = 80 * v12;
    copy_tinfo_t(v23, 80 * v12 + v15 + 64);
    if ( (unsigned __int8)sub_1D650(v23) )
    {
      v13 = a2[1];
      v14 = *a2;
      if ( a2[2] < (unsigned __int64)(v13 + 1) )
      {
        v21 = qvector_reserve(a2, v14, v13 + 1, 4);
        *a2 = v21;
        v14 = v21;
        v13 = a2[1];
      }
      *(_DWORD *)(v14 + 4 * v13) = v11;
      ++a2[1];
    }
    else if ( !get_tinfo_size(0, v23[0], 0) )
    {
      v17 = (_QWORD *)(*a3 + v16);
      clear_tinfo_t();
      v18 = v17[5];
      if ( v18 )
      {
        v17[6] = 0;
        qfree(v18);
      }
      v19 = v17[2];
      if ( v19 )
      {
        v17[3] = 0;
        qfree(v19);
      }
      cleanup_argloc(v17);
      memmove(v17, v17 + 10, *a3 + 80 * a3[1]-- - (_QWORD)v17 - 80);
    }
    ++v11;
    clear_tinfo_t();
    v12 = v11;
  }
  while ( v11 < (unsigned __int64)a3[1] );
  if ( !v10 )
    goto LABEL_19;
  return 1;
}

