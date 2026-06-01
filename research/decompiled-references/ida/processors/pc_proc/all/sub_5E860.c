bool __fastcall sub_5E860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 tinfo_size; // rax
  unsigned int v5; // r15d
  int v6; // ebx
  int v7; // edx
  int v8; // r14d
  int v9; // r8d
  int v10; // eax
  char v12; // al
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // [rsp+0h] [rbp-58h]
  int v18; // [rsp+8h] [rbp-50h]
  int v19; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+Ch] [rbp-4Ch]

  tinfo_size = get_tinfo_size();
  if ( tinfo_size != -1 )
  {
    if ( tinfo_size )
    {
      v10 = sub_5E1D0(a1, a2, (_DWORD *)a3, 0);
      if ( v10 )
        return v10 == 1;
    }
    v5 = *(_DWORD *)(a1 + 88);
    v6 = *(_DWORD *)(a1 + 80);
    v17 = *(_QWORD *)(a1 + 56);
    get_tinfo_size();
    v7 = 0;
    v8 = -1;
    v9 = 2 * v6;
    if ( (v6 & 0x40000000) == 0 )
    {
      if ( v6 > 0 )
      {
        if ( v5 > 0x10 )
        {
LABEL_6:
          if ( v5 == 176 || v5 == 256 )
            goto LABEL_22;
          goto LABEL_8;
        }
LABEL_32:
        v19 = v7;
        v15 = getinf();
        v7 = v19;
        v5 = v15;
        goto LABEL_6;
      }
      if ( v5 > 0x10 )
        goto LABEL_18;
      goto LABEL_35;
    }
    if ( v5 <= 0x10 )
    {
      v14 = getinf();
      v9 = 2 * v6;
      if ( v14 == 176 || v14 == 256 )
      {
        if ( v6 > v9 )
        {
LABEL_31:
          v7 = v9;
          goto LABEL_32;
        }
LABEL_34:
        v7 = v9;
LABEL_35:
        v20 = v7;
        v16 = getinf();
        v7 = v20;
        v5 = v16;
LABEL_18:
        if ( v5 == 176 || v5 == 256 )
          goto LABEL_25;
        goto LABEL_20;
      }
    }
    else if ( v5 == 176 || v5 == 256 )
    {
      if ( v6 > v9 )
        v6 *= 2;
      v8 = v6 - 1;
      goto LABEL_23;
    }
    v21 = v9;
    if ( (unsigned __int8)getinf_flag() )
    {
      v6 = 0;
      goto LABEL_23;
    }
    v9 = v21;
    if ( v6 > v21 )
    {
      v7 = v21;
      if ( v5 > 0x10 )
      {
LABEL_8:
        v18 = v7;
        goto LABEL_21;
      }
      goto LABEL_31;
    }
    v7 = v21;
    if ( v5 > 0x10 )
    {
LABEL_20:
      v18 = v7;
LABEL_21:
      v12 = getinf_flag();
      v7 = v18;
      if ( v12 )
      {
LABEL_22:
        v8 = v7 - 1;
        v6 = v7;
LABEL_23:
        v13 = (v17 + v8) & -v6;
        *(_QWORD *)(a1 + 56) = v13;
        cleanup_argloc();
        *(_QWORD *)(a3 + 8) = v13;
        *(_DWORD *)a3 = 1;
        *(_QWORD *)(a1 + 56) += get_tinfo_size();
        return 1;
      }
LABEL_25:
      v8 = v6 - 1;
      goto LABEL_23;
    }
    goto LABEL_34;
  }
  return 0;
}

