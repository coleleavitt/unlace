__int64 __fastcall sub_111DF0(_QWORD *a1, __int64 a2, char a3, unsigned int a4, unsigned int a5, char a6)
{
  __int64 v6; // r14
  _QWORD *v7; // r13
  __int64 v10; // r15
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // ecx
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // r14
  __int64 v18; // r13
  char v19; // bl
  __int64 v20; // rbp
  unsigned int *v21; // rdx
  int v22; // r12d
  unsigned int *v23; // rax
  unsigned int *v24; // r14
  int v25; // r15d
  __int64 v26; // rdx
  unsigned int *v27; // rdx
  int v28; // ecx
  bool v29; // zf
  unsigned int v31; // [rsp+8h] [rbp-90h]
  unsigned int v32; // [rsp+Ch] [rbp-8Ch]
  unsigned int v33; // [rsp+10h] [rbp-88h]
  char v34; // [rsp+10h] [rbp-88h]
  char v35; // [rsp+10h] [rbp-88h]
  unsigned int v36; // [rsp+18h] [rbp-80h]
  int v37; // [rsp+18h] [rbp-80h]
  __int64 v38; // [rsp+20h] [rbp-78h]
  _QWORD *v39; // [rsp+20h] [rbp-78h]
  char v40; // [rsp+28h] [rbp-70h]
  unsigned int v41; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v42; // [rsp+34h] [rbp-64h] BYREF
  __int64 v43; // [rsp+38h] [rbp-60h] BYREF
  __int64 v44[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-48h]
  unsigned __int16 v46; // [rsp+54h] [rbp-44h]
  unsigned __int16 v47; // [rsp+56h] [rbp-42h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v32 = *(_DWORD *)(a2 + 4);
  if ( v32 <= 2 )
  {
    v14 = 70493;
LABEL_22:
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v14,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  v6 = *a1;
  v7 = a1;
  v10 = *(_QWORD *)(a2 + 112);
  if ( *(_BYTE *)(*a1 + 16LL) )
  {
    v34 = a6;
    result = sub_10D290(*(_QWORD *)(a2 + 112), a2);
    a6 = v34;
    if ( (_DWORD)result )
      return result;
    v11 = *(_WORD *)(v10 + 52);
    if ( (v11 & 2) == 0 )
      goto LABEL_4;
  }
  else
  {
    v11 = *(_WORD *)(v10 + 52);
    if ( (v11 & 2) == 0 )
      goto LABEL_4;
  }
  v35 = a6;
  result = sub_D7190(v10);
  if ( (_DWORD)result )
    return result;
  v11 = *(_WORD *)(v10 + 52);
  a6 = v35;
LABEL_4:
  if ( (v11 & 8) != 0 && (a6 & 1) == 0 )
    v33 = *(_DWORD *)(v10 + 48);
  else
    v33 = 0;
  *(_WORD *)(v10 + 52) = v11 & 0xFFF7;
  v12 = sub_CC270((__int64 *)(v6 + 288), a5);
  if ( !v12 )
  {
    sub_C31E0(v10, a5);
    sub_C31A0(v10);
    goto LABEL_13;
  }
  if ( *(__int16 *)(v12 + 54) > 1 )
  {
    sub_C36A0(v12);
    v14 = 60903;
    goto LABEL_22;
  }
  *(_WORD *)(v10 + 52) |= *(_WORD *)(v12 + 52) & 8;
  v38 = v12;
  if ( *(_BYTE *)(v6 + 16) )
    sub_C31E0(v12, *(_DWORD *)(v6 + 32) + 1);
  else
    sub_C3160(v12);
  v36 = *(_DWORD *)(v10 + 48);
  sub_C31E0(v10, a5);
  sub_C31A0(v10);
  if ( *(_BYTE *)(v6 + 16) )
  {
    sub_C31E0(v38, v36);
    sub_C36A0(v38);
  }
LABEL_13:
  if ( v33 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(v6 + 272))(v6, v33, v44, 0);
    if ( (_DWORD)result )
    {
      if ( v33 <= *(_DWORD *)(v6 + 36) )
      {
        v31 = result;
        sub_C6A60(*(_QWORD *)(v6 + 64), v33, *(int **)(v6 + 280));
        return v31;
      }
      return result;
    }
    v15 = v44[0];
    *(_WORD *)(v44[0] + 52) |= 8u;
    sub_C31A0(v15);
    sub_C36A0(v44[0]);
    v42 = 0;
  }
  else
  {
    v42 = 0;
  }
  *(_DWORD *)(a2 + 4) = a5;
  if ( (a3 & 0xFB) == 1 )
  {
    result = sub_111BE0(a2);
    v42 = result;
    if ( (_DWORD)result || a3 == 1 )
      return result;
  }
  else
  {
    v16 = _byteswap_ulong(**(_DWORD **)(a2 + 80));
    if ( v16 )
    {
      sub_111970((__int64)v7, v16, 4, a5, (int *)&v42);
      result = v42;
      if ( v42 )
        return result;
    }
  }
  result = sub_C3B70(v7, a4, &v43);
  v42 = result;
  if ( (_DWORD)result )
    return result;
  result = sub_10D290(*(_QWORD *)(v43 + 112), a4);
  v42 = result;
  if ( (_DWORD)result )
  {
    if ( v43 )
    {
      sub_C36A0(*(_QWORD *)(v43 + 112));
      return v42;
    }
    return result;
  }
  v17 = v43;
  if ( a3 == 4 )
  {
    v27 = *(unsigned int **)(v43 + 80);
    v28 = 70421;
    if ( v32 != _byteswap_ulong(*v27) )
      goto LABEL_63;
LABEL_59:
    *v27 = _byteswap_ulong(a5);
LABEL_54:
    v26 = v43;
    v42 = 0;
    if ( v43 )
      goto LABEL_55;
    goto LABEL_56;
  }
  if ( !*(_BYTE *)v43 )
  {
    result = sub_EBBD0(v43);
    if ( (_DWORD)result )
    {
      v26 = v43;
      v42 = result;
      if ( v43 )
        goto LABEL_55;
      return result;
    }
  }
  v37 = *(unsigned __int16 *)(v17 + 24);
  if ( !*(_WORD *)(v17 + 24) )
  {
LABEL_60:
    if ( a3 != 5 )
      goto LABEL_62;
    v27 = (unsigned int *)(*(_QWORD *)(v17 + 80) + *(unsigned __int8 *)(v17 + 9) + 8LL);
    if ( v32 != _byteswap_ulong(*v27) )
      goto LABEL_62;
    goto LABEL_59;
  }
  v39 = v7;
  v40 = a3;
  v18 = 0;
  v41 = a5;
  v19 = a3;
  v20 = v17;
  while ( 1 )
  {
    v23 = (unsigned int *)(*(_QWORD *)(v20 + 80)
                         + (unsigned __int16)(*(_WORD *)(v20 + 26)
                                            & __ROL2__(*(_WORD *)(*(_QWORD *)(v20 + 96) + 2 * v18), 8)));
    v24 = v23;
    if ( v19 == 3 )
      break;
    if ( v32 == _byteswap_ulong(*v23) )
    {
      a5 = v41;
      v17 = v20;
      v25 = v18;
      a3 = v40;
      v7 = v39;
      *v23 = _byteswap_ulong(v41);
      goto LABEL_53;
    }
LABEL_49:
    v22 = ++v18;
    if ( (unsigned int)(v37 - 1) + 1LL == v18 )
    {
      v17 = v20;
      v25 = v22;
      v7 = v39;
      a3 = v40;
      a5 = v41;
LABEL_53:
      if ( v37 == v25 )
        goto LABEL_60;
      goto LABEL_54;
    }
  }
  (*(void (__fastcall **)(__int64, unsigned int *, __int64 *))(v20 + 128))(v20, v23, v44);
  if ( v46 >= v45 )
    goto LABEL_49;
  if ( (unsigned __int64)v24 + v47 > *(_QWORD *)(v20 + 80)
                                   + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v20 + 72) + 56LL) )
  {
    v7 = v39;
    a3 = v40;
    a5 = v41;
    v28 = 70440;
    goto LABEL_63;
  }
  v21 = (unsigned int *)((char *)v24 + v47 - 4);
  if ( v32 != _byteswap_ulong(*v21) )
    goto LABEL_49;
  a5 = v41;
  v29 = v37 == (_DWORD)v18;
  v7 = v39;
  a3 = v40;
  *v21 = _byteswap_ulong(v41);
  if ( !v29 )
    goto LABEL_54;
LABEL_62:
  v28 = 70458;
LABEL_63:
  sub_E8BB0(
    0xBu,
    "%s at line %d of [%.10s]",
    "database corruption",
    v28,
    "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  v26 = v43;
  v42 = 11;
  if ( !v43 )
    return 11;
LABEL_55:
  sub_C36A0(*(_QWORD *)(v26 + 112));
  result = v42;
  if ( !v42 )
  {
LABEL_56:
    sub_111970((__int64)v7, a5, a3, a4, (int *)&v42);
    return v42;
  }
  return result;
}
