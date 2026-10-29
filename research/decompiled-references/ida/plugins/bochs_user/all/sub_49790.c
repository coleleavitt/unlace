__int64 __fastcall sub_49790(__int64 a1, const char *a2, __int64 a3, const void *a4, _QWORD *a5)
{
  __int64 v6; // rbp
  unsigned int v7; // r14d
  _QWORD *v9; // r11
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r10
  char *v19; // r8
  __int64 v20; // r10
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r8
  void *v25; // r10
  unsigned __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rax
  size_t v29; // r14
  __int64 v30; // r10
  char *v31; // r8
  _QWORD *v32; // r9
  unsigned int v33; // ecx
  unsigned int v34; // eax
  const char *v35; // rdx
  const char *v36; // rdx
  const char *v37; // rdx
  const char *v38; // rdx
  const char *v39; // rdx
  _QWORD *v40; // [rsp+8h] [rbp-530h]
  __int64 v41; // [rsp+8h] [rbp-530h]
  unsigned int v42; // [rsp+8h] [rbp-530h]
  int v46; // [rsp+28h] [rbp-510h]
  _QWORD *v47; // [rsp+28h] [rbp-510h]
  _QWORD *v48; // [rsp+28h] [rbp-510h]
  unsigned __int64 v49; // [rsp+28h] [rbp-510h]
  _QWORD *v50; // [rsp+28h] [rbp-510h]
  unsigned __int64 v51; // [rsp+28h] [rbp-510h]
  _QWORD *v52; // [rsp+28h] [rbp-510h]
  __int64 v53; // [rsp+30h] [rbp-508h]
  __int64 v54; // [rsp+38h] [rbp-500h]
  _QWORD *v55; // [rsp+38h] [rbp-500h]
  _QWORD *v56; // [rsp+38h] [rbp-500h]
  _QWORD *v57; // [rsp+38h] [rbp-500h]
  _QWORD *v58; // [rsp+38h] [rbp-500h]
  _QWORD *v59; // [rsp+38h] [rbp-500h]
  _QWORD *v60; // [rsp+38h] [rbp-500h]
  __int64 v61; // [rsp+38h] [rbp-500h]
  char *srca; // [rsp+40h] [rbp-4F8h]
  char *srcc; // [rsp+40h] [rbp-4F8h]
  void *srce; // [rsp+40h] [rbp-4F8h]
  _QWORD *src; // [rsp+40h] [rbp-4F8h]
  _QWORD *srcb; // [rsp+40h] [rbp-4F8h]
  void *srcd; // [rsp+40h] [rbp-4F8h]
  __int64 v68; // [rsp+48h] [rbp-4F0h]
  __int64 v69; // [rsp+48h] [rbp-4F0h]
  __int64 v70; // [rsp+48h] [rbp-4F0h]
  __int64 v71; // [rsp+58h] [rbp-4E0h]
  int v72; // [rsp+64h] [rbp-4D4h] BYREF
  int v73; // [rsp+68h] [rbp-4D0h] BYREF
  int v74; // [rsp+6Ch] [rbp-4CCh] BYREF
  __int64 v75; // [rsp+70h] [rbp-4C8h]
  __int128 v76; // [rsp+78h] [rbp-4C0h]
  const char *v77; // [rsp+90h] [rbp-4A8h] BYREF
  __int128 v78; // [rsp+98h] [rbp-4A0h]
  __int64 v79; // [rsp+B0h] [rbp-488h] BYREF
  __int128 v80; // [rsp+B8h] [rbp-480h]
  const char *v81; // [rsp+D0h] [rbp-468h] BYREF
  __int128 v82; // [rsp+D8h] [rbp-460h]
  char v83[1032]; // [rsp+F0h] [rbp-448h] BYREF
  unsigned __int64 v84; // [rsp+4F8h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  if ( !(unsigned __int8)qdirname() )
  {
    v7 = 22;
    sub_48D40(a1);
    return v7;
  }
  v6 = qfopen();
  if ( !v6 )
  {
    sub_48D40(a1);
    return 8;
  }
  v75 = 0;
  v76 = 0;
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"--WRITING boot sector---------------------------------\n", "wb");
  if ( qfwrite() != 1024 )
    goto LABEL_6;
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"--WRITING MAGIC and OBJCOUNT--------------------------\n", byte_74F40);
  if ( qfwrite() != 4 || qfwrite() != 4 || qfwrite() != 4 )
    goto LABEL_6;
  v53 = 0;
  v71 = a5[1];
  if ( !v71 )
  {
LABEL_49:
    sub_48D40(a1);
    if ( v75 )
    {
      *(_QWORD *)&v76 = 0;
      qfree();
    }
    v7 = 13;
    goto LABEL_52;
  }
  while ( 1 )
  {
    sub_49290(*(_QWORD *)(*a5 + 8 * v53));
    v9 = *(_QWORD **)(*a5 + 8 * v53);
    v10 = v9[1];
    if ( v10 )
    {
      v11 = v76;
      v12 = v76 + 4;
      if ( (unsigned __int64)v76 >= 0xFFFFFFFFFFFFFFFCLL )
      {
        v15 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v13 = v75;
        v14 = v76;
        if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 4) )
        {
          v61 = v9[1];
          v52 = *(_QWORD **)(*a5 + 8 * v53);
          v75 = qvector_reserve();
          v13 = v75;
          v14 = v76;
          v12 = v76 + 4;
          LODWORD(v10) = v61;
          v9 = v52;
        }
        v54 = v12;
        v46 = v10;
        v40 = v9;
        memset((void *)(v13 + v14), 0, 4u);
        v9 = v40;
        LODWORD(v10) = v46;
        v15 = v54;
      }
      *(_QWORD *)&v76 = v15;
      *(_DWORD *)(v75 + v11) = v10;
      v41 = *v9;
      if ( 8LL * v9[1] )
        break;
    }
