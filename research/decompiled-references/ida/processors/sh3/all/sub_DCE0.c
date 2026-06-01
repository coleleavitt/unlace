__int64 __fastcall sub_DCE0(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  unsigned int v16; // ecx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rbp
  _DWORD *v25; // rdx
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 *v28; // rcx
  __int64 *v29; // rdx
  _QWORD *v30; // rcx
  __int64 *v31; // rdx
  _QWORD *v32; // rcx
  _DWORD *v33; // rdx
  __int64 *v34; // rcx

  if ( a2 != 30 )
  {
    if ( a2 != 48 )
      return 0;
    v5 = *a3;
    if ( *a3 > 0x2F )
    {
      v31 = *((__int64 **)a3 + 1);
      v32 = v31 + 1;
      *((_QWORD *)a3 + 1) = v31 + 1;
      v8 = *v31;
    }
    else
    {
      v6 = *((_QWORD *)a3 + 2);
      v7 = v5 + 8;
      *a3 = v7;
      v8 = *(_QWORD *)(v6 + v5);
      if ( (unsigned int)v7 <= 0x2F )
      {
        v9 = v5 + 16;
        *a3 = v9;
        v10 = *(_QWORD *)(v6 + v7);
        if ( (unsigned int)v9 <= 0x2F )
        {
          v11 = v5 + 24;
          *a3 = v11;
          v12 = *(_DWORD *)(v6 + v9);
          if ( (unsigned int)v11 <= 0x2F )
          {
            v13 = v5 + 32;
            *a3 = v13;
            v14 = *(_QWORD *)(v6 + v11);
            if ( (unsigned int)v13 <= 0x2F )
            {
              v15 = (_QWORD *)(v13 + v6);
              *a3 = v5 + 40;
              goto LABEL_10;
            }
            v15 = *((_QWORD **)a3 + 1);
LABEL_28:
            *((_QWORD *)a3 + 1) = v15 + 1;
LABEL_10:
            if ( v12 - 93 <= 1 && *v15 != v14 )
            {
              set_sreg_at_next_code(v8, v10, v12);
              revert_ida_decisions(v8, v10);
              auto_mark_range(v8, v10, 200);
            }
            return 0;
          }
          v34 = *((__int64 **)a3 + 1);
LABEL_27:
          v15 = v34 + 1;
          *((_QWORD *)a3 + 1) = v34 + 1;
          v14 = *v34;
          goto LABEL_28;
        }
        v33 = *((_DWORD **)a3 + 1);
LABEL_26:
        v34 = (__int64 *)(v33 + 2);
        *((_QWORD *)a3 + 1) = v33 + 2;
        v12 = *v33;
        goto LABEL_27;
      }
      v32 = *((_QWORD **)a3 + 1);
    }
    v33 = v32 + 1;
    *((_QWORD *)a3 + 1) = v32 + 1;
    v10 = *v32;
    goto LABEL_26;
  }
  v16 = *a3;
  if ( *a3 > 0x2F )
  {
    v28 = *((__int64 **)a3 + 1);
    v29 = v28 + 1;
    *((_QWORD *)a3 + 1) = v28 + 1;
    v20 = *v28;
LABEL_21:
    v30 = v29 + 1;
    *((_QWORD *)a3 + 1) = v29 + 1;
    v22 = *v29;
LABEL_22:
    v25 = v30 + 1;
    *((_QWORD *)a3 + 1) = v30 + 1;
    v24 = *v30;
    goto LABEL_23;
  }
  v18 = *((_QWORD *)a3 + 2);
  v19 = v16 + 8;
  *a3 = v19;
  v20 = *(_QWORD *)(v18 + v16);
  if ( (unsigned int)v19 > 0x2F )
  {
    v29 = *((__int64 **)a3 + 1);
    goto LABEL_21;
  }
  v21 = v16 + 16;
  *a3 = v21;
  v22 = *(_QWORD *)(v18 + v19);
  if ( (unsigned int)v21 > 0x2F )
  {
    v30 = *((_QWORD **)a3 + 1);
    goto LABEL_22;
  }
  v23 = v16 + 24;
  *a3 = v23;
  v24 = *(_QWORD *)(v18 + v21);
  if ( (unsigned int)v23 <= 0x2F )
  {
    v25 = (_DWORD *)(v23 + v18);
    *a3 = v16 + 32;
    goto LABEL_18;
  }
  v25 = *((_DWORD **)a3 + 1);
LABEL_23:
  *((_QWORD *)a3 + 1) = v25 + 2;
LABEL_18:
  if ( *v25 )
    return 0;
  v26 = ea2node(v20);
  v27 = ea2node(v22);
  netnode_altshift(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v26, v27, v24, 65);
  netnode_altadjust(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v26, v27, v24, 0);
  return 0;
}

