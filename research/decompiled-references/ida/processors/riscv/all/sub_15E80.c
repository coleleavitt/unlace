__int64 __fastcall sub_15E80(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v7; // r14d
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // rbx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-58h]
  __int64 v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+8h] [rbp-50h]
  unsigned int v24; // [rsp+8h] [rbp-50h]
  unsigned int v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 56);
  v5 = *a2;
  v27 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a1 + 88);
  v8 = *(_DWORD *)(a1 + 80);
  v21 = v4;
  HIDWORD(v26) = 0;
  get_tinfo_size((char *)&v26 + 4, v5, 0);
  v11 = HIDWORD(v26);
  v12 = HIDWORD(v26) - 1;
  if ( ((HIDWORD(v26) - 1) & HIDWORD(v26)) == 0 )
  {
    v13 = (unsigned int)(2 * v8);
    if ( SHIDWORD(v26) <= (int)v13 )
    {
      if ( v8 > SHIDWORD(v26) )
      {
        if ( v7 > 0x10 )
        {
LABEL_5:
          if ( v7 == 176 || v7 == 256 )
            goto LABEL_9;
          goto LABEL_7;
        }
LABEL_32:
        v25 = v11;
        v20 = getinf(99);
        v11 = v25;
        v7 = v20;
        goto LABEL_5;
      }
      if ( v7 > 0x10 )
        goto LABEL_12;
      goto LABEL_28;
    }
    if ( v7 <= 0x10 )
    {
      HIDWORD(v22) = HIDWORD(v26);
      v18 = getinf(99);
      v13 = (unsigned int)(2 * v8);
      if ( v18 == 176 || v18 == 256 )
      {
        if ( v8 > (int)v13 )
        {
LABEL_31:
          LODWORD(v11) = v13;
          goto LABEL_32;
        }
LABEL_27:
        LODWORD(v11) = v13;
LABEL_28:
        v24 = v11;
        v19 = getinf(99);
        v11 = v24;
        v7 = v19;
LABEL_12:
        if ( v7 == 176 || v7 == 256 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v11 = HIDWORD(v22);
    }
    else if ( v7 == 176 || v7 == 256 )
    {
      if ( v8 > (int)v13 )
        v8 *= 2;
      v12 = v8 - 1;
      goto LABEL_10;
    }
    if ( (unsigned __int8)getinf_flag(67, 512, v11, v9, v13, v10, v21, __PAIR64__(v13, v11), v26, v27) )
    {
      v8 = v22;
      goto LABEL_10;
    }
    v13 = HIDWORD(v22);
    if ( v8 > SHIDWORD(v22) )
    {
      v11 = HIDWORD(v22);
      if ( v7 > 0x10 )
      {
LABEL_7:
        LODWORD(v22) = v11;
        v14 = 2;
        goto LABEL_8;
      }
      goto LABEL_31;
    }
    v11 = HIDWORD(v22);
    if ( v7 > 0x10 )
    {
LABEL_14:
      LODWORD(v22) = v11;
      v14 = 4;
LABEL_8:
      v15 = getinf_flag(67, v14, v11, v9, v13, v10, v21, v22, v26, v27);
      LODWORD(v11) = v23;
      if ( v15 )
      {
LABEL_9:
        v12 = v11 - 1;
        v8 = v11;
LABEL_10:
        v16 = (v21 + v12) & -v8;
        *(_QWORD *)(a1 + 56) = v16;
        cleanup_argloc(a3);
        *(_QWORD *)(a3 + 8) = v16;
        *(_DWORD *)a3 = 1;
        *(_QWORD *)(a1 + 56) += get_tinfo_size(0, *a2, 0);
        return v27 - __readfsqword(0x28u);
      }
LABEL_15:
      v12 = v8 - 1;
      goto LABEL_10;
    }
    goto LABEL_27;
  }
  sub_15390();
  return sub_16100();
}

