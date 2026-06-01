__int64 __fastcall sub_42300(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r8
  __int64 v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r11
  _QWORD *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 *v27; // r12
  unsigned __int64 v28; // r13
  _QWORD *v29; // rbx
  __int64 *v30; // r15
  unsigned int v31; // eax
  int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
  __int64 v38; // rdx
  _QWORD *v39; // rsi
  __int64 v40; // r12
  unsigned __int64 v41; // r15
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+8h] [rbp-A0h]
  __int64 v45; // [rsp+10h] [rbp-98h]
  unsigned __int64 v46; // [rsp+20h] [rbp-88h]
  __int128 v47; // [rsp+28h] [rbp-80h]
  __int64 v48; // [rsp+40h] [rbp-68h]
  __int128 v49; // [rsp+48h] [rbp-60h]
  __int64 v50; // [rsp+60h] [rbp-48h]

  v2 = a1[27];
  v3 = a1[26];
  v5 = v3 + 16 * v2;
  if ( v3 == v5 )
  {
    v46 = 0;
    *(_QWORD *)&v47 = 0;
  }
  else
  {
    v45 = a1[26];
    v6 = v45;
    while ( 1 )
    {
      v7 = a1[23];
      v8 = (_QWORD *)(v7 + 80LL * *(int *)(v6 + 8));
      v9 = v8[1];
      if ( v9 )
        break;
LABEL_3:
      v6 += 16;
      v45 = v3;
      v5 = v3 + 16 * v2;
      if ( v6 == v5 )
        goto LABEL_10;
    }
    v10 = v6;
    while ( 1 )
    {
      v10 += 16;
      if ( v10 == v5 )
        break;
      v11 = (_QWORD *)(v7 + 80LL * *(int *)(v10 + 8));
      if ( v11[1] )
      {
        *(_QWORD *)(*v8 + 32 * (v9 - 1) + 8) = *(_QWORD *)(*v11 + 16LL) - *(_QWORD *)(*v8 + 32 * (v9 - 1) + 16);
        v3 = a1[26];
        v2 = a1[27];
        goto LABEL_3;
      }
    }
    v5 = v3 + 16 * v2;
LABEL_10:
    v46 = 0;
    v43 = 0;
    v47 = 0;
    if ( v3 != v5 )
    {
      do
      {
        v12 = (_QWORD *)(a1[23] + 80LL * *(int *)(v45 + 8));
        v13 = v12[1];
        if ( v13 )
        {
          v14 = *v12;
          v15 = *(_QWORD *)(*v12 + 16LL);
          if ( v45 == v3 && v15 )
          {
            v36 = v47;
            v37 = v46;
            v38 = v47 + 1;
            if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
            {
              v46 = qvector_reserve();
              v37 = v46;
              v36 = v47;
              v38 = v47 + 1;
            }
            *(_QWORD *)&v47 = v38;
            v39 = (_QWORD *)(16 * v36 + v37);
            *v39 = v12[3];
            v39[1] = -*(_QWORD *)(*v12 + 16LL);
            v14 = *v12;
            v15 = *(_QWORD *)(*v12 + 16LL);
            v43 = v15;
          }
          v16 = v43;
          v17 = 0;
          while ( 1 )
          {
            v1 = 32 * v17;
            v18 = 32 * v17 + v14;
            v43 = *(_QWORD *)(v18 + 8) + v15;
            if ( v43 != v16 )
            {
              v19 = (__int64 *)a1[29];
              if ( *(_QWORD *)v18 + *(unsigned __int8 *)(v18 + 26) || !v19 )
                v20 = *(_QWORD *)v18 + *(unsigned __int8 *)(v18 + 26) - 1LL;
              else
                v20 = *v19;
              v50 = v20;
              func_tail_iterator_set();
              if ( (unsigned __int8)func_item_iterator_succ() )
              {
                v21 = v47;
                v22 = v46;
                v23 = v47 + 1;
                if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
                {
                  v46 = qvector_reserve();
                  v22 = v46;
                  v21 = v47;
                  v23 = v47 + 1;
                }
                *(_QWORD *)&v47 = v23;
                v24 = (__int64 *)(v22 + 16 * v21);
                *v24 = v50;
                v24[1] = -v43;
              }
            }
            if ( ++v17 == v13 )
              break;
            v14 = *v12;
            v16 = v43;
            v15 = *(_QWORD *)(*v12 + v1 + 48);
          }
          v3 = a1[26];
          v2 = a1[27];
        }
        v45 += 16;
      }
      while ( v45 != v3 + 16 * v2 );
    }
  }
  get_spd();
  v25 = a1[29];
  v26 = v46;
  v27 = *(__int64 **)(v25 + 72);
  v28 = v46 + 16 * v47;
  v29 = (_QWORD *)v46;
  v30 = &v27[2 * *(unsigned int *)(v25 + 68)];
  if ( v46 < v28 && v27 < v30 )
  {
    do
    {
      if ( *v27 != *v29 )
        break;
      if ( v27[1] != v29[1] )
        break;
      v27 += 2;
      v29 += 2;
      if ( v27 >= v30 )
        break;
    }
    while ( (unsigned __int64)v29 < v28 );
  }
  LOBYTE(v1) = (unsigned __int64)v29 >= v28 && v27 >= v30;
  if ( (_BYTE)v1 )
  {
    LODWORD(v1) = 0;
  }
  else if ( v27 >= v30 )
  {
LABEL_52:
    while ( (unsigned __int64)v29 < v28 )
    {
      v29 += 2;
      v26 = v46;
      LODWORD(v1) = add_auto_stkpnt() | v1;
    }
  }
  else
  {
    v48 = 0;
    v49 = 0;
    while ( 1 )
    {
      v33 = v48;
      if ( (get_aflags() & 2) != 0 )
        break;
      v34 = v49;
      v35 = *v27;
      if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
      {
        v44 = *v27;
        v48 = qvector_reserve();
        v33 = v48;
        v35 = v44;
        v34 = v49;
      }
      *(_QWORD *)(v33 + 8 * v34) = v35;
      v31 = v49;
      v27 += 2;
      v32 = v49 + 1;
      *(_QWORD *)&v49 = v49 + 1;
      if ( v27 >= v30 )
      {
        if ( v32 > 0 )
        {
          v40 = 8LL * (int)v31;
          v41 = 8 * ((int)v31 - (unsigned __int64)v31);
          while ( 1 )
          {
            LODWORD(v1) = del_stkpnt() | v1;
            if ( v41 == v40 )
              break;
            v40 -= 8;
          }
        }
        if ( v48 )
          qfree();
        v26 = v46;
        goto LABEL_52;
      }
    }
    if ( v48 )
      qfree();
    v26 = v46;
  }
  if ( v26 )
    qfree();
  return (unsigned int)v1;
}
