__int64 *__fastcall sub_2C4780(_QWORD *a1, int a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // r15
  unsigned __int64 v8; // rbp
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // r13d
  int v14; // r9d
  unsigned int v15; // r10d
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r11d
  char v19; // al
  int v20; // edx
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r13
  _QWORD *v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  int v30; // eax
  char v31; // al
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v35; // [rsp+8h] [rbp-D0h]
  int v36; // [rsp+8h] [rbp-D0h]
  __int64 v37; // [rsp+8h] [rbp-D0h]
  int v38; // [rsp+8h] [rbp-D0h]
  int v39; // [rsp+8h] [rbp-D0h]
  int v40; // [rsp+8h] [rbp-D0h]
  unsigned int v41; // [rsp+10h] [rbp-C8h]
  __int64 v42; // [rsp+10h] [rbp-C8h]
  int v43; // [rsp+10h] [rbp-C8h]
  __int64 v44; // [rsp+10h] [rbp-C8h]
  __int64 v45; // [rsp+10h] [rbp-C8h]
  _QWORD *v46; // [rsp+20h] [rbp-B8h]
  char v47; // [rsp+2Fh] [rbp-A9h]
  __int64 v48; // [rsp+30h] [rbp-A8h]
  int v49; // [rsp+38h] [rbp-A0h]
  unsigned int v50; // [rsp+38h] [rbp-A0h]
  int v51; // [rsp+3Ch] [rbp-9Ch]
  int v52; // [rsp+3Ch] [rbp-9Ch]
  _QWORD v53[2]; // [rsp+40h] [rbp-98h] BYREF
  char v54; // [rsp+50h] [rbp-88h]
  __int64 v55; // [rsp+58h] [rbp-80h]
  __int64 v56; // [rsp+60h] [rbp-78h]
  _QWORD v57[2]; // [rsp+70h] [rbp-68h] BYREF
  char v58; // [rsp+80h] [rbp-58h]
  __m128i v59; // [rsp+88h] [rbp-50h]
  unsigned __int64 v60; // [rsp+98h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  if ( sub_3C5E70(a1 + 164) )
    return nullptr;
  v3 = a1[188];
  v4 = a1[5];
  v5 = a1[187];
  v54 = 103;
  v55 = v3;
  v53[1] = v4;
  v53[0] = off_4DB788;
  v56 = 0;
  v6 = sub_2B67B0(v5, v53);
  v7 = (__int64 *)v6;
  if ( !v6 )
    return nullptr;
  if ( *(_QWORD *)(v6 + 8) )
  {
    v47 = 0;
    v8 = 0;
    v9 = 1;
    v10 = -1;
    v46 = a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *v7 + 80 * v8;
        if ( *(_DWORD *)v11 == 1 )
          break;
        v8 = v9++;
        if ( v8 >= v7[1] )
          goto LABEL_23;
      }
      v35 = v10;
      v12 = *(_QWORD *)(v11 + 8);
      if ( v10 == -1 )
        goto LABEL_22;
      v41 = *((_DWORD *)v46 + 18);
      v13 = *(_DWORD *)(v46[188] + 80LL);
      LODWORD(v57[0]) = 0;
      get_tinfo_size();
      v14 = v57[0];
      v15 = v41;
      v16 = v35;
      v17 = LODWORD(v57[0]) - 1;
      if ( ((LODWORD(v57[0]) - 1) & v57[0]) != 0 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v18 = 2 * v13;
      if ( SLODWORD(v57[0]) <= 2 * v13 )
      {
        if ( v13 > SLODWORD(v57[0]) )
        {
          if ( v41 <= 0x10 )
            goto LABEL_42;
          goto LABEL_12;
        }
        if ( v41 <= 0x10 )
        {
LABEL_49:
          v45 = v16;
          v40 = v14;
          v33 = getinf();
          v16 = v45;
          v14 = v40;
          v15 = v33;
        }
        if ( v15 == 176 || v15 == 256 )
        {
LABEL_16:
          v20 = v13 - 1;
          goto LABEL_17;
        }
        goto LABEL_46;
      }
      if ( v41 <= 0x10 )
      {
        v51 = LODWORD(v57[0]) - 1;
        v49 = v57[0];
        v30 = getinf();
        v18 = 2 * v13;
        v16 = v35;
        if ( v30 == 176 || v30 == 256 )
        {
          if ( v13 <= v18 )
            goto LABEL_48;
LABEL_41:
          v14 = v18;
LABEL_42:
          v44 = v16;
          v39 = v14;
          v32 = getinf();
          v16 = v44;
          v14 = v39;
          v15 = v32;
LABEL_12:
          if ( v15 != 176 && v15 != 256 )
          {
LABEL_14:
            v42 = v16;
            v36 = v14;
LABEL_15:
            v19 = getinf_flag();
            v14 = v36;
            v16 = v42;
            if ( !v19 )
              goto LABEL_16;
          }
          v20 = v14 - 1;
          v13 = v14;
          goto LABEL_17;
        }
        v15 = v41;
        v14 = v49;
        v17 = v51;
      }
      else if ( v41 == 256 || v41 == 176 )
      {
        if ( v13 > v18 )
          v13 *= 2;
        v20 = v13 - 1;
        goto LABEL_17;
      }
      v48 = v16;
      v43 = v17;
      v38 = v14;
      v52 = v18;
      v50 = v15;
      v31 = getinf_flag();
      v20 = v43;
      v16 = v48;
      if ( !v31 )
      {
        v18 = v52;
        if ( v13 > v52 )
        {
          v14 = v52;
          if ( v50 <= 0x10 )
            goto LABEL_41;
          goto LABEL_14;
        }
        v14 = v52;
        if ( v50 <= 0x10 )
        {
LABEL_48:
          v14 = v18;
          goto LABEL_49;
        }
LABEL_46:
        v42 = v16;
        v36 = v14;
        goto LABEL_15;
      }
      v13 = v38;
LABEL_17:
      v21 = -v13;
      v22 = v16 + v20;
      v23 = v22 & v21;
      if ( v12 != v23 )
      {
        v37 = v22 & v21;
        v24 = *v7 + 80LL * (v9 - 2);
        if ( v12 >= v23 || *(_DWORD *)v24 != 1 || (v25 = *(_QWORD *)(v24 + 8), get_tinfo_size() + v25 != v12) )
        {
          sub_6CAE0(
            (__int64)"%a: wrong location in the user-defined vararg #%d - the rest of arguments will be ignored!\n",
            a3,
            a2);
          sub_EA5F0(v7, v8);
          v26 = v46;
LABEL_24:
          if ( v47 )
          {
            v27 = v26[188];
            v28 = v26[5];
            v58 = 103;
            v57[1] = v28;
            v57[0] = off_4DB788;
            v59 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)(unsigned __int64)v7);
            sub_2B65C0(*(_QWORD *)(v27 + 96), (__int64)v57);
          }
          return v7;
        }
        sub_6CAE0((__int64)"%a: fix unaligned location in the user-defined vararg #%d\n", a3, a2);
        cleanup_argloc();
        *(_DWORD *)v11 = 1;
        v47 = 1;
        *(_QWORD *)(v11 + 8) = v37;
      }
LABEL_22:
      v8 = v9++;
      v10 = v12 + get_tinfo_size();
      if ( v8 >= v7[1] )
      {
LABEL_23:
        v26 = v46;
        goto LABEL_24;
      }
    }
  }
  return v7;
}

