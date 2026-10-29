__int64 __fastcall sub_249EB0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _BYTE *a5, char a6)
{
  __int64 *v6; // r15
  __int64 v8; // r12
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // ecx
  int v15; // edx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  int v46; // ecx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rdx
  _QWORD *v57; // rax
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 *v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  int v71; // eax
  int tinfo_size; // eax
  int v73; // edx
  unsigned int v74; // eax
  unsigned __int64 v75; // rsi
  char v76; // al
  __int64 v77; // [rsp-10h] [rbp-B0h]
  __int64 v78; // [rsp+8h] [rbp-98h]
  __int64 *v79; // [rsp+8h] [rbp-98h]
  unsigned int tinfo_property; // [rsp+10h] [rbp-90h]
  __int64 v81; // [rsp+10h] [rbp-90h]
  __int64 v82; // [rsp+10h] [rbp-90h]
  char v83; // [rsp+1Ch] [rbp-84h]
  unsigned __int8 *v84; // [rsp+20h] [rbp-80h]
  __int64 *v85; // [rsp+28h] [rbp-78h]
  __int64 v88; // [rsp+38h] [rbp-68h]
  __int64 v89; // [rsp+40h] [rbp-60h] BYREF
  __int64 *v90; // [rsp+48h] [rbp-58h] BYREF
  __int64 v91; // [rsp+50h] [rbp-50h] BYREF
  __int128 v92; // [rsp+58h] [rbp-48h]
  unsigned __int64 v93; // [rsp+68h] [rbp-38h]

  v6 = a2;
  v8 = a1;
  v93 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 176);
  v89 = 0;
  v84 = *(unsigned __int8 **)(v10 + 8);
  v85 = *((__int64 **)v84 + 188);
  copy_tinfo_t();
  sub_23F4C0(&v89, (__int64)v84, (unsigned __int64)a2, a3, *(_DWORD *)(a3 + 4), 0);
  v11 = a6 & 1 | 8;
  if ( (a6 & 4) == 0 )
    v11 = a6 & 1;
  v12 = a6 & 4;
  v83 = v11;
  switch ( *(_BYTE *)a3 )
  {
    case 0:
    case 7:
    case 8:
      if ( !under_debugger )
        sub_3835A0(50392);
      goto LABEL_95;
    case 1:
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, __int64, _QWORD))(*v85 + 264))(
             v85,
             *(unsigned int *)(a3 + 8),
             a6 & 1,
             a6 & 4,
             v13,
             a6 & 4) )
      {
        v14 = *(_DWORD *)(a3 + 4);
        v15 = *(_DWORD *)(a3 + 8);
        v91 = 0;
        v92 = 0;
        sub_133330(v85, &v91, v15, v14);
        qstrupr();
        sub_32C5A0(&v90, v85, *(unsigned int *)(a3 + 4));
        a2 = (__int64 *)&v90;
        v16 = sub_242A80(1);
        clear_tinfo_t();
        a1 = v91;
        if ( v91 )
        {
          *(_QWORD *)&v92 = 0;
          qfree();
        }
LABEL_58:
        v28 = *(_DWORD *)(a3 + 4);
        goto LABEL_21;
      }
      if ( !under_debugger )
        sub_3835A0(50391);
      goto LABEL_95;
    case 2:
      v17 = j__qalloc_or_throw();
      *(_QWORD *)v17 = -1;
      v16 = v17;
      *(_QWORD *)(v17 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 48) = 0;
      *(_DWORD *)(v17 + 56) = 0;
      *(_OWORD *)(v17 + 24) = 0;
      v18 = **(_QWORD **)(a3 + 8);
      *(_DWORD *)(v16 + 8) = 61;
      *(_QWORD *)v16 = v18;
      v19 = j__qalloc_or_throw();
      v20 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
      *(_QWORD *)v19 = 0;
      *(_DWORD *)(v19 + 8) = 0;
      *(_WORD *)(v19 + 12) = (unsigned __int8)v20;
      *(_WORD *)(v19 + 14) = 0;
      *(_QWORD *)(v19 + 16) = 0;
      *(_QWORD *)(v19 + 40) = 0;
      *(_OWORD *)(v19 + 24) = 0;
      *(_QWORD *)(v16 + 24) = v19;
      tinfo_property = get_tinfo_property();
      v21 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL), *(unsigned int *)(a3 + 4), tinfo_property != 2);
      v22 = *(_DWORD *)(a3 + 4);
      v23 = v21;
      if ( (a6 & 2) != 0 )
      {
        v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL);
        if ( v22 < (int)v24 && tinfo_property == 1 )
        {
          v78 = v21;
          v25 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL), v24, 1);
          v23 = v78;
          if ( v25 != v78 )
          {
            v22 = v24;
            v23 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
          }
        }
      }
      if ( v22 < *((_DWORD *)v85 + 22) )
      {
        v88 = v23;
        v74 = sub_11C4D0(v22);
        v23 = v88;
        v26 = v74;
      }
      else
      {
        v26 = v22;
      }
      sub_240DE0(v16, *(_QWORD *)(a1 + 328), *(_QWORD *)(a1 + 176), v23, v26, tinfo_property);
      a2 = *(__int64 **)(v16 + 48);
      a1 = 0;
      if ( v22 == (unsigned int)get_tinfo_size() )
        goto LABEL_58;
      v90 = nullptr;
      copy_tinfo_t();
      if ( !*(_BYTE *)a4 )
      {
        sub_32C760(&v91, v85, (unsigned int)v22, 2);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      v27 = sub_245230(v16);
      a2 = *(__int64 **)(v27 + 48);
      v16 = v27;
      if ( v22 != (unsigned int)get_tinfo_size() )
      {
        a2 = (__int64 *)v16;
        sub_248640(*(_QWORD *)(v8 + 328), v16, &v90);
      }
      goto LABEL_19;
    case 3:
      v29 = j__qalloc_or_throw();
      *(_QWORD *)v29 = -1;
      v16 = v29;
      *(_QWORD *)(v29 + 8) = 0xFFFFFFFF0000003FLL;
      *(_QWORD *)(v29 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v29 + 40) = 0;
      *(_QWORD *)(v29 + 48) = 0;
      *(_DWORD *)(v29 + 56) = 0;
      *(_OWORD *)(v29 + 24) = 0;
      *(_QWORD *)(v29 + 24) = qstrdup();
      v30 = strlen(*(const char **)(a3 + 8));
      LODWORD(v92) = 0;
      v90 = (_QWORD *)(&dword_30 + 2);
      DWORD1(v92) = v30 + 1;
      v91 = 0;
      copy_tinfo_t();
      a2 = (_QWORD *)(byte_9 + 2);
      create_tinfo();
      clear_tinfo_t();
      a1 = (__int64)&v90;
      clear_tinfo_t();
      v28 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 4:
      a2 = *(__int64 **)(a3 + 8);
      v16 = sub_24F230(a1, a2, &v89, 0, v13, a6 & 4);
      if ( v16 )
        goto LABEL_58;
      if ( !under_debugger )
        sub_3835A0(50393);
      goto LABEL_95;
    case 5:
      v91 = 0;
      copy_tinfo_t();
      a2 = *(__int64 **)(*(_QWORD *)(a3 + 8) + 8LL);
      a1 = (__int64)&v91;
      v16 = sub_249D30(v84, (__int64)a2, *(_DWORD *)(a3 + 4), &v91);
      clear_tinfo_t();
      v28 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 6:
      v32 = j__qalloc_or_throw();
      *(_QWORD *)v32 = -1;
      *(_QWORD *)(v32 + 40) = 0;
      *(_QWORD *)(v32 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v32 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v32 + 48) = 0;
      *(_DWORD *)(v32 + 56) = 0;
      *(_OWORD *)(v32 + 24) = 0;
      v33 = sub_248150(*(_QWORD *)(a1 + 328), (__int64)a2, v32, *(_QWORD *)(a3 + 8), &v89, *(_DWORD *)(a3 + 4), v83);
      goto LABEL_28;
    case 9:
      v34 = j__qalloc_or_throw();
      *(_QWORD *)v34 = -1;
      *(_QWORD *)(v34 + 12) = -1;
      *(_QWORD *)(v34 + 48) = 0;
      *(_DWORD *)(v34 + 56) = 0;
      *(_OWORD *)(v34 + 32) = 0;
      if ( (a6 & 1) == 0 )
        *(_QWORD *)v34 = a2;
      *(_DWORD *)(v34 + 8) = 65;
      *(_QWORD *)(v34 + 24) = v84;
      *(_DWORD *)(v34 + 32) = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
      if ( *(_QWORD *)(**(_QWORD **)(a3 + 8) + 440LL) < (unsigned __int64)*(int *)(*(_QWORD *)(a3 + 8) + 16LL) )
        sub_23E740(64, v84);
      v81 = v34;
      copy_tinfo_t();
      v35 = v81;
      if ( (*(_BYTE *)(a3 + 1) & 0x10) != 0 )
        *(_DWORD *)(v81 + 56) |= 0x40u;
      if ( *a5 && (a6 & 8) == 0 )
      {
        sub_23F4C0(&v89, (__int64)v84, (unsigned __int64)a2, a3, *(_DWORD *)(a3 + 4), 0);
        v35 = v81;
      }
      v33 = sub_247A60(
              *(_QWORD *)(a1 + 328),
              (__int64)a2,
              v35,
              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
              &v89,
              *(_DWORD *)(a3 + 4),
              v83);
LABEL_28:
      v16 = v33;
      a1 = v77;
      v28 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xA:
      v36 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)v36 != 6 )
        goto LABEL_39;
      a1 = *(_QWORD *)(a1 + 328);
      v75 = *(_QWORD *)(v36 + 8);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < v75 )
        goto LABEL_80;
      v82 = *(_QWORD *)(a3 + 8);
      v76 = is_mapped();
      v12 = a6 & 4;
      v36 = v82;
      if ( v76 )
      {
LABEL_39:
        v91 = 0;
        v90 = nullptr;
        v37 = sub_249EB0(v8, v6, v36, &v90, &v91, v12);
        clear_tinfo_t();
        clear_tinfo_t();
        a1 = (__int64)v85;
        v16 = sub_2478D0((__int64)v85, v37);
      }
      else
      {
        v75 = *(_QWORD *)(v82 + 8);
        a1 = *(_QWORD *)(v8 + 328);
LABEL_80:
        v16 = sub_241310(a1, v75, 0, -1, 0, 2u, *(_DWORD *)(*((_QWORD *)v84 + 188) + 80LL));
      }
      a2 = v85;
      v38 = *(unsigned int *)(a3 + 4);
      v28 = *((_DWORD *)v85 + 21);
      if ( (_DWORD)v38 != v28 )
      {
        sub_32C5A0(&v91, v85, v38);
        a2 = &v91;
        a1 = (__int64)&v91;
        v16 = sub_245230(v16);
        clear_tinfo_t();
        v28 = *(_DWORD *)(a3 + 4);
      }
      goto LABEL_21;
    case 0xB:
      a1 = 1;
      if ( (a6 & 0x10) != 0 )
        a1 = (unsigned int)lexcompare_tinfo() == 0;
      a2 = &v89;
      v16 = sub_242A80(a1);
      v28 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xD:
      sub_32C480(&v91, v85, *(unsigned int *)(a3 + 4));
      a2 = &v91;
      a1 = (__int64)&v91;
      v16 = sub_23EBA0(*(const __m128i **)(a3 + 8));
      clear_tinfo_t();
      v28 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    case 0xE:
      if ( (v11 & 1) != 0 )
      {
        if ( !under_debugger )
          sub_3835A0(50394);
LABEL_95:
        BUG();
      }
      sub_32C760(&v90, v85, *(unsigned int *)(*(_QWORD *)(a3 + 8) + 4LL), 2);
      v39 = *(_QWORD *)(a3 + 8);
      v91 = 0;
      v40 = sub_249EB0(a1, a2, v39, &v91, &v90, 0);
      clear_tinfo_t();
      v41 = *(_QWORD *)(a3 + 8);
      v91 = 0;
      v42 = sub_249EB0(a1, v6, v41 + 16, &v91, &v90, 0);
      clear_tinfo_t();
      v43 = qalloc_or_throw();
      *(_QWORD *)v43 = 0;
      *(_QWORD *)(v43 + 24) = 0;
      *(_DWORD *)(v43 + 32) = 0;
      *(_OWORD *)(v43 + 8) = 0;
      v79 = (__int64 *)v43;
      sub_2465C0((__int64 *)v43, 2u);
      v44 = *(_QWORD *)v42;
      v45 = (_QWORD *)*v79;
      *(_QWORD *)v42 = *(_QWORD *)*v79;
      v46 = *((_DWORD *)v45 + 2);
      *v45 = v44;
      LODWORD(v44) = *(_DWORD *)(v42 + 8);
      *(_DWORD *)(v42 + 8) = v46;
      v47 = *((_DWORD *)v45 + 3);
      *((_DWORD *)v45 + 2) = v44;
      LODWORD(v44) = *(_DWORD *)(v42 + 12);
      *(_DWORD *)(v42 + 12) = v47;
      v48 = v45[3];
      *((_DWORD *)v45 + 3) = v44;
      v49 = *(_QWORD *)(v42 + 24);
      *(_QWORD *)(v42 + 24) = v48;
      v50 = v45[4];
      v45[3] = v49;
      v51 = *(_QWORD *)(v42 + 32);
      *(_QWORD *)(v42 + 32) = v50;
      v52 = v45[5];
      v45[4] = v51;
      v53 = *(_QWORD *)(v42 + 40);
      *(_QWORD *)(v42 + 40) = v52;
      v54 = v45[6];
      v45[5] = v53;
      v55 = *(_QWORD *)(v42 + 48);
      *(_QWORD *)(v42 + 48) = v54;
      LODWORD(v54) = *((_DWORD *)v45 + 14);
      v45[6] = v55;
      LODWORD(v55) = *(_DWORD *)(v42 + 56);
      *(_DWORD *)(v42 + 56) = v54;
      *((_DWORD *)v45 + 14) = v55;
      if ( v42 )
      {
        sub_2559F0(v42);
        clear_tinfo_t();
        j__qfree();
      }
      v56 = *(_QWORD *)v40;
      v57 = (_QWORD *)*v79;
      *(_QWORD *)v40 = *(_QWORD *)(*v79 + 72);
      v58 = *((_DWORD *)v57 + 20);
      v57[9] = v56;
      LODWORD(v56) = *(_DWORD *)(v40 + 8);
      *(_DWORD *)(v40 + 8) = v58;
      v59 = *((_DWORD *)v57 + 21);
      *((_DWORD *)v57 + 20) = v56;
      LODWORD(v56) = *(_DWORD *)(v40 + 12);
      *(_DWORD *)(v40 + 12) = v59;
      v60 = v57[12];
      *((_DWORD *)v57 + 21) = v56;
      v61 = *(_QWORD *)(v40 + 24);
      *(_QWORD *)(v40 + 24) = v60;
      v62 = v57[13];
      v57[12] = v61;
      v63 = *(_QWORD *)(v40 + 32);
      *(_QWORD *)(v40 + 32) = v62;
      v64 = v57[14];
      v57[13] = v63;
      v65 = *(_QWORD *)(v40 + 40);
      *(_QWORD *)(v40 + 40) = v64;
      v66 = v57[15];
      v57[14] = v65;
      v67 = *(_QWORD *)(v40 + 48);
      *(_QWORD *)(v40 + 48) = v66;
      LODWORD(v66) = *((_DWORD *)v57 + 32);
      v57[15] = v67;
      LODWORD(v67) = *(_DWORD *)(v40 + 56);
      *(_DWORD *)(v40 + 56) = v66;
      *((_DWORD *)v57 + 32) = v67;
      if ( v40 )
      {
        sub_2559F0(v40);
        clear_tinfo_t();
        j__qfree();
      }
      sub_32C760(&v91, v85, *(unsigned int *)(a3 + 4), 2);
      copy_tinfo_t();
      clear_tinfo_t();
      sub_246E80((__int64)&v91);
      a2 = v79;
      v16 = sub_F1080((__int64)&v90, (__int64)v79, (__int64)&unk_4130E0, v91);
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        qfree();
      }
