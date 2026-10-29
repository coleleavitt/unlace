unsigned __int64 __fastcall sub_23A980(__int64 a1, __m128i *a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v5; // r11
  int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 *v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  int v15; // eax
  int v16; // r15d
  __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 i; // rdi
  _BYTE *v23; // rdi
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  _QWORD *v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  _DWORD *v35; // r15
  int v36; // eax
  int v37; // eax
  int v38; // eax
  char v39; // al
  __int64 *v40; // rdi
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  char v47; // al
  __int64 *v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  int v51; // eax
  __int64 v52; // [rsp+0h] [rbp-68h]
  unsigned __int64 v53; // [rsp+0h] [rbp-68h]
  int v54; // [rsp+Ch] [rbp-5Ch]
  __int64 v55; // [rsp+10h] [rbp-58h]
  int v56; // [rsp+10h] [rbp-58h]
  __int64 v57; // [rsp+10h] [rbp-58h]
  __int64 v58; // [rsp+10h] [rbp-58h]
  __int64 v59; // [rsp+10h] [rbp-58h]
  __int64 v60; // [rsp+18h] [rbp-50h]
  __int64 v61; // [rsp+18h] [rbp-50h]
  __int64 v62; // [rsp+18h] [rbp-50h]
  __int64 v63; // [rsp+18h] [rbp-50h]
  __int64 v64; // [rsp+20h] [rbp-48h]
  __int64 v65; // [rsp+20h] [rbp-48h]
  __int64 v66; // [rsp+20h] [rbp-48h]
  __int64 v67; // [rsp+20h] [rbp-48h]
  __int64 v68; // [rsp+28h] [rbp-40h]

  v5 = a3;
  v8 = *(_DWORD *)(*(_QWORD *)a3 + 76LL);
  v9 = *(_QWORD *)a3 + 24LL;
  if ( v8 <= 0 )
    v8 = 1;
  v10 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  v11 = v10 + v8;
  if ( !a2->m128i_i64[1] )
  {
    v12 = (__int64 *)a2->m128i_i64[0];
    goto LABEL_5;
  }
  v12 = (__int64 *)a2->m128i_i64[0];
  v18 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  if ( !v12 )
  {
    v19 = unk_0;
    v13 = 0;
    goto LABEL_19;
  }
  v19 = *v12;
  v20 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v20 )
  {
    v13 = 0;
    if ( v10 >= 0 )
      goto LABEL_44;
LABEL_30:
    if ( v12[1] == v13 )
      goto LABEL_44;
    v19 = *(_QWORD *)v13;
LABEL_19:
    if ( (v19 & 2) != 0 )
    {
      v13 = *(_QWORD *)(v13 + 16);
    }
    else
    {
      v21 = *(_QWORD *)(v13 + 8);
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        v40 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
        v41 = *v40;
        if ( (*v40 & 2) == 0 )
        {
          while ( v40[1] == v13 )
          {
            v13 = (unsigned __int64)v40;
            v42 = v41 & 0xFFFFFFFFFFFFFFFCLL;
            v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v41 & 2) != 0 )
            {
              v13 = v42;
              goto LABEL_43;
            }
            v40 = (__int64 *)v42;
          }
        }
        v13 = (unsigned __int64)v40;
      }
      else
      {
        for ( i = *(_QWORD *)(v21 + 16); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 16) )
          v21 = i;
        v13 = v21;
      }
    }
LABEL_43:
    if ( (__int64 *)v13 != v12 )
      goto LABEL_44;
