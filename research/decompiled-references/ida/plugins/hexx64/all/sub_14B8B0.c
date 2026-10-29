__int64 __fastcall sub_14B8B0(__m128i *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5, double a6)
{
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // r12d
  char v13; // r13
  bool v14; // r14
  char v15; // bp
  int v16; // eax
  unsigned int *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // rcx
  bool v24; // bp
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  bool v28; // al
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r9d
  int v39; // r12d
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r8d
  int v43; // r9d
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // ebp
  __int64 v48; // r8
  int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // r8d
  int v53; // r9d
  int v54; // eax
  __int64 i; // rbp
  int v56; // eax
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int32 v60; // r15d
  int v61; // eax
  __int64 v62; // r12
  int v63; // ebp
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // r12d
  __int64 v73; // rbp
  int v74; // eax
  int v75; // eax
  __int32 v76; // eax
  char v77; // al
  _QWORD *v78; // rax
  __int64 v79; // [rsp+0h] [rbp-D8h]
  unsigned int *v80; // [rsp+8h] [rbp-D0h]
  int v81; // [rsp+8h] [rbp-D0h]
  __int64 v82; // [rsp+10h] [rbp-C8h]
  __int64 v83; // [rsp+18h] [rbp-C0h]
  unsigned int v84; // [rsp+2Ch] [rbp-ACh] BYREF
  __int64 v85; // [rsp+30h] [rbp-A8h] BYREF
  int v86; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD *v87; // [rsp+40h] [rbp-98h]
  int *v88; // [rsp+48h] [rbp-90h]
  int *v89; // [rsp+50h] [rbp-88h]
  __int64 v90; // [rsp+58h] [rbp-80h]
  _QWORD v91[5]; // [rsp+60h] [rbp-78h] BYREF
  char v92; // [rsp+88h] [rbp-50h]
  unsigned __int64 v93; // [rsp+98h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  LODWORD(v6) = 0;
  if ( (a1->m128i_i8[2] & 9) == 0 && a1[19].m128i_i32[2] <= 6 )
  {
    v8 = time(nullptr);
    v6 = a1[93].m128i_i64[1];
    *(_DWORD *)(v6 + 1000) = v8;
    v11 = *(unsigned int *)(a1[32].m128i_i64[1] + 76);
    if ( (_DWORD)v11 || (v44 = sub_13C380((__int64)a1, a2, *(double *)a3.m128_u64, a4), (v6 = v44) == 0) )
    {
      HIBYTE(v82) = 1;
      v12 = 1;
      v13 = 1;
      v88 = &v86;
      v14 = 1;
      v15 = 1;
      v89 = &v86;
      v86 = 0;
      v87 = nullptr;
      v90 = 0;
      HIDWORD(v83) = 0;
      v80 = &v84;
      while ( 1 )
      {
        v16 = sub_1443F0((__int64)a1, v13, v6, v11, v9, v10, *(double *)a3.m128_u64, a4);
        v84 = v16;
        v17 = (_DWORD *)(&word_2 + 1);
        LOBYTE(v16) = v16 > 0;
        v12 |= v16;
        v22 = sub_330F20((__int64)a1, 3, v18, v19, v20, v21);
        v6 = v22;
        if ( v22 )
        {
LABEL_36:
          v81 = v6;
          sub_136F50(v87);
          LODWORD(v6) = v81;
          return (unsigned int)v6;
        }
        if ( v14 )
        {
          v17 = v80;
          v54 = sub_13B0F0((__int64)a1, v80);
          v6 = v84;
          v14 = v54 != 0;
          LOBYTE(v54) = v84 != 0;
          v12 |= v54;
        }
        if ( v15 )
        {
          v47 = sub_FA4C0((__int64)a1, 31, v6, v23, *(double *)a3.m128_u64);
          if ( v47 < 0 )
          {
            LODWORD(v6) = -12;
            goto LABEL_36;
          }
          sub_1443F0((__int64)a1, 2, v45, v46, v48, v49, *(double *)a3.m128_u64, a4);
          if ( *(char *)(a1[93].m128i_i64[1] + 605) >= 0 )
            sub_F8530((__int64)a1);
          if ( v47 )
          {
            sub_F7F40((__int64)a1);
            sub_13BDF0((__int64)a1, (__int64 **)&word_2, *(double *)a3.m128_u64, a4);
            if ( (*(_BYTE *)(a1[93].m128i_i64[1] + 605) & 1) != 0
              && (int)sub_F7FE0((__int64)a1, &v85, *(double *)a3.m128_u64) > 0 )
            {
              sub_F7F40((__int64)a1);
            }
          }
          else
          {
            sub_13BDF0((__int64)a1, (__int64 **)&word_2, *(double *)a3.m128_u64, a4);
          }
          sub_13A580((__int64)a1, *(double *)a3.m128_u64, a4);
          v17 = (_DWORD *)&byte_4;
          LODWORD(v6) = sub_330F20((__int64)a1, 4, v50, v51, v52, v53);
          if ( (_DWORD)v6 )
            goto LABEL_36;
        }
        v24 = !((unsigned __int8)a1->m128i_i8[1] >> 7);
        v13 = 4 * v24;
        if ( sub_6A500((unsigned int *)a1, (_UNKNOWN ***)v17, a3) )
        {
          if ( (int)sub_F7FE0((__int64)a1, &v85, *(double *)a3.m128_u64) > 0 )
            sub_F7F40((__int64)a1);
        }
        else
        {
          v28 = v14;
          if ( !(_BYTE)v12 )
            goto LABEL_14;
        }
        v17 = (_DWORD *)&byte_5;
        v84 = sub_14A660((__int64)a1, 15, v6, v25, (__m128i)a3, a4, a5, a6);
        v29 = v84;
        LOBYTE(v12) = v84 != 0;
        v34 = sub_330F20((__int64)a1, 5, v30, v31, v32, v33);
        v6 = v34;
        if ( v34 )
          goto LABEL_36;
        v28 = v14 && v29 == 0;
LABEL_14:
        if ( v28 )
        {
          v17 = v80;
          v14 = (unsigned int)sub_13B0F0((__int64)a1, v80) != 0;
          LOBYTE(v12) = v84 != 0;
        }
        if ( (unsigned __int8)sub_14AB10(a1[49].m128i_i64[0], a3, a4, (__int64)v17, v6, v25, v26, v27)
          || (unsigned int)sub_139BF0((__int64)a1, (__m128i)a3, a4, (__int64)v17, v6, v11, v9, v10) )
        {
          goto LABEL_29;
        }
        if ( HIBYTE(v82) )
        {
          for ( i = a1[32].m128i_i64[1]; i; i = *(_QWORD *)(i + 8) )
          {
            if ( sub_330DE0(i) )
              *(_DWORD *)(i + 24) |= 0x40u;
          }
          HIBYTE(v82) = 0;
          v15 = 0;
        }
        else
        {
          HIBYTE(v82) = sub_F9180((__int64)a1);
          if ( HIBYTE(v82) )
            goto LABEL_76;
          if ( v24 || (_BYTE)v12 )
          {
LABEL_25:
            v15 = 0;
          }
          else
          {
            if ( (unsigned __int8)callui(27, v17, &callui, v11, v9, v10, v79, v80, v82, v83) )
            {
              LODWORD(v6) = -18;
              goto LABEL_36;
            }
            v39 = sub_179C90((__int64)a1, (__int64)v17, v35, v36, v37, v38);
            HIBYTE(v82) = sub_19F770(a1[58].m128i_i64[1], (__int64)v17, v40, v41, v42, v43) | (v39 != 0);
            if ( HIBYTE(v82) )
            {
LABEL_24:
              HIBYTE(v82) = 0;
              v12 = 1;
              goto LABEL_25;
            }
            if ( *(char *)(a1[94].m128i_i64[0] + 49) < 0 && (a1->m128i_i8[5] & 8) == 0 )
            {
              v17 = (unsigned int *)v91;
              memset(&v91[1], 0, 32);
              v92 = 0;
              v91[0] = &off_4DDBE8;
              sub_11FBB0((__int64)a1, (__int64)v91);
              a1->m128i_i32[1] &= ~0x800u;
            }
            sub_220320((__int64)a1, (__int64)v17, v6, v11);
            v56 = sub_33E140(a1[93].m128i_i64[1], 6u, a1);
            v6 = (unsigned int)v56;
            if ( v56 < 0 || a1[19].m128i_i32[2] > 6 )
              goto LABEL_36;
            if ( v56 )
              goto LABEL_29;
            LODWORD(v6) = sub_330F20((__int64)a1, 6, 0, v11, v9, v10);
            if ( (_DWORD)v6 )
              goto LABEL_36;
            a1->m128i_i32[0] &= ~0x40000u;
            v60 = a1[57].m128i_i32[0];
            v61 = sub_1FAB30(a1, *(double *)a3.m128_u64, a4, *(double *)a5.m128i_i64, a6, 6, 0, v57, v58, v59);
            v6 = (unsigned int)v61;
            if ( v61 < 0 )
              goto LABEL_36;
            if ( v61 )
              goto LABEL_24;
            if ( ++HIDWORD(v83) == 2 )
              a1->m128i_i32[0] &= ~0x800u;
            v62 = a1[32].m128i_i64[1];
            v63 = 0;
            if ( v62 )
            {
              do
              {
                LODWORD(v83) = v6;
                v64 = sub_13B2C0(v62);
                v62 = *(_QWORD *)(v62 + 8);
                v63 += v64;
                v6 = (unsigned int)v83;
              }
              while ( v62 );
              if ( v63 > 0 )
                goto LABEL_28;
              if ( v63 )
                goto LABEL_29;
            }
            if ( a1[57].m128i_i32[0] == v60 )
              goto LABEL_69;
            a1->m128i_i32[0] &= ~0x20000u;
            LODWORD(v83) = v6;
            sub_670E0(a1, 6, v6, v11);
            v67 = (__int64 *)sub_670E0(a1, 6, v65, v66);
            v72 = sub_181F80(v67, nullptr, v68, v69, v70, v71);
            if ( v72 || (a1->m128i_i8[2] & 2) != 0 )
              goto LABEL_29;
            v73 = a1[32].m128i_i64[1];
            LODWORD(v6) = v83;
            if ( !v73 )
              goto LABEL_69;
            do
            {
              LODWORD(v83) = v6;
              v74 = sub_13B2C0(v73);
              v73 = *(_QWORD *)(v73 + 8);
              v72 += v74;
              v6 = (unsigned int)v83;
            }
            while ( v73 );
            if ( v72 > 0 )
            {
LABEL_28:
              sub_66FA0((__int64)a1, 1);
              goto LABEL_29;
            }
            if ( v72 )
            {
LABEL_29:
              v12 = 1;
              v15 = 0;
            }
            else
            {
LABEL_69:
              LODWORD(v83) = v6;
              v75 = sub_13A4A0((__int64)a1);
              v6 = (unsigned int)v83;
              if ( v75 < 0 )
              {
                LODWORD(v6) = -22;
                a1[30].m128i_i64[1] = a1[2].m128i_i64[1];
                goto LABEL_36;
              }
              if ( !v75 || (v76 = a1->m128i_i32[0], (a1->m128i_i32[0] & 0x100000) != 0) )
              {
                v77 = sub_13A360((__int64)a1);
                v6 = (unsigned int)v83;
                if ( v77 )
                {
                  v78 = sub_1CE9E0((__int64)a1);
                  if ( v78 && v78[4] != a1[5].m128i_i64[1] )
                  {
LABEL_76:
                    LODWORD(v6) = -17;
                    goto LABEL_36;
                  }
                  a1->m128i_i32[0] |= 0x40000u;
                  sub_321ED0((__int64)a1, 0, *(double *)a3.m128_u64, a4);
                  sub_F84B0((__int64)a1);
                  LODWORD(v6) = v83;
                  goto LABEL_36;
                }
                v76 = a1->m128i_i32[0];
              }
              v13 = 0;
              v12 = 1;
              v15 = 0;
              a1->m128i_i32[0] = v76 | 0x100000;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}

