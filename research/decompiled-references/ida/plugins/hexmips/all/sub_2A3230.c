__int64 __fastcall sub_2A3230(__int64 a1, int a2, unsigned int *a3, int a4, int a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ebp
  __int64 v17; // rcx
  __int64 v18; // r15
  int v19; // edx
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int *v23; // rax
  __m128i *v24; // rbp
  unsigned __int64 *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  int v28; // r14d
  unsigned __int64 v29; // r15
  int v30; // eax
  _QWORD *v31; // rax
  unsigned __int64 v32; // r14
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v38; // [rsp+38h] [rbp-F0h]
  _QWORD *v39; // [rsp+38h] [rbp-F0h]
  __int64 v40; // [rsp+40h] [rbp-E8h]
  _QWORD *v41; // [rsp+48h] [rbp-E0h]
  __m128i v42; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 *v43; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-C0h]
  _QWORD v45[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+88h] [rbp-A0h]
  unsigned int v48[4]; // [rsp+90h] [rbp-98h] BYREF
  _DWORD v49[4]; // [rsp+A0h] [rbp-88h] BYREF
  int v50; // [rsp+B0h] [rbp-78h]
  _QWORD v51[2]; // [rsp+C0h] [rbp-68h] BYREF
  _DWORD v52[4]; // [rsp+D0h] [rbp-58h] BYREF
  int v53; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v54; // [rsp+E8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v51[0] = 0;
  v51[1] = 0;
  v46 = 0;
  v47 = 0;
  v48[0] = 0;
  sub_29AEF0((__int64)v48, (unsigned int *)&v46);
  v49[0] = 0;
  sub_29AEF0((__int64)v49, (unsigned int *)v51);
  v50 = 0;
  sub_29A3B0((__int64)&v46);
  sub_29A3B0((__int64)v51);
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 || !*(_QWORD *)(a1 + 24) || (v7 = *(_QWORD *)(v6 + 8), v6 == v7) )
  {
LABEL_15:
    v15 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v8 = v7 + 24;
    v9 = v7 + 40;
    if ( !a4 )
      v9 = v7 + 24;
    if ( *(_DWORD *)v9 == 6 && (v10 = *(_QWORD *)(v9 + 8), *(_DWORD *)(v10 + 8) == 65) )
      v11 = *(_DWORD *)(v10 + 32);
    else
      v11 = -1;
    if ( a2 != v11 )
      goto LABEL_10;
    v46 = 0;
    v47 = 0;
    v45[0] = 0;
    v45[1] = 0;
    LODWORD(v51[0]) = 0;
    sub_29AEF0((__int64)v51, (unsigned int *)v45);
    v52[0] = 0;
    sub_29AEF0((__int64)v52, (unsigned int *)&v46);
    v53 = 0;
    sub_29A3B0((__int64)v45);
    sub_29A3B0((__int64)&v46);
    if ( a4 == 1 )
    {
      v17 = (__int64)a3;
      v18 = v7 + 24;
      if ( *(_DWORD *)(v7 + 28) != a3[1] )
        goto LABEL_19;
    }
    else
    {
      v18 = v7 + 40;
      v17 = (__int64)(a3 + 4);
      if ( *(_DWORD *)(v7 + 44) != a3[5] )
        goto LABEL_19;
    }
    v38 = v17;
    v40 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( !(unsigned int)sub_299E70(v18, v17) )
      break;
    v19 = *(_DWORD *)v18;
    if ( *(_DWORD *)v38 != 2 )
    {
      if ( a3[8] == *(_DWORD *)(v7 + 56) && v19 == 1 && *(_DWORD *)v38 == 1 )
      {
        if ( (unsigned __int8)compare_tinfo() )
          goto LABEL_62;
        sub_298CD0((__int64 *)&v43, *(_QWORD *)(v40 + 1496), (__int64 *)(v18 + 8), (__int64 *)(v38 + 8));
        if ( (_BYTE)v43 )
        {
          sub_29AEF0((__int64)v48, a3);
          sub_29AEF0((__int64)v49, a3 + 4);
          v50 = a3[8];
          copy_tinfo_t();
          clear_tinfo_t();
          goto LABEL_55;
        }
        clear_tinfo_t();
      }
      goto LABEL_19;
    }
    v21 = *(_QWORD *)(v38 + 8);
    if ( !*(_DWORD *)v21 )
    {
      if ( v19 == 2 )
        goto LABEL_62;
      goto LABEL_19;
    }
    if ( v19 == 2 )
    {
      v22 = *(_QWORD *)(v18 + 8);
      if ( !*(_DWORD *)v22 )
        goto LABEL_69;
      if ( *(_DWORD *)(v7 + 56) == a3[8] && *(_DWORD *)v22 == 3 )
      {
        v39 = *(_QWORD **)(v22 + 8);
        if ( *(_DWORD *)v21 == 3 )
        {
          v41 = *(_QWORD **)(v21 + 8);
          if ( v41 )
          {
            if ( v39 )
            {
              sub_29ACE0(v42.m128i_i64, (__int64)v39);
              if ( !(unsigned __int8)sub_2A1C40(&v42, v40, v41, (__int64)v51) )
              {
                if ( v42.m128i_i64[0] )
                {
                  sub_29A2B0((unsigned __int64 **)&v42);
                  if ( v42.m128i_i64[0] )
                    qfree();
                }
                goto LABEL_19;
              }
              if ( (unsigned int)sub_299C60(&v42, v39) )
              {
                sub_29AEF0((__int64)v48, a3);
                sub_29AEF0((__int64)v49, a3 + 4);
                v50 = a3[8];
                v23 = v49;
                if ( 1 == a4 )
                  v23 = v48;
                v24 = *(__m128i **)(*((_QWORD *)v23 + 1) + 8LL);
                if ( v24 != &v42 )
                {
                  sub_29ACE0((__int64 *)&v43, (__int64)&v42);
                  v25 = (unsigned __int64 *)v24->m128i_i64[0];
                  v24->m128i_i64[0] = (__int64)v43;
                  v43 = v25;
                  v26 = v24->m128i_i64[1];
                  v24->m128i_i64[1] = v44;
                  v44 = v26;
                  if ( v25 )
                  {
                    sub_29A2B0(&v43);
                    if ( v43 )
                      qfree();
                  }
                }
                if ( v42.m128i_i64[0] )
                {
                  sub_29A2B0((unsigned __int64 **)&v42);
                  if ( v42.m128i_i64[0] )
                    qfree();
                }
LABEL_55:
                v27 = *(_QWORD **)(a1 + 16);
                v28 = *(_DWORD *)(v7 + 64) + a5;
                a5 += *(_DWORD *)(v8 + 40);
                if ( v27 )
                {
                  v29 = *v27 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( v29 )
                  {
LABEL_57:
                    if ( (*(_BYTE *)v29 & 2) != 0 )
                      goto LABEL_61;
                    while ( 1 )
                    {
                      v30 = sub_299E70(v8, v29 + 24);
                      if ( v30 || (v30 = sub_299E70(v8 + 16, v29 + 40)) != 0 )
                      {
                        if ( v30 >= 0 )
                          goto LABEL_88;
                      }
                      else if ( *(_DWORD *)(v8 + 32) >= *(_DWORD *)(v29 + 56) )
                      {
LABEL_88:
                        v35 = sub_299E70(v29 + 24, v8);
                        if ( v35 || (v35 = sub_299E70(v29 + 40, v8 + 16)) != 0 )
                        {
                          if ( v35 < 0 )
                            goto LABEL_90;
LABEL_84:
                          if ( *(_QWORD *)(a1 + 16) == v29 )
                            goto LABEL_61;
                          break;
                        }
                        if ( *(_DWORD *)(v29 + 56) >= *(_DWORD *)(v8 + 32) )
                          goto LABEL_84;
LABEL_90:
                        v29 = *(_QWORD *)(v29 + 16);
                        goto LABEL_57;
                      }
                      v29 = *(_QWORD *)(v29 + 8);
                      if ( (*(_BYTE *)v29 & 2) != 0 )
                        goto LABEL_61;
                    }
                  }
                  sub_2A07B0((unsigned __int64 **)(a1 + 16), (__int64 *)v29);
                }
LABEL_61:
                sub_2A2F70(a1, v48, v28);
              }
              else if ( v42.m128i_i64[0] )
              {
                sub_29A2B0((unsigned __int64 **)&v42);
                if ( v42.m128i_i64[0] )
                  qfree();
              }
LABEL_62:
              v15 = 1;
              goto LABEL_63;
            }
          }
        }
      }
    }
LABEL_19:
    v53 = -1;
    sub_29A3B0((__int64)v52);
    sub_29A3B0((__int64)v51);
LABEL_10:
    if ( (*(_QWORD *)v7 & 2) != 0 )
    {
LABEL_14:
      if ( *(_QWORD *)(a1 + 16) == v7 )
        goto LABEL_15;
    }
    else
    {
      v12 = *(_QWORD *)(v7 + 16);
      if ( (*(_BYTE *)v12 & 2) != 0 )
      {
        v13 = (_QWORD *)(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL);
        v14 = *v13;
        if ( (*v13 & 2) != 0 || v7 != v13[2] )
        {
LABEL_13:
          v7 = (unsigned __int64)v13;
        }
        else
        {
          while ( 1 )
          {
            v7 = v14 & 0xFFFFFFFFFFFFFFFCLL;
            v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v14 & 2) != 0 )
              break;
            v20 = v13;
            v13 = (_QWORD *)v7;
            if ( v20 != *(_QWORD **)(v7 + 16) )
              goto LABEL_13;
          }
        }
        goto LABEL_14;
      }
      do
      {
        v7 = v12;
        v12 = *(_QWORD *)(v12 + 8);
      }
      while ( (*(_BYTE *)v12 & 2) == 0 );
      if ( *(_QWORD *)(a1 + 16) == v7 )
        goto LABEL_15;
    }
  }
  if ( (*(_DWORD *)(v18 + 4) & 0xFFFFFF7B) != 0 )
    goto LABEL_19;
  if ( *(_DWORD *)(v7 + 56) >= (signed int)a3[8] )
    goto LABEL_62;
