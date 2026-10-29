__int64 __fastcall sub_56340(_DWORD *a1, _QWORD *a2, const char *a3, _QWORD *a4)
{
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 *v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r9
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi
  char *v21; // r13
  __int64 v22; // rbx
  __int64 i; // rbp
  __int64 v24; // rdi
  bool v25; // zf
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  __int64 v28; // r15
  size_t v29; // rax
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  __int64 *v33; // rsi
  int v34; // ebp
  __int64 v35; // rbx
  __int64 j; // r15
  unsigned __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rax
  int v40; // edx
  int v41; // edi
  __int64 v42; // rax
  void (*v43)(); // rax
  __int64 v44; // rdi
  __int64 v45; // rbp
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // [rsp+0h] [rbp-A8h]
  __int64 *v53; // [rsp+10h] [rbp-98h]
  __int64 *v54; // [rsp+10h] [rbp-98h]
  unsigned __int64 v55; // [rsp+18h] [rbp-90h]
  unsigned __int64 v56; // [rsp+18h] [rbp-90h]
  __int64 v57; // [rsp+28h] [rbp-80h] BYREF
  __int64 v58; // [rsp+30h] [rbp-78h]
  __int128 v59; // [rsp+38h] [rbp-70h]
  __int64 *v60; // [rsp+50h] [rbp-58h]
  __int128 v61; // [rsp+58h] [rbp-50h]
  unsigned __int64 v62; // [rsp+68h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v7 = (_QWORD *)sub_6B570(a4, "target");
  if ( !v7 )
  {
    sub_14020((__int64)"AUTOHIDE REGISTRY\n%s: the 'target' node is missing, trying the root node", a3);
    v7 = a4;
  }
  sub_49750((__int64)a2, v7, dword_98400);
  v11 = a2[10];
  v58 = 0;
  v12 = (__int64 *)a2[9];
  v59 = 0;
  if ( !(144 * v11) )
  {
    v60 = nullptr;
    v61 = 0;
    goto LABEL_71;
  }
  do
  {
    v16 = v12[16];
    if ( !v16 )
    {
LABEL_5:
      v13 = v12 + 18;
      if ( v12[4] )
        goto LABEL_6;
      goto LABEL_19;
    }
    v17 = v12[15];
    v18 = 144 * v16;
    v19 = 0x8E38E38E38E38E39LL * ((144 * v16) >> 4);
    if ( !v19 )
    {
      if ( !v17 )
        goto LABEL_5;
LABEL_16:
      for ( i = 0; i != v16; ++i )
      {
        v24 = 9 * i;
        sub_30730((_QWORD *)(v17 + 16 * v24));
        v17 = v12[15];
      }
      goto LABEL_18;
    }
    v20 = v58;
    if ( *((_QWORD *)&v59 + 1) < v19 + (unsigned __int64)v59 )
    {
      v58 = qvector_reserve();
      v20 = v58;
      v18 = 144 * v16;
    }
    v21 = (char *)(v20 + 144 * v59);
    v22 = v17 + v18;
    memmove(&v21[v18], v21, 0);
    for ( ; v22 != v17; v21 += 144 )
    {
      sub_397C0((__int64)v21, v17);
      v17 += 144;
    }
    v17 = v12[15];
    *(_QWORD *)&v59 = v19 + v59;
    if ( !v17 )
      goto LABEL_5;
    v16 = v12[16];
    if ( v16 )
      goto LABEL_16;
LABEL_18:
    v12[16] = 0;
    qfree();
    v25 = v12[4] == 0;
    v12[15] = 0;
    v13 = v12 + 18;
    v12[17] = 0;
    if ( !v25 )
    {
LABEL_6:
      v14 = a2[10];
      v12 = v13;
      goto LABEL_7;
    }
LABEL_19:
    sub_30730(v12);
    memmove(v12, v13, a2[9] + 144LL * a2[10] - (_QWORD)v12 - 144);
    v14 = a2[10] - 1LL;
    a2[10] = v14;
LABEL_7:
    v9 = (__int64 *)a2[9];
    v15 = 144 * v14;
  }
  while ( v12 != &v9[18 * v14] );
  v10 = 144 * v59;
  v26 = 0x8E38E38E38E38E39LL * ((144 * (__int64)v59) >> 4);
  if ( v26 )
  {
    v27 = v26 + v14;
    v28 = v58;
    v29 = 0;
    if ( a2[11] < v27 )
    {
      v51 = 144 * v59;
      v49 = qvector_reserve();
      a2[9] = v49;
      v10 = v51;
      v12 = (__int64 *)(v15 + v49);
      v29 = 144LL * a2[10] - v15;
    }
    v30 = v28 + v10;
    memmove((char *)v12 + v10, v12, v29);
    for ( ; v30 != v28; v12 += 18 )
    {
      sub_397C0((__int64)v12, v28);
      v28 += 144;
    }
    v31 = a2[10] + v26;
    v9 = (__int64 *)a2[9];
    a2[10] = v31;
    v12 = &v9[18 * v31];
  }
  v60 = nullptr;
  v61 = 0;
  if ( v9 == v12 )
  {
LABEL_71:
    v43 = *(void (**)())(*(_QWORD *)a1 + 792LL);
    if ( v43 == nullsub_40 )
      goto LABEL_63;
LABEL_72:
    ((void (__fastcall *)(_DWORD *, _QWORD *, void (*)(), unsigned __int64, __int64 *, unsigned __int64))v43)(
      a1,
      a2,
      nullsub_40,
      v8,
      v9,
      v10);
    goto LABEL_61;
  }
  v32 = 0;
  v33 = nullptr;
  v10 = (unsigned __int64)&v57;
  v34 = 0;
  do
  {
    v8 = v9[4];
    v35 = v9[3];
    for ( j = v35 + 136 * v8; v35 != j; v32 = v61 )
    {
      v37 = *(int *)(v35 + 28);
      if ( (v37 & 0x80000000) != 0LL )
      {
        *(_DWORD *)(v35 + 28) = v34;
        v37 = v34;
      }
      v34 = v37 + 1;
      if ( v37 >= v32 )
      {
        v57 = 0;
        v38 = v34;
        if ( v34 >= v32 )
        {
          if ( v32 < v34 )
          {
            if ( v10 < (unsigned __int64)v33 || (v8 = (unsigned __int64)&v33[*((_QWORD *)&v61 + 1)], v10 >= v8) )
            {
              if ( *((_QWORD *)&v61 + 1) >= (unsigned __int64)v34
                || (v55 = v10,
                    v53 = v9,
                    v42 = qvector_reserve(),
                    v32 = v61,
                    v38 = v34,
                    v60 = (__int64 *)v42,
                    v33 = (__int64 *)v42,
                    v9 = v53,
                    v10 = v55,
                    (unsigned __int64)v61 < v34) )
              {
                do
                {
                  v33[v32++] = 0;
                  v33 = v60;
                }
                while ( v38 != v32 );
                *(_QWORD *)&v61 = v38;
                v37 = *(int *)(v35 + 28);
              }
              else
              {
                *(_QWORD *)&v61 = v34;
                v37 = *(int *)(v35 + 28);
              }
            }
            else if ( *((_QWORD *)&v61 + 1) >= (unsigned __int64)v34
                   || (v56 = v10,
                       v54 = v9,
                       v50 = qvector_reserve(),
                       v32 = v61,
                       v38 = v34,
                       v60 = (__int64 *)v50,
                       v33 = (__int64 *)v50,
                       v9 = v54,
                       v10 = v56,
                       (unsigned __int64)v61 < v34) )
            {
              do
              {
                v33[v32++] = 0;
                v33 = v60;
              }
              while ( v38 != v32 );
              *(_QWORD *)&v61 = v38;
              v37 = *(int *)(v35 + 28);
            }
            else
            {
              *(_QWORD *)&v61 = v34;
              v37 = *(int *)(v35 + 28);
            }
          }
        }
        else
        {
          *(_QWORD *)&v61 = v34;
        }
      }
      v33[v37] = v35;
      v35 += 136;
      v33 = v60;
    }
    v9 += 18;
  }
  while ( v12 != v9 );
  v9 = &v33[v32];
  if ( v9 != v33 )
  {
    v8 = 0;
    do
    {
      v39 = *v33;
      if ( *v33 )
      {
        v40 = *(_DWORD *)(v39 + 24);
        if ( v40 < 0 )
        {
          v40 = 8 * a1[69];
          *(_DWORD *)(v39 + 24) = v40;
        }
        v41 = *(_DWORD *)(v39 + 32);
        if ( v41 >= 0 )
          v8 = v41;
        else
          *(_DWORD *)(v39 + 32) = v8;
        v8 += v40 / 8;
      }
      ++v33;
    }
    while ( v9 != v33 );
  }
  v43 = *(void (**)())(*(_QWORD *)a1 + 792LL);
  if ( v43 != nullsub_40 )
    goto LABEL_72;
LABEL_61:
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
LABEL_63:
  v44 = v58;
  if ( v58 )
  {
    v45 = v59;
    if ( (_QWORD)v59 )
    {
      v46 = 0;
      do
      {
        v47 = 9 * v46++;
        sub_30730((_QWORD *)(16 * v47 + v44));
        v44 = v58;
      }
      while ( v45 != v46 );
    }
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  return 1;
}

