unsigned __int64 __fastcall sub_241280(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 **v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  char *v21; // rbp
  char v22; // r15
  char *v23; // r13
  unsigned __int8 i; // r14
  unsigned __int8 v25; // bl
  bool v26; // al
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // edx
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v42; // [rsp+18h] [rbp-4B0h]
  __int64 v43; // [rsp+20h] [rbp-4A8h]
  _QWORD v44[3]; // [rsp+38h] [rbp-490h] BYREF
  __int64 v45; // [rsp+50h] [rbp-478h]
  __int64 v46; // [rsp+58h] [rbp-470h]
  __int64 v47; // [rsp+60h] [rbp-468h] BYREF
  __int128 v48; // [rsp+68h] [rbp-460h]
  int v49; // [rsp+78h] [rbp-450h]
  __int16 v50; // [rsp+7Ch] [rbp-44Ch]
  char v51; // [rsp+80h] [rbp-448h] BYREF
  char v52; // [rsp+81h] [rbp-447h] BYREF
  unsigned __int64 v53; // [rsp+488h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v5 = qalloc_or_throw();
  *(_QWORD *)v5 = 0;
  v6 = (__int64 **)v5;
  *(_QWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 32) = 2;
  *(_OWORD *)(v5 + 8) = 0;
  v43 = v5;
  sub_240E40((__int64 *)v5, 1u);
  copy_tinfo_t();
  v7 = *v6;
  v42 = *a2;
  v8 = *a2;
  *a2 = **v6;
  v9 = *((_DWORD *)v7 + 2);
  *v7 = v8;
  v10 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v9;
  v11 = *((_DWORD *)v7 + 3);
  *((_DWORD *)v7 + 2) = v10;
  v12 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 3) = v11;
  v13 = v7[3];
  *((_DWORD *)v7 + 3) = v12;
  v14 = a2[3];
  a2[3] = v13;
  v15 = v7[4];
  v7[3] = v14;
  v16 = a2[4];
  a2[4] = v15;
  v17 = v7[5];
  v7[4] = v16;
  v18 = a2[5];
  a2[5] = v17;
  v19 = v7[6];
  v7[5] = v18;
  v20 = a2[6];
  a2[6] = v19;
  LODWORD(v19) = *((_DWORD *)v7 + 14);
  v7[6] = v20;
  LODWORD(v20) = *((_DWORD *)a2 + 14);
  *((_DWORD *)a2 + 14) = v19;
  *((_DWORD *)v7 + 14) = v20;
  v44[0] = 0;
  copy_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xB && !*(_BYTE *)(a1 + 148) )
  {
    v45 = 0;
    v46 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v44[2] = 0;
      v44[1] = 0;
      copy_tinfo_t();
      *((_QWORD *)&v48 + 1) = 0;
      copy_tinfo_t();
      v49 = 0;
      v50 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      v47 = v45;
      v45 = 0;
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
  }
  v48 = 0;
  v47 = 0;
  sub_325D80(&v47, a3, 0, 0);
  v21 = &v51;
  qstrncpy();
  v22 = v51;
  if ( v51 )
  {
    v23 = &v52;
    for ( i = 0; ; i = v25 )
    {
      if ( (unsigned int)v22 <= 0x7F && isalnum(v22) )
      {
        v25 = v22;
        v26 = v22 == 95;
      }
      else
      {
        v26 = 1;
        v25 = 95;
      }
      if ( i != 95 || !v26 )
        *v21++ = toupper(v25);
      v22 = *v23++;
      if ( !v22 )
        break;
    }
  }
  else
  {
    v21 = &v51;
  }
  v27 = v47;
  *v21 = 0;
  if ( v27 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  v28 = sub_ECA80((__int64)v44, v43, (__int64)"COERCE_%s", &v51);
  *(_DWORD *)(v28 + 56) |= 2u;
  v29 = v28;
  *(_QWORD *)v28 = v42;
  v30 = *a2;
  *a2 = v42;
  v31 = *(_DWORD *)(v29 + 8);
  *(_QWORD *)v29 = v30;
  LODWORD(v30) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v31;
  v32 = *(_DWORD *)(v29 + 12);
  *(_DWORD *)(v29 + 8) = v30;
  LODWORD(v30) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 3) = v32;
  v33 = *(_QWORD *)(v29 + 24);
  *(_DWORD *)(v29 + 12) = v30;
  v34 = a2[3];
  a2[3] = v33;
  v35 = *(_QWORD *)(v29 + 32);
  *(_QWORD *)(v29 + 24) = v34;
  v36 = a2[4];
  a2[4] = v35;
  v37 = *(_QWORD *)(v29 + 40);
  *(_QWORD *)(v29 + 32) = v36;
  v38 = a2[5];
  a2[5] = v37;
  v39 = *(_QWORD *)(v29 + 48);
  *(_QWORD *)(v29 + 40) = v38;
  v40 = a2[6];
  a2[6] = v39;
  *(_QWORD *)(v29 + 48) = v40;
  LODWORD(v40) = *((_DWORD *)a2 + 14);
  *((_DWORD *)a2 + 14) = *(_DWORD *)(v29 + 56);
  *(_DWORD *)(v29 + 56) = v40;
  if ( v29 )
  {
    sub_250270(v29);
    clear_tinfo_t();
    j__qfree();
  }
  clear_tinfo_t();
  return v53 - __readfsqword(0x28u);
}

