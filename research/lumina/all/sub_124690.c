unsigned __int64 __fastcall sub_124690(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, double a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  char v7; // r12
  char *v8; // rax
  int v10; // r13d
  __int64 *v11; // rax
  char *v12; // rdx
  char v13; // al
  size_t v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // r14
  unsigned int *v18; // rcx
  __int64 v19; // r15
  int v20; // eax
  int v21; // eax
  __int64 v22; // r12
  unsigned __int8 *v23; // rax
  int v24; // eax
  int v25; // edx
  int v26; // esi
  _DWORD *v27; // rdx
  unsigned int v28; // ebx
  __int64 *v29; // rbp
  int v30; // ecx
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  __int64 v36; // rax
  unsigned int v37; // edx
  signed int i; // r12d
  int v39; // ebp
  unsigned __int8 *v40; // rax
  __int64 v41; // r13
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // r9
  char v45; // al
  unsigned __int8 v46; // al
  int v47; // eax
  int v48; // eax
  int *v49; // r12
  char v50; // al
  bool v51; // si
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  int *v56; // rbp
  unsigned int v57; // r14d
  int v58; // eax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  unsigned __int8 v62; // al
  char *v64; // [rsp+8h] [rbp-A0h]
  int v65; // [rsp+8h] [rbp-A0h]
  int v66; // [rsp+10h] [rbp-98h]
  __int64 v67; // [rsp+10h] [rbp-98h]
  unsigned int v69; // [rsp+1Ch] [rbp-8Ch]
  __int64 *v70; // [rsp+20h] [rbp-88h]
  __int64 *v71; // [rsp+28h] [rbp-80h]
  unsigned int v72; // [rsp+30h] [rbp-78h]
  __int64 v73; // [rsp+30h] [rbp-78h]
  int v74; // [rsp+30h] [rbp-78h]
  unsigned int v75; // [rsp+30h] [rbp-78h]
  int v76; // [rsp+38h] [rbp-70h]
  int v77; // [rsp+38h] [rbp-70h]
  __int64 v78; // [rsp+40h] [rbp-68h]
  int v79; // [rsp+40h] [rbp-68h]
  unsigned int v80; // [rsp+48h] [rbp-60h]
  unsigned int v81; // [rsp+58h] [rbp-50h] BYREF
  char v82[4]; // [rsp+5Ch] [rbp-4Ch] BYREF
  unsigned int v83; // [rsp+60h] [rbp-48h] BYREF
  int v84; // [rsp+64h] [rbp-44h] BYREF
  unsigned __int64 v85; // [rsp+68h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  v7 = *(_BYTE *)(a1 + 35);
  v85 = __readfsqword(0x28u);
  v8 = *(char **)(a2 + 16);
  v81 = 0;
  v83 = 0;
  v64 = v8;
  if ( (unsigned int)sub_E3F60((_DWORD *)a1, a2) )
    return __readfsqword(0x28u) ^ v85;
  v10 = 0;
  v11 = sub_DC810(*(_QWORD *)a1, a2);
  v12 = *(char **)(a2 + 16);
  v70 = v11;
  v13 = *v12;
  if ( *v12 == -80 )
    v13 = v12[2];
  if ( v13 == -79 )
  {
    v66 = **((_DWORD **)v12 + 4);
    v14 = 5LL * v66 + 1;
  }
  else
  {
    v14 = 6;
    v66 = 1;
    if ( v13 == -118 )
    {
      v66 = **(_DWORD **)(*((_QWORD *)v12 + 4) + 32LL);
      v14 = 5LL * v66 + 1;
    }
  }
  v15 = sub_DC1C0(*(_QWORD *)a1, v14);
  v16 = *(_QWORD *)a1;
  v17 = v15;
  v71 = v15;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 103LL) )
  {
    v18 = &v81;
    v19 = *(_QWORD *)(v6 + 16);
    if ( a3 == a4 )
      v18 = nullptr;
    v20 = sub_123DB0(v6, v5, 3, v18, v15, &v83, a5);
    *(_BYTE *)(v6 + 35) = 0;
    v76 = v20;
    v80 = sub_128BB0(v6, v64, v82);
    *(_BYTE *)(v6 + 35) = v7;
    if ( v66 <= 0 )
    {
      if ( !v66 )
      {
LABEL_17:
        v69 = v80;
        goto LABEL_18;
      }
      v69 = sub_CF000(v6, v66);
    }
    else
    {
      v21 = *(_DWORD *)v17;
      if ( !*(_DWORD *)v17 )
      {
        while ( ++v21 < v66 )
        {
          if ( *((_DWORD *)v17 + v21) != v21 )
            goto LABEL_43;
        }
        if ( v21 == v66 )
          goto LABEL_17;
      }
LABEL_43:
      v69 = sub_CF000(v6, v66);
      v73 = v6;
      v78 = v5;
      v28 = v80;
      v29 = v71;
      do
      {
        v30 = *(_DWORD *)v29;
        v31 = v28;
        v29 = (__int64 *)((char *)v29 + 4);
        ++v28;
        sub_E1710(v19, 80, v31, v69 + v30, 0);
      }
      while ( v29 != (__int64 *)((char *)v71 + 4 * (unsigned int)(v66 - 1) + 4) );
      v6 = v73;
      v5 = v78;
    }
LABEL_18:
    if ( v76 != 5 )
    {
      v72 = a3;
      if ( a3 != a4 )
      {
        v72 = *(_DWORD *)(v6 + 68) - 1;
        *(_DWORD *)(v6 + 68) = v72;
        v10 = v72;
      }
      if ( v66 > 0 )
      {
        v22 = 0;
        do
        {
          v23 = (unsigned __int8 *)sub_C4360(*(char **)(v5 + 16), v22);
          if ( *(_DWORD *)(v6 + 48) )
            goto LABEL_37;
          if ( sub_C43F0(v23) )
            sub_E1710(v19, 50, v69 + v22, v72, 0);
        }
        while ( (unsigned int)(v66 - 1) + 1LL != ++v22 );
      }
      if ( v76 == 1 )
      {
        sub_E1710(v19, 29, v83, a3, v69);
        v47 = sub_E1710(v19, 8, 0, 0, 0);
        v37 = v81;
        v77 = v47;
        if ( !v81 || v66 != 1 )
        {
LABEL_65:
          if ( a3 == a4 )
            sub_E1710(v19, 8, 0, a3, 0);
LABEL_51:
          if ( v10 )
            sub_E0BB0(v19, v10);
          v79 = sub_E1710(v19, 35, v83, a3, 0);
          if ( v66 > 1 )
          {
            v74 = *(_DWORD *)(v6 + 68) - 1;
            *(_DWORD *)(v6 + 68) = v74;
          }
          else
          {
            if ( v66 != 1 )
            {
              sub_E1710(v19, 8, 0, a4, 0);
LABEL_29:
              v24 = *(_DWORD *)(v19 + 144);
              v25 = v24 - 1;
              if ( v77 >= 0 )
                v25 = v77;
              v26 = v25;
              v27 = &unk_241F50;
              if ( !*(_BYTE *)(*(_QWORD *)v19 + 103LL) )
                v27 = (_DWORD *)(*(_QWORD *)(v19 + 136) + 24LL * v26);
              v27[2] = v24;
              goto LABEL_34;
            }
            v74 = a3;
          }
          for ( i = 0; i < v66; ++i )
          {
            v45 = *(_BYTE *)(v6 + 31);
            if ( v45 )
            {
              v46 = v45 - 1;
              *(_BYTE *)(v6 + 31) = v46;
              v39 = *(_DWORD *)(v6 + 4LL * v46 + 216);
            }
            else
            {
              v39 = *(_DWORD *)(v6 + 56) + 1;
              *(_DWORD *)(v6 + 56) = v39;
            }
            v40 = (unsigned __int8 *)sub_C4360(v64, i);
            v41 = sub_F3950(v6, v40, a5);
            sub_E1710(v19, 94, v83, i, v39);
            v42 = sub_E1710(v19, 52, v69 + i, v74, v39);
            sub_DCC50(v19, v42, v41, 4294967294LL, v43, v44);
            if ( v39 )
              sub_CEFE0(v6, v39);
          }
          sub_E1710(v19, 8, 0, a4, 0);
          if ( v66 != 1 )
          {
            sub_E0BB0(v19, v74);
            sub_E1710(v19, 38, v83, v79 + 1, 0);
            sub_E1710(v19, 8, 0, a3, 0);
          }
          goto LABEL_29;
        }
LABEL_96:
        sub_E1710(v19, 51, v37, a3, 0);
        goto LABEL_65;
      }
      v32 = sub_E1710(v19, 96, v69, v66, 0);
      sub_DCC50(v19, v32, (__int64)v70, (unsigned int)v66, v33, v34);
      if ( a3 != a4 )
      {
        v35 = sub_E1710(v19, 28, v83, 0, v69);
        v77 = v35;
        if ( *(_BYTE *)(*(_QWORD *)v19 + 103LL) )
        {
          v37 = v81;
          if ( !v81 )
            goto LABEL_51;
        }
        else
        {
          v36 = *(_QWORD *)(v19 + 136) + 24LL * v35;
          *(_BYTE *)(v36 + 1) = -3;
          v37 = v81;
          *(_DWORD *)(v36 + 16) = v66;
          if ( !v37 )
            goto LABEL_51;
        }
        if ( v66 != 1 )
          goto LABEL_51;
        goto LABEL_96;
      }
      sub_E1770((_QWORD *)v19, 27, v83, a3, v69, v66);
LABEL_34:
      if ( v69 != v80 && v69 )
        sub_CEFE0(v6, v69);
LABEL_37:
      v16 = *(_QWORD *)v6;
      goto LABEL_38;
    }
    v48 = *(_DWORD *)(v6 + 68) - 1;
    *(_DWORD *)(v6 + 68) = v48;
    v75 = v48;
    v49 = *(int **)(v5 + 32);
    v67 = sub_F3950(v6, *(unsigned __int8 **)(v5 + 16), a5);
    if ( a3 == a4 )
    {
      v65 = 0;
      if ( *v49 <= 0 )
      {
LABEL_85:
        sub_E0BB0(v19, v75);
        goto LABEL_34;
      }
    }
    else
    {
      v50 = *(_BYTE *)(v6 + 31);
      if ( v50 )
      {
        v62 = v50 - 1;
        *(_BYTE *)(v6 + 31) = v62;
        v65 = *(_DWORD *)(v6 + 4LL * v62 + 216);
      }
      else
      {
        v65 = *(_DWORD *)(v6 + 56) + 1;
        *(_DWORD *)(v6 + 56) = v65;
      }
      sub_E1710(v19, 102, v69, v69, v65);
      if ( *v49 <= 0 )
        goto LABEL_84;
    }
    do
    {
      v56 = &v49[6 * v10];
      v57 = sub_1289B0(v6, *((_QWORD *)v56 + 1), &v84);
      if ( v65 && sub_C43F0(*((unsigned __int8 **)v56 + 1)) )
        sub_E1710(v19, 102, v65, v57, v65);
      if ( v84 )
        sub_CEFE0(v6, v84);
      v51 = v69 != v57;
      if ( *v49 - 1 <= v10 && a3 == a4 )
      {
        v58 = sub_E1710(v19, 2 * v51 + 50, v69, a3, v57);
        sub_DCC50(v19, v58, v67, 4294967294LL, v59, v60);
        v61 = *(int *)(v19 + 144);
        if ( (int)v61 > 0 )
          *(_WORD *)(*(_QWORD *)(v19 + 136) + 24 * v61 - 22) = (char)(*(_BYTE *)v70 | 0x10);
      }
      else
      {
        v52 = sub_E1710(v19, 2 * v51 + 51, v69, v75, v57);
        sub_DCC50(v19, v52, v67, 4294967294LL, v53, v54);
        v55 = *(int *)(v19 + 144);
        if ( (int)v55 > 0 )
          *(_WORD *)(*(_QWORD *)(v19 + 136) + 24 * v55 - 22) = *(char *)v70;
      }
      ++v10;
    }
    while ( *v49 > v10 );
LABEL_84:
    if ( v65 )
    {
      sub_E1710(v19, 50, v65, a4, 0);
      sub_E1710(v19, 8, 0, a3, 0);
      sub_E0BB0(v19, v75);
      sub_CEFE0(v6, v65);
      goto LABEL_34;
    }
    goto LABEL_85;
  }
LABEL_38:
  if ( v71 )
  {
    sub_C9250(v16, v71);
    v16 = *(_QWORD *)v6;
  }
  if ( v70 )
    sub_C9250(v16, v70);
  return __readfsqword(0x28u) ^ v85;
}
