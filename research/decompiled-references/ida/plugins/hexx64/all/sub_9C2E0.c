_BOOL8 __fastcall sub_9C2E0(__int128 a1, __int64 a2, __int64 a3, int a4, __int64 a5, double a6, int a7)
{
  _DWORD *v8; // rbx
  __int64 v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // r10
  int v13; // eax
  _DWORD *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  __int64 v18; // r13
  int v19; // r15d
  __int64 v20; // r12
  _DWORD *v21; // rax
  _DWORD *v22; // r10
  int v23; // eax
  _DWORD *v24; // rax
  _DWORD *v25; // r10
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  _DWORD *v34; // r14
  _DWORD *v35; // rax
  _DWORD *v36; // r12
  __int64 v37; // rdx
  _DWORD *v38; // r8
  __int64 v39; // rax
  bool v40; // [rsp+3h] [rbp-95h]
  __int64 v42; // [rsp+8h] [rbp-90h]
  _DWORD *v43; // [rsp+10h] [rbp-88h]
  _DWORD *v44; // [rsp+10h] [rbp-88h]
  _DWORD *v45; // [rsp+10h] [rbp-88h]
  _DWORD *v46; // [rsp+10h] [rbp-88h]
  _DWORD *v47; // [rsp+10h] [rbp-88h]
  __int64 v48; // [rsp+10h] [rbp-88h]
  _DWORD *v49; // [rsp+18h] [rbp-80h]
  _DWORD *v50; // [rsp+38h] [rbp-60h] BYREF
  __int64 v51; // [rsp+40h] [rbp-58h] BYREF
  __int64 v52; // [rsp+48h] [rbp-50h] BYREF
  __int64 v53[9]; // [rsp+50h] [rbp-48h] BYREF

  v53[1] = __readfsqword(0x28u);
  v40 = a5 == 0 && a7 == 1;
  if ( v40 )
  {
    if ( !under_debugger )
      sub_383060(0xC9D7u, a6);
    BUG();
  }
  v53[0] = *((_QWORD *)&a1 + 1);
  v8 = *((_DWORD **)&a1 + 1);
  *((_QWORD *)&a1 + 1) = a2;
  v10 = a5;
  v11 = (_DWORD *)sub_129440(a1, (__int64)v53, 0);
  v12 = v11;
  if ( !v11 )
    goto LABEL_5;
  v13 = *v11;
  if ( v13 != 11 )
  {
    if ( v13 == 14 )
    {
      v43 = v12;
      if ( (unsigned __int8)sub_1301F0((const __m128i *)a1, (__int64)v8, a2, v53[0], (__int64)(v12 + 16)) )
      {
        v15 = v43;
        v42 = v53[0];
        goto LABEL_11;
      }
    }
    goto LABEL_5;
  }
  if ( *((_BYTE *)v12 + 32) != 4 || (v15 = *((_DWORD **)v12 + 5), *v15 != 14) )
  {
LABEL_5:
    v42 = (__int64)v8;
    goto LABEL_6;
  }
  v42 = v53[0];
  if ( v15 )
    goto LABEL_11;
LABEL_6:
  if ( a4 != 1 )
    goto LABEL_7;
  *((_QWORD *)&a1 + 1) = a3;
  v53[0] = v42;
  v24 = (_DWORD *)sub_129440(a1, (__int64)v53, 0);
  v25 = v24;
  if ( !v24 )
    goto LABEL_7;
  v26 = *v24;
  if ( v26 != 11 )
  {
    if ( v26 == 14 )
    {
      v45 = v25;
      if ( (unsigned __int8)sub_1301F0((const __m128i *)a1, v42, a3, v53[0], (__int64)(v25 + 16)) )
      {
        v15 = v45;
        a3 = a2;
        v42 = v53[0];
        goto LABEL_11;
      }
    }
LABEL_7:
    if ( a7 != 1 )
      return v40;
    *((_QWORD *)&a1 + 1) = v10;
    v53[0] = v42;
    v21 = (_DWORD *)sub_129440(a1, (__int64)v53, 0);
    v22 = v21;
    if ( !v21 )
      return v40;
    v23 = *v21;
    if ( v23 == 11 )
    {
      if ( *((_BYTE *)v22 + 32) != 4 )
        return v40;
      v15 = *((_DWORD **)v22 + 5);
      if ( *v15 != 14 )
        return v40;
      v42 = v53[0];
      if ( !v15 )
        return v40;
      v10 = a2;
    }
    else
    {
      if ( v23 != 14 )
        return v40;
      v44 = v22;
      if ( !(unsigned __int8)sub_1301F0((const __m128i *)a1, v42, v10, v53[0], (__int64)(v22 + 16)) )
        return v40;
      v15 = v44;
      v10 = a2;
      v42 = v53[0];
    }
    goto LABEL_11;
  }
  if ( *((_BYTE *)v25 + 32) != 4 )
    goto LABEL_7;
  v15 = *((_DWORD **)v25 + 5);
  if ( *v15 != 14 )
    goto LABEL_7;
  v42 = v53[0];
  if ( !v15 )
    goto LABEL_7;
  a3 = a2;
LABEL_11:
  if ( *(_BYTE *)a3 != 4 || (v16 = *(_DWORD **)(a3 + 8), *v16 != 14) )
  {
    if ( !v10 )
      return v40;
    if ( *(_BYTE *)v10 != 4 )
      return v40;
    v16 = *(_DWORD **)(v10 + 8);
    if ( *v16 != 14 )
      return v40;
    v17 = a4;
    v10 = a3;
    a4 = a7;
    a7 = v17;
  }
  v52 = 0;
  if ( a4 != 1 )
  {
    if ( a4 == -1 )
    {
      v18 = sub_1328E0((const __m128i *)a1, v42, (__int64)v15, v8, (__int64)v16, (__int64 *)&v50, &v51, 5);
      if ( !v18 )
        return v40;
      if ( !v10 )
      {
        v31 = v52;
        v29 = v51;
        v32 = (__int64)v8;
        LODWORD(v10) = 1;
        v30 = (__int64)v50;
        goto LABEL_46;
      }
      v19 = 1;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      goto LABEL_43;
    }
LABEL_38:
    v46 = v15;
    v27 = sub_1328E0((const __m128i *)a1, v42, (__int64)v15, v8, (__int64)v16, (__int64 *)&v50, &v51, 1);
    v28 = (__int64)v46;
    v18 = v27;
    if ( !v27 )
      return v40;
    if ( !v10 )
    {
      v31 = v52;
      v29 = v51;
      v32 = (__int64)v8;
      v30 = (__int64)v50;
      goto LABEL_46;
    }
LABEL_40:
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( a4 == 1 && a7 == 1 )
    {
      if ( *(_BYTE *)v10 == 4 )
      {
        v38 = *(_DWORD **)(v10 + 8);
        if ( *v38 == 14 )
        {
          v39 = sub_1328E0((const __m128i *)a1, v42, v28, v8, (__int64)v38, v53, &v52, 1);
          if ( v39 )
          {
            if ( (unsigned __int8)sub_12EA80(v20, (const __m128i *)a1, (__int64)v8, v39, v42, (__int64)v50, 1)
              && (unsigned __int8)sub_12EA80(v20, (const __m128i *)a1, v42, v53[0], (__int64)v8, v18, 1) )
            {
              v31 = v52;
              v29 = v51;
              v32 = (__int64)v8;
              LODWORD(v10) = 0;
              v30 = (__int64)v50;
              goto LABEL_46;
            }
          }
        }
      }
      return v40;
    }
    v19 = 0;
LABEL_43:
    if ( a7 == -1 && (unsigned __int8)sub_12EA80(v20, (const __m128i *)a1, (__int64)v8, v10, v42, (__int64)v50, 1) )
    {
      v29 = v51;
      v30 = (__int64)v50;
      v31 = 0;
      v52 = 0;
      LODWORD(v10) = v19 | 2;
      v32 = (__int64)v8;
      goto LABEL_46;
    }
    return v40;
  }
  if ( v10 )
  {
    v47 = v15;
    v33 = sub_1328E0((const __m128i *)a1, v42, (__int64)v15, v8, (__int64)v16, (__int64 *)&v50, &v51, 1);
    v28 = (__int64)v47;
    v18 = v33;
    if ( !v33 )
      return v40;
    goto LABEL_40;
  }
  v34 = v16;
  v48 = (__int64)(v16 + 8);
  v18 = (__int64)(v15 + 12);
  v50 = v15 + 8;
  v35 = v15 + 8;
  v36 = v15 + 8;
  v49 = v15;
  while ( 1 )
  {
    v37 = (__int64)v35;
    if ( *(_BYTE *)v35 == 4 && **((_DWORD **)v35 + 1) == 9 )
      break;
LABEL_55:
    v50 = (_DWORD *)v18;
    v35 = (_DWORD *)v18;
    if ( v36 == (_DWORD *)v18 )
    {
      v16 = v34;
      v15 = v49;
      v10 = 0;
      goto LABEL_38;
    }
    v18 = v37;
  }
  v51 = 0;
  if ( (unsigned __int8)sub_1321C0((const __m128i *)a1, (__int64)v8, v48, v42, v18) )
  {
    v29 = (__int64)(v34 + 12);
    goto LABEL_61;
  }
  if ( !(unsigned __int8)sub_1321C0((const __m128i *)a1, (__int64)v8, (__int64)(v34 + 12), v42, v18) )
  {
    v37 = (__int64)v50;
    goto LABEL_55;
  }
  v29 = v48;
LABEL_61:
  v51 = v29;
  v31 = v52;
  LODWORD(v10) = 4;
  v32 = v42;
  v30 = (__int64)v50;
LABEL_46:
  *((_QWORD *)&a1 + 1) = v8;
  return (bool)sub_9BBC0(a1, v42, v30, v29, v32, v18, v31, v10);
}

