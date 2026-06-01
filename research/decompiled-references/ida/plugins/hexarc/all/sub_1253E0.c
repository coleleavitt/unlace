__int64 __fastcall sub_1253E0(_QWORD *a1, __int64 a2, unsigned int *a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned int *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  void *v14; // rax
  __int128 v15; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rbp
  unsigned __int64 i; // r15
  int v29; // edx
  __int64 v30; // rax
  _QWORD *v31; // r14
  __int64 v32; // rdi
  __int128 v33; // rdi
  size_t v34; // r10
  int v35; // edx
  char v36; // al
  char v37; // al
  __int16 v38; // ax
  __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // edx
  unsigned __int64 v42; // r10
  __int64 v43; // rdi
  __int64 v44; // [rsp+10h] [rbp-E8h]
  __int64 v45; // [rsp+10h] [rbp-E8h]
  __int64 nc; // [rsp+20h] [rbp-D8h]
  size_t n; // [rsp+20h] [rbp-D8h]
  size_t na; // [rsp+20h] [rbp-D8h]
  int nb; // [rsp+20h] [rbp-D8h]
  __int64 v53; // [rsp+38h] [rbp-C0h]
  __int64 v54; // [rsp+38h] [rbp-C0h]
  __int64 v55; // [rsp+40h] [rbp-B8h]
  char *v56; // [rsp+40h] [rbp-B8h]
  int v57; // [rsp+40h] [rbp-B8h]
  __int64 v58; // [rsp+40h] [rbp-B8h]
  char *v59; // [rsp+40h] [rbp-B8h]
  int v60; // [rsp+48h] [rbp-B0h]
  __int64 v61; // [rsp+48h] [rbp-B0h]
  int v62; // [rsp+48h] [rbp-B0h]
  char v63; // [rsp+5Fh] [rbp-99h]
  unsigned __int64 v64; // [rsp+60h] [rbp-98h] BYREF
  __int64 v65; // [rsp+68h] [rbp-90h]
  __int64 v66; // [rsp+70h] [rbp-88h]
  __int128 v67; // [rsp+78h] [rbp-80h]
  _QWORD v68[2]; // [rsp+90h] [rbp-68h] BYREF
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v70; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+B8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  if ( !a3 )
  {
    LOBYTE(v6) = *(_QWORD *)(a6 + 16) == 0;
    return (unsigned int)v6;
  }
  v7 = a1[1];
  v66 = 0;
  v10 = a3;
  v67 = 0;
  if ( v7 )
  {
    v68[0] = 0;
    v68[1] = 0;
    src = nullptr;
    v70 = 0;
    v11 = qvector_reserve();
    v12 = v67;
    v66 = v11;
    if ( (unsigned __int64)v67 < v7 )
    {
      while ( 1 )
      {
        v13 = v11 + 40 * v12;
        sub_5DA80((__int64 *)v13, (__int64)v68);
        *(_QWORD *)(v13 + 16) = 0;
        *(_OWORD *)(v13 + 24) = 0;
        if ( (_QWORD)v70 )
        {
          v44 = v70;
          nc = 16 * v70;
          v14 = (void *)qalloc_or_throw();
          *(_QWORD *)(v13 + 16) = v14;
          *(_QWORD *)(v13 + 32) = v44;
          memcpy(v14, src, nc);
          *(_QWORD *)(v13 + 24) = v44;
        }
        if ( v7 == ++v12 )
          break;
        v11 = v66;
      }
    }
    *(_QWORD *)&v67 = v7;
    if ( src )
    {
      *(_QWORD *)&v70 = 0;
      qfree();
    }
    v6 = 0;
    qfree();
    do
    {
      *(_QWORD *)&v15 = a2;
      *((_QWORD *)&v15 + 1) = v66 + 40 * v6;
      sub_11D7E0(v15, *a1 + 16 * v6++, 1u, 0xFFFF0000);
    }
    while ( v7 != v6 );
  }
  if ( *v10 == 1 )
    goto LABEL_52;
LABEL_14:
  sub_121360((__int64)v68, a2, (__int64)v10, 1);
  v63 = 0;
  if ( v7 )
  {
    v16 = 0;
    while ( 1 )
    {
      v6 = v66 + 40 * v16;
      if ( !(unsigned __int8)sub_5E200((_QWORD *)v6, v68) && !(unsigned __int8)sub_3110F0(v6 + 16, &src) )
        goto LABEL_34;
      if ( a4 != nullptr && a4 == v10 )
        goto LABEL_21;
      v19 = *v10;
      v20 = v16 & 7;
      *(&v63 + (v16 >> 3)) |= 1 << v20;
      v21 = *a1 + 16 * v16;
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
      if ( (_DWORD)v19 == 62 )
      {
        if ( (*((_BYTE *)v10 + 5) & 0x10) != 0 )
          goto LABEL_21;
      }
      else if ( (unsigned int)v19 <= 0x3B )
      {
        v22 = 0xCFFFC0000000003LL;
        if ( _bittest64(&v22, v19) )
          goto LABEL_21;
        if ( *(_BYTE *)v21 != 1 && (unsigned __int8)(*(_BYTE *)v21 - 5) > 1u || (v20 = a5) != 0 )
        {
LABEL_57:
          if ( (signed int)v10[17] < *(_DWORD *)(v21 + 4) )
            goto LABEL_21;
          n = *a1 + 16 * v16;
          if ( !(unsigned __int8)sub_327830(v19) || !sub_11EF10((unsigned __int8 *)n, v6, (__int64)(v10 + 16), a5) )
            goto LABEL_21;
          v65 = 0;
          v64 = 0xFFFFFFFF00000000LL;
          sub_11FC20((__int64)&v64, (unsigned __int8 *)v10);
          v34 = n;
          v35 = *(_DWORD *)(n + 4);
          if ( SHIDWORD(v64) > v35 )
          {
            if ( !(unsigned __int8)sub_124490((unsigned __int64)&v64, v6, v35, 0) )
            {
              sub_1166E0((__int64)&v64);
LABEL_21:
              LODWORD(v6) = 0;
LABEL_22:
              if ( src )
              {
                *(_QWORD *)&v70 = 0;
                qfree();
              }
              qfree();
              goto LABEL_25;
            }
            v34 = n;
            v35 = *(_DWORD *)(n + 4);
          }
          v36 = *(_BYTE *)v34;
          *(_BYTE *)v34 = v64;
          LOBYTE(v64) = v36;
          v37 = *(_BYTE *)(v34 + 1);
          *(_BYTE *)(v34 + 1) = BYTE1(v64);
          BYTE1(v64) = v37;
          v38 = *(_WORD *)(v34 + 2);
          *(_WORD *)(v34 + 2) = WORD1(v64);
          WORD1(v64) = v38;
          *(_DWORD *)(v34 + 4) = HIDWORD(v64);
          v39 = *(_QWORD *)(v34 + 8);
          HIDWORD(v64) = v35;
          *(_QWORD *)(v34 + 8) = v65;
          v65 = v39;
          sub_1166E0((__int64)&v64);
          goto LABEL_34;
        }
        if ( (_DWORD)v19 == 4 )
          goto LABEL_69;
        goto LABEL_68;
      }
      if ( *(_BYTE *)v21 == 1 || (unsigned __int8)(*(_BYTE *)v21 - 5) > 1u || a5 )
        goto LABEL_57;
LABEL_68:
      if ( (unsigned int)(v19 - 10) > 1 )
        goto LABEL_57;
LABEL_69:
      na = *a1 + 16 * v16;
      v40 = sub_11B610(v6, (__int64)(v10 + 16), na, v20, v17, v18);
      if ( !v40 )
        goto LABEL_21;
      v41 = *v10;
      v42 = na;
      if ( *v10 == 10 )
      {
        if ( v40 == 3 )
          goto LABEL_21;
        v57 = v40;
        if ( (unsigned int *)na == v10 + 8 )
          goto LABEL_34;
        v43 = na;
        v61 = na;
        nb = *(_DWORD *)(na + 4);
        sub_1166E0(v43);
        sub_11D380(v61, (unsigned __int8 *)v10 + 32);
        v42 = v61;
        if ( v57 != 2 )
          goto LABEL_34;
      }
      else
      {
        if ( v41 == 11 )
        {
          if ( v40 == 2 )
            goto LABEL_21;
          nb = *(_DWORD *)(na + 4);
          if ( (unsigned int *)v42 != v10 + 8 )
          {
            v62 = v40;
            v58 = v42;
            sub_1166E0(v42);
            sub_11D380(v58, (unsigned __int8 *)v10 + 32);
            v42 = v58;
            v40 = v62;
          }
LABEL_88:
          if ( v40 == 3 && nb < *(_DWORD *)(v42 + 4) && nb > 0 )
          {
            v59 = (char *)v42;
            v54 = *((_QWORD *)v10 + 3);
            if ( !(unsigned __int8)sub_121190(v42, v6, nb, 0) )
              sub_11A120(v59, v6, 11, v54, nb);
          }
          goto LABEL_34;
        }
        if ( v41 != 4 )
        {
          if ( !under_debugger )
            sub_37B760(52668);
          BUG();
        }
        nb = *(_DWORD *)(na + 4);
        if ( (unsigned int *)v42 != v10 + 8 )
        {
          v60 = v40;
          v55 = v42;
          sub_1166E0(v42);
          sub_11D380(v55, (unsigned __int8 *)v10 + 32);
          v40 = v60;
          v42 = v55;
        }
        if ( v40 != 2 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v42 + 4) > nb && nb > 0 )
      {
        v56 = (char *)v42;
        v53 = *((_QWORD *)v10 + 3);
        if ( !(unsigned __int8)sub_120BF0(v42, v6, nb) )
          sub_11A120(v56, v6, 10, v53, nb);
      }
LABEL_34:
      if ( v7 == ++v16 )
      {
        if ( v63 )
        {
          if ( *(_QWORD *)(a6 + 16) )
          {
            LODWORD(v6) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a6 + 24))(a6, a1);
            if ( (_BYTE)v6 )
              goto LABEL_22;
          }
        }
        if ( a4 == v10 || !*((_QWORD *)v10 + 2) )
          goto LABEL_96;
        for ( i = 0; i != v7; ++i )
        {
          while ( 1 )
          {
            v29 = (unsigned __int8)*(&v63 + (i >> 3));
            if ( _bittest(&v29, i & 7) )
              break;
            if ( v7 == ++i )
              goto LABEL_48;
          }
          v30 = 40 * i;
          v31 = (_QWORD *)(40 * i + v66);
          v32 = v31[2];
          v31[1] = 0;
          if ( v32 )
          {
            v31[3] = 0;
            qfree();
            v31[2] = 0;
            v30 = 40 * i;
            v31[4] = 0;
            v31 = (_QWORD *)(40 * i + v66);
          }
          *((_QWORD *)&v33 + 1) = v31;
          *(_QWORD *)&v33 = a2;
          v45 = v30;
          sub_11D7E0(v33, *a1 + 16 * i, 1u, 0xFFFF0000);
          v6 = v66 + v45;
          if ( (unsigned __int8)sub_5E200((_QWORD *)(v66 + v45), v68) || (unsigned __int8)sub_3110F0(v6 + 16, &src) )
            goto LABEL_21;
        }
LABEL_48:
        v10 = *((unsigned int **)v10 + 2);
LABEL_49:
        if ( src )
        {
          *(_QWORD *)&v70 = 0;
          qfree();
        }
        qfree();
        if ( *v10 == 1 )
        {
LABEL_52:
          LODWORD(v6) = 0;
          goto LABEL_25;
        }
        goto LABEL_14;
      }
    }
  }
  if ( a4 != v10 )
  {
    v10 = *((unsigned int **)v10 + 2);
    if ( v10 )
      goto LABEL_49;
  }
LABEL_96:
  if ( src )
  {
    *(_QWORD *)&v70 = 0;
    qfree();
  }
  qfree();
  LOBYTE(v6) = *(_QWORD *)(a6 + 16) == 0;
LABEL_25:
  v23 = v66;
  if ( v66 )
  {
    v24 = v67;
    if ( (_QWORD)v67 )
    {
      v25 = 0;
      do
      {
        v26 = v23 + 40 * v25;
        if ( *(_QWORD *)(v26 + 16) )
        {
          *(_QWORD *)(v26 + 24) = 0;
          qfree();
        }
        ++v25;
        qfree();
        v23 = v66;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  return (unsigned int)v6;
}

