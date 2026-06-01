__int64 __fastcall sub_217480(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, double a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  int v19; // r15d
  int v20; // edx
  __int64 v21; // r9
  int v22; // r11d
  int v23; // eax
  char v24; // al
  __int64 v26; // rdx
  int v27; // r15d
  __int64 v28; // rax
  int *v29; // rdi
  bool v30; // r15
  char v31; // al
  char v32; // al
  int v33; // eax
  unsigned int v34; // [rsp+Ch] [rbp-FCh]
  __int64 v35; // [rsp+10h] [rbp-F8h]
  int v36; // [rsp+10h] [rbp-F8h]
  __int64 v37; // [rsp+10h] [rbp-F8h]
  __int64 v38; // [rsp+10h] [rbp-F8h]
  __int64 v39; // [rsp+10h] [rbp-F8h]
  __int64 v40; // [rsp+18h] [rbp-F0h]
  int v41; // [rsp+18h] [rbp-F0h]
  __int64 v42; // [rsp+18h] [rbp-F0h]
  int v43; // [rsp+18h] [rbp-F0h]
  int v44; // [rsp+18h] [rbp-F0h]
  int v45; // [rsp+18h] [rbp-F0h]
  signed __int64 v46; // [rsp+20h] [rbp-E8h]
  unsigned int v47; // [rsp+28h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-E0h]
  unsigned int v49; // [rsp+28h] [rbp-E0h]
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  unsigned int v51; // [rsp+28h] [rbp-E0h]
  unsigned int v52; // [rsp+2Ch] [rbp-DCh]
  int v53[4]; // [rsp+30h] [rbp-D8h] BYREF
  signed __int64 v54; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-C0h]
  __int64 v56; // [rsp+50h] [rbp-B8h]
  __int64 v57; // [rsp+60h] [rbp-A8h]
  __int64 v58; // [rsp+68h] [rbp-A0h]
  __int64 v59; // [rsp+98h] [rbp-70h]
  __int64 v60; // [rsp+A0h] [rbp-68h]
  __int64 v61; // [rsp+B0h] [rbp-58h]
  __int64 v62; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+C8h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return 0;
  LOBYTE(v8) = sub_1EF510(a2, *(_QWORD *)(a1 + 1504), a3, 1, a5);
  v9 = v8;
  if ( !(_BYTE)v8 )
    return 0;
  if ( *(_DWORD *)(a2 + 88) != a4 && !sub_330820((_DWORD *)a2, *(_QWORD **)(a1 + 1504), a4) )
  {
    v26 = *(int *)(a2 + 88);
    if ( v26 < a4 || !(unsigned __int8)sub_1C28A0(a2, *(_QWORD *)(a1 + 1504), v26, a4, a5) )
      return 0;
  }
  v10 = *(_DWORD *)(a2 + 24);
  if ( (v10 & 0x100) == 0 )
    goto LABEL_31;
  v11 = (unsigned int)a4;
  v34 = *(_DWORD *)(a1 + 72);
  if ( *(_DWORD *)a2 == 1 && *(_DWORD *)(a2 + 88) != a4 )
  {
    v12 = *(_QWORD *)(a1 + 464);
    if ( v12 )
    {
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      do
      {
        v17 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v16);
        if ( *(_DWORD *)v17 == 1 )
        {
          v18 = *(_QWORD *)(v17 + 8);
          if ( *(_QWORD *)(a2 + 8) < v18 && (v18 >= v14 || !v15) )
          {
            v14 = *(_QWORD *)(v17 + 8);
            v15 = v17;
          }
        }
        v16 = ++v13;
      }
      while ( v13 < v12 );
      if ( v15 )
      {
        v40 = v14;
        if ( !(unsigned __int8)sub_1C34E0(a2, nullptr, &v54, a4, a5) )
          return 0;
        v19 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        v53[0] = 0;
        v46 = v54;
        get_tinfo_size();
        v20 = 0;
        v11 = (unsigned int)a4;
        v21 = v40;
        v22 = 2 * v19;
        if ( (v19 & 0x40000000) == 0 )
        {
          v23 = v34;
          if ( v19 > v53[0] )
          {
            if ( v34 > 0x10 )
            {
LABEL_20:
              if ( v23 != 176 && v23 != 256 )
              {
LABEL_22:
                v47 = v11;
                v41 = v20;
                v35 = v21;
                v24 = getinf_flag();
                v21 = v35;
                v20 = v41;
                v11 = v47;
                if ( !v24 )
                  goto LABEL_24;
              }
LABEL_23:
              v19 = v20;
              goto LABEL_24;
            }
LABEL_81:
            v50 = v11;
            v44 = v20;
            v38 = v21;
            v23 = getinf();
            v11 = v50;
            v20 = v44;
            v21 = v38;
            goto LABEL_20;
          }
          if ( v34 > 0x10 )
          {
LABEL_75:
            if ( v23 == 176 || v23 == 256 )
              goto LABEL_24;
            goto LABEL_77;
          }
LABEL_87:
          v51 = v11;
          v45 = v20;
          v39 = v21;
          v23 = getinf();
          v11 = v51;
          v20 = v45;
          v21 = v39;
          goto LABEL_75;
        }
        if ( v34 <= 0x10 )
        {
          v33 = getinf();
          v22 = 2 * v19;
          v21 = v40;
          LODWORD(v11) = a4;
          if ( v33 == 176 || v33 == 256 )
          {
            if ( v19 > v22 )
            {
LABEL_80:
              v20 = v22;
              goto LABEL_81;
            }
LABEL_86:
            v20 = v22;
            goto LABEL_87;
          }
          v20 = v53[0];
        }
        else if ( v34 == 176 || v34 == 256 )
        {
          if ( v19 > v22 )
            v19 *= 2;
LABEL_24:
          if ( ((v46 + v19 - 1) & -v19) != v21 )
            return 0;
          goto LABEL_27;
        }
        v52 = v11;
        v48 = v20;
        v42 = v21;
        v36 = v22;
        v31 = getinf_flag();
        v21 = v42;
        v20 = v48;
        v11 = v52;
        if ( v31 )
          goto LABEL_23;
        v22 = v36;
        if ( v19 > v36 )
        {
          if ( v34 > 0x10 )
          {
            v20 = v36;
            goto LABEL_22;
          }
          goto LABEL_80;
        }
        if ( v34 > 0x10 )
        {
          v20 = v36;
LABEL_77:
          v49 = v11;
          v43 = v20;
          v37 = v21;
          v32 = getinf_flag();
          v21 = v37;
          v11 = v49;
          if ( v32 )
            v19 = v43;
          goto LABEL_24;
        }
        goto LABEL_86;
      }
    }
  }