LABEL_47:
    if ( v71 == ++v53 )
    {
      if ( !(_QWORD)v76 )
        goto LABEL_49;
      if ( (int)v76 == qfwrite() )
      {
        if ( (*(_DWORD *)debug & 0x10000) != 0 )
          sub_E960((__int64)"--Alignining BOCHS disk image ------------------------\n", v75);
        v33 = qftell() / 0x100000 + 1;
        v34 = 2;
        if ( v33 >= 2 )
          v34 = v33;
        v42 = v34;
        v7 = sub_48B60(a1, v6, v34, &v72, &v73, &v74);
        if ( v7 )
          goto LABEL_92;
        if ( (*(_DWORD *)debug & 0x10000) != 0 )
          sub_E960((__int64)"--Write disk image header ----------------------------\n");
        qfseek();
        if ( qfwrite() == 512 )
        {
          if ( (*(_DWORD *)debug & 0x10000) != 0 )
            sub_E960((__int64)"created image %s [%u MBs] <cyl=%u heads=%u spt=%u>\n", a2, v42, v72, v73, v74);
          v77 = nullptr;
          v79 = 0;
          v78 = 0;
          v80 = 0;
          sub_487E0((__int64)&v79, a4);
          sub_F490((__int64 *)&v77);
          v35 = s1;
          if ( (_QWORD)v78 )
            v35 = v77;
          sub_48880((__int64)&v79, "$CYL", v35);
          sub_F490((__int64 *)&v77);
          v36 = s1;
          if ( (_QWORD)v78 )
            v36 = v77;
          sub_48880((__int64)&v79, "$HEADS", v36);
          sub_F490((__int64 *)&v77);
          v37 = s1;
          if ( (_QWORD)v78 )
            v37 = v77;
          sub_48880((__int64)&v79, "$SPT", v37);
          sub_48880((__int64)&v79, "$IMGFILE", a2);
          sub_48880((__int64)&v79, "$BXDBGDIR", v83);
          v81 = nullptr;
          v82 = 0;
          qgetenv();
          if ( (unsigned __int64)v82 > 1 )
          {
            sub_48880((__int64)&v79, "# romimage", "romimage");
            sub_48880((__int64)&v79, "# vgaromimage", "vgaromimage");
            if ( (unsigned __int64)v82 > 1 )
              goto LABEL_96;
          }
          if ( (unsigned __int8)qisdir() )
            sub_487E0((__int64)&v81, "/usr/local/share/bochs");
          if ( (unsigned __int64)v82 > 1 || (sub_487E0((__int64)&v81, v83), (_QWORD)v82) )
LABEL_96:
            v38 = v81;
          else
            v38 = s1;
          sub_48880((__int64)&v79, "$BXDATADIR", v38);
          sub_F490((__int64 *)&v77);
          v39 = s1;
          if ( (_QWORD)v78 )
            v39 = v77;
          sub_48880((__int64)&v79, "$MEGS", v39);
          if ( !(unsigned __int8)sub_30640(a3, v79, ((_QWORD)v80 == 0) + (_QWORD)v80 - 1LL, 0) )
          {
            sub_48D40(a1);
            if ( v81 )
            {
              *(_QWORD *)&v82 = 0;
              qfree();
            }
            if ( v79 )
            {
              *(_QWORD *)&v80 = 0;
              qfree();
            }
            if ( v77 )
            {
              *(_QWORD *)&v78 = 0;
              qfree();
            }
            if ( v75 )
            {
              *(_QWORD *)&v76 = 0;
              qfree();
            }
            v7 = 11;
            goto LABEL_52;
          }
          if ( v81 )
          {
            *(_QWORD *)&v82 = 0;
            qfree();
          }
          if ( v79 )
          {
            *(_QWORD *)&v80 = 0;
            qfree();
          }
          if ( v77 )
          {
            *(_QWORD *)&v78 = 0;
            qfree();
          }
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree();
          }
          qfclose();
          return v7;
        }
      }