LABEL_69:
  v31 = *(_QWORD **)(a1 + 16);
  a5 += *(_DWORD *)(v7 + 64);
  if ( v31 )
  {
    v32 = *v31 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v32 )
    {
LABEL_71:
      if ( (*(_BYTE *)v32 & 2) != 0 )
        goto LABEL_75;
      while ( 1 )
      {
        v33 = sub_299E70(v8, v32 + 24);
        if ( v33 || (v33 = sub_299E70(v8 + 16, v32 + 40)) != 0 )
        {
          if ( v33 >= 0 )
            goto LABEL_93;
        }
        else if ( *(_DWORD *)(v8 + 32) >= *(_DWORD *)(v32 + 56) )
        {
LABEL_93:
          v34 = sub_299E70(v32 + 24, v8);
          if ( v34 || (v34 = sub_299E70(v32 + 40, v8 + 16)) != 0 )
          {
            if ( v34 < 0 )
              goto LABEL_95;
LABEL_78:
            if ( *(_QWORD *)(a1 + 16) == v32 )
              goto LABEL_75;
            break;
          }
          if ( *(_DWORD *)(v32 + 56) >= *(_DWORD *)(v8 + 32) )
            goto LABEL_78;
LABEL_95:
          v32 = *(_QWORD *)(v32 + 16);
          goto LABEL_71;
        }
        v32 = *(_QWORD *)(v32 + 8);
        if ( (*(_BYTE *)v32 & 2) != 0 )
          goto LABEL_75;
      }
    }
    sub_2A07B0((unsigned __int64 **)(a1 + 16), (__int64 *)v32);
    v15 = 0;
  }
  else
  {
LABEL_75:
    v15 = 0;
  }
LABEL_63:
  if ( v53 )
    sub_2A2F70(a1, (unsigned int *)v51, a5);
  v53 = -1;
  sub_29A3B0((__int64)v52);
  sub_29A3B0((__int64)v51);
LABEL_16:
  v50 = -1;
  sub_29A3B0((__int64)v49);
  sub_29A3B0((__int64)v48);
  return v15;
}

