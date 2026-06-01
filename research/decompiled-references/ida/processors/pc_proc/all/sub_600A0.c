__int64 __fastcall sub_600A0(int *a1, __int64 a2, unsigned int a3)
{
  int tinfo_size; // eax
  int v6; // r12d
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // ebx
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  int v20; // eax
  int v21; // ebx
  char v22; // dl
  int v23; // eax
  char v24; // al
  unsigned __int8 v25; // al
  int v26; // edx
  char v27; // bl
  int v28; // ebx
  char tinfo_property; // al
  char v30; // al
  int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // edx
  char *s1; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v35[3]; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v36[24]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-90h]
  __m128i si128; // [rsp+60h] [rbp-88h]
  __int64 v39; // [rsp+70h] [rbp-78h]
  int v40; // [rsp+78h] [rbp-70h]
  char v41; // [rsp+7Ch] [rbp-6Ch]
  int v42; // [rsp+8Ch] [rbp-5Ch] BYREF
  int v43[6]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+A8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size();
  if ( tinfo_size == -1 )
    return 0;
  v6 = tinfo_size;
  if ( a3 <= 0x10 )
  {
    if ( (unsigned int)getinf() != 176 )
      goto LABEL_4;
  }
  else if ( a3 != 176 )
  {
    goto LABEL_4;
  }
  if ( (unsigned __int64)getinf() > 0x397
    || (unsigned __int8)getinf_flag()
    && (netnode_check(), v14 = netnode_altval(), v14 > 0x74)
    && ((v15 = *(_DWORD *)(get_ph() + 4)) == 0
     || (v16 = (unsigned int)(v15 - 13), (unsigned int)v16 <= 0x3B)
     && (v17 = 0x800000000000005LL, _bittest64(&v17, v16))
     && v14 != 117) )
  {
    v18 = get_tinfo_size();
    if ( v18 && v18 != -1 )
    {
      s1 = nullptr;
      memset(v35, 0, sizeof(v35));
      memset(v36, 0, sizeof(v36));
      sub_23600();
      v37 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_96180);
      return 0;
    }
    return 0;
  }
