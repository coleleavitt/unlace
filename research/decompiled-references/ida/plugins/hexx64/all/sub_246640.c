unsigned __int64 __fastcall sub_246640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  _QWORD **v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  signed __int8 *v22; // rbp
  signed __int8 v23; // r15
  signed __int8 *v24; // r13
  unsigned __int8 i; // r14
  unsigned __int8 v26; // bl
  bool v27; // al
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // edx
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v43; // [rsp+18h] [rbp-4B0h]
  __int64 v44; // [rsp+20h] [rbp-4A8h]
  _QWORD v45[3]; // [rsp+38h] [rbp-490h] BYREF
  __int64 v46; // [rsp+50h] [rbp-478h]
  __int64 v47; // [rsp+58h] [rbp-470h]
  __int64 v48; // [rsp+60h] [rbp-468h] BYREF
  __int128 v49; // [rsp+68h] [rbp-460h]
  int v50; // [rsp+78h] [rbp-450h]
  __int16 v51; // [rsp+7Ch] [rbp-44Ch]
  signed __int8 v52; // [rsp+80h] [rbp-448h] BYREF
  char v53; // [rsp+81h] [rbp-447h] BYREF
  unsigned __int64 v54; // [rsp+488h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v6 = qalloc_or_throw(40, a2, a3, a4);
  *(_QWORD *)v6 = 0;
  v7 = (_QWORD **)v6;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 32) = 2;
  *(_OWORD *)(v6 + 8) = 0;
  v44 = v6;
  sub_246200((__int64 *)v6, 1u);
  copy_tinfo_t();
  v8 = *v7;
  v43 = *(_QWORD *)a2;
  v9 = *(_QWORD *)a2;
  *(_QWORD *)a2 = **v7;
  v10 = *((_DWORD *)v8 + 2);
  *v8 = v9;
  v11 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v10;
  v12 = *((_DWORD *)v8 + 3);
  *((_DWORD *)v8 + 2) = v11;
  v13 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v12;
  v14 = v8[3];
  *((_DWORD *)v8 + 3) = v13;
  v15 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v14;
  v16 = v8[4];
  v8[3] = v15;
  v17 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v16;
  v18 = v8[5];
  v8[4] = v17;
  v19 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v18;
  v20 = v8[6];
  v8[5] = v19;
  v21 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v20;
  LODWORD(v20) = *((_DWORD *)v8 + 14);
  v8[6] = v21;
  LODWORD(v21) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v20;
  *((_DWORD *)v8 + 14) = v21;
  v45[0] = 0;
  copy_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xB && !*(_BYTE *)(a1 + 148) )
  {
    v46 = 0;
    v47 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v45[2] = 0;
      v45[1] = 0;
      copy_tinfo_t();
      *((_QWORD *)&v49 + 1) = 0;
      copy_tinfo_t();
      v50 = 0;
      v51 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      v48 = v46;
      v46 = 0;
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
  }
  v49 = 0;
  v48 = 0;
  sub_32B7F0(&v48, a3, nullptr);
  v22 = &v52;
  qstrncpy();
  v23 = v52;
  if ( v52 )
  {
    v24 = &v53;
    for ( i = 0; ; i = v26 )
    {
      if ( (unsigned int)v23 <= 0x7F && isalnum(v23) )
      {
        v26 = v23;
        v27 = v23 == 95;
      }
      else
      {
        v27 = 1;
        v26 = 95;
      }
      if ( i != 95 || !v27 )
        *v22++ = toupper(v26);
      v23 = *v24++;
      if ( !v23 )
        break;
    }
  }
  else
  {
    v22 = &v52;
  }
  v28 = v48;
  *v22 = 0;
  if ( v28 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v28);
  }
  v29 = sub_F1640((__int64)v45, v44);
  *(_DWORD *)(v29 + 56) |= 2u;
  v30 = v29;
  *(_QWORD *)v29 = v43;
  v31 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v43;
  v32 = *(_DWORD *)(v30 + 8);
  *(_QWORD *)v30 = v31;
  LODWORD(v31) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v32;
  v33 = *(_DWORD *)(v30 + 12);
  *(_DWORD *)(v30 + 8) = v31;
  LODWORD(v31) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v33;
  v34 = *(_QWORD *)(v30 + 24);
  *(_DWORD *)(v30 + 12) = v31;
  v35 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v34;
  v36 = *(_QWORD *)(v30 + 32);
  *(_QWORD *)(v30 + 24) = v35;
  v37 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v36;
  v38 = *(_QWORD *)(v30 + 40);
  *(_QWORD *)(v30 + 32) = v37;
  v39 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v38;
  v40 = *(_QWORD *)(v30 + 48);
  *(_QWORD *)(v30 + 40) = v39;
  v41 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v40;
  *(_QWORD *)(v30 + 48) = v41;
  LODWORD(v41) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(v30 + 56);
  *(_DWORD *)(v30 + 56) = v41;
  if ( v30 )
  {
    sub_255630(v30);
    clear_tinfo_t();
    j__qfree(v30);
  }
  clear_tinfo_t();
  return v54 - __readfsqword(0x28u);
}

