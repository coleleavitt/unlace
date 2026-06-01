__int64 __fastcall sub_5DB50(struct _Unwind_Exception *a1, int a2)
{
  char private_2; // al
  int v3; // r12d
  char v4; // dl
  unsigned int private_2_high; // eax
  unsigned int v6; // r14d
  char v8; // si
  char v9; // al
  unsigned int v10; // esi
  _Unwind_Word v11; // rbp
  int v12; // ecx
  _Unwind_Exception_Cleanup_Fn v13; // r15
  _Unwind_Exception_Class v14; // r14
  unsigned int v15; // r13d
  int v16; // r12d
  int v17; // r9d
  char v18; // al
  int v19; // r9d
  _Unwind_Word v20; // rdx
  int v21; // eax
  char v22; // al
  char v23; // al
  unsigned int v24; // r13d
  unsigned int v25; // r13d
  int v26; // eax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-198h]
  int v30; // [rsp+8h] [rbp-190h]
  int v31; // [rsp+18h] [rbp-180h]
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // [rsp+20h] [rbp-178h]
  int v33; // [rsp+28h] [rbp-170h]
  int v34; // [rsp+34h] [rbp-164h]
  unsigned __int8 v35; // [rsp+3Bh] [rbp-15Dh]
  int v36; // [rsp+3Ch] [rbp-15Ch]
  __int64 v37; // [rsp+B0h] [rbp-E8h]
  __int64 v38; // [rsp+F0h] [rbp-A8h]
  _BYTE v39[24]; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+110h] [rbp-88h]
  __int128 v41; // [rsp+118h] [rbp-80h]
  __int64 v42; // [rsp+128h] [rbp-70h]
  __m128i si128; // [rsp+130h] [rbp-68h]
  int v44; // [rsp+140h] [rbp-58h]
  int v45; // [rsp+144h] [rbp-54h]
  unsigned int v46; // [rsp+148h] [rbp-50h]
  char v47; // [rsp+14Ch] [rbp-4Ch]
  unsigned __int64 v48; // [rsp+158h] [rbp-40h]

  private_2 = a1[2].private_2;
  v48 = __readfsqword(0x28u);
  v3 = a2;
  v4 = private_2;
  private_2_high = private_2 & 0xF0;
  if ( (v4 & 0xF0) == 0xC0 )
    private_2_high = HIDWORD(a1->private_2);
  if ( private_2_high > 0x10 || (private_2_high = getinf(), private_2_high > 0x10) )
  {
    if ( private_2_high != 176 )
      goto LABEL_5;
  }
  else if ( (unsigned int)getinf() != 176 )
  {
    goto LABEL_5;
  }
  if ( (unsigned __int64)getinf() > 0x397
    || (unsigned __int8)getinf_flag()
    && (netnode_check(), v25 = netnode_altval(), v25 > 0x74)
    && ((v26 = *(_DWORD *)(get_ph() + 4)) == 0
     || (v27 = (unsigned int)(v26 - 13), (unsigned int)v27 <= 0x3B)
     && (v28 = 0x800000000000005LL, _bittest64(&v28, v27))
     && v25 != 117) )
  {
    v23 = a1[2].private_2;
    v24 = v23 & 0xF0;
    if ( (v23 & 0xF0) == 0xC0 )
      v24 = HIDWORD(a1->private_2);
    if ( v24 <= 0x10 )
      v24 = getinf();
    v38 = 0;
    memset(v39, 0, sizeof(v39));
    v40 = 0;
    v41 = 0;
    sub_22600();
    v42 = 0;
    v44 = a2;
    v45 = 0;
    v46 = v24;
    v47 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_95140);
    return 0;
  }