LABEL_19:
      a1 = (__int64)&v90;
      clear_tinfo_t();
      v28 = *(_DWORD *)(a3 + 4);
LABEL_21:
      if ( v28 == -1 )
        goto LABEL_25;
      if ( *(_BYTE *)a3 != 9 )
        goto LABEL_65;
      v68 = *(__int64 **)(a3 + 8);
      v69 = *v68;
      v70 = *((int *)v68 + 4);
      if ( *(_QWORD *)(v69 + 440) < v70 )
        sub_23E740(a1, a2);
      if ( !(unsigned __int8)sub_1F1130((int *)(*(_QWORD *)(v69 + 432) + 104 * v70), v85) )
      {
LABEL_65:
        if ( (get_tinfo_property() & 0xF) != 0xB && (get_tinfo_property() & 0xF) != 9 )
        {
          v71 = *(_DWORD *)(v16 + 8);
          if ( v71 != 61 )
          {
LABEL_67:
            if ( v71 == 49 )
              goto LABEL_25;
            if ( !(unsigned __int8)sub_1EEE20(v84) && !(unsigned __int8)sub_2426B0(v16, *(_DWORD *)(a3 + 4)) )
            {
              tinfo_size = get_tinfo_size();
              v73 = *(_DWORD *)(a3 + 4);
              if ( (v83 & 1) != 0 )
              {
                if ( v73 != tinfo_size )
                  goto LABEL_72;
              }
              else if ( v73 > tinfo_size )
              {
LABEL_72:
                if ( !under_debugger )
                  sub_3835A0(50978);
                goto LABEL_95;
              }
            }
            goto LABEL_24;
          }
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
          {
            v71 = *(_DWORD *)(v16 + 8);
            goto LABEL_67;
          }
        }
      }
LABEL_24:
      if ( (unsigned int)(*(_DWORD *)(v16 + 8) - 64) <= 1 && *(_DWORD *)(v16 + 40) != *(_DWORD *)(a3 + 4) )
      {
        if ( !under_debugger )
          sub_3835A0(50982);
        goto LABEL_95;
      }
LABEL_25:
      sub_246F00(v16, *(_QWORD *)(v8 + 328), a4);
      clear_tinfo_t();
      return v16;
    case 0xF:
      if ( !(unsigned __int8)sub_1C2B50(*(_QWORD *)(a3 + 8), 0, 0) || !(unsigned __int8)sub_32F650(a3, &v90) )
        goto LABEL_77;
      v91 = 0;
      copy_tinfo_t();
      a2 = v90;
      a1 = (__int64)&v91;
      v16 = sub_249D30(v84, (__int64)v90, *(_DWORD *)(a3 + 4), &v91);
      clear_tinfo_t();
      v28 = *(_DWORD *)(a3 + 4);
      goto LABEL_21;
    default:
LABEL_77:
      if ( !under_debugger )
        sub_3835A0(50395);
      goto LABEL_95;
  }
}

