__int64 __fastcall sub_385F0(__int64 a1, __int64 a2, __int64 **a3, unsigned __int8 *a4)
{
  __int64 *v6; // rdx
  _QWORD *v8; // rcx
  __int64 **v9; // r13
  __int64 ***v10; // rax
  __int64 v11; // rsi
  __int64 ***v12; // rdx
  unsigned int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int16 v19; // ax
  __int64 **v20; // rsi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v26; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-E0h]
  __int64 v28; // [rsp+20h] [rbp-D8h]
  __int128 v29; // [rsp+28h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C0h]
  __int128 v31; // [rsp+40h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-A8h]
  __int128 v33; // [rsp+58h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-90h]
  __int128 v35; // [rsp+70h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-78h]
  __int128 v37; // [rsp+88h] [rbp-70h]
  char v38; // [rsp+98h] [rbp-60h]
  __int64 v39; // [rsp+A0h] [rbp-58h]
  char v40; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+B8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( (unsigned __int8)(*((_BYTE *)a3 + 24) - 10) > 1u )
    return 0;
  v6 = a3[1];
  v8 = *a3;
  v9 = (__int64 **)**a3;
  if ( v6 != (__int64 *)((char *)&dword_0 + 1) )
  {
    v10 = (__int64 ***)(v8 + 3);
    v11 = 24LL * (_QWORD)v6;
    v12 = (__int64 ***)&v8[3 * (_QWORD)v6];
    if ( v11 != 24 )
    {
      while ( *v10 == v9 )
      {
        v10 += 3;
        if ( v10 == v12 )
          goto LABEL_9;
      }
      return 0;
    }
  }
LABEL_9:
  v15 = *((_QWORD *)a4 + 1);
  v16 = *(_QWORD *)(a1 + 32);
  v26 = a1;
  v17 = *(_QWORD *)(v16 + 16) & ((unsigned __int64)v9 + v15);
  v38 = 1;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v39 = 0;
  v40 = 1;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v18 = *((unsigned __int16 *)v8 + 8);
  v27 = v17;
  v19 = sub_35600(v18);
  if ( v19 != -1 && (v19 & 0x400) != 0 && (_BYTE)v19 == 1 && (v19 & 0x800) != 0 )
  {
    v20 = a3;
    if ( (unsigned __int8)sub_5D2E0(&v26, a3, a2, a4, 8) )
    {
      v24 = sub_5DB20(&v26);
LABEL_42:
      sub_5D950(&v26, v24);
      v20 = (__int64 **)(v27 - v24);
      insn_add_dref(a2, v27 - v24, 0, 1);
      goto LABEL_43;
    }
  }
  else if ( (_WORD)v18 == 286
         && (unsigned int)sub_4E2D0(a1) == 9
         && *(_BYTE *)(a2 + 41) == 1
         && *(_WORD *)(a2 + 46) == 2 )
  {
    v20 = a3;
    if ( (unsigned __int8)sub_5D2E0(&v26, a3, a2, a4, 2) )
    {
      v24 = sub_5DB20(&v26);
      if ( v24 )
        goto LABEL_42;
    }
  }
  else
  {
    v20 = v9;
    if ( (unsigned __int8)sub_5DC40(a1, v9) )
    {
      v22 = *a3;
      v23 = (__int64)&(*a3)[3 * (_QWORD)a3[1]];
      if ( *a3 == (__int64 *)v23 )
        goto LABEL_32;
      while ( (*((_BYTE *)v22 + 18) & 0x20) != 0 )
      {
        v22 += 3;
        if ( (_QWORD *)v23 == v22 )
          goto LABEL_32;
      }
      if ( (_WORD)v18 == 88 || (_WORD)v18 == 118 || (v20 = a3, (unsigned __int8)sub_5DEA0(a1, a3, 0)) )
      {
LABEL_32:
        sub_5DA70(a2, *a4, *((_QWORD *)a4 + 1), a3);
        v20 = (__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((unsigned __int64)v9 + *((_QWORD *)a4 + 1)));
        insn_add_dref(a2, v20, 0, 1);
LABEL_43:
        v13 = 1;
        goto LABEL_15;
      }
    }
  }
  v13 = 0;
LABEL_15:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, v20, v21, 0.0);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v20, v21, 0.0);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v20, v21, 0.0);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30, v20, v21, 0.0);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, v20, v21, 0.0);
  }
  return v13;
}

