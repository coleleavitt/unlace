unsigned __int64 __fastcall sub_1236D0(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v4; // r12
  __int64 v6; // rbx
  int v7; // eax
  int v8; // r15d
  __int64 v9; // r14
  char v10; // al
  int v11; // r13d
  __int64 v12; // r9
  __int64 v13; // r9
  char *v14; // rcx
  _DWORD *v15; // r8
  int v16; // edx
  _DWORD *v17; // rax
  char v19; // al
  __int64 v20; // rax
  char v21; // al
  unsigned int v22; // r13d
  unsigned int v23; // r14d
  __int64 *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r13d
  int v36; // eax
  _DWORD *v37; // rdx
  unsigned int v38; // ecx
  unsigned __int8 v39; // al
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdi
  _QWORD *v43; // rcx
  int v44; // eax
  _DWORD *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // r15
  unsigned __int8 **v49; // r13
  unsigned __int8 *v50; // rax
  int v52; // [rsp+8h] [rbp-D0h]
  int v53; // [rsp+8h] [rbp-D0h]
  int v54; // [rsp+8h] [rbp-D0h]
  _QWORD *v55; // [rsp+8h] [rbp-D0h]
  __int64 *v56; // [rsp+10h] [rbp-C8h]
  _DWORD *v57; // [rsp+18h] [rbp-C0h]
  _DWORD *v58; // [rsp+18h] [rbp-C0h]
  __int64 v59; // [rsp+18h] [rbp-C0h]
  __int64 v60; // [rsp+18h] [rbp-C0h]
  __int64 v61; // [rsp+20h] [rbp-B8h]
  int v62; // [rsp+28h] [rbp-B0h]
  unsigned int v63; // [rsp+2Ch] [rbp-ACh]
  __int64 v64; // [rsp+30h] [rbp-A8h]
  _QWORD *v65; // [rsp+38h] [rbp-A0h]
  char v66; // [rsp+5Fh] [rbp-79h] BYREF
  _BYTE v67[4]; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v68; // [rsp+64h] [rbp-74h]
  __int64 (__fastcall *v69)(__int64, __int64); // [rsp+68h] [rbp-70h]
  __int64 (__fastcall *v70)(__int64); // [rsp+70h] [rbp-68h]
  __int64 *v71; // [rsp+78h] [rbp-60h]
  __int16 v72; // [rsp+84h] [rbp-54h]
  int v73; // [rsp+88h] [rbp-50h]
  unsigned __int64 v74; // [rsp+98h] [rbp-40h]

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 16);
  v74 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a2 + 4);
  if ( (v7 & 0x20) != 0 || *(_DWORD *)(a1 + 64) )
  {
    v8 = 0;
    goto LABEL_4;
  }
  if ( (v7 & 0x2000000) == 0 )
  {
    *(_DWORD *)(a2 + 4) = v7 | 0x2000000;
    v38 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v38;
    *(_DWORD *)(a2 + 68) = v38;
    *(_DWORD *)(a2 + 64) = sub_E1710(v6, 74, 0, v38, 0) + 1;
    v8 = sub_E1710(v6, 14, 0, 0, 0);
LABEL_4:
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(_BYTE *)v9;
    if ( *(_BYTE *)v9 == 0xB0 )
      v10 = *(_BYTE *)(v9 + 2);
    if ( v10 == -79 )
    {
      v11 = **(_DWORD **)(v9 + 32);
    }
    else
    {
      v11 = 1;
      if ( v10 == -118 )
        v11 = **(_DWORD **)(*(_QWORD *)(v9 + 32) + 32LL);
    }
    *(_DWORD *)(a2 + 44) = a3;
    v62 = sub_E1710(v6, 118, a3, v11, 0);
    v56 = sub_E3110(*(_BYTE **)a1, v11, 1);
    if ( (*(_BYTE *)(a2 + 5) & 8) != 0 )
    {
      v13 = *(_QWORD *)(a2 + 32);
      v14 = "CORRELATED ";
      v61 = v13;
      v57 = *(_DWORD **)(v13 + 32);
      if ( v8 )
        v14 = "";
      sub_E8800(a1, 1, "%sLIST SUBQUERY %d", v14, *(unsigned int *)(v13 + 16));
      if ( *v57 != v11 )
        goto LABEL_13;
      v40 = *(_QWORD *)a1;
      v67[0] = 11;
      v69 = nullptr;
      LODWORD(v70) = 0;
      v68 = a3;
      v71 = sub_DC810(v40, a2);
      *(_DWORD *)(v61 + 8) = 0;
      v41 = sub_DD450(*(_QWORD *)a1, (char *)v61, 0);
      v42 = *(_QWORD *)a1;
      v43 = (_QWORD *)v41;
      v44 = 1;
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
      {
        v55 = v43;
        v44 = sub_11F190(a1, v43, v67);
        v42 = *(_QWORD *)a1;
        v43 = v55;
      }
      if ( v43 )
      {
        v52 = v44;
        sub_D75C0(v42, v43, 1);
        v42 = *(_QWORD *)a1;
        v44 = v52;
      }
      if ( v71 )
      {
        v53 = v44;
        sub_C9250(v42, v71);
        v44 = v53;
      }
      if ( v44 )
      {
        if ( v56 )
        {
          if ( (*(_DWORD *)v56)-- == 1 )
            sub_CFCD0(v56);
        }
        return __readfsqword(0x28u) ^ v74;
      }
      if ( v11 > 0 )
      {
        v46 = v57;
        v54 = v8;
        v60 = v6;
        v47 = 0;
        v48 = (unsigned int)(v11 - 1) + 1LL;
        v49 = (unsigned __int8 **)(v46 + 2);
        do
        {
          v49 += 3;
          v50 = (unsigned __int8 *)sub_C4360((char *)v9, v47);
          v56[v47++ + 4] = sub_F3B40(a1, v50, *(v49 - 3), a4);
        }
        while ( v47 != v48 );
        v8 = v54;
        v6 = v60;
      }
LABEL_13:
      if ( v56 )
        sub_DCC50(v6, v62, (__int64)v56, 4294967288LL, (__int64)v15, v12);
      if ( v8 )
      {
        v16 = *(_DWORD *)(v6 + 144);
        if ( v8 < 0 )
          v8 = v16 - 1;
        v17 = &unk_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v6 + 103LL) )
          v17 = (_DWORD *)(*(_QWORD *)(v6 + 136) + 24LL * v8);
        v17[2] = v16;
        sub_E1710(v6, 67, *(_DWORD *)(v4 + 68), *(_DWORD *)(v4 + 64), 1u);
        *(_BYTE *)(a1 + 31) = 0;
        *(_DWORD *)(a1 + 40) = 0;
      }
      return __readfsqword(0x28u) ^ v74;
    }
    v15 = *(_DWORD **)(a2 + 32);
    v58 = v15;
    if ( !v15 )
      goto LABEL_13;
    v19 = sub_C6820((unsigned __int8 *)v9);
    v15 = v58;
    if ( v19 <= 64 )
    {
      v66 = 65;
    }
    else
    {
      if ( v19 == 69 )
        v19 = 67;
      v66 = v19;
    }
    if ( v56 )
    {
      v20 = sub_F3950(a1, *(unsigned __int8 **)(a2 + 16), a4);
      v15 = v58;
      v56[4] = v20;
    }
    v21 = *(_BYTE *)(a1 + 31);
    if ( v21 )
    {
      *(_BYTE *)(a1 + 31) = v21 - 1;
      v22 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)(v21 - 1) + 216);
      if ( v21 != 1 )
      {
        v39 = v21 - 2;
        *(_BYTE *)(a1 + 31) = v39;
        v63 = *(_DWORD *)(a1 + 4LL * v39 + 216);
        goto LABEL_32;
      }
      v23 = *(_DWORD *)(a1 + 56);
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 56) + 1;
      v23 = v22;
    }
    v63 = v23 + 1;
    *(_DWORD *)(a1 + 56) = v23 + 1;
