__int64 __fastcall sub_26BD0(__int64 a1, unsigned int a2, _DWORD *a3, char *a4, int a5, _DWORD *a6, int *a7)
{
  unsigned int v11; // r14d
  unsigned __int8 *v12; // rax
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  char *v17; // rcx
  unsigned __int8 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r14d
  unsigned int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // rdi
  char *v34; // rcx
  char v35; // [rsp+0h] [rbp-158h]
  int v36; // [rsp+4h] [rbp-154h]
  unsigned __int8 *v37; // [rsp+8h] [rbp-150h]
  unsigned int v39; // [rsp+1Ch] [rbp-13Ch]
  unsigned int v40; // [rsp+2Ch] [rbp-12Ch] BYREF
  __int64 v41; // [rsp+30h] [rbp-128h] BYREF
  int v42; // [rsp+38h] [rbp-120h]
  _QWORD v43[2]; // [rsp+40h] [rbp-118h] BYREF
  int v44; // [rsp+50h] [rbp-108h]
  char v45; // [rsp+54h] [rbp-104h]
  char *v46; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v47; // [rsp+68h] [rbp-F0h]
  int v48; // [rsp+78h] [rbp-E0h]
  int v49; // [rsp+7Ch] [rbp-DCh]
  int v50; // [rsp+80h] [rbp-D8h]
  int v51; // [rsp+84h] [rbp-D4h]
  _DWORD v52[12]; // [rsp+90h] [rbp-C8h] BYREF
  _DWORD v53[12]; // [rsp+C0h] [rbp-98h] BYREF
  char v54[40]; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int64 v55; // [rsp+118h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *(_WORD *)a4 = 0;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  v11 = HIBYTE(a2);
  if ( (HIBYTE(a2) & 0xFFFFFFFD) != 4 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v12 = (unsigned __int8 *)&unk_2F194;
  v13 = *(_QWORD *)(a1 + 8);
  if ( v11 == 4 )
    v12 = (unsigned __int8 *)&unk_2F198;
  v37 = v12;
  if ( !*(_BYTE *)(v13 + 40LL * (int)v11 + 72) )
    return 1;
  if ( !(unsigned __int8)sub_23850(v13, v13 + 40LL * v11 + 72, (a2 & 0xFFFFFF) - 1, (__int64)v52) )
    return 2147942413LL;
  v47 = 0;
  v46 = nullptr;
  v39 = v52[v37[1]];
  v15 = qvector_reserve();
  v16 = *(_QWORD *)(a1 + 8);
  v46 = (char *)v15;
  sub_24180(v16, v39, (__int64 *)&v46);
  v17 = (char *)s1;
  if ( (_QWORD)v47 )
    v17 = v46;
  sub_264E0(a4, a5, a6, v17);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  if ( (v52[v37[2]] & 0x6000) == 0 )
    return 0;
  v36 = (2 * a2) & 0x1FFFFFE;
  v18 = (unsigned __int8 *)sub_2A190(103);
  v22 = *v18;
  v23 = *((_QWORD *)v18 + 1);
  if ( !(_BYTE)v22 )
LABEL_36:
    sub_DB80((__int64)"Impossible to get coded table for table 0x%x", v11, v22, v19, v20, v21, v35);
  v19 = v11;
  v24 = 0;
  while ( *(_BYTE *)(v23 + v24) != (_BYTE)v11 )
  {
    if ( v22 == ++v24 )
      goto LABEL_36;
  }
  v25 = *(_QWORD *)(a1 + 8);
  v42 = 28;
  v41 = v25;
  v48 = v36 | (unsigned __int8)v24;
  v26 = *(_DWORD *)(v25 + 1196);
  v46 = (char *)v25;
  v43[0] = v25;
  *(_QWORD *)&v47 = &v41;
  DWORD2(v47) = 0;
  BYTE12(v47) = 1;
  v49 = 45;
  v50 = v26;
  v51 = 0;
  v43[1] = &v46;
  v44 = 257;
  v45 = 0;
  if ( !(unsigned __int8)sub_25E00((__int64)&v46, (int *)&v40, (__int64)v54, (__int64)&v41, v20, v21) )
    return 1;
  v30 = v40;
  sub_25ED0((__int64)v43, v40, v53, v27, v28, v29);
  if ( !v30 )
    return 1;
  v31 = v53[2];
  v47 = 0;
  v46 = nullptr;
  v32 = qvector_reserve();
  v33 = *(_QWORD *)(a1 + 8);
  v46 = (char *)v32;
  sub_24180(v33, v31, (__int64 *)&v46);
  v34 = (char *)s1;
  if ( (_QWORD)v47 )
    v34 = v46;
  sub_264E0(a4, a5, a6, v34);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  if ( a7 )
    *a7 = v53[3] | 0x1A000000;
  if ( !a3 )
    return 0;
  *a3 = v53[0];
  return 0;
}

