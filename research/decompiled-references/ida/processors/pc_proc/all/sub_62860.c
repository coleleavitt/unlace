__int64 __fastcall sub_62860(__int64 a1, _QWORD *a2, __int64 a3)
{
  bool v3; // zf
  unsigned __int64 v5; // r12
  unsigned int v6; // r14d
  __int64 v7; // r12
  unsigned int v8; // eax
  unsigned int v9; // ebp
  char *v11; // rax
  size_t v12; // rax
  const char *v13; // r8
  size_t v14; // r15
  size_t v15; // rax
  int v16; // edx
  char *v17; // r8
  char *v18; // r15
  char *v19; // rax
  char *v20; // rdx
  char *v21; // rcx
  char v22; // al
  __int16 *v23; // r15
  char v24; // al
  size_t v25; // rax
  size_t v26; // rax
  char *v27; // [rsp+10h] [rbp-9E8h]
  char *v28; // [rsp+10h] [rbp-9E8h]
  char *v29; // [rsp+10h] [rbp-9E8h]
  char *v30; // [rsp+18h] [rbp-9E0h]
  char *v31; // [rsp+18h] [rbp-9E0h]
  _QWORD v32[45]; // [rsp+40h] [rbp-9B8h] BYREF
  _WORD v33[1024]; // [rsp+1B0h] [rbp-848h] BYREF
  int v34; // [rsp+9B0h] [rbp-48h]
  __int16 v35; // [rsp+9B4h] [rbp-44h] BYREF
  __int16 v36; // [rsp+9B6h] [rbp-42h] BYREF
  unsigned __int64 v37; // [rsp+9B8h] [rbp-40h]

  v3 = a2[6] == 32;
  v37 = __readfsqword(0x28u);
  if ( v3 )
  {
    v6 = 86;
    v5 = -32769;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 5448) )
    {
      add_til();
      *(_BYTE *)(a1 + 5448) = 1;
    }
    v5 = 0xFFFFFFFF7FFFFFFFLL;
    v6 = 87;
  }
  v7 = a2[11] & v5;
  LOBYTE(v8) = sub_625A0(a1, a3);
  v9 = v8;
  if ( !(_BYTE)v8 )
  {
    qmemcpy(v33, &unk_97300, sizeof(v33));
    v34 = unk_97B00;
    v35 = 0;
    qmemcpy(v32, a2, sizeof(v32));
    v32[11] = v7;
    if ( get_predef_insn_cmt() <= 0 )
    {
      sub_62760(a1, v7, v6, (__int64)v33);
      return v9;
    }
    qstrncpy();
    v11 = strchr((const char *)&v33[515], 59);
    if ( !v11 )
    {
      v25 = strlen((const char *)&v33[515]);
      memmove(&v33[3], &v33[515], v25 + 1);
      goto LABEL_33;
    }
    *v11 = 0;
    v30 = v11 + 1;
    v27 = v11;
    v12 = strlen((const char *)&v33[515]);
    memmove(&v33[3], &v33[515], v12 + 1);
    v15 = strlen((const char *)&v33[3]);
    v13 = v30;
    v14 = v15;
    LOWORD(v15) = v27[1];
    if ( (_BYTE)v15 )
    {
      v16 = v33[0];
      do
      {
        if ( (unsigned __int8)(v15 - 48) > 9u )
          break;
        ++v13;
        v16 = v15 + 10 * v16 - 48;
        v33[0] = v16;
        LOWORD(v15) = *v13;
      }
      while ( (_BYTE)v15 );
    }
    v17 = strchr(v13, 59);
    if ( !v17 )
    {
LABEL_33:
      sub_62760(a1, v7, v6, (__int64)v33);
      if ( !sub_625A0(a1, a3) )
        return v9;
      return 1;
    }
    v31 = v17;
    v28 = v17 + 1;
    v18 = (char *)&v33[3] + v14;
    v19 = strchr(v17 + 1, 59);
    v20 = v28;
    if ( v19 )
    {
      *v19 = 0;
      v21 = v19 + 1;
      if ( !v31[1] )
        goto LABEL_25;
    }
    else
    {
      if ( !v31[1] )
        goto LABEL_33;
      v21 = nullptr;
    }
    v33[1] = (_WORD)++v18 - (unsigned __int16)&v33[3];
    if ( v28 == v18 )
    {
      v29 = v21;
      v26 = strlen(v18);
      v21 = v29;
      v18 += v26;
    }
    else
    {
      if ( v18 >= (char *)&v36 )
        goto LABEL_43;
      if ( v18 == (char *)&v35 + 1 )
      {
LABEL_40:
        HIBYTE(v35) = 0;
        v18 = (char *)&v35 + 1;
      }
      else
      {
        while ( 1 )
        {
          v22 = *v20++;
          *v18 = v22;
          if ( !v22 )
            break;
          if ( ++v18 == (char *)&v35 + 1 )
            goto LABEL_40;
        }
      }
    }
    if ( !v21 )
      goto LABEL_33;
LABEL_25:
    if ( !*v21 )
      goto LABEL_33;
    v23 = (__int16 *)(v18 + 1);
    v33[2] = (_WORD)v23 - (unsigned __int16)&v33[3];
    if ( v23 == (__int16 *)v21 )
      goto LABEL_33;
    if ( v23 < &v36 )
    {
      if ( v23 == (__int16 *)((char *)&v35 + 1) )
      {
LABEL_31:
        HIBYTE(v35) = 0;
      }
      else
      {
        while ( 1 )
        {
          v24 = *v21++;
          *(_BYTE *)v23 = v24;
          if ( !v24 )
            break;
          v23 = (__int16 *)((char *)v23 + 1);
          if ( v23 == (__int16 *)((char *)&v35 + 1) )
            goto LABEL_31;
        }
      }
      goto LABEL_33;
    }
    if ( under_debugger )
LABEL_45:
      BUG();
    interr();
LABEL_43:
    if ( !under_debugger )
      interr();
    goto LABEL_45;
  }
  return 1;
}