LABEL_5:
    if ( v12 )
    {
      v13 = (unsigned __int64)v12;
      if ( a2->m128i_i64[1] )
        v13 = v12[1];
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  v13 = (unsigned __int64)v12;
  if ( (*(_BYTE *)v20 & 2) != 0 )
    goto LABEL_19;
  while ( 1 )
  {
    v23 = *(_BYTE **)(v20 + 8);
    if ( v10 <= *(_QWORD *)(v20 + 24) )
      break;
    v23 = *(_BYTE **)(v20 + 16);
    if ( (*v23 & 2) != 0 )
      goto LABEL_28;
LABEL_25:
    v20 = (unsigned __int64)v23;
  }
  v13 = v20;
  if ( (*v23 & 2) == 0 )
    goto LABEL_25;
LABEL_28:
  if ( v12 == (__int64 *)v13 )
  {
    v19 = *v12;
    goto LABEL_19;
  }
  if ( v10 < *(_QWORD *)(v13 + 24) )
    goto LABEL_30;
LABEL_44:
  v27 = *(_QWORD **)(a1 + 8);
  v28 = *(_QWORD *)(v13 + 24);
  v54 = *(_DWORD *)(v27[188] + 80LL);
  v53 = v13 + 24;
  v29 = v27[117];
  if ( v29 )
  {
    v68 = v5;
    v64 = v10 + v8;
    v55 = *(_QWORD *)(v9 + 32);
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
    v31 = v27[18];
    v18 = v55;
    v11 = v64;
    v5 = v68;
    if ( v30 != -1 && v31 > v30 )
      v31 = v30;
    v10 = *(_QWORD *)(v9 + 32);
    v27 = *(_QWORD **)(a1 + 8);
  }
  else
  {
    v31 = v27[18];
  }
  if ( v18 < v31 == v28 < v31 )
  {
    if ( v10 < *(_QWORD *)v53 && *(_QWORD *)v53 < v11 )
    {
      v43 = *(_QWORD *)v53;
      v44 = v27[117];
      if ( v44 )
      {
        v66 = v5;
        v62 = v11;
        v58 = *(_QWORD *)v53;
        v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 40LL))(v44);
        v46 = v27[18];
        v43 = v58;
        v11 = v62;
        v5 = v66;
        if ( v45 != -1 && v46 > v45 )
          v46 = v45;
        v10 = *(_QWORD *)(v9 + 32);
        v27 = *(_QWORD **)(a1 + 8);
      }
      else
      {
        v46 = v27[18];
      }
      if ( v11 < v46 == v43 < v46 )
        v11 = *(_QWORD *)v53;
    }
    v32 = v27;
    if ( v10 < *(_QWORD *)v53 )
      goto LABEL_51;
    v35 = (_DWORD *)(v27[54] + 104LL * *(int *)(v13 + 32));
    v56 = v35[22];
    if ( *v35 == 1 )
    {
      v67 = v5;
      v63 = v11;
      v47 = getinf_flag();
      v11 = v63;
      v5 = v67;
      if ( v47 )
      {
        v32 = *(_QWORD **)(a1 + 8);
      }
      else
      {
        v59 = v54 - 1 + (__int64)(int)sub_1C35C0(v35, v35[22], *(double *)a4.m128i_i64);
        v51 = sub_1C3500(v35, *(double *)a4.m128i_i64);
        v5 = v67;
        v11 = v63;
        v32 = *(_QWORD **)(a1 + 8);
        v56 = (v59 & -v54) - v51;
      }
    }
    v65 = v5;
    v60 = v11;
    v36 = sub_227B10((_QWORD *)(v9 + 24), v8, v54, *((_DWORD *)v32 + 18));
    v37 = sub_1C36B0(
            (__int64)v35,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
            *(_QWORD *)(v9 + 32) & -v36,
            v8 + *(_QWORD *)(v9 + 32) - (*(_QWORD *)(v9 + 32) & -v36),
            v56,
            nullptr,
            *(double *)a4.m128i_i64,
            nullptr);
    v11 = v60;
    v5 = v65;
    if ( !v37 )
    {
      v39 = sub_229120(v35, *(_QWORD *)(a1 + 8), *(_QWORD *)(v9 + 32), v8, *(double *)a4.m128i_i64);
      v11 = v60;
      v5 = v65;
      if ( !v39 )
        goto LABEL_75;
    }
    v61 = v5;
    v16 = *(_DWORD *)(v13 + 32);
    v57 = v11;
    v38 = sub_231430(*(_QWORD *)(a1 + 8), v16, *(_QWORD *)(v9 + 32), v8, nullptr, 0, *(double *)a4.m128i_i64);
    v11 = v57;
    v5 = v61;
    if ( !v38 )
    {
      if ( !under_debugger )
        sub_383060(0xCC45u, *(double *)a4.m128i_i64);
      BUG();
    }
    if ( v16 == -1 )
    {
LABEL_75:
      v32 = *(_QWORD **)(a1 + 8);
      v10 = *(_QWORD *)(v9 + 32);
      goto LABEL_51;
    }
  }
  else
  {
    v32 = v27;
LABEL_51:
    if ( !*((_BYTE *)v32 + 320) )
      goto LABEL_62;
    if ( v10 < (*(_QWORD *)v53 & -v54) )
    {
      v33 = a2->m128i_i64[0];
      if ( a2->m128i_i64[0] && a2->m128i_i64[1] )
        v33 = *(_QWORD *)(v33 + 8);
      if ( v33 != v13 )
      {
        if ( (*(_QWORD *)v13 & 2) != 0 )
        {
          v13 = *(_QWORD *)(v13 + 16);
          v53 = v13 + 24;
        }
        else
        {
          v34 = *(_QWORD *)(v13 + 8);
          if ( (*(_BYTE *)v34 & 2) != 0 )
          {
            v48 = (__int64 *)(*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL);
            v49 = *v48;
            if ( (*v48 & 2) == 0 )
            {
              while ( v48[1] == v13 )
              {
                v13 = (unsigned __int64)v48;
                v50 = v49 & 0xFFFFFFFFFFFFFFFCLL;
                v49 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v49 & 2) != 0 )
                {
                  v13 = v50;
                  v53 = v50 + 24;
                  goto LABEL_61;
                }
                v48 = (__int64 *)v50;
              }
            }
            v13 = (unsigned __int64)v48;
          }
          else
          {
            do
            {
              v13 = v34;
              v34 = *(_QWORD *)(v34 + 16);
            }
            while ( (*(_BYTE *)v34 & 2) == 0 );
          }
          v53 = v13 + 24;
        }
      }
    }