LABEL_5:
  v6 = sub_58590((__int64 *)a1, 0);
  if ( !(_BYTE)v6 )
    return v6;
  v8 = a1[2].private_2;
  v38 = 32;
  v9 = v8;
  memset(v39, 0, sizeof(v39));
  v10 = v8 & 0xF0;
  if ( (v9 & 0xF0) == 0xC0 )
    v10 = HIDWORD(a1->private_2);
  if ( v10 <= 0x10 )
    getinf();
  get_stkarg_area_info();
  v11 = *(_QWORD *)v39;
  if ( a1->exception_cleanup )
  {
    exception_cleanup = a1->exception_cleanup;
    v12 = 2 * v3;
    v31 = 2 * v3;
    if ( v3 <= 2 * v3 )
      v12 = v3;
    v35 = v6;
    v13 = 0;
    v30 = v3;
    v34 = v12;
    v33 = v3 - 1;
    while ( 1 )
    {
      v14 = a1->exception_class + 80LL * (_QWORD)v13;
      v15 = a1[2].private_2 & 0xF0;
      v29 = *(_QWORD *)(v14 + 8);
      if ( (a1[2].private_2 & 0xF0) == 0xC0 )
        v15 = HIDWORD(a1->private_2);
      if ( v15 <= 0x10 )
        v15 = getinf();
      LODWORD(v37) = 0;
      get_tinfo_size();
      v16 = 0;
      v17 = -1;
      if ( v31 >= 0 )
        break;
      if ( v15 <= 0x10 )
      {
        v21 = getinf();
        if ( v21 == 176 || v21 == 256 )
        {
          if ( v30 <= v31 )
            goto LABEL_56;
LABEL_44:
          v16 = v31;
LABEL_45:
          v15 = getinf();
          if ( v15 == 176 )
          {
LABEL_46:
            v19 = v16 - 1;
            goto LABEL_25;
          }
LABEL_23:
          if ( v15 == 256 )
            goto LABEL_46;
          goto LABEL_24;
        }
        v17 = v37 - 1;
      }
      else if ( v15 == 176 || v15 == 256 )
      {
        v16 = v34;
        v19 = v34 - 1;
        goto LABEL_25;
      }
      v36 = v17;
      v22 = getinf_flag();
      v19 = v36;
      if ( v22 )
        goto LABEL_25;
      v16 = v31;
      if ( v30 <= v31 )
      {
        if ( v15 > 0x10 )
        {
          v16 = v31;
LABEL_32:
          if ( (unsigned __int8)getinf_flag() )
            goto LABEL_46;
LABEL_33:
          v19 = v33;
          v16 = v30;
          goto LABEL_25;
        }
LABEL_56:
        v16 = v31;
LABEL_57:
        v15 = getinf();
LABEL_30:
        if ( v15 != 176 && v15 != 256 )
          goto LABEL_32;
        goto LABEL_33;
      }
      if ( v15 <= 0x10 )
        goto LABEL_44;
LABEL_24:
      v18 = getinf_flag();
      v19 = v16 - 1;
      if ( !v18 )
        goto LABEL_33;
LABEL_25:
      *(_DWORD *)v14 = 1;
      v13 = (_Unwind_Exception_Cleanup_Fn)((char *)v13 + 1);
      v20 = (v11 + v19) & -v16;
      *(_QWORD *)(v14 + 8) = v20;
      v11 = v20 + (unsigned int)v29;
      if ( exception_cleanup == v13 )
      {
        v6 = v35;
        v3 = v30;
        goto LABEL_27;
      }
    }
    if ( v30 <= 0 )
    {
      if ( v15 <= 0x10 )
        goto LABEL_57;
      goto LABEL_30;
    }
    if ( v15 <= 0x10 )
      goto LABEL_45;
    if ( v15 == 176 )
      goto LABEL_46;
    goto LABEL_23;
  }
LABEL_27:
  a1[1].private_2 = v11;
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    LODWORD(a1[1].exception_cleanup) = 1;
    a1[1].private_1 = (v11 + v3 - 1) & -v3;
  }
  return v6;
}
