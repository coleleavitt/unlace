__int64 __fastcall sub_6C70(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r14
  int v10; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  char *v24; // rsi
  const char *v25; // rsi
  __int64 range; // rax
  const char *v27; // [rsp+0h] [rbp-108h] BYREF
  __int128 v28; // [rsp+8h] [rbp-100h]
  __int128 v29; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D8h]
  __int128 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h]
  int v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int128 v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+80h] [rbp-88h]
  __int128 v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-68h]
  char *v41; // [rsp+B0h] [rbp-58h]
  __int128 v42; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+C8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v7 = getseg();
  if ( !v7 )
    goto LABEL_23;
  v8 = *(_QWORD *)(v7 + 8) - a3;
  if ( v8 <= 0x13
    || !(unsigned __int8)sub_4AA0(a1, a3, a3 + 20, 0)
    || !(unsigned __int8)sub_4D20(a1, 0, (unsigned int *)a1 + 12)
    || *((_DWORD *)a1 + 12) > 1u )
  {
    goto LABEL_23;
  }
  if ( *((_DWORD *)a1 + 12) == 1 )
  {
    if ( v8 <= 0x17 )
      goto LABEL_23;
    v9 = 24;
    if ( !(unsigned __int8)sub_4AA0(a1, a3, a3 + 24, 0) )
      goto LABEL_23;
  }
  else
  {
    v9 = 20;
  }
  if ( (unsigned __int8)get_fixups()
    || !(unsigned __int8)sub_4D20(a1, 4u, (unsigned int *)a1 + 13)
    || (*((_BYTE *)a1 + 52) & 3) != 0
    || !(unsigned __int8)sub_4D20(a1, 8u, (unsigned int *)a1 + 14)
    || (a1[7] & 3) != 0
    || !(unsigned __int8)sub_4D90(a1, 0xCu, a1 + 8, 1, 0)
    || !(unsigned __int8)is_mapped()
    || !(unsigned __int8)sub_4D90(a1, 0x10u, a1 + 9, 1, 0)
    || !a1[9]
    || !(unsigned __int8)is_mapped() )
  {
LABEL_23:
    a1[3] = 0;
    LODWORD(a3) = 0;
    *(_OWORD *)a1 = -1;
    return (unsigned int)a3;
  }
  v10 = sub_4F60(a1, 4, a2);
  if ( v10 )
  {
    LOBYTE(a3) = v10 == 1;
    return (unsigned int)a3;
  }
  v12 = a1[5];
  v37 = 0;
  v39 = v12;
  v36 = 0;
  v38 = 0;
  v40 = -1;
  v42 = 0;
  v41 = (char *)qvector_reserve();
  *(_QWORD *)&v42 = 1;
  *v41 = 0;
  v13 = a1[8];
  if ( *(_QWORD *)(a2 + 8) )
  {
    range = rangeset_t_find_range();
    v13 = a1[8];
    if ( range )
    {
      if ( !sub_4ED0(a2, 0, v13) )
      {
LABEL_22:
        sub_51B0(&v36);
        goto LABEL_23;
      }
      v13 = a1[8];
    }
  }
  LODWORD(a3) = sub_7690(&v36, a2, v13, a4);
  if ( !(_BYTE)a3 || v9 == 24 && !(unsigned __int8)sub_4D90(a1, 0x14u, a1 + 10, 1, 0) )
    goto LABEL_22;
  v14 = a1[5];
  v15 = a1[9];
  v30 = 0;
  v34 = 0;
  v32 = v14;
  v35 = -1;
  v33 = 0xFFFFFFFFLL;
  v29 = 0;
  v31 = 0;
  if ( v15 && !sub_4ED0(a2, 2u, v15) && !(unsigned __int8)sub_6800(&v29, a2, a1[9], a4, a1[8]) )
  {
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    goto LABEL_22;
  }
  if ( (a4 & 0x10) != 0 )
  {
    v16 = a1[5];
    if ( *(_QWORD *)(v16 + 368) == 8 || *((_DWORD *)a1 + 12) == 1 )
      v17 = 3;
    else
      v17 = 4;
    v18 = *a1;
    v19 = sub_10380(v16, *a1, 1, "signature", 0) + v18;
    v20 = sub_10380(a1[5], v19, 0, "offset of this vtable in complete class (from top)", 0) + v19;
    v21 = sub_10380(a1[5], v20, 0, "offset of constructor displacement", 0) + v20;
    v22 = sub_10380(a1[5], v21, v17, "reference to type description", 0) + v21;
    v23 = sub_10380(a1[5], v22, v17, "reference to hierarchy description", 0);
    if ( *((_DWORD *)a1 + 12) == 1 )
      sub_10380(a1[5], v22 + v23, v17, "reference to object's base", 0);
  }
  if ( (a4 & 0x20) != 0 )
  {
    v24 = (char *)&haystack;
    v27 = 0;
    v28 = 0;
    if ( (_QWORD)v42 )
      v24 = v41;
    if ( (unsigned __int8)sub_4600((__int64)&v27, v24, 1, "??_R4", "6B@") )
    {
      v25 = &haystack;
      if ( (_QWORD)v28 )
        v25 = v27;
      sub_10260(*a1, v25);
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return (unsigned int)a3;
}