LABEL_61:
    v16 = *(_DWORD *)(v53 + 8);
    if ( v16 == -1 )
    {
LABEL_62:
      v12 = (__int64 *)a2->m128i_i64[0];
      if ( a2->m128i_i64[0] == v13 )
        goto LABEL_5;
      while ( 1 )
      {
LABEL_9:
        if ( v10 <= *(_QWORD *)(v13 + 24) )
          goto LABEL_33;
        if ( (*(_QWORD *)v13 & 2) != 0 )
        {
          while ( *(_QWORD *)(v13 + 24) < v10 )
            ;
LABEL_33:
          if ( v11 > *(_QWORD *)(v13 + 24) )
            v11 = *(_QWORD *)(v13 + 24);
          goto LABEL_14;
        }
        v14 = *(_QWORD *)(v13 + 16);
        if ( (*(_BYTE *)v14 & 2) != 0 )
          break;
        do
        {
          v13 = v14;
          v14 = *(_QWORD *)(v14 + 8);
        }
        while ( (*(_BYTE *)v14 & 2) == 0 );
        if ( v12 == (__int64 *)v13 )
          goto LABEL_14;
      }
      v24 = (_QWORD *)(*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL);
      v25 = *v24;
      if ( (*v24 & 2) != 0 || v24[2] != v13 )
      {
LABEL_37:
        v13 = (unsigned __int64)v24;
      }
      else
      {
        while ( 1 )
        {
          v13 = v25 & 0xFFFFFFFFFFFFFFFCLL;
          v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v25 & 2) != 0 )
            break;
          v26 = v24;
          v24 = (_QWORD *)v13;
          if ( *(_QWORD **)(v13 + 16) != v26 )
            goto LABEL_37;
        }
      }
LABEL_8:
      if ( v12 != (__int64 *)v13 )
        goto LABEL_9;
LABEL_14:
      v52 = v5;
      v15 = sub_23A5A0(a1, a2, v9, (int)v11 - (int)v10, *(double *)a4.m128i_i64, a5);
      v5 = v52;
      v16 = v15;
    }
  }
  return sub_239880(a1, v5, v16, 1, a4);
}

