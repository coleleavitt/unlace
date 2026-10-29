__int64 __fastcall sub_1A7E0(__int64 a1, _DWORD *a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v5; // r12
  __int64 v7; // rax
  size_t v8; // r13
  size_t v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  size_t v13; // r12
  size_t v14; // r15
  unsigned __int64 v15; // r9
  __int64 v16; // rsi
  size_t v17; // rax
  const char *v18; // r15
  size_t v19; // rax
  size_t v20; // r8
  size_t v21; // r9
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  size_t v24; // r15
  size_t v25; // r9
  unsigned __int64 v26; // r10
  __int64 v27; // rsi
  size_t v28; // rax
  __int64 v29; // rax
  size_t v30; // r15
  size_t v31; // r8
  unsigned __int64 v32; // r10
  __int64 v33; // rsi
  size_t v34; // rax
  size_t v35; // rax
  __int64 v36; // r15
  __int64 v37; // rsi
  unsigned __int64 v38; // r8
  size_t v39; // r9
  const void *v40; // r15
  unsigned __int64 v41; // r11
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // r15
  size_t v46; // r9
  unsigned __int64 v47; // r10
  __int64 v48; // rsi
  size_t v49; // rax
  __int64 v50; // rdi
  __int64 (__fastcall *v51)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v52; // rax
  unsigned int *v53; // rbx
  __int64 v54; // rax
  unsigned int v55; // ebp
  int v56; // eax
  char *v57; // r12
  char *v58; // rax
  __int64 v60; // rsi
  size_t v61; // rax
  size_t v62; // rax
  size_t v63; // r13
  size_t v64; // r14
  void *v65; // rdi
  __int64 *v66; // r15
  __int64 v67; // rsi
  size_t v68; // rax
  __int64 *v69; // r15
  __int64 v70; // rax
  __int64 v71; // [rsp+8h] [rbp-C0h]
  __int64 *v72; // [rsp+10h] [rbp-B8h]
  char *v73; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v74; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  size_t v76; // [rsp+30h] [rbp-98h]
  __int64 *v77; // [rsp+38h] [rbp-90h]
  __int64 v78; // [rsp+40h] [rbp-88h]
  _DWORD *v79; // [rsp+48h] [rbp-80h]
  char *s; // [rsp+50h] [rbp-78h]
  unsigned __int64 v81; // [rsp+58h] [rbp-70h]
  __int64 v82; // [rsp+60h] [rbp-68h] BYREF
  size_t v83; // [rsp+68h] [rbp-60h]
  unsigned __int64 v84; // [rsp+70h] [rbp-58h]
  _BYTE src[5]; // [rsp+7Eh] [rbp-4Ah] BYREF
  char v86; // [rsp+83h] [rbp-45h] BYREF
  unsigned __int64 v87; // [rsp+88h] [rbp-40h]

  v5 = a4;
  v78 = a1;
  v79 = a2;
  v77 = a5;
  v87 = __readfsqword(0x28u);
  v72 = &v82;
  sub_267D0(&v82, 28);
  v73 = &v86;
  v7 = pack_dd() - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v83;
    v10 = v83 + v7;
    if ( __CFADD__(v83, v7) )
    {
      if ( v83 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v83 != 0x7FFFFFFFFFFFFFFFLL )
          v83 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v9 + v82), src, v8);
        goto LABEL_7;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v67 = v82;
    v68 = v83;
    if ( v84 < v10 )
    {
      v82 = qvector_reserve();
      v67 = v82;
      v68 = v83;
    }
    memset((void *)(v67 + v68), 0, v10 - v68);
    v83 = v10;
    goto LABEL_6;
  }
