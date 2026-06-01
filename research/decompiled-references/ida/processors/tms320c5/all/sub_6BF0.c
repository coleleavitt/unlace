__int64 __fastcall sub_6BF0(unsigned __int16 *a1, __int64 a2, double a3)
{
  char v3; // dl
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  int v13; // r13d
  int v14; // edx
  int v15; // r14d
  bool v16; // zf
  char *v17; // rsi
  char *v18; // rdx
  __int64 (__fastcall *v19)(unsigned __int16 *, char); // rax
  __int64 v20; // r13
  unsigned __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(unsigned __int16 *, char); // rax
  __int64 v25; // r12
  unsigned __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(unsigned __int16 *, char); // rax
  __int64 v30; // r12
  unsigned __int64 v31; // r13
  __int64 v32; // r15
  __int64 v33; // rsi
  __int64 (__fastcall *v34)(unsigned __int16 *, char); // rax
  __int64 v35; // r12
  unsigned __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // rsi
  int *v39; // rbp
  __int64 (__fastcall *v40)(unsigned __int16 *, char); // rax
  __int64 v41; // r12
  unsigned __int64 v42; // r13
  __int64 v43; // r14
  __int64 v44; // rsi
  char v45; // al
  unsigned __int16 v46; // ax
  __int64 (__fastcall *v47)(unsigned __int16 *, char); // rax
  __int64 v48; // r15
  unsigned __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rsi
  __int64 (__fastcall *v52)(unsigned __int16 *, char); // rax
  __int64 v53; // r15
  unsigned __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rsi
  __int16 flags; // ax
  char v58; // dl
  __int64 (__fastcall *v59)(unsigned __int16 *, char); // rax
  __int64 v60; // r15
  unsigned __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rsi
  __int64 v64; // r12
  char v65; // dl
  unsigned __int16 v66; // ax
  char v67; // dl
  __int64 v68; // rdx
  int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // [rsp+0h] [rbp-78h]
  unsigned __int64 v79; // [rsp+0h] [rbp-78h]
  __int64 v80; // [rsp+0h] [rbp-78h]
  unsigned __int64 v81; // [rsp+0h] [rbp-78h]
  unsigned __int64 v82; // [rsp+0h] [rbp-78h]
  __int64 v83; // [rsp+8h] [rbp-70h]
  __int64 v84; // [rsp+8h] [rbp-70h]
  __int64 v85; // [rsp+8h] [rbp-70h]
  __int64 v86; // [rsp+8h] [rbp-70h]
  _BYTE v87[40]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v88; // [rsp+38h] [rbp-40h]

  v3 = *(_BYTE *)(a2 + 1);
  v88 = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(unsigned __int16 *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 78) + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
      goto LABEL_5;
    case 3:
      if ( *(_WORD *)(a2 + 6) > 0x7Fu )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      (*(void (__fastcall **)(unsigned __int16 *, char *, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        off_C3E0[(*(_WORD *)(a2 + 6) >> 4) & 0xFFF],
        9);
      *((_QWORD *)a1 + 10) = 1;
      return 1;
    case 5:
      v45 = *(_BYTE *)(a2 + 32);
      if ( v45 != 1 )
      {
        if ( (unsigned __int8)(v45 - 2) <= 1u )
        {
          qsnprintf();
          (*(void (__fastcall **)(unsigned __int16 *, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v87, 12);
          return 1;
        }
        if ( *(_DWORD *)(*((_QWORD *)a1 + 77) + 120LL) != 1 )
          (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
        v64 = *((_QWORD *)a1 + 90);
        v65 = is_defarg();
        v66 = a1[124];
        if ( v65 )
        {
LABEL_101:
          if ( v66 > 0x46u )
          {
            v68 = 32;
            if ( (unsigned __int16)(v66 - 205) > 3u )
              goto LABEL_103;
          }
          else
          {
            v68 = 32;
            if ( v66 <= 0x43u )
            {
LABEL_103:
              (*(void (__fastcall **)(unsigned __int16 *, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, v68);
              *((_QWORD *)a1 + 90) = v64;
              return 1;
            }
          }
LABEL_119:
          v68 = 36;
          goto LABEL_103;
        }
        if ( v66 > 0x46u )
        {
          if ( (unsigned __int16)(v66 - 205) > 3u )
          {
LABEL_99:
            v67 = is_invsign();
            v66 = a1[124];
            if ( v67 )
              *((_QWORD *)a1 + 90) |= 0x22222202200000uLL;
            goto LABEL_101;
          }
        }
        else if ( v66 <= 0x43u )
        {
          goto LABEL_99;
        }
        *((_QWORD *)a1 + 90) |= 0x22222202200000uLL;
        goto LABEL_119;
      }
      (*(void (__fastcall **)(unsigned __int16 *, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 9);
      return 1;
    case 7:
      v46 = a1[124];
      if ( v46 != 26 )
      {
        if ( v46 != 24 )
          goto LABEL_63;
        goto LABEL_66;
      }
      (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
LABEL_5:
      if ( a1[124] == 24 )
      {
LABEL_66:
        if ( *(_BYTE *)(a2 + 32) )
          (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
      }
      if ( *(_BYTE *)(a2 + 1) != 7 )
      {
        v6 = *(_QWORD *)(a2 + 16);
        v7 = 16 * calc_dataseg() + v6;
        goto LABEL_8;
      }
LABEL_63:
      v7 = map_code_ea();
LABEL_8:
      v8 = *(_QWORD *)(a2 + 16);
      if ( a1[124] == 97
        && (v83 = *(_QWORD *)(a2 + 16), v78 = v7, flags = get_flags_ex(), v7 = v78, v8 = v83, (flags & 0x600) == 0x200) )
      {
        v58 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
                a1,
                a2,
                v78 + 1,
                v83 + 1);
        v9 = *(_QWORD *)a1;
        if ( v58 )
        {
          (*(void (__fastcall **)(unsigned __int16 *, __int64))(v9 + 32))(a1, 45);
          (*(void (__fastcall **)(unsigned __int16 *, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "1", 12);
          return 1;
        }
      }
      else
      {
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int16 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
               a1,
               a2,
               v7,
               v8) )
        {
          return 1;
        }
        v9 = *(_QWORD *)a1;
      }
      (*(void (__fastcall **)(unsigned __int16 *, __int64, __int64))(v9 + 24))(a1, a2, 169);
      remember_problem();
      return 1;
    case 8:
      (*(void (__fastcall **)(unsigned __int16 *, char *, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        (&off_C3A0)[*(unsigned __int8 *)(a2 + 8)],
        32);
      return 1;
    case 10:
      v10 = *(_QWORD *)(a2 + 8);
      (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 32);
      v11 = *(_QWORD *)a1;
      v12 = v10 >> 4;
      v13 = v10 & 2;
      v14 = ((int)v10 >> 2) & 3;
      v15 = v10 & 1;
      if ( v14 == 2 )
      {
        v16 = (v12 & 8) == 0;
        v17 = "neq";
        v18 = "eq";
LABEL_18:
        if ( !v16 )
          v17 = v18;
        (*(void (__fastcall **)(unsigned __int16 *, char *, _QWORD))(v11 + 56))(a1, v17, 0);
        if ( !v15 )
        {
LABEL_21:
          if ( v13 )
          {
            v11 = *(_QWORD *)a1;
            goto LABEL_23;
          }
          v39 = (&off_C380)[(*(_QWORD *)(a2 + 8) >> 8) & 3LL];
          v11 = *(_QWORD *)a1;
          if ( !v39 )
            goto LABEL_56;
LABEL_49:
          v40 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(v11 + 96);
          if ( (char *)v40 == (char *)sub_6910 )
          {
            v41 = *((_QWORD *)a1 + 4);
            if ( v41 )
            {
              v42 = v41 + 1;
              v43 = *((_QWORD *)a1 + 4);
              --v41;
            }
            else
            {
              v43 = 1;
              v42 = 2;
            }
            v44 = *((_QWORD *)a1 + 3);
            if ( *((_QWORD *)a1 + 5) < v42 )
            {
              v73 = qvector_reserve();
              *((_QWORD *)a1 + 3) = v73;
              v44 = v73;
            }
            *((_QWORD *)a1 + 4) = v42;
            *(_BYTE *)(v44 + v41) = 44;
            *(_BYTE *)(*((_QWORD *)a1 + 3) + v43) = 0;
            v11 = *(_QWORD *)a1;
          }
          else
          {
            v40(a1, 44);
            v11 = *(_QWORD *)a1;
          }
          goto LABEL_55;
        }
        goto LABEL_87;
      }
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
        {
          if ( !v15 )
          {
            if ( v13 )
            {
LABEL_29:
              if ( (v12 & 2) == 0 )
              {
                v24 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(v11 + 96);
                if ( (char *)v24 == (char *)sub_6910 )
                {
                  v25 = *((_QWORD *)a1 + 4);
                  if ( v25 )
                  {
                    v26 = v25 + 1;
                    v27 = *((_QWORD *)a1 + 4);
                    --v25;
                  }
                  else
                  {
                    v27 = 1;
                    v26 = 2;
                  }
                  v28 = *((_QWORD *)a1 + 3);
                  if ( *((_QWORD *)a1 + 5) < v26 )
                  {
                    v76 = qvector_reserve();
                    *((_QWORD *)a1 + 3) = v76;
                    v28 = v76;
                  }
                  *((_QWORD *)a1 + 4) = v26;
                  *(_BYTE *)(v28 + v25) = 110;
                  *(_BYTE *)(*((_QWORD *)a1 + 3) + v27) = 0;
                  v11 = *(_QWORD *)a1;
                }
                else
                {
                  v24(a1, 110);
                  v11 = *(_QWORD *)a1;
                }
              }
              v29 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(v11 + 96);
              if ( (char *)v29 == (char *)sub_6910 )
              {
                v30 = *((_QWORD *)a1 + 4);
                if ( v30 )
                {
                  v31 = v30 + 1;
                  v32 = *((_QWORD *)a1 + 4);
                  --v30;
                }
                else
                {
                  v32 = 1;
                  v31 = 2;
                }
                v33 = *((_QWORD *)a1 + 3);
                if ( *((_QWORD *)a1 + 5) < v31 )
                {
                  v72 = qvector_reserve();
                  *((_QWORD *)a1 + 3) = v72;
                  v33 = v72;
                }
                *((_QWORD *)a1 + 4) = v31;
                *(_BYTE *)(v33 + v30) = 111;
                *(_BYTE *)(*((_QWORD *)a1 + 3) + v32) = 0;
              }
              else
              {
                v29(a1, 111);
              }
              v34 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(*(_QWORD *)a1 + 96LL);
              if ( (char *)v34 == (char *)sub_6910 )
              {
                v35 = *((_QWORD *)a1 + 4);
                if ( v35 )
                {
                  v36 = v35 + 1;
                  v37 = *((_QWORD *)a1 + 4);
                  --v35;
                }
                else
                {
                  v37 = 1;
                  v36 = 2;
                }
                v38 = *((_QWORD *)a1 + 3);
                if ( *((_QWORD *)a1 + 5) < v36 )
                {
                  v71 = qvector_reserve();
                  *((_QWORD *)a1 + 3) = v71;
                  v38 = v71;
                }
                *((_QWORD *)a1 + 4) = v36;
                *(_BYTE *)(v38 + v35) = 118;
                *(_BYTE *)(*((_QWORD *)a1 + 3) + v37) = 0;
              }
              else
              {
                v34(a1, 118);
              }
              goto LABEL_48;
            }
            v39 = (&off_C380)[(*(_QWORD *)(a2 + 8) >> 8) & 3LL];
            if ( v39 )
            {
LABEL_55:
              (*(void (__fastcall **)(unsigned __int16 *, int *, _QWORD))(v11 + 56))(a1, v39, 0);
              v11 = *(_QWORD *)a1;
              goto LABEL_56;
            }
            goto LABEL_56;
          }
LABEL_69:
          if ( (v12 & 1) == 0 )
          {
            v47 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(v11 + 96);
            if ( (char *)v47 == (char *)sub_6910 )
            {
              v48 = *((_QWORD *)a1 + 4);
              if ( v48 )
              {
                v49 = v48 + 1;
                v50 = *((_QWORD *)a1 + 4);
                --v48;
              }
              else
              {
                v50 = 1;
                v49 = 2;
              }
              v51 = *((_QWORD *)a1 + 3);
              if ( *((_QWORD *)a1 + 5) < v49 )
              {
                v86 = v50;
                v82 = v49;
                v77 = qvector_reserve();
                v50 = v86;
                v49 = v82;
                *((_QWORD *)a1 + 3) = v77;
                v51 = v77;
              }
              *((_QWORD *)a1 + 4) = v49;
              *(_BYTE *)(v51 + v48) = 110;
              *(_BYTE *)(*((_QWORD *)a1 + 3) + v50) = 0;
              v11 = *(_QWORD *)a1;
            }
            else
            {
              v47(a1, 110);
              v11 = *(_QWORD *)a1;
            }
          }
          v52 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(v11 + 96);
          if ( (char *)v52 == (char *)sub_6910 )
          {
            v53 = *((_QWORD *)a1 + 4);
            if ( v53 )
            {
              v54 = v53 + 1;
              v55 = *((_QWORD *)a1 + 4);
              --v53;
            }
            else
            {
              v55 = 1;
              v54 = 2;
            }
            v56 = *((_QWORD *)a1 + 3);
            if ( *((_QWORD *)a1 + 5) < v54 )
            {
              v84 = v55;
              v79 = v54;
              v70 = qvector_reserve();
              v55 = v84;
              v54 = v79;
              *((_QWORD *)a1 + 3) = v70;
              v56 = v70;
            }
            *((_QWORD *)a1 + 4) = v54;
            *(_BYTE *)(v56 + v53) = 99;
            *(_BYTE *)(*((_QWORD *)a1 + 3) + v55) = 0;
            if ( !v13 )
            {
LABEL_48:
              v39 = (&off_C380)[(*(_QWORD *)(a2 + 8) >> 8) & 3LL];
              v11 = *(_QWORD *)a1;
              if ( !v39 )
                goto LABEL_56;
              goto LABEL_49;
            }
          }
          else
          {
            v52(a1, 99);
            if ( !v13 )
              goto LABEL_48;
          }
          v11 = *(_QWORD *)a1;
          goto LABEL_23;
        }
        v16 = (v12 & 4) == 0;
        v17 = "gt";
        v18 = "lt";
        goto LABEL_18;
      }
      v69 = ((int)v12 >> 2) & 3;
      if ( v69 == 2 )
      {
        (*(void (__fastcall **)(unsigned __int16 *, const char *, _QWORD))(v11 + 56))(a1, "geq", 0);
        if ( !v15 )
          goto LABEL_21;
        goto LABEL_87;
      }
      if ( v69 == 3 )
      {
        (*(void (__fastcall **)(unsigned __int16 *, const char *, _QWORD))(v11 + 56))(a1, "leq", 0);
        if ( !v15 )
          goto LABEL_21;
LABEL_87:
        v11 = *(_QWORD *)a1;
        goto LABEL_88;
      }
      if ( v15 )
      {
LABEL_88:
        v59 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(v11 + 96);
        if ( (char *)v59 == (char *)sub_6910 )
        {
          v60 = *((_QWORD *)a1 + 4);
          if ( v60 )
          {
            v61 = v60 + 1;
            v62 = *((_QWORD *)a1 + 4);
            --v60;
          }
          else
          {
            v62 = 1;
            v61 = 2;
          }
          v63 = *((_QWORD *)a1 + 3);
          if ( *((_QWORD *)a1 + 5) < v61 )
          {
            v85 = v62;
            v81 = v61;
            v75 = qvector_reserve();
            v62 = v85;
            v61 = v81;
            *((_QWORD *)a1 + 3) = v75;
            v63 = v75;
          }
          *((_QWORD *)a1 + 4) = v61;
          *(_BYTE *)(v63 + v60) = 44;
          *(_BYTE *)(*((_QWORD *)a1 + 3) + v62) = 0;
          v11 = *(_QWORD *)a1;
        }
        else
        {
          v59(a1, 44);
          v11 = *(_QWORD *)a1;
        }
        goto LABEL_69;
      }
      if ( v13 )
      {
LABEL_23:
        v19 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(v11 + 96);
        if ( (char *)v19 == (char *)sub_6910 )
        {
          v20 = *((_QWORD *)a1 + 4);
          if ( v20 )
          {
            v21 = v20 + 1;
            v22 = *((_QWORD *)a1 + 4);
            --v20;
          }
          else
          {
            v22 = 1;
            v21 = 2;
          }
          v23 = *((_QWORD *)a1 + 3);
          if ( *((_QWORD *)a1 + 5) < v21 )
          {
            v80 = v22;
            v74 = qvector_reserve();
            v22 = v80;
            *((_QWORD *)a1 + 3) = v74;
            v23 = v74;
          }
          *((_QWORD *)a1 + 4) = v21;
          *(_BYTE *)(v23 + v20) = 44;
          *(_BYTE *)(*((_QWORD *)a1 + 3) + v22) = 0;
          v11 = *(_QWORD *)a1;
        }
        else
        {
          v19(a1, 44);
          v11 = *(_QWORD *)a1;
        }
        goto LABEL_29;
      }
      v39 = (&off_C380)[(*(_QWORD *)(a2 + 8) >> 8) & 3LL];
      if ( v39 )
        goto LABEL_49;
LABEL_56:
      (*(void (__fastcall **)(unsigned __int16 *, __int64))(v11 + 72))(a1, 32);
      return 1;
    default:
      sub_5EF0((__int64)"out: %a: bad optype %d", a3, *((_QWORD *)a1 + 30));
      return 1;
  }
}

