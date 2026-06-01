__int64 __fastcall sub_3900(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v7; // eax
  unsigned int v8; // r14d
  char v10; // cl
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  const char *v14; // rsi
  unsigned __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // r10d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 *v21; // rbx
  unsigned int v22; // edx
  unsigned int v23; // r13d
  __int64 v24; // rbp
  _QWORD *v25; // rax
  unsigned int v26; // r12d
  int v27; // edx
  _QWORD *v28; // r15
  __int64 v29; // rdi
  _QWORD *v30; // r12
  int v31; // r15d
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned __int16 **v34; // rax
  __int64 v35; // rsi
  unsigned int v36; // eax
  int v37; // eax
  int v38; // esi
  __int64 v39; // [rsp+8h] [rbp-10A0h]
  unsigned __int16 **v40; // [rsp+18h] [rbp-1090h]
  unsigned __int16 **v41; // [rsp+20h] [rbp-1088h]
  char v42; // [rsp+28h] [rbp-1080h]
  int v43; // [rsp+2Ch] [rbp-107Ch]
  unsigned int v44; // [rsp+34h] [rbp-1074h] BYREF
  __int64 v45; // [rsp+38h] [rbp-1070h] BYREF
  char v46[4]; // [rsp+40h] [rbp-1068h] BYREF
  __int128 v47; // [rsp+44h] [rbp-1064h]
  _BYTE v48[4104]; // [rsp+60h] [rbp-1048h] BYREF
  unsigned __int64 v49; // [rsp+1068h] [rbp-40h]

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 152);
  v49 = __readfsqword(0x28u);
  v45 = 24;
  if ( netnode_getblob(v5, v46, &v45, 0, 116) && v45 == 24 )
  {
    if ( (_DWORD)v47 == -1 )
      return 0;
    if ( netnode_supstr(*(_QWORD *)(v4 + 152), -9, v48, 4096, 83) > 0 )
    {
      if ( !(unsigned __int8)qisabspath(v48) )
        goto LABEL_4;
      if ( (unsigned __int8)qfileexist(v48) )
        goto LABEL_16;
    }
  }
  LODWORD(v47) = -1;
LABEL_4:
  if ( getinf_buf(97, v48, 4096) <= 0 )
    return 0;
  v7 = sub_33E0(v4, (__int64)v48, &v44, a2);
  if ( v7 == -1 )
  {
    v14 = "invalid debug info in PE";
    goto LABEL_42;
  }
  if ( v7 )
  {
    if ( v7 == -2 )
      return 0;
    goto LABEL_19;
  }
  set_file_ext(v48, 4096, v48, "tds");
LABEL_16:
  v10 = 1;
  if ( !a2 )
    v10 = (_DWORD)v47 != -1;
  if ( !(unsigned int)sub_37E0(v4, (__int64)v48, &v44, v10) )
    return 0;
