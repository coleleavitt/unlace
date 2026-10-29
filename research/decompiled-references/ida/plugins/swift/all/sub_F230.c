bool __fastcall sub_F230(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 named_type_tid; // r14
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // r13d
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r15
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 i; // rsi
  __int64 v37; // r13
  size_t v38; // rax
  const void *v39; // r14
  void *v40; // rax
  __int64 v41; // rbp
  __int64 v42; // r15
  __int64 *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rdi
  unsigned __int8 v46; // al
  __int64 v47; // [rsp+8h] [rbp-E0h]
  __int64 v48; // [rsp+8h] [rbp-E0h]
  __int64 v49; // [rsp+10h] [rbp-D8h]
  __int64 v50; // [rsp+18h] [rbp-D0h]
  __int64 *v51; // [rsp+20h] [rbp-C8h]
  __int64 v52; // [rsp+28h] [rbp-C0h]
  size_t v53; // [rsp+30h] [rbp-B8h]
  size_t n; // [rsp+38h] [rbp-B0h]
  __int64 v55; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v56[2]; // [rsp+50h] [rbp-98h] BYREF
  __int16 v57; // [rsp+60h] [rbp-88h]
  __int64 v58; // [rsp+70h] [rbp-78h] BYREF
  __int128 v59; // [rsp+78h] [rbp-70h]
  __int64 v60; // [rsp+88h] [rbp-60h]
  __int128 v61; // [rsp+90h] [rbp-58h]
  int v62; // [rsp+A0h] [rbp-48h]
  char v63; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v2 = a2;
  v3 = a1 + 16LL * a2;
  v4 = *(_QWORD *)(v3 + 248);
  if ( v4 != -1 )
  {
    if ( v4 )
      return 1;
    if ( a2 == 6 )
    {
      v51 = (__int64 *)&xmmword_287C0;
      v15 = (__int64 *)&xmmword_287C0;
      v16 = 0;
    }
    else
    {
      if ( a2 != 8 )
      {
LABEL_5:
        LODWORD(v58) = 0;
        v5 = sub_EF80((const char **)&xmmword_28820 + 3 * v2, &v58);
        v6 = v58;
        *(_QWORD *)(v3 + 248) = v5;
        *(_DWORD *)(v3 + 256) = v6;
        return v5 != -1;
      }
      v15 = &qword_287F0;
      v16 = 1;
      v51 = &qword_287F0 - 6;
    }
    v52 = v16;
    v17 = &v51[6 * v16];
    named_type_tid = get_named_type_tid(*v17);
    if ( named_type_tid != -1 )
    {
      v19 = *v17;
      v55 = 0;
      v58 = 0;
      v60 = 0;
      v62 = 0;
      v63 = 0x80;
      v59 = 0;
      v61 = 0;
      if ( !v19 )
      {
        v21 = *((_DWORD *)v17 + 8);
        goto LABEL_73;
      }
      v56[1] = v19;
      v57 = 256;
      v56[0] = get_idati();
      if ( !(unsigned __int8)create_tinfo(&v55, 61, 61, v56) || !(unsigned __int8)get_tinfo_details(v55, 45, &v58) )
      {
        v20 = v51[6 * v52 + 4];
        goto LABEL_27;
      }
      if ( (v63 & 7) != 0 )
      {
        v22 = 1 << ((v63 & 7) - 1);
        v21 = v51[6 * v52 + 4];
        if ( v22 != v51[6 * v52 + 4] )
          goto LABEL_29;
      }
      else
      {
        v46 = getinf(61);
        v20 = v51[6 * v52 + 4];
        if ( v20 != v46 )
        {
LABEL_27:
          v21 = v20;
          if ( (v63 & 7) != 0 )
          {
            v22 = 1 << ((v63 & 7) - 1);
LABEL_29:
            sub_CB10(
              (__int64)"there already exists an enum with the name %s, but with a different width %u (not %u)\n",
              (const char *)v51[6 * v52],
              v22,
              v21);
            v14 = -1;
LABEL_30:
            if ( v60 )
            {
              *(_QWORD *)&v61 = 0;
              qfree(v60);
            }
            v23 = v58;
            if ( v58 )
            {
              v24 = v59;
              if ( (_QWORD)v59 )
              {
                v49 = v3;
                v25 = 0;
                v26 = 0;
                do
                {
                  v27 = (__int64 *)(v23 + v25);
                  v28 = *(_QWORD *)(v23 + v25 + 24);
                  if ( v28 )
                  {
                    v27[4] = 0;
                    qfree(v28);
                  }
                  v29 = *v27;
                  if ( *v27 )
                  {
                    v27[1] = 0;
                    qfree(v29);
                  }
                  ++v26;
                  v23 = v58;
                  v25 += 56;
                }
                while ( v24 != v26 );
                v3 = v49;
              }
              *(_QWORD *)&v59 = 0;
              qfree(v23);
            }
            clear_tinfo_t(&v55);
            goto LABEL_43;
          }
LABEL_73:
          v22 = (unsigned __int8)getinf(61);
          goto LABEL_29;
        }
      }
      v14 = named_type_tid;
      goto LABEL_30;
    }
    v30 = *((_BYTE *)v17 + 40);
    v31 = v15[1];
    v58 = 0;
    v60 = 0;
    v59 = 0;
    v63 = v30 | 0x80;
    v32 = v15[2];
    v62 = 0;
    v50 = v32;
    v61 = 0;
    if ( v31 != v32 )
    {
      v33 = v31;
      v34 = 0;
      v35 = 0;
      for ( i = 0; ; i = v58 )
      {
        v39 = *(const void **)v33;
        v47 = *(_QWORD *)(v33 + 8);
        if ( v34 < v35 + 1 )
        {
          v58 = qvector_reserve(&v58, i, v35 + 1, 56);
          i = v58;
          v35 = v59;
        }
        v37 = i + 56 * v35;
        *(_QWORD *)v37 = 0;
        *(_QWORD *)(v37 + 24) = 0;
        *(_OWORD *)(v37 + 8) = 0;
        *(_OWORD *)(v37 + 32) = 0;
        *(_QWORD *)&v59 = v59 + 1;
        if ( v39 && (v38 = strlen((const char *)v39)) != 0 )
        {
          n = v38;
          v53 = v38 + 1;
          v40 = (void *)qvector_reserve(v37, *(_QWORD *)v37, v38 + 1, 1);
          *(_QWORD *)v37 = v40;
          *(_QWORD *)(v37 + 8) = v53;
          memmove(v40, v39, n);
          *(_BYTE *)(*(_QWORD *)v37 + n) = 0;
        }
        else
        {
          *(_QWORD *)(v37 + 8) = 0;
        }
        *(_QWORD *)(v37 + 32) = 0;
        v33 += 16;
        *(_QWORD *)(v37 + 48) = v47;
        if ( v50 == v33 )
          break;
        v34 = *((_QWORD *)&v59 + 1);
        v35 = v59;
      }
    }
    v8 = &v51[6 * v52];
    v9 = v8[4];
    v10 = *v8;
    if ( (unsigned int)v9 <= 8 && ((unsigned int)v9 & ((_DWORD)v9 - 1)) == 0 )
    {
      LOBYTE(v11) = 0;
      if ( (_DWORD)v9 )
        v11 = log2ceil((int)v9) + 1;
      v63 = v11 | v63 & 0xF8;
    }
    v56[0] = 0;
    if ( !(unsigned __int8)create_tinfo(v56, 45, 45, &v58)
      || (unsigned int)set_tinfo_property4(v56, 18, 0, 0, 0, 0)
      || (unsigned int)save_tinfo(v56, 0, 0, v10, 5) )
    {
      clear_tinfo_t(v56);
    }
    else
    {
      v14 = get_named_type_tid(v10);
      clear_tinfo_t(v56);
      if ( v14 != -1 )
      {
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree(v60);
        }
        v12 = v58;
        if ( !v58 )
          goto LABEL_5;
        v13 = v59;
        if ( !(_QWORD)v59 )
        {
          qfree(v58);
          goto LABEL_5;
        }
        goto LABEL_62;
      }
    }
    sub_CB10((__int64)"could not add an enum with the name %s\n", (const char *)v51[6 * v52]);
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60);
    }
    v12 = v58;
    if ( v58 )
    {
      v13 = v59;
      v14 = -1;
      if ( (_QWORD)v59 )
      {
LABEL_62:
        v48 = v3;
        v41 = 0;
        v42 = 0;
        do
        {
          v43 = (__int64 *)(v12 + v41);
          v44 = *(_QWORD *)(v12 + v41 + 24);
          if ( v44 )
          {
            v43[4] = 0;
            qfree(v44);
          }
          v45 = *v43;
          if ( *v43 )
          {
            v43[1] = 0;
            qfree(v45);
          }
          ++v42;
          v12 = v58;
          v41 += 56;
        }
        while ( v42 != v13 );
        *(_QWORD *)&v59 = 0;
        v3 = v48;
        qfree(v58);
LABEL_43:
        if ( v14 != -1 )
          goto LABEL_5;
        return 0;
      }
      qfree(v58);
    }
  }
  return 0;
}