LABEL_7:
  if ( (int)v5 > 0 )
  {
    v11 = a3 + 64;
    v71 = v11 + 432 * v5;
    while ( 1 )
    {
      v12 = pack_dq() - (_QWORD)src;
      v13 = v12;
      if ( !v12 )
        goto LABEL_16;
      v14 = v83;
      v15 = v83 + v12;
      if ( __CFADD__(v83, v12) )
      {
        if ( v83 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v83 != 0x7FFFFFFFFFFFFFFFLL )
            v83 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_15;
        }
        v15 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v16 = v82;
      v17 = v83;
      if ( v84 < v15 )
      {
        v74 = v15;
        v82 = qvector_reserve();
        v16 = v82;
        v15 = v74;
        v17 = v83;
      }
      v74 = v15;
      memset((void *)(v16 + v17), 0, v15 - v17);
      v83 = v74;
LABEL_15:
      memcpy((void *)(v14 + v82), src, v13);
LABEL_16:
      v18 = ::s;
      if ( *(_QWORD *)(v11 - 48) )
        v18 = *(const char **)(v11 - 56);
      if ( !v18 )
      {
        v20 = v83;
        v21 = 1;
        v18 = "";
        v22 = v83 + 1;
        if ( v83 != -1 )
          goto LABEL_68;
        v20 = -1;
        v18 = "";
LABEL_22:
        v83 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_23;
      }
      v19 = strlen(v18);
      v20 = v83;
      v21 = v19 + 1;
      v22 = v19 + 1 + v83;
      if ( !__CFADD__(v19 + 1, v83) )
        goto LABEL_68;
      if ( v83 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_68:
        v60 = v82;
        v61 = v20;
        if ( v84 < v22 )
        {
          v76 = v21;
          n = v20;
          v74 = v22;
          v82 = qvector_reserve();
          v60 = v82;
          v21 = v76;
          v61 = v83;
          v20 = n;
          v22 = v74;
        }
        v76 = v21;
        n = v20;
        v74 = v22;
        memset((void *)(v60 + v61), 0, v22 - v61);
        v20 = n;
        v21 = v76;
        v83 = v74;
        goto LABEL_23;
      }
      if ( v83 != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_22;
LABEL_23:
      memcpy((void *)(v20 + v82), v18, v21);
      if ( *(_QWORD *)(v11 - 48) <= 1u )
      {
LABEL_9:
        v11 += 432;
        if ( v71 == v11 )
          break;
      }
      else
      {
        v23 = pack_dd() - (_QWORD)src;
        v24 = v23;
        if ( v23 )
        {
          v25 = v83;
          v26 = v83 + v23;
          if ( !__CFADD__(v83, v23) )
            goto LABEL_26;
          if ( v83 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v26 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_26:
            v27 = v82;
            v28 = v83;
            if ( v84 < v26 )
            {
              n = v83;
              v74 = v26;
              v82 = qvector_reserve();
              v27 = v82;
              v25 = n;
              v28 = v83;
              v26 = v74;
            }
            n = v25;
            v74 = v26;
            memset((void *)(v27 + v28), 0, v26 - v28);
            v25 = n;
            v83 = v74;
          }
          else if ( v83 != 0x7FFFFFFFFFFFFFFFLL )
          {
            v83 = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((void *)(v25 + v82), src, v24);
        }
        if ( *(_DWORD *)(v11 - 32) != 4 )
        {
          v29 = pack_dd() - (_QWORD)src;
          v30 = v29;
          if ( v29 )
          {
            v31 = v83;
            v32 = v83 + v29;
            if ( !__CFADD__(v83, v29) )
              goto LABEL_33;
            if ( v83 <= 0x7FFFFFFFFFFFFFFELL )
            {
              v32 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_33:
              v33 = v82;
              v34 = v83;
              if ( v84 < v32 )
              {
                n = v83;
                v74 = v32;
                v82 = qvector_reserve();
                v33 = v82;
                v31 = n;
                v34 = v83;
                v32 = v74;
              }
              n = v31;
              v74 = v32;
              memset((void *)(v33 + v34), 0, v32 - v34);
              v31 = n;
              v83 = v74;
            }
            else if ( v83 != 0x7FFFFFFFFFFFFFFFLL )
            {
              v83 = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy((void *)(v31 + v82), src, v30);
          }
        }
        v35 = v83;
        v36 = *(_QWORD *)(v11 - 16);
        v37 = v82;
        if ( v84 < v83 + 1 )
        {
          v82 = qvector_reserve();
          v37 = v82;
          v35 = v83;
        }
        *(_BYTE *)(v37 + v35) = v36;
        v38 = ++v83;
        v39 = *(_QWORD *)(v11 - 16);
        if ( v39 )
        {
          v40 = *(const void **)(v11 - 24);
          v41 = v38 + v39;
          if ( !__CFADD__(v38, v39) )
            goto LABEL_41;
          if ( v38 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v41 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_41:
            v42 = v82;
            v43 = v38;
            if ( v84 < v41 )
            {
              v76 = v38;
              n = v39;
              v74 = v41;
              v82 = qvector_reserve();
              v42 = v82;
              v38 = v76;
              v43 = v83;
              v39 = n;
              v41 = v74;
            }
            v76 = v38;
            n = v39;
            v74 = v41;
            memset((void *)(v42 + v43), 0, v41 - v43);
            v39 = n;
            v38 = v76;
            v83 = v74;
          }
          else if ( v38 != 0x7FFFFFFFFFFFFFFFLL )
          {
            v83 = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((void *)(v38 + v82), v40, v39);
        }
        v44 = pack_dq() - (_QWORD)src;
        v45 = v44;
        if ( !v44 )
          goto LABEL_50;
        v46 = v83;
        v47 = v83 + v44;
        if ( __CFADD__(v83, v44) )
        {
          if ( v83 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( v83 != 0x7FFFFFFFFFFFFFFFLL )
              v83 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_49;
          }
          v48 = v82;
          v49 = v83;
          v47 = 0x7FFFFFFFFFFFFFFFLL;
          if ( v84 < 0x7FFFFFFFFFFFFFFFLL )
          {
LABEL_94:
            n = v83;
            v74 = v47;
            v82 = qvector_reserve();
            v48 = v82;
            v46 = n;
            v49 = v83;
            v47 = v74;
          }
        }
        else
        {
          v48 = v82;
          v49 = v83;
          if ( v84 < v47 )
            goto LABEL_94;
        }
        n = v46;
        v74 = v47;
        memset((void *)(v48 + v49), 0, v47 - v49);
        v46 = n;
        v83 = v74;
LABEL_49:
        memcpy((void *)(v46 + v82), src, v45);
LABEL_50:
        if ( *(_QWORD *)(v11 + 16) == -1 )
          goto LABEL_9;
        j__serialize_insn();
        v11 += 432;
        if ( v71 == v11 )
          break;
      }
    }
  }
  v50 = v78 + 864;
  v51 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(v78 + 864) + 16LL);
  if ( v51 == sub_A820 )
    v52 = (unsigned int *)sub_23190(v50, 28, v72, 0);
  else
    v52 = (unsigned int *)v51(v50, 28u, (__int64)v72);
  v53 = v52;
  if ( v52 )
  {
    v54 = *v52;
    s = (char *)v53 + 5;
    v81 = (unsigned __int64)v53 + v54 + 5;
    v55 = unpack_dd();
    v56 = unpack_dd();
    if ( v79 )
      *v79 = v56;
    if ( v77 && v55 )
    {
      v57 = s;
      v58 = s;
      do
      {
        if ( (unsigned __int64)v58 >= v81 )
          goto LABEL_62;
        ++v58;
      }
      while ( *(v58 - 1) );
      s = v58;
      if ( !v57 || (v62 = strlen(v57), (v63 = v62) == 0) )
      {
LABEL_62:
        v77[1] = 0;
        goto LABEL_63;
      }
      v64 = v62 + 1;
      v65 = (void *)*v77;
      if ( v77[2] < v62 + 1 )
      {
        v69 = v77;
        v70 = qvector_reserve();
        *v69 = v70;
        v65 = (void *)v70;
      }
      v66 = v77;
      v77[1] = v64;
      memmove(v65, v57, v63);
      *(_BYTE *)(*v66 + v63) = 0;
    }
LABEL_63:
    qfree();
  }
  else
  {
    v55 = -2;
  }
  if ( v82 )
  {
    v83 = 0;
    qfree();
  }
  return v55;
}

