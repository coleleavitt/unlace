__int64 __fastcall sub_34540(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v7; // r14d
  int v8; // ebx
  int v9; // edx
  int v10; // ebp
  int v11; // r8d
  __int64 v12; // rsi
  char v13; // al
  __int64 v14; // rbx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-58h]
  int v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+Ch] [rbp-4Ch]
  int v25; // [rsp+Ch] [rbp-4Ch]
  int v26; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 56);
  v5 = *a2;
  v27 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a1 + 88);
  v8 = *(_DWORD *)(a1 + 80);
  v19 = v4;
  v26 = 0;
  get_tinfo_size(&v26, v5, 0);
  v9 = v26;
  v10 = v26 - 1;
  if ( ((v26 - 1) & v26) == 0 )
  {
    v11 = 2 * v8;
    if ( v26 <= 2 * v8 )
    {
      if ( v8 > v26 )
      {
        if ( v7 > 0x10 )
        {
LABEL_5:
          if ( v7 == 176 || v7 == 256 )
            goto LABEL_9;
          goto LABEL_7;
        }
LABEL_32:
        v23 = v9;
        v18 = getinf(99);
        v9 = v23;
        v7 = v18;
        goto LABEL_5;
      }
      if ( v7 > 0x10 )
        goto LABEL_12;
      goto LABEL_28;
    }
    if ( v7 <= 0x10 )
    {
      v25 = v26;
      v16 = getinf(99);
      v11 = 2 * v8;
      if ( v16 == 176 || v16 == 256 )
      {
        if ( v8 > v11 )
        {
LABEL_31:
          v9 = v11;
          goto LABEL_32;
        }
LABEL_27:
        v9 = v11;
LABEL_28:
        v22 = v9;
        v17 = getinf(99);
        v9 = v22;
        v7 = v17;
LABEL_12:
        if ( v7 == 176 || v7 == 256 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v9 = v25;
    }
    else if ( v7 == 176 || v7 == 256 )
    {
      if ( v8 > v11 )
        v8 *= 2;
      v10 = v8 - 1;
      goto LABEL_10;
    }
    v21 = v9;
    v24 = v11;
    if ( (unsigned __int8)getinf_flag(67, 512) )
    {
      v8 = v21;
      goto LABEL_10;
    }
    v11 = v24;
    if ( v8 > v24 )
    {
      v9 = v24;
      if ( v7 > 0x10 )
      {
LABEL_7:
        v20 = v9;
        v12 = 2;
        goto LABEL_8;
      }
      goto LABEL_31;
    }
    v9 = v24;
    if ( v7 > 0x10 )
    {
LABEL_14:
      v20 = v9;
      v12 = 4;
LABEL_8:
      v13 = getinf_flag(67, v12);
      v9 = v20;
      if ( v13 )
      {
LABEL_9:
        v10 = v9 - 1;
        v8 = v9;
LABEL_10:
        v14 = (v19 + v10) & -v8;
        *(_QWORD *)(a1 + 56) = v14;
        cleanup_argloc(a3);
        *(_QWORD *)(a3 + 8) = v14;
        *(_DWORD *)a3 = 1;
        *(_QWORD *)(a1 + 56) += get_tinfo_size(0, *a2, 0);
        return v27 - __readfsqword(0x28u);
      }
LABEL_15:
      v10 = v8 - 1;
      goto LABEL_10;
    }
    goto LABEL_27;
  }
  sub_31A20();
  return j__use_mapping();
}
