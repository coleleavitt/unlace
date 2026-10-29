unsigned __int64 __fastcall sub_2A9A40(__int64 *a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  unsigned __int64 v33; // r12
  __int64 v34; // rbx
  __int64 tinfo_property; // rax
  char v36; // bl
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // r9d
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  int v48; // r8d
  int v49; // r9d
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rax
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rsi
  __int64 v58; // rdx
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v68[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v69; // [rsp+40h] [rbp-88h] BYREF
  __int64 v70; // [rsp+48h] [rbp-80h]
  __int64 v71; // [rsp+50h] [rbp-78h] BYREF
  __int64 v72; // [rsp+58h] [rbp-70h]
  _DWORD v73[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v74[4]; // [rsp+70h] [rbp-58h] BYREF
  int v75; // [rsp+80h] [rbp-48h]
  unsigned __int64 v76; // [rsp+88h] [rbp-40h]

  v66 = a2;
  v65 = a3;
  v76 = __readfsqword(0x28u);
  sub_245140(a2, nullptr, &v66);
  if ( (unsigned int)sub_245140(v65, nullptr, &v65) == 1
    || (v33 = *(int *)(*(_QWORD *)(*a1 + 112) + 80LL), get_tinfo_size() < v33) )
  {
LABEL_2:
    v9 = 8;
    goto LABEL_3;
  }
  v34 = v65;
  if ( *(_DWORD *)(v65 + 8) == 48 )
  {
    while ( get_tinfo_size() >= v33 && (get_tinfo_property() & 0xF) != 9 )
    {
      v34 = *(_QWORD *)(v34 + 24);
      if ( *(_DWORD *)(v34 + 8) != 48 )
        goto LABEL_21;
    }
    goto LABEL_2;
  }
LABEL_21:
  v9 = 0;
LABEL_3:
  v10 = v66;
  if ( *(_DWORD *)(v66 + 8) == 51 )
  {
    v45 = sub_254FE0(*(_QWORD *)(v66 + 24));
    v46 = *a1;
    v69 = 0x4000000000LL;
    v70 = 0;
    v71 = 6;
    v72 = v45;
    sub_2A0060((__int64)&v71, v46, v47, 0, v48, v49, *(double *)a4.m128_u64);
    v73[0] = 0;
    sub_29F770((__int64)v73, (unsigned int *)&v71, *(double *)a4.m128_u64);
    v74[0] = 0;
    sub_29F770((__int64)v74, (unsigned int *)&v69, *(double *)a4.m128_u64);
    v75 = 2;
    sub_2A8310((__int64)a1, (__int64)v73, 0, v50, v51, v52, a4);
    v75 = -1;
    sub_29EC30((__int64)v74, *(double *)a4.m128_u64);
    sub_29EC30((__int64)v73, *(double *)a4.m128_u64);
    sub_29EC30((__int64)&v71, *(double *)a4.m128_u64);
    sub_29EC30((__int64)&v69, *(double *)a4.m128_u64);
    v10 = v66;
  }
  v68[1] = v10;
  v11 = *a1;
  v68[0] = 6;
  sub_2A0060((__int64)v68, v11, v5, v6, v7, v8, *(double *)a4.m128_u64);
  if ( LODWORD(v68[0]) == 1 && (get_tinfo_property() & 0xF) == 0xA )
  {
    v67 = 0;
    tinfo_property = get_tinfo_property();
    v36 = tinfo_property;
    v67 = tinfo_property;
    clear_tinfo_t();
    if ( (v36 & 0x40) == 0 )
    {
      v37 = sub_254FE0(v65);
      v38 = *a1;
      v70 = 0;
      v69 = 0x4000000000LL;
      v71 = 6;
      v72 = v37;
      sub_2A0060((__int64)&v71, v38, v39, 0, v40, v41, *(double *)a4.m128_u64);
      v73[0] = 0;
      sub_29F770((__int64)v73, (unsigned int *)&v71, *(double *)a4.m128_u64);
      v74[0] = 0;
      sub_29F770((__int64)v74, (unsigned int *)&v69, *(double *)a4.m128_u64);
      v75 = 2;
      sub_2A8310((__int64)a1, (__int64)v73, 0, v42, v43, v44, a4);
      v75 = -1;
      sub_29EC30((__int64)v74, *(double *)a4.m128_u64);
      sub_29EC30((__int64)v73, *(double *)a4.m128_u64);
      sub_29EC30((__int64)&v71, *(double *)a4.m128_u64);
      sub_29EC30((__int64)&v69, *(double *)a4.m128_u64);
    }
  }
  v16 = v66;
  v17 = v65;
  if ( *(_DWORD *)(v66 + 8) != 65
    || *(_DWORD *)(v65 + 8) != 52
    || (v12 = *(_QWORD *)(v65 + 24), *(_DWORD *)(v12 + 8) != 65)
    || (v13 = *(_DWORD *)(v12 + 32), *(_DWORD *)(v66 + 32) != v13) )
  {
    v18 = *a1;
    v72 = v65;
    v71 = 6;
    sub_2A0060((__int64)&v71, v18, v12, v13, v14, v15, *(double *)a4.m128_u64);
    v73[0] = 0;
    sub_29F770((__int64)v73, (unsigned int *)v68, *(double *)a4.m128_u64);
    v74[0] = 0;
    sub_29F770((__int64)v74, (unsigned int *)&v71, *(double *)a4.m128_u64);
    v75 = 1;
    sub_2A8310((__int64)a1, (__int64)v73, 0, v19, v20, v21, a4);
    v75 = -1;
    sub_29EC30((__int64)v74, *(double *)a4.m128_u64);
    sub_29EC30((__int64)v73, *(double *)a4.m128_u64);
    sub_29EC30((__int64)&v71, *(double *)a4.m128_u64);
    if ( v9 != 8 || (v16 = v66) == 0 )
    {
LABEL_9:
      v17 = v65;
      if ( *(_DWORD *)(v65 + 8) != 52 )
        goto LABEL_15;
      goto LABEL_10;
    }
LABEL_30:
    v53 = sub_254FE0(v16);
    sub_2A8690(a1, v53, 0, v54, v55, v56, a4);
    goto LABEL_9;
  }
  if ( v9 != 8 )
  {
    v65 = *(_QWORD *)(v65 + 24);
    goto LABEL_15;
  }
  if ( v66 )
    goto LABEL_30;
LABEL_10:
  v22 = *(_QWORD *)(v17 + 24);
  v23 = *(_DWORD *)(v22 + 8);
  v65 = v22;
  if ( (unsigned int)(v23 - 59) <= 1 )
  {
    while ( !*(_DWORD *)(v22 + 32) )
    {
      if ( v23 == 60 )
      {
        v71 = 1;
        v72 = 0;
        copy_tinfo_t();
        v57 = *a1;
        v69 = 6;
        v70 = v66;
        sub_2A0060((__int64)&v69, v57, v58, v59, v60, v61, *(double *)a4.m128_u64);
        v73[0] = 0;
        sub_29F770((__int64)v73, (unsigned int *)&v69, *(double *)a4.m128_u64);
        v74[0] = 0;
        sub_29F770((__int64)v74, (unsigned int *)&v71, *(double *)a4.m128_u64);
        v75 = 1;
        sub_2A8310((__int64)a1, (__int64)v73, 0, v62, v63, v64, a4);
        v75 = -1;
        sub_29EC30((__int64)v74, *(double *)a4.m128_u64);
        sub_29EC30((__int64)v73, *(double *)a4.m128_u64);
        sub_29EC30((__int64)&v69, *(double *)a4.m128_u64);
        sub_29EC30((__int64)&v71, *(double *)a4.m128_u64);
        break;
      }
      sub_32C540(&v67, *(_QWORD *)(*a1 + 112), (_QWORD *)(*(_QWORD *)(v22 + 24) + 48LL));
      v71 = 1;
      v72 = 0;
      copy_tinfo_t();
      v24 = *a1;
      v69 = 6;
      v70 = v66;
      sub_2A0060((__int64)&v69, v24, v25, v26, v27, v28, *(double *)a4.m128_u64);
      v73[0] = 0;
      sub_29F770((__int64)v73, (unsigned int *)&v69, *(double *)a4.m128_u64);
      v74[0] = 0;
      sub_29F770((__int64)v74, (unsigned int *)&v71, *(double *)a4.m128_u64);
      v75 = 1;
      sub_2A8310((__int64)a1, (__int64)v73, 0, v29, v30, v31, a4);
      v75 = -1;
      sub_29EC30((__int64)v74, *(double *)a4.m128_u64);
      sub_29EC30((__int64)v73, *(double *)a4.m128_u64);
      sub_29EC30((__int64)&v69, *(double *)a4.m128_u64);
      sub_29EC30((__int64)&v71, *(double *)a4.m128_u64);
      clear_tinfo_t();
      v22 = *(_QWORD *)(v65 + 24);
      v23 = *(_DWORD *)(v22 + 8);
      v65 = v22;
      if ( (unsigned int)(v23 - 59) > 1 )
        break;
    }
  }
LABEL_15:
  sub_29EC30((__int64)v68, *(double *)a4.m128_u64);
  return v76 - __readfsqword(0x28u);
}