LABEL_27:
  sub_1C7740(v53, a1, a2, v11, a5);
  if ( !v53[0] )
  {
LABEL_46:
    cleanup_argloc();
    return 0;
  }
  if ( *(int *)(a2 + 88) < a4 && *(_QWORD *)(a1 + 464) )
  {
    v27 = 0;
    v28 = 0;
    do
    {
      v29 = (int *)(*(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v28));
      if ( (int *)a2 != v29 )
      {
        if ( (unsigned __int8)sub_1C4AE0(v29, v29[22], (int *)a2, a4, a5) )
          goto LABEL_46;
      }
      v28 = ++v27;
    }
    while ( (unsigned __int64)v27 < *(_QWORD *)(a1 + 464) );
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
    goto LABEL_30;
  if ( v34 - 208 <= 0x2F )
    goto LABEL_30;
  v30 = (get_tinfo_property() & 0xF) == 9;
  if ( v30 == ((get_tinfo_property() & 0xF) == 9)
    && (get_tinfo_property() & 0x2F) != 0xD
    && (get_tinfo_property() & 0x2F) != 0xD )
  {
    goto LABEL_30;
  }
  sub_D10B0((__int64)&v54, *(_QWORD *)(a1 + 1496), v34);
  if ( !(unsigned __int8)sub_D4680((__int64)&v54, a1, (_DWORD *)a2) )
  {
    if ( v61 )
    {
      v62 = 0;
      qfree(v61);
    }
    if ( v59 )
    {
      v60 = 0;
      qfree(v59);
    }
    if ( v57 )
    {
      v58 = 0;
      qfree(v57);
    }
    if ( v55 )
    {
      v56 = 0;
      qfree(v55);
    }
    goto LABEL_46;
  }
  if ( v61 )
  {
    v62 = 0;
    qfree(v61);
  }
  if ( v59 )
  {
    v60 = 0;
    qfree(v59);
  }
  if ( v57 )
  {
    v58 = 0;
    qfree(v57);
  }
  if ( v55 )
  {
    v56 = 0;
    qfree(v55);
  }
LABEL_30:
  cleanup_argloc();
  v10 = *(_DWORD *)(a2 + 24);
LABEL_31:
  if ( (v10 & 0x80u) == 0 || *(_DWORD *)(a2 + 88) == a4 )
  {
    sub_1EF530(a2);
    *(_DWORD *)(a2 + 24) |= 0x42u;
    *(_DWORD *)(a2 + 88) = a4;
    return v9;
  }
  return 0;
}