LABEL_19:
  v11 = *(_QWORD *)(v4 + 120);
  v12 = v44 - 8LL;
  v13 = v11 + v12;
  if ( *(_DWORD *)v11 != *(_DWORD *)(v11 + v12) || *(_WORD *)v11 != 16966 )
  {
    v14 = "invalid or nonstandard header(s)";
    goto LABEL_42;
  }
  v14 = "invalid or nonstandard header(s)";
  if ( (unsigned __int16)(*(_WORD *)(v11 + 2) - 14640) > 0x800u )
    goto LABEL_42;
  v15 = *(unsigned int *)(v11 + 4);
  if ( (unsigned int)v15 <= 7 )
    goto LABEL_42;
  if ( v15 >= v12 )
    goto LABEL_42;
  if ( *(_DWORD *)(v13 + 4) < v44 )
    goto LABEL_42;
  if ( (_DWORD)v47 != -1 )
  {
    v14 = "TDS signature does not match the input file";
    if ( *(_OWORD *)(v13 - 16) - v47 != 0 )
      goto LABEL_42;
  }
  v16 = v11 + v15;
  if ( *(_WORD *)(v11 + v15) != 16 )
    goto LABEL_70;
  if ( *(_WORD *)(v16 + 2) != 12 )
    goto LABEL_70;
  if ( *(_DWORD *)(v16 + 8) )
    goto LABEL_70;
  if ( *(_DWORD *)(v16 + 12) )
    goto LABEL_70;
  v17 = *(_DWORD *)(v16 + 4);
  if ( v17 <= 2 )
    goto LABEL_70;
  *a3 = v16 + 16;
  if ( (unsigned int)(v13 - (v16 + 16)) / 0xCuLL < (unsigned int)v17 )
    goto LABEL_70;
  v18 = v16 + 16 + 12LL * (unsigned int)v17;
  if ( v13 == v18 )
    v13 = v11 + v15;
  v19 = v11 + 8;
  if ( v15 != 8 )
    v18 = v19;
  if ( v18 >= v13 )
  {
LABEL_70:
    v14 = "invalid cv-header";
    goto LABEL_42;
  }
  v20 = *(_QWORD *)(v4 + 120);
  v39 = v4;
  v42 = a2;
  v21 = (unsigned __int16 *)(v16 + 16);
  v22 = v18 - v20;
  v23 = v13 - v20;
  v40 = (unsigned __int16 **)(a3 + 1);
  v24 = v16 + 12LL * (unsigned int)(v17 - 1) + 28;
  v41 = (unsigned __int16 **)(a3 + 2);
  v25 = a3;
  v26 = v22;
  v27 = 0;
  v28 = v25;
  while ( !*((_DWORD *)v21 + 2) )
  {
LABEL_45:
    *((_DWORD *)v21 + 1) = 0;
LABEL_46:
    v21 += 6;
    if ( v21 == (unsigned __int16 *)v24 )
    {
      v30 = v28;
      v4 = v39;
      v31 = v27;
      v32 = v30[1];
      if ( !v32 || (v8 = sub_3230(v39, v32), !(_BYTE)v8) )
      {
        v14 = "sstNames is absent or invalid";
        goto LABEL_42;
      }
      if ( *((_DWORD *)v30 + 8) < v31 )
        goto LABEL_73;
      if ( v42 && (int)sub_2FB0(1u, (__int64)"HIDECANCEL\nTDS-style debug-info found. Load it?") <= 0 )
        return 0;
      v33 = *(_QWORD *)(v39 + 152);
      v45 = 1;
      netnode_supset(v33, -5, &v45, 8, 65);
      return v8;
    }
  }
  switch ( *v21 )
  {
    case 0x120u:
      v38 = v21[1];
      if ( v38 != *((_DWORD *)v28 + 8) + 1 )
      {
        v4 = v39;
        v14 = "invalid module sequence";
        goto LABEL_42;
      }
      *((_DWORD *)v28 + 8) = v38;
      goto LABEL_56;
    case 0x125u:
      ++*((_DWORD *)v28 + 10);
      goto LABEL_63;
    case 0x127u:
      ++*((_DWORD *)v28 + 9);
LABEL_63:
      v37 = v21[1];
      if ( (_WORD)v37 )
      {
        if ( v27 < v37 )
          v27 = v21[1];
LABEL_56:
        if ( *((_DWORD *)v21 + 1) < v26 || (v36 = *((_DWORD *)v21 + 2), v23 < v36) || v23 - v36 < v26 )
        {
          v4 = v39;
          v14 = "invalid directory size(s)";
          goto LABEL_42;
        }
        goto LABEL_46;
      }
      v4 = v39;
LABEL_73:
      v14 = "invalid mod-refs";
LABEL_42:
      sub_2EE0((__int64)"TDS: %s\n", v14);
      v29 = *(_QWORD *)(v4 + 152);
      v45 = -1;
      netnode_supset(v29, -5, &v45, 8, 65);
      return 0;
    case 0x129u:
      v35 = v28[3];
      v34 = (unsigned __int16 **)(v28 + 3);
      goto LABEL_54;
    case 0x12Bu:
      v34 = v41;
      v35 = v28[2];
      goto LABEL_54;
    case 0x130u:
      v34 = v40;
      v35 = v28[1];
LABEL_54:
      if ( v35 )
      {
        v4 = v39;
        v14 = "duplicate unicale directory";
        goto LABEL_42;
      }
      *v34 = v21;
      goto LABEL_56;
    case 0x131u:
      goto LABEL_45;
    default:
      v43 = v27;
      sub_2EE0((__int64)"TDS: unsupported directory %X\n", *v21);
      v27 = v43;
      goto LABEL_45;
  }
}

