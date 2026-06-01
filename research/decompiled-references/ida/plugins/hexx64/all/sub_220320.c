__int64 __fastcall sub_220320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rdi
  char v23; // al
  unsigned int v24; // [rsp+18h] [rbp-138h]
  bool v25; // [rsp+1Eh] [rbp-132h]
  bool v26; // [rsp+1Fh] [rbp-131h]
  _QWORD *v27; // [rsp+28h] [rbp-128h]
  _QWORD *v28; // [rsp+30h] [rbp-120h]
  __int64 v29; // [rsp+40h] [rbp-110h]
  __int64 v30; // [rsp+48h] [rbp-108h]
  _QWORD v31[2]; // [rsp+50h] [rbp-100h] BYREF
  __int64 v32[2]; // [rsp+60h] [rbp-F0h] BYREF
  unsigned __int64 *v33; // [rsp+70h] [rbp-E0h] BYREF
  __int128 v34; // [rsp+78h] [rbp-D8h]
  __int64 v35[2]; // [rsp+90h] [rbp-C0h] BYREF
  unsigned __int64 *v36; // [rsp+A0h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-A8h]
  __int64 v38[2]; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-78h]
  __int64 v41[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+100h] [rbp-50h] BYREF
  __int64 v43; // [rsp+108h] [rbp-48h]
  unsigned __int64 v44; // [rsp+118h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  v7 = sub_1D5170(a1, a2, a3, a4, a5);
  v8 = *(_QWORD *)(a1 + 128);
  v31[1] = 0;
  v9 = v7;
  v31[0] = 0xFFFFFFFF00000000LL;
  v28 = (_QWORD *)(v7 + 160);
  if ( !(unsigned __int8)sub_11D020((__int64)v31, (_QWORD *)a1, (_QWORD *)(v7 + 160), v8)
    || (v31[0] & 0xFB) != 1
    || (v10 = *(_QWORD *)(v9 + 352), (int)v10 <= 0) )
  {
    v24 = 0;
    goto LABEL_34;
  }
  v24 = 0;
  v26 = LOBYTE(v31[0]) != 1;
  v11 = 0;
  while ( 2 )
  {
    v12 = *(unsigned int *)(*(_QWORD *)(v9 + 344) + 4 * v11);
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, a5);
      BUG();
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v12);
    v30 = v13;
    if ( *(_DWORD *)(v13 + 76) != 3 )
      goto LABEL_8;
    v14 = *(_QWORD *)(v13 + 56);
    if ( !v14 )
      goto LABEL_8;
    a5 = 0.0;
    v34 = 0;
    v32[0] = 0;
    v32[1] = 0;
    v33 = nullptr;
    v15 = sub_129150(v13, v28, v14, 0, (__int64)v32, 0, 0.0, a6, 0x101u);
    v27 = (_QWORD *)v15;
    if ( !v15 || (v16 = *(_DWORD **)(v15 + 8)) == nullptr || *v16 == 55 || sub_122C30((__int64)v32, (__int64)v28) )
    {
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree((__int64)v33);
      }
      goto LABEL_7;
    }
    sub_124680((__int64)v35, v13, (__int64)v27, 257, 0.0, a6);
    v19 = *(_QWORD *)(v13 + 56);
    v20 = v27[1];
    v25 = v37 != 0;
    if ( !v20 )
    {
LABEL_46:
      v29 = v19;
      sub_A33C0(v30, (__int64)v27);
      sub_A3160(v30, v27, v29, 0.0);
      ++v24;
      goto LABEL_28;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)v20 == 55 )
        goto LABEL_45;
      if ( (*(_BYTE *)(v20 + 6) & 8) != 0 && (v26 || v25) )
        goto LABEL_28;
      sub_127A20((__int64)v38, v30, v20, 257, v17, v18, 0.0, a6);
      sub_124680((__int64)v41, v30, v20, 257, 0.0, a6);
      if ( (unsigned __int8)sub_64780(v35, v38)
        || (unsigned __int8)sub_318470(&v36, (__int64)&v39)
        || (unsigned __int8)sub_64780(v32, v41)
        || (unsigned __int8)sub_318470(&v33, (__int64)&v42)
        || (unsigned __int8)sub_64780(v32, v38) )
      {
        break;
      }
      v23 = sub_318470(&v33, (__int64)&v39);
      v21 = v42;
      if ( v23 )
        goto LABEL_23;
      if ( v42 )
      {
        v43 = 0;
        qfree(v42);
      }
      qfree(v41[0]);
      if ( v39 )
      {
        v40 = 0;
        qfree(v39);
      }
      qfree(v38[0]);
      v19 = v20;
LABEL_45:
      v20 = *(_QWORD *)(v20 + 8);
      if ( !v20 )
        goto LABEL_46;
    }
    v21 = v42;
LABEL_23:
    if ( v21 )
    {
      v43 = 0;
      qfree(v21);
    }
    qfree(v41[0]);
    if ( v39 )
    {
      v40 = 0;
      qfree(v39);
    }
    qfree(v38[0]);
LABEL_28:
    if ( v36 )
    {
      v37 = 0;
      qfree((__int64)v36);
    }
    qfree(v35[0]);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree((__int64)v33);
    }
LABEL_7:
    qfree(v32[0]);
    v10 = *(_QWORD *)(v9 + 352);
LABEL_8:
    if ( (int)v10 > (int)++v11 )
      continue;
    break;
  }
LABEL_34:
  sub_11CDA0((__int64)v31);
  return v24;
}

