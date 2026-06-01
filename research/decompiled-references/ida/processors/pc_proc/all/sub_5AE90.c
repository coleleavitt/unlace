unsigned __int64 __fastcall sub_5AE90(_QWORD *a1, int *a2, int *a3, int a4, unsigned __int64 a5)
{
  unsigned __int64 v6; // rbx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  _BYTE *v15; // rcx
  char v16; // dl
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // rax
  char *v20; // rax
  int v21; // ebp
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // r12d
  int v27; // eax
  int v28; // eax
  int v29; // r10d
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+8h] [rbp-B0h]
  int v35; // [rsp+8h] [rbp-B0h]
  int v36; // [rsp+Ch] [rbp-ACh]
  int v38; // [rsp+14h] [rbp-A4h]
  _QWORD *v42; // [rsp+50h] [rbp-68h]
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v6 = a1[2];
  if ( !v6 )
  {
    if ( a4 <= 2 )
    {
      v7 = *a3;
      if ( a4 == 1 || (v8 = a3[1], v8 == -1) )
      {
        v9 = v7;
        v10 = 3;
      }
      else
      {
        v9 = v7 | (v8 << 16);
        v10 = 4;
      }
      a2[2] = v9;
      *a2 = v10;
      return v43 - __readfsqword(0x28u);
    }
    v12 = 0;
    v13 = a1[1];
    if ( a1[3] < (unsigned __int64)a4 )
    {
      v33 = qvector_reserve();
      a1[1] = v33;
      v13 = v33;
      v12 = a1[2];
    }
    memset((void *)(v13 + 2 * v12), 0, 2 * (a4 - v12));
    v14 = a5;
    a1[2] = a4;
    do
    {
      v15 = (_BYTE *)(v6 + a1[1]);
      *v15 = 4 * v6;
      v16 = 8;
      if ( v14 <= 8 )
        v16 = v14;
      v14 -= 8LL;
      v6 += 2LL;
      v15[1] = v16;
    }
    while ( v14 != a5 - 8LL * a4 );
  }
  v42 = nullptr;
  if ( a5 )
  {
    v42 = (_QWORD *)qvector_reserve();
    *v42 = 0;
    v42[1] = a5;
  }
  v17 = qalloc_or_throw();
  *(_QWORD *)v17 = 0;
  v18 = (__int64 *)v17;
  *(_OWORD *)(v17 + 8) = 0;
  if ( a1[2] )
  {
    v19 = 0;
    v38 = 0;
LABEL_18:
    v20 = (char *)(a1[1] + 2 * v19);
    v21 = *v20;
    v34 = v20[1];
    rangeset_t_sub();
    v22 = v34;
    while ( 1 )
    {
      v26 = 8;
      v27 = v21 + 7;
      if ( v22 <= 8 )
        v26 = v22;
      if ( v21 >= 0 )
        v27 = v21;
      v28 = v27 >> 3;
      v29 = a3[v28];
      v6 = (unsigned int)(v21 % 8);
      if ( v29 != -1 )
        break;
      if ( a4 <= v28 || (v23 = v18[1]) == 0 )
      {
        if ( !under_debugger )
        {
          interr();
          goto LABEL_34;
        }
LABEL_47:
        BUG();
      }
      v24 = *v18;
      v30 = *v18 + 24 * v23 - 24;
      v29 = *(_DWORD *)(v30 + 8);
      v31 = *(unsigned __int16 *)(v30 + 18);
      if ( (((unsigned __int8)(v31 + BYTE2(v29)) | (unsigned __int8)v21) & 7) != 0 )
      {
        v29 = (unsigned __int16)v29;
        LODWORD(v6) = ((v31 + HIWORD(*(_DWORD *)(v30 + 8)) + 7) & 0xFFFFFFF8) + v6;
        if ( v18[2] < (unsigned __int64)(v23 + 1) )
        {
LABEL_31:
          v36 = v22;
          v35 = v29;
          v32 = qvector_reserve();
          *v18 = v32;
          v24 = v32;
          v22 = v36;
          v23 = v18[1];
          v29 = v35;
        }
LABEL_20:
        v25 = v24 + 24 * v23;
        v6 = (unsigned int)v29 | ((_DWORD)v6 << 16);
        *(_DWORD *)(v25 + 16) = 0xFFFF;
        *(_QWORD *)v25 = 0;
        *(_QWORD *)(v25 + 8) = 0;
        ++v18[1];
        *(_WORD *)(v25 + 16) = v21;
        *(_WORD *)(v25 + 18) = v26;
        *(_DWORD *)v25 = 3;
        *(_DWORD *)(v25 + 8) = v6;
        v22 -= v26;
        if ( !v22 )
          goto LABEL_33;
        goto LABEL_21;
      }
      *(_WORD *)(v30 + 18) = v26 + v31;
      v22 -= v26;
      if ( !v22 )
      {
LABEL_33:
        v19 = ++v38;
        if ( (unsigned __int64)v38 >= a1[2] )
          goto LABEL_34;
        goto LABEL_18;
      }
LABEL_21:
      v21 += v26;
    }
    v23 = v18[1];
    v24 = *v18;
    if ( v18[2] < (unsigned __int64)(v23 + 1) )
      goto LABEL_31;
    goto LABEL_20;
  }
LABEL_34:
  if ( v18 )
  {
    *a2 = 2;
    *((_QWORD *)a2 + 1) = v18;
  }
  if ( !(unsigned __int8)optimize_argloc() )
  {
    if ( !under_debugger )
    {
      interr();
      if ( v42 )
        qfree();
      _Unwind_Resume((struct _Unwind_Exception *)v6);
    }
    goto LABEL_47;
  }
  if ( v42 )
    qfree();
  return v43 - __readfsqword(0x28u);
}