LABEL_32:
    if ( (int)*v15 > 0 )
    {
      v24 = (__int64 *)(v15 + 2);
      v59 = (__int64)&v15[6 * (*v15 - 1) + 8];
      v65 = (_QWORD *)(v6 + 136);
      do
      {
        v25 = *v24;
        if ( v8 )
        {
          v72 = 1;
          v73 = 0;
          v69 = sub_CE7B0;
          v70 = sub_C43E0;
          if ( v25 )
          {
            v64 = v25;
            sub_CDCD0((__int64)v67, v25);
            v25 = v64;
            if ( !v72 )
            {
              sub_D0600(*(_QWORD *)v6, v65, v8 - 1, v64, v26, v27);
              v28 = v8;
              v8 = 0;
              sub_D0600(*(_QWORD *)v6, v65, v28, v29, v30, v31);
              v25 = v64;
              *(_DWORD *)(a2 + 4) &= ~0x2000000u;
            }
          }
        }
        sub_127350(a1, v25, v22);
        v24 += 3;
        v32 = sub_E1710(v6, 97, v22, 1u, v63);
        sub_DCC50(v6, v32, (__int64)&v66, 1, v33, v34);
        sub_E1770((_QWORD *)v6, 138, a3, v63, v22, 1);
      }
      while ( v24 != (__int64 *)v59 );
      v4 = a2;
    }
    if ( v22 )
      sub_CEFE0(a1, v22);
    if ( v63 )
      sub_CEFE0(a1, v63);
    goto LABEL_13;
  }
  v35 = sub_E1710(v6, 14, 0, 0, 0);
  if ( (*(_BYTE *)(a2 + 5) & 8) != 0 )
    sub_E8800(a1, 0, "REUSE LIST SUBQUERY %d", *(_DWORD *)(*(_QWORD *)(a2 + 32) + 16LL));
  sub_E1710(v6, 9, *(_DWORD *)(a2 + 68), *(_DWORD *)(a2 + 64), 0);
  sub_E1710(v6, 115, a3, *(_DWORD *)(a2 + 44), 0);
  v36 = *(_DWORD *)(v6 + 144);
  if ( v35 < 0 )
    v35 = v36 - 1;
  v37 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 103LL) )
    v37 = (_DWORD *)(*(_QWORD *)(v6 + 136) + 24LL * v35);
  v37[2] = v36;
  return __readfsqword(0x28u) ^ v74;
}
