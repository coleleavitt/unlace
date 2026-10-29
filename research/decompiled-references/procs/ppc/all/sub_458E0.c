__int64 __fastcall sub_458E0(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int8 v3; // al
  char v4; // si
  char v5; // al
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 tinfo_size; // rbp
  int v10; // ebp
  int v11; // r12d
  unsigned __int64 v12; // rax
  int v13; // edx
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // eax
  int v22; // r15d
  int v23; // r14d
  __int64 v24; // r15
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  int v27; // r15d
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rbp
  int v31; // r14d
  int v32; // eax
  char v33; // bl
  char v34; // al
  unsigned int v35; // esi
  int v36; // eax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r12
  int v42; // r14d
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // ebp
  __int64 v46; // rdx
  __int64 v47; // rsi
  unsigned __int64 v48; // r12
  __int64 v49; // r14
  __int64 v50; // rax
  int v51; // r12d
  unsigned __int64 v52; // rbp
  int v53; // r12d
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // [rsp+0h] [rbp-118h]
  __int64 *v60; // [rsp+8h] [rbp-110h]
  __int64 v61; // [rsp+10h] [rbp-108h]
  unsigned __int64 v62; // [rsp+20h] [rbp-F8h]
  int v63; // [rsp+2Ch] [rbp-ECh]
  unsigned __int64 v65; // [rsp+38h] [rbp-E0h]
  __int64 v66; // [rsp+40h] [rbp-D8h]
  int v67; // [rsp+50h] [rbp-C8h]
  __int64 v68; // [rsp+60h] [rbp-B8h]
  __int64 v69; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v70; // [rsp+70h] [rbp-A8h]
  __int64 v72; // [rsp+88h] [rbp-90h] BYREF
  _QWORD v73[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-78h] BYREF
  int v75; // [rsp+A8h] [rbp-70h]
  __int64 v76; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v77; // [rsp+B8h] [rbp-60h]
  int v78; // [rsp+C0h] [rbp-58h]
  int v79; // [rsp+C4h] [rbp-54h]
  unsigned __int64 v80; // [rsp+C8h] [rbp-50h]
  char v81; // [rsp+D0h] [rbp-48h]
  __int16 v82; // [rsp+D1h] [rbp-47h]
  unsigned __int64 v83; // [rsp+D8h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v76 = a1;
  v77 = 8;
  v82 = 0;
  v3 = sub_45840(a1, (_QWORD *)(a2 + 32));
  v4 = *(_BYTE *)(a2 + 88);
  v79 = 36;
  v78 = v3 + 3;
  v5 = v4;
  v6 = v4 & 0xF0;
  if ( (v5 & 0xF0) == 0xC0 )
    v6 = *(_DWORD *)(a2 + 28);
  if ( v6 <= 0x10 )
    v6 = getinf(99);
  v80 = (int)sub_405A0(a1, v6);
  v81 = getinf_flag(67, 32);
  v7 = *(_QWORD *)(a2 + 8);
  if ( (int)v7 > 0 )
  {
    v59 = 0;
    v66 = 16 * (5LL * (unsigned int)(v7 - 1) + 5);
    while ( 1 )
    {
      v8 = *(_QWORD *)a2 + v59;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v8 + 64), 0);
      if ( tinfo_size == -1 )
        return 0;
      v60 = (__int64 *)(v8 + 64);
      if ( (get_tinfo_property(*(_QWORD *)(v8 + 64), 2) & 0x2F) == 0xD )
      {
        v67 = get_tinfo_size(0, *(_QWORD *)(v8 + 64), 0);
        v72 = 0;
        v73[1] = 4;
        v73[0] = &off_84D48;
        v74 = 0;
        v75 = 0;
        v10 = visit_subtypes(v73, 0, v60, 0, 0);
        if ( v10 )
        {
          v73[0] = &off_84D48;
          clear_tinfo_t(&v74);
LABEL_68:
          v22 = 0;
          v17 = nullptr;
          goto LABEL_69;
        }
        copy_tinfo_t(&v72, &v74);
        v11 = v75;
        v73[0] = &off_84D48;
        clear_tinfo_t(&v74);
        if ( v11 <= 0 )
          goto LABEL_68;
        if ( (get_tinfo_property(v72, 2) & 0xF) != 9 )
        {
          if ( !under_debugger )
          {
            interr(10255);
LABEL_101:
            if ( !under_debugger )
              interr(10256);
          }
LABEL_105:
          BUG();
        }
        v61 = get_tinfo_size(0, v72, 0);
        v62 = v77;
        v68 = v76;
        v69 = (int)v77 - 1;
        v70 = -(int)v77;
        v12 = ((v61 + v69) & *(_QWORD *)(*(_QWORD *)(v76 + 32) + 16LL) & v70) / v77;
        v63 = v12;
        if ( (unsigned int)(v12 - 1) > 1 )
          goto LABEL_101;
        v13 = v12 * v11;
        if ( (int)v12 * v11 > 8 )
          goto LABEL_68;
        v14 = v79;
        LOBYTE(v82) = 1;
        v15 = 48 - v79;
        if ( 48 - v79 > v13 )
          v15 = v13;
        if ( v13 == 1 )
        {
          if ( v79 <= 47 )
          {
            cleanup_argloc(v8);
            v54 = v80;
            *(_DWORD *)(v8 + 8) = v14;
            *(_DWORD *)v8 = 3;
            v79 = v14 + 1;
            v80 = v62 + v54;
            if ( ((v62 + v54) & (v62 - 1)) == 0 )
              ++v78;
            goto LABEL_75;
          }
        }
        else if ( v13 == 2 && v79 <= 46 )
        {
          v51 = v79 + 1;
          v52 = 2 * v61;
          if ( (_DWORD)v12 != 1 )
            v52 = 2 * v77;
          if ( (unsigned __int8)getinf_flag(3, 32) )
          {
            cleanup_argloc(v8);
            v53 = (v14 << 16) | v51;
          }
          else
          {
            cleanup_argloc(v8);
            v53 = v14 | (v51 << 16);
          }
          *(_DWORD *)v8 = 4;
          *(_DWORD *)(v8 + 8) = v53;
          v79 = v14 + 2;
          v80 += v52;
          v78 += v52 / v62;
          goto LABEL_75;
        }
        v16 = qalloc_or_throw(24);
        *(_QWORD *)v16 = 0;
        v17 = (__int64 *)v16;
        *(_OWORD *)(v16 + 8) = 0;
        if ( v15 )
        {
          v18 = 0;
          v19 = 0;
          v65 = 2 * v62;
          v20 = 0;
          while ( 1 )
          {
            if ( v20 < v19 + 1 )
            {
              v40 = qvector_reserve(v17, v18, v19 + 1, 24);
              *v17 = v40;
              v19 = v17[1];
              v18 = v40;
            }
            v23 = v79;
            v24 = v18 + 24 * v19;
            *(_QWORD *)v24 = 0;
            *(_DWORD *)(v24 + 16) = 0xFFFF;
            *(_QWORD *)(v24 + 8) = 0;
            ++v17[1];
            *(_WORD *)(v24 + 16) = v10;
            *(_WORD *)(v24 + 18) = v61;
            if ( v63 == 2 )
            {
              if ( v23 > 46 )
              {
                cleanup_argloc(v18 + 24 * v19);
                v57 = v80;
                *(_DWORD *)v24 = 3;
                v79 = v23 + 1;
                *(_DWORD *)(v24 + 8) = v23;
                v80 = v62 + v57;
                if ( ((v62 + v57) & (v62 - 1)) == 0 )
                  ++v78;
                v22 = v10 + v62;
                if ( v10 + (int)v62 >= v67 )
                  goto LABEL_38;
LABEL_69:
                if ( v78 <= 10 )
                {
                  sub_330F0((__int64)&v76, v8, v60, v17, v22);
                }
                else
                {
                  v45 = get_tinfo_size(0, *(_QWORD *)(v8 + 64), 0) - v22;
                  if ( v17 )
                  {
                    v46 = v17[1];
                    v47 = *v17;
                    if ( v17[2] < (unsigned __int64)(v46 + 1) )
                    {
                      v50 = qvector_reserve(v17, v47, v46 + 1, 24);
                      *v17 = v50;
                      v46 = v17[1];
                      v47 = v50;
                    }
                    v48 = v80;
                    v49 = v47 + 24 * v46;
                    *(_QWORD *)v49 = 0;
                    *(_DWORD *)(v49 + 16) = 0xFFFF;
                    *(_QWORD *)(v49 + 8) = 0;
                    ++v17[1];
                    *(_WORD *)(v49 + 16) = v22;
                    *(_WORD *)(v49 + 18) = v45;
                    cleanup_argloc(v49);
                    *(_DWORD *)v49 = 1;
                    *(_QWORD *)(v49 + 8) = v48;
                    cleanup_argloc(v8);
                    *(_DWORD *)v8 = 2;
                    *(_QWORD *)(v8 + 8) = v17;
                  }
                  else
                  {
                    v48 = v80;
                    cleanup_argloc(v8);
                    *(_DWORD *)v8 = 1;
                    *(_QWORD *)(v8 + 8) = v48;
                  }
                  HIBYTE(v82) = 1;
                  v80 = *(_QWORD *)(*(_QWORD *)(v76 + 32) + 16LL) & -(int)v77 & (v48 + v45 + (__int64)((int)v77 - 1));
                }
                goto LABEL_75;
              }
              if ( (unsigned __int8)getinf_flag(3, 32) )
              {
                cleanup_argloc(v24);
                v21 = (v23 + 1) | (v23 << 16);
              }
              else
              {
                cleanup_argloc(v24);
                v21 = v23 | ((v23 + 1) << 16);
              }
              *(_DWORD *)(v24 + 8) = v21;
              v79 = v23 + 2;
              v15 -= 2;
              *(_DWORD *)v24 = 4;
              v78 += v65 / v62;
              v80 += v65;
              v22 = v10 + 2 * v62;
            }
            else
            {
              cleanup_argloc(v18 + 24 * v19);
              *(_DWORD *)v24 = 3;
              v25 = v80 + v61;
              *(_DWORD *)(v24 + 8) = v23;
              v79 = v23 + 1;
              v80 = v25;
              if ( ((v62 - 1) & v25) == 0 )
                ++v78;
              --v15;
              v22 = v10 + v61;
              if ( ((v62 - 1) & (v10 + (int)v61)) != 0 && v23 + 1 > 47 )
              {
                v80 = *(_QWORD *)(*(_QWORD *)(v68 + 32) + 16LL) & v70 & (v69 + v25);
                v26 = v17[1];
                if ( v26 )
                {
                  v58 = v26 - 1;
                  v17[1] = v58;
                  cleanup_argloc(*v17 + 24 * v58);
                }
                v22 = v10;
                goto LABEL_37;
              }
            }
            if ( !v15 )
              goto LABEL_37;
            v19 = v17[1];
            v20 = v17[2];
            v10 = v22;
            v18 = *v17;
          }
        }
        v22 = 0;
LABEL_37:
        if ( v22 < v67 )
          goto LABEL_69;
LABEL_38:
        cleanup_argloc(v8);
        if ( v17 )
        {
          *(_DWORD *)v8 = 2;
          *(_QWORD *)(v8 + 8) = v17;
        }
        v80 = (v80 + v69) & *(_QWORD *)(*(_QWORD *)(v68 + 32) + 16LL) & v70;
LABEL_75:
        clear_tinfo_t(&v72);
        goto LABEL_50;
      }
      if ( (get_tinfo_property(*(_QWORD *)(v8 + 64), 2) & 0xF) == 9 )
      {
        v27 = v79;
        if ( v79 <= 48 )
        {
          v28 = (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (unsigned __int64)(tinfo_size + 7)) >> 3;
          if ( (_DWORD)v28 == 1 )
          {
            cleanup_argloc(v8);
            v55 = v80;
            *(_DWORD *)(v8 + 8) = v27;
            v56 = v77;
            *(_DWORD *)v8 = 3;
            v79 = v27 + 1;
            v80 = v55 + 8;
            if ( ((v55 + 8) & (v56 - 1)) == 0 )
              ++v78;
            goto LABEL_50;
          }
          if ( (_DWORD)v28 != 2 )
          {
            if ( !under_debugger )
              interr(10257);
            goto LABEL_105;
          }
          v29 = v80;
          v30 = v77;
          v31 = v79 + 1;
          if ( v79 <= 46 )
          {
            if ( (unsigned __int8)getinf_flag(3, 32) )
            {
              cleanup_argloc(v8);
              v32 = v31 | (v27 << 16);
            }
            else
            {
              cleanup_argloc(v8);
              v32 = v27 | (v31 << 16);
            }
            *(_DWORD *)(v8 + 8) = v32;
            *(_DWORD *)v8 = 4;
            v79 = v27 + 2;
            v80 = v29 + 16;
            v78 += 0x10 / v30;
            goto LABEL_50;
          }
          v41 = v80 + 8;
          cleanup_argloc(v8);
          *(_DWORD *)v8 = 3;
          *(_DWORD *)(v8 + 8) = v27;
          v79 = v31;
          if ( (v41 & (v30 - 1)) == 0 )
            ++v78;
          goto LABEL_65;
        }
      }
      else if ( v78 <= 10 )
      {
        sub_330F0((__int64)&v76, v8, v60, nullptr, 0);
        goto LABEL_50;
      }
      v41 = v80;
      LODWORD(v30) = v77;
LABEL_65:
      v42 = get_tinfo_size(0, *(_QWORD *)(v8 + 64), 0);
      cleanup_argloc(v8);
      v43 = v76;
      *(_QWORD *)(v8 + 8) = v41;
      *(_DWORD *)v8 = 1;
      v44 = *(_QWORD *)(v43 + 32);
      HIBYTE(v82) = 1;
      v80 = ((int)v30 - 1 + v41 + v42) & *(_QWORD *)(v44 + 16) & -(int)v30;
LABEL_50:
      sub_408F0(v8, v60, -1);
      v59 += 80;
      if ( v66 == v59 )
      {
        v33 = HIBYTE(v82);
        goto LABEL_52;
      }
    }
  }
  v33 = 0;
LABEL_52:
  v34 = *(_BYTE *)(a2 + 88);
  v35 = v34 & 0xF0;
  if ( (v34 & 0xF0) == 0xC0 )
    v35 = *(_DWORD *)(a2 + 28);
  if ( v35 <= 0x10 )
    v35 = getinf(99);
  v36 = sub_405A0(a1, v35);
  v37 = v36;
  if ( v33 )
  {
    v37 = v80;
    v38 = v36 + 64;
    if ( v38 >= v80 )
      v37 = v38;
  }
  *(_QWORD *)(a2 + 56) = v37;
  if ( a3 )
    *a3 = v82;
  return 1;
}