LABEL_4:
  if ( get_tinfo_property() )
  {
    v20 = get_tinfo_size();
    switch ( v20 )
    {
      case 16:
        goto LABEL_86;
      case 32:
        v21 = 3;
        v23 = 81;
        goto LABEL_38;
      case 8:
        v21 = 3;
        v22 = getinf_flag();
        v23 = 56;
        if ( v22 )
          v23 = (unsigned __int8)sub_59790() << 6;
        goto LABEL_38;
    }
  }
  if ( !(unsigned __int8)getinf_flag() )
    goto LABEL_41;
  v7 = sub_59790();
  if ( !(_BYTE)v7 )
  {
    v28 = get_tinfo_size();
    if ( (get_tinfo_property() & 0xF) != 9 )
    {
      if ( v28 != -1 )
      {
        if ( v28 <= 8 && (v28 & (v28 - 1)) == 0 )
          goto LABEL_67;
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
          goto LABEL_67;
      }
      return 0;
    }
    if ( (get_tinfo_property() & 0x3F) == 0x29 && v28 != 8 )
    {
      if ( (getinf() & 0xF) == 1 )
      {
        s1 = nullptr;
        get_abi_name();
      }
      return 0;
    }
LABEL_86:
    v21 = 3;
    v23 = 64;
    goto LABEL_38;
  }
  if ( v6 > 16 )
    return 0;
  v8 = v6;
  memset(v35, 0, sizeof(v35));
  s1 = (char *)&unk_97260;
  LODWORD(v37) = 0;
  BYTE4(v37) = 0;
  v42 = 0;
  memset(v36, 0, sizeof(v36));
  if ( (unsigned __int64)(v6 - 1LL) <= 0x1F )
  {
    v30 = sub_5FD00((__int64)&s1, (char *)&v42, a2, v6);
    v8 = v6;
    if ( v30 )
    {
LABEL_69:
      if ( (_BYTE)v42 == 5 )
      {
        *a1 = 3;
        a1[2] = 45;
        goto LABEL_18;
      }
LABEL_90:
      v10 = *(int *)&v36[16];
      v9 = *(int *)&v36[20];
      goto LABEL_11;
    }
    v31 = sub_5F9B0((__int64)&s1);
    v8 = v6;
    if ( v31 == 1 )
      goto LABEL_89;
    if ( !v31 )
    {
      v32 = 0;
      while ( *((_BYTE *)&v43[-1] + v32) != 7 )
      {
        v33 = v32 + 1;
        v32 = 1;
        if ( v33 >= (unsigned int)((unsigned __int64)(v6 + 7LL) >> 3) )
        {
          if ( (unsigned __int64)(v6 + 7LL) >> 3 == 2 && BYTE1(v42) == 4 )
          {
            if ( (unsigned __int8)(v42 - 2) <= 2u )
              goto LABEL_90;
            BYTE1(v42) = 2;
          }
          goto LABEL_69;
        }
      }
LABEL_89:
      v10 = *(int *)&v36[16];
      v9 = *(int *)&v36[20];
      goto LABEL_10;
    }
    if ( v35[0] )
    {
      v35[1] = 0;
      qfree();
    }
LABEL_41:
    if ( (get_tinfo_property() & 0xF) == 9
      || (unsigned __int8)sub_59790()
      && (s1 = nullptr, s1 = (char *)get_tinfo_property(), v27 = get_tinfo_property(), clear_tinfo_t(), (v27 & 0xF) == 9) )
    {
      v21 = 3;
      v23 = 45;
      goto LABEL_38;
    }
    if ( (v6 & (v6 - 1)) == 0 || (v24 = get_tinfo_property(), (v24 & 0xFu) <= 0xA) || (v24 & 0x3F) == 0x2D )
    {
      v25 = getinf();
      if ( v25 >= v6 )
      {
        v21 = 3;
        v23 = 16 * (v6 == 1);
        goto LABEL_38;
      }
      if ( 2 * v25 >= v6 )
      {
        if ( !(unsigned __int8)getinf_flag() )
        {
          v21 = 4;
          v23 = 0x20000;
LABEL_38:
          *a1 = v21;
          v7 = 1;
          a1[2] = v23;
          return v7;
        }
LABEL_67:
        v21 = 3;
        v23 = 0;
        goto LABEL_38;
      }
    }
    return 0;
  }
  v9 = 0;
  v10 = 0;
LABEL_10:
  LOBYTE(v42) = 7;
LABEL_11:
  v11 = 0;
  v12 = 0;
  *(_OWORD *)v43 = -1;
  do
  {
    v13 = *((_BYTE *)&v43[-1] + v12);
    switch ( v13 )
    {
      case 1u:
        if ( v10 > 5 )
          goto LABEL_17;
        v26 = *(_DWORD *)&s1[4 * v10++];
        goto LABEL_53;
      case 2u:
        v26 = v9++ + 64;
LABEL_53:
        v43[v12] = v26;
        ++v11;
        goto LABEL_54;
      case 4u:
        v26 = -1;
        goto LABEL_53;
      case 3u:
        v26 = v9++ + 81;
        goto LABEL_53;
    }
    if ( v13 > 4u )
      goto LABEL_17;
LABEL_54:
    ++v12;
  }
  while ( v12 != 4 );
  if ( v10 > 6 || v9 > 8 || (*(_DWORD *)&v36[16] = v10, *(_DWORD *)&v36[20] = v9, v11 <= 0) )
  {
LABEL_17:
    v7 = 0;
    goto LABEL_18;
  }
  sub_5AE90(&s1, a1, v43, v11, v8);
LABEL_18:
  if ( v35[0] )
  {
    v35[1] = 0;
    qfree();
  }
  return v7;
}

