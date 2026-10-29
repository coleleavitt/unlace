__int64 __fastcall sub_10B30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 *v6; // rbx
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r12d
  char v11; // al
  __int64 v12; // rax
  int v13; // r14d
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int16 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v3 = a1;
  v4 = *((_WORD *)a2 + 12);
  v5 = a2[2];
  v24 = __readfsqword(0x28u);
  v6 = a2;
  if ( v4 == 45 )
  {
    v15 = *((_BYTE *)a2 + 41);
    if ( v15 != 1 )
    {
      if ( v15 != 7 )
      {
        if ( under_debugger )
          goto LABEL_63;
        interr(10462);
LABEL_59:
        if ( !under_debugger )
        {
          a1 = 10461;
          interr(10461);
          goto LABEL_61;
        }
LABEL_63:
        BUG();
      }
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v16 = a2[7] + 16 * *a2;
      if ( v16 != v2 )
      {
        if ( v16 != -1 )
        {
          v17 = v2 & v16;
          if ( v17 == v5 + *((unsigned __int16 *)a2 + 13) )
          {
            v2 = v17;
            goto LABEL_39;
          }
          v9 = (unsigned int)*((char *)a2 + 42);
          v2 = v17;
          v10 = 1;
LABEL_16:
          insn_add_cref(v6, v2, v9, 17);
          v13 = v10 & func_does_return(v2);
          v10 = v13 & (sub_22000(v3, v6) ^ 1);
          auto_apply_type(v6[2], v2);
          return v10;
        }
        if ( v5 + *((unsigned __int16 *)a2 + 13) == -1 )
        {
          if ( v2 != -1 )
            goto LABEL_52;
          goto LABEL_39;
        }
        if ( v2 == -1 )
        {
LABEL_15:
          v9 = (unsigned int)*((char *)a2 + 42);
          v10 = 1;
          goto LABEL_16;
        }
LABEL_37:
        v9 = (unsigned int)*((char *)a2 + 42);
        v2 = -1;
        v10 = 1;
        goto LABEL_16;
      }
      goto LABEL_49;
    }
    v22 = -1;
    LODWORD(v2) = *((unsigned __int16 *)a2 + 23);
    v23 = 0;
    if ( (_DWORD)v2 )
    {
LABEL_61:
      LOBYTE(v18) = 1;
      v10 = 1;
      goto LABEL_28;
    }
    return 1;
  }
  if ( v4 == 79 )
  {
    v11 = *((_BYTE *)a2 + 41);
    if ( v11 != 5 )
    {
      if ( v11 == 7 )
        goto LABEL_13;
      if ( under_debugger )
        goto LABEL_63;
      interr(10463);
LABEL_49:
      if ( v2 == v5 + *((unsigned __int16 *)a2 + 13) )
        goto LABEL_39;
      goto LABEL_15;
    }
    return 1;
  }
  if ( v4 != 44 )
  {
LABEL_13:
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v12 = a2[7] + 16 * *a2;
    if ( v12 == v2 )
      goto LABEL_15;
    v2 &= v12;
    if ( v12 != -1 )
      goto LABEL_15;
    goto LABEL_37;
  }
  v7 = *((_BYTE *)a2 + 41);
  if ( v7 != 1 )
  {
    if ( v7 == 4 )
    {
      v22 = -1;
      LODWORD(v2) = *((unsigned __int16 *)a2 + 23);
      a2 = nullptr;
      v23 = 0;
      if ( !(_DWORD)v2 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v8 = v6[7] + 16 * *v6;
        if ( v8 != v2 )
        {
          if ( v8 != -1 )
          {
            v9 = (unsigned int)*((char *)v6 + 42);
            v2 &= v8;
            v10 = 0;
LABEL_10:
            insn_add_cref(v6, v2, v9, 19);
            return v10;
          }
LABEL_52:
          v9 = (unsigned int)*((char *)v6 + 42);
          v2 = -1;
          v10 = 0;
          goto LABEL_10;
        }
LABEL_39:
        v9 = (unsigned int)*((char *)v6 + 42);
        v10 = 0;
        goto LABEL_10;
      }
      goto LABEL_27;
    }
    goto LABEL_59;
  }
  LODWORD(v2) = *((unsigned __int16 *)a2 + 23);
  a1 = 0;
  v22 = -1;
  v23 = 0;
  if ( (_DWORD)v2 == 31 )
  {
LABEL_27:
    LOBYTE(v18) = 0;
    v10 = 0;
    goto LABEL_28;
  }
  a2 = &v21;
  a1 = v3;
  v18 = sub_10040(v3, &v21, v5, 31, (__int64)&v22, 0);
  if ( !(_BYTE)v18 )
    goto LABEL_41;
  v20 = v21;
  a2 = (__int64 *)v3;
  sub_10980(&v22, v3, v21);
  a1 = v6[2];
  if ( v20 != a1 + *((unsigned __int16 *)v6 + 13) )
  {
    a2 = (__int64 *)v20;
    add_cref(a1, v20, 19);
LABEL_41:
    v22 = -1;
    v10 = 0;
    v23 = 0;
    goto LABEL_42;
  }
  v22 = -1;
  v5 = 0;
  v10 = v18;
  v23 = 0;
LABEL_42:
  if ( !(_DWORD)v2 )
  {
    if ( *((_BYTE *)v6 + 41) != 4 )
      return v10;
    v2 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 16LL);
    v19 = v6[7] + 16 * *v6;
    if ( v19 != v2 )
    {
      if ( v19 == -1 )
        v2 = -1;
      else
        v2 &= v19;
    }
    goto LABEL_32;
  }
LABEL_28:
  if ( (unsigned int)get_auto_state(a1, a2, v5) == 40
    && (unsigned __int8)sub_10040(v3, &v21, v6[2], (unsigned int)v2, (__int64)&v22, 0) )
  {
    v2 = v21;
    if ( *((_BYTE *)v6 + 41) != 4 )
    {
      sub_10980(&v22, v3, v21);
LABEL_33:
      v9 = (unsigned int)*((char *)v6 + 42);
      if ( !(_BYTE)v18 )
        goto LABEL_10;
      goto LABEL_16;
    }
    v2 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 16LL) & (v6[7] + v21);
LABEL_32:
    v21 = v2;
    goto LABEL_33;
  }
  return v10;
}