LABEL_6:
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree();
      }
      v7 = 16;
      sub_48D40(a1);
      qfclose();
      goto LABEL_9;
    }
  }
  while ( 1 )
  {
    v32 = *(_QWORD **)v41;
    v29 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
    if ( v29 > 0xFFFFFFFF )
      break;
    v31 = (char *)v76;
    v30 = v76 + 4;
    if ( (unsigned __int64)v76 < 0xFFFFFFFFFFFFFFFCLL )
    {
      v16 = v75;
      v17 = v76;
      if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 4) )
      {
        src = *(_QWORD **)v41;
        v58 = v9;
        v75 = qvector_reserve();
        v16 = v75;
        v17 = v76;
        v30 = v76 + 4;
        v31 = (char *)v76;
        v32 = src;
        v9 = v58;
      }
      v68 = v30;
      srca = v31;
      v55 = v32;
      v47 = v9;
      memset((void *)(v16 + v17), 0, 4u);
      v9 = v47;
      v32 = v55;
      v31 = srca;
      v18 = v68;
    }
    else
    {
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    *(_QWORD *)&v76 = v18;
    *(_DWORD *)&v31[v75] = v29;
    v19 = (char *)v76;
    v20 = v76 + 4;
    if ( (unsigned __int64)v76 >= 0xFFFFFFFFFFFFFFFCLL )
    {
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v21 = v75;
      v22 = v76;
      if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 4) )
      {
        srcb = v32;
        v59 = v9;
        v75 = qvector_reserve();
        v21 = v75;
        v22 = v76;
        v20 = v76 + 4;
        v19 = (char *)v76;
        v32 = srcb;
        v9 = v59;
      }
      v69 = v20;
      srcc = v19;
      v56 = v32;
      v48 = v9;
      memset((void *)(v21 + v22), 0, 4u);
      v9 = v48;
      v32 = v56;
      v19 = srcc;
      v23 = v69;
    }
    *(_QWORD *)&v76 = v23;
    *(_DWORD *)&v19[v75] = *(_DWORD *)v32;
    if ( !v29 )
      goto LABEL_37;
    v24 = v76;
    v25 = (void *)v32[1];
    v26 = v76 + v29;
    if ( __CFADD__((_QWORD)v76, v29) )
    {
      if ( (unsigned __int64)v76 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v76 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v76 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_36;
      }
      v26 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v27 = v75;
    v28 = v76;
    if ( *((_QWORD *)&v76 + 1) < v26 )
    {
      srcd = v25;
      v60 = v9;
      v51 = v26;
      v75 = qvector_reserve();
      v27 = v75;
      v24 = v76;
      v28 = v76;
      v25 = srcd;
      v9 = v60;
      v26 = v51;
    }
    v70 = v24;
    srce = v25;
    v57 = v9;
    v49 = v26;
    memset((void *)(v27 + v28), 0, v26 - v28);
    v9 = v57;
    v25 = srce;
    v24 = v70;
    *(_QWORD *)&v76 = v49;
LABEL_36:
    v50 = v9;
    memcpy((void *)(v24 + v75), v25, v29);
    v9 = v50;
LABEL_37:
    v41 += 8;
    if ( v41 == *v9 + 8LL * v9[1] )
      goto LABEL_47;
  }
  if ( under_debugger )
    BUG();
  interr();
LABEL_92:
  sub_48D40(a1);
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree();
  }
  v7 = 10;
LABEL_52:
  qfclose();
LABEL_9:
  qunlink();
  qunlink();
  return v7;
}

