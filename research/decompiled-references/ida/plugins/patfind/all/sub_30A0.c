int sub_30A0()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 *v9; // rbx
  char v11; // [rsp+6h] [rbp-2FAh] BYREF
  char v12; // [rsp+7h] [rbp-2F9h] BYREF
  __int64 v13; // [rsp+8h] [rbp-2F8h] BYREF
  __int128 v14; // [rsp+10h] [rbp-2F0h]
  __int64 v15; // [rsp+20h] [rbp-2E0h] BYREF
  __int128 v16; // [rsp+28h] [rbp-2D8h]
  char *v17; // [rsp+38h] [rbp-2C8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-2C0h]
  __int64 v19; // [rsp+50h] [rbp-2B0h] BYREF
  __int128 v20; // [rsp+58h] [rbp-2A8h]
  __int64 v21; // [rsp+68h] [rbp-298h] BYREF
  __int128 v22; // [rsp+70h] [rbp-290h]
  __int64 v23; // [rsp+80h] [rbp-280h] BYREF
  __int128 v24; // [rsp+88h] [rbp-278h]
  char v25[48]; // [rsp+98h] [rbp-268h] BYREF
  char v26[48]; // [rsp+C8h] [rbp-238h] BYREF
  char v27[48]; // [rsp+F8h] [rbp-208h] BYREF
  char v28[48]; // [rsp+128h] [rbp-1D8h] BYREF
  __int64 v29; // [rsp+158h] [rbp-1A8h] BYREF
  __int128 v30; // [rsp+160h] [rbp-1A0h]
  __int64 v31; // [rsp+170h] [rbp-190h] BYREF
  __int128 v32; // [rsp+178h] [rbp-188h]
  char v33[48]; // [rsp+188h] [rbp-178h] BYREF
  char v34[48]; // [rsp+1B8h] [rbp-148h] BYREF
  char *v35; // [rsp+1E8h] [rbp-118h] BYREF
  __int128 v36; // [rsp+1F0h] [rbp-110h]
  char *v37; // [rsp+200h] [rbp-100h] BYREF
  __int128 v38; // [rsp+208h] [rbp-F8h]
  char v39[48]; // [rsp+218h] [rbp-E8h] BYREF
  __int64 v40; // [rsp+248h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+250h] [rbp-B0h]
  char *v42; // [rsp+260h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+268h] [rbp-98h]
  _DWORD *v44; // [rsp+278h] [rbp-88h] BYREF
  __int128 v45; // [rsp+280h] [rbp-80h]
  char *v46; // [rsp+290h] [rbp-70h] BYREF
  __int128 v47; // [rsp+298h] [rbp-68h]
  _BYTE v48[48]; // [rsp+2A8h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+2E0h] [rbp-20h]

  v49 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0;
  v0 = qvector_reserve(&v13, 0, 4, 1);
  v13 = v0;
  *(_QWORD *)&v14 = 4;
  *(_WORD *)v0 = 21057;
  *(_BYTE *)(v0 + 2) = 77;
  *(_BYTE *)(v13 + 3) = 0;
  v15 = 0;
  v16 = 0;
  v1 = qvector_reserve(&v15, 0, 4, 1);
  v15 = v1;
  *(_QWORD *)&v16 = 4;
  *(_WORD *)v1 = 21057;
  *(_BYTE *)(v1 + 2) = 77;
  *(_BYTE *)(v15 + 3) = 0;
  v17 = nullptr;
  v18 = 0;
  v17 = (char *)qvector_reserve(&v17, 0, 5, 1);
  *(_QWORD *)&v18 = 5;
  strcpy(v17, "ARMB");
  v19 = 0;
  v20 = 0;
  v2 = qvector_reserve(&v19, 0, 4, 1);
  v19 = v2;
  *(_QWORD *)&v20 = 4;
  *(_WORD *)v2 = 21057;
  *(_BYTE *)(v2 + 2) = 77;
  *(_BYTE *)(v19 + 3) = 0;
  v21 = 0;
  v22 = 0;
  v3 = qvector_reserve(&v21, 0, 7, 1);
  v21 = v3;
  *(_QWORD *)&v22 = 7;
  *(_DWORD *)v3 = 1635018093;
  *(_WORD *)(v3 + 4) = 25456;
  *(_BYTE *)(v21 + 6) = 0;
  v23 = 0;
  v24 = 0;
  v4 = qvector_reserve(&v23, 0, 4, 1);
  v23 = v4;
  *(_QWORD *)&v24 = 4;
  *(_WORD *)v4 = 14456;
  *(_BYTE *)(v4 + 2) = 54;
  *(_BYTE *)(v23 + 3) = 0;
  sub_4870(v25, "mipsb", "MIPS");
  sub_4870(v26, "mipsl", "MIPS");
  sub_4980(v27, "PPC", "PowerPC");
  sub_4A90(v28, "PPCL", "PowerPC");
  v30 = 0;
  v29 = 0;
  v5 = qvector_reserve(&v29, 0, 6, 1);
  v29 = v5;
  *(_QWORD *)&v30 = 6;
  *(_DWORD *)v5 = 1668508018;
  *(_BYTE *)(v5 + 4) = 118;
  *(_BYTE *)(v29 + 5) = 0;
  v31 = 0;
  v32 = 0;
  v6 = qvector_reserve(&v31, 0, 6, 1);
  v31 = v6;
  *(_QWORD *)&v32 = 6;
  *(_DWORD *)v6 = 1129531730;
  *(_BYTE *)(v6 + 4) = 86;
  *(_BYTE *)(v31 + 5) = 0;
  sub_4980(v33, "SH4", "SuperH4");
  sub_4A90(v34, "SH4B", "SuperH4");
  v36 = 0;
  v35 = nullptr;
  v35 = (char *)qvector_reserve(&v35, 0, 5, 1);
  *(_QWORD *)&v36 = 5;
  strcpy(v35, "V850");
  v37 = nullptr;
  v38 = 0;
  v37 = (char *)qvector_reserve(&v37, 0, 5, 1);
  *(_QWORD *)&v38 = 5;
  strcpy(v37, "V850");
  sub_4870(v39, "V850E", "V850");
  v41 = 0;
  v40 = 0;
  v7 = qvector_reserve(&v40, 0, 7, 1);
  v40 = v7;
  *(_QWORD *)&v41 = 7;
  *(_DWORD *)v7 = 808794198;
  *(_WORD *)(v7 + 4) = 12613;
  *(_BYTE *)(v40 + 6) = 0;
  v42 = nullptr;
  v43 = 0;
  v42 = (char *)qvector_reserve(&v42, 0, 5, 1);
  *(_QWORD *)&v43 = 5;
  strcpy(v42, "V850");
  v44 = nullptr;
  v45 = 0;
  v8 = (_DWORD *)qvector_reserve(&v44, 0, 8, 1);
  v44 = v8;
  *(_QWORD *)&v45 = 8;
  *v8 = 808794198;
  *(_DWORD *)((char *)v8 + 3) = 1295140144;
  *((_BYTE *)v44 + 7) = 0;
  v46 = nullptr;
  v47 = 0;
  v46 = (char *)qvector_reserve(&v46, 0, 5, 1);
  v9 = (__int64 *)v48;
  *(_QWORD *)&v47 = 5;
  strcpy(v46, "V850");
  sub_4870(v48, "RH850", "V850");
  sub_AC80(&unk_13260, &v13, 15, &v11, &v12);
  while ( 1 )
  {
    if ( v9[3] )
    {
      v9[4] = 0;
      qfree();
    }
    if ( *v9 )
    {
      v9[1] = 0;
      qfree();
    }
    if ( &v13 == v9 )
      break;
    v9 -= 6;
  }
  return __cxa_atexit(func, &unk_13260, &off_12B80);
}

