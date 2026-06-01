__int64 __fastcall sub_46CC0(__int64 a1, __int64 *a2, char a3, double a4, double a5, double a6, double a7)
{
  unsigned int v10; // r13d
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int64 *v20; // r13
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rbx
  __int64 v24; // r9
  _QWORD *v25; // rcx
  unsigned __int64 v26; // r11
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r12
  _QWORD *v31; // rbx
  _DWORD *v32; // rsi
  _QWORD *v33; // rbx
  __int64 v34; // rsi
  _QWORD *v35; // rax
  int v36; // r12d
  __int64 v37; // rdi
  unsigned __int64 v38; // r15
  int v39; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  char *v43; // rsi
  __int64 v44; // rbx
  _DWORD *v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+8h] [rbp-D8h]
  __int64 v51; // [rsp+20h] [rbp-C0h]
  __int64 v52; // [rsp+20h] [rbp-C0h]
  unsigned __int64 v53; // [rsp+28h] [rbp-B8h]
  unsigned __int64 v54; // [rsp+38h] [rbp-A8h]
  __int64 v55; // [rsp+40h] [rbp-A0h]
  _QWORD *v56; // [rsp+48h] [rbp-98h]
  __int64 v57; // [rsp+58h] [rbp-88h] BYREF
  unsigned __int64 v58; // [rsp+60h] [rbp-80h] BYREF
  __int64 v59; // [rsp+68h] [rbp-78h] BYREF
  double v60[2]; // [rsp+70h] [rbp-70h] BYREF
  __int64 v61; // [rsp+80h] [rbp-60h]
  __int128 v62; // [rsp+88h] [rbp-58h]
  __int64 v63; // [rsp+98h] [rbp-48h]
  int v64; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  v10 = sub_46040(a1);
  if ( !v10 )
  {
    v11 = (__int64 *)*a2;
    v12 = a2[1];
    v57 = 0;
    v58 = 0;
    v13 = &v11[v12];
    v61 = 0;
    v63 = 0;
    v64 = -1;
    v62 = 0;
    if ( v11 == v13 )
    {
      v28 = 0;
LABEL_27:
      v29 = *(_QWORD *)(a1 + 56);
      v58 = v28;
      *(_QWORD *)(v29 + 8256) = v28;
      v30 = *(_QWORD *)(v29 + 8216) << 10;
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8264LL) = v30 + *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8256LL);
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + 8329LL) = 6;
      v31 = *(_QWORD **)(a1 + 56);
      v32 = (_DWORD *)v31[1037];
      if ( v31[1039] <= 4u )
      {
        v42 = qvector_reserve();
        v31[1037] = v42;
        v32 = (_DWORD *)v42;
      }
      v31[1038] = 5;
      *v32 = 1096040772;
      *(_BYTE *)(v31[1037] + 4LL) = 0;
      v33 = *(_QWORD **)(a1 + 56);
      v34 = v33[1034];
      if ( v33[1036] <= 5u )
      {
        v41 = qvector_reserve();
        v33[1034] = v41;
        v34 = v41;
      }
      v33[1035] = 6;
      *(_DWORD *)v34 = 1128354899;
      *(_BYTE *)(v34 + 4) = 75;
      *(_BYTE *)(v33[1034] + 5LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + 8328LL) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48));
      v10 = sub_3C370(
              *(_QWORD *)(a1 + 48),
              (double *)&v58,
              v30,
              128,
              1u,
              0,
              (__int64)&v57,
              &v59,
              *(_QWORD *)(a1 + 56) + 8256LL);
      v35 = *(_QWORD **)(a1 + 56);
      if ( v10 || *(_QWORD *)(v59 + 32) != v35[1032] )
      {
        sub_45250(a1);
        sub_EBD0((__int64)"Internal error in IDB operation mode: failed to map stack at %08a", 0.0);
        v10 = 1;
      }
      else
      {
        v35[1031] = (v35[1033] - 64LL) & 0xFFFFFFFFFFFFFFF0LL;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48)) == 2 )
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8248LL) += 8LL;
        if ( (*(_DWORD *)debug & 0x10000) != 0 )
          sub_E960((__int64)"OBJBUF: STACK -> PHYS:[%08a] VA:[%08a] -> ESP=%08a\n", 0.0, a5, a6);
        *(_DWORD *)(v59 + 112) = 4;
        v36 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48));
        v37 = *(_QWORD *)(a1 + 48);
        v38 = 0x7FFFFFDE000LL;
        if ( v36 == 1 )
          v38 = 2147344384;
        v58 = v38;
        if ( !sub_3B6D0(v37, v38, 1, nullptr, 1) )
        {
          v39 = sub_3C370(*(_QWORD *)(a1 + 48), (double *)&v58, 0x1000u, 128, 1u, 0, (__int64)&v57, &v59, 0);
          if ( !v39 || v39 == 3 )
          {
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v43 = "FS";
              if ( v36 != 1 )
                v43 = "GS";
              sub_E960((__int64)"OBJBUF: %s -> PHYS[%08a] VA:[%08a]\n", v43, v57, v38);
            }
            v44 = v59;
            v45 = *(_DWORD **)(v59 + 72);
            if ( *(_QWORD *)(v59 + 88) <= 4u )
            {
              v48 = qvector_reserve();
              *(_QWORD *)(v44 + 72) = v48;
              v45 = (_DWORD *)v48;
            }
            *(_QWORD *)(v44 + 80) = 5;
            *v45 = 1096040772;
            *(_BYTE *)(*(_QWORD *)(v44 + 72) + 4LL) = 0;
            v46 = v59;
            v47 = *(_QWORD *)(v59 + 48);
            if ( *(_QWORD *)(v59 + 64) <= 3u )
            {
              v49 = qvector_reserve();
              *(_QWORD *)(v46 + 48) = v49;
              v47 = v49;
            }
            *(_QWORD *)(v46 + 56) = 4;
            *(_WORD *)v47 = 18772;
            *(_BYTE *)(v47 + 2) = 66;
            *(_BYTE *)(*(_QWORD *)(v46 + 48) + 3LL) = 0;
            *(_DWORD *)(v59 + 112) = 8;
          }
          else
          {
            sub_45250(a1);
            v10 = 9;
          }
        }
      }
    }
    else
    {
      v54 = 0;
      do
      {
        v14 = *v11;
        if ( (*(_BYTE *)(*v11 + 112) & 2) == 0 )
        {
          v15 = *(_QWORD *)(v14 + 32);
          v16 = v54;
          v17 = (v15 + *(_QWORD *)(v14 + 24) + 4095) & 0xFFFFFFFFFFFFF000LL;
          if ( v54 < v17 )
            v16 = v17;
          v18 = v15 & 0xFFFFFFFFFFFFF000LL;
          v58 = v18;
          v54 = v16;
          if ( !v18 )
          {
            sub_45250(a1);
            v10 = 31;
            goto LABEL_44;
          }
          *(_QWORD *)&v60[0] = v18;
          *(_QWORD *)&v60[1] = v17;
          rangeset_t_add();
        }
        ++v11;
      }
      while ( v13 != v11 );
      if ( (int)v62 <= 0 )
      {
LABEL_26:
        v28 = (v54 + 4095) & 0xFFFFFFFFFFFFF000LL;
        goto LABEL_27;
      }
      v55 = 0;
      v50 = 16 * ((unsigned int)(v62 - 1) + 1LL);
      while ( 1 )
      {
        v19 = *(_QWORD *)(a1 + 48);
        v20 = (unsigned __int64 *)(v61 + v55);
        v60[0] = *(double *)(v61 + v55);
        v21 = sub_3C370(
                v19,
                v60,
                *(_QWORD *)(v61 + v55 + 8) - *(_QWORD *)&v60[0],
                128,
                9u,
                0,
                (__int64)&v57,
                nullptr,
                0);
        v22 = v21;
        if ( *v20 != *(_QWORD *)&v60[0] )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        if ( v21 )
          break;
        v23 = *a2;
        v24 = *a2 + 8 * a2[1];
        if ( v24 != *a2 )
        {
          do
          {
            while ( 1 )
            {
              v25 = *(_QWORD **)v23;
              v56 = *(_QWORD **)v23;
              if ( (*(_BYTE *)(*(_QWORD *)v23 + 112LL) & 3) == 0 && !a3 )
              {
                v26 = v25[4];
                if ( v26 >= *v20 && v26 < v20[1] )
                {
                  v27 = v25[3];
                  v58 = v26 & 0xFFFFFFFFFFFFF000LL;
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                  {
                    v52 = v24;
                    v53 = v26;
                    sub_E960((__int64)"OBJBUF: SEGMENTS MAPPING PHYS:[%08a-%08a] -> VA:[%08a-%08a]\n", 0.0, a5, a6, a7);
                    v24 = v52;
                    v26 = v53;
                    v27 = v56[3];
                  }
                  v51 = v24;
                  (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 48) + 8LL))(
                    *(_QWORD *)(a1 + 48),
                    v57 + v26 - *v20,
                    *v56,
                    v27);
                  v24 = v51;
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    break;
                }
              }
              v23 += 8;
              if ( v24 == v23 )
                goto LABEL_25;
            }
            sub_E960((__int64)"OBJBUF: serialized data for VA %08a to PHYS %08a (size %08a)\n", 0.0, a5, a6);
            v24 = v51;
            v23 += 8;
          }
          while ( v51 != v23 );
        }
LABEL_25:
        v55 += 16;
        if ( v50 == v55 )
          goto LABEL_26;
      }
      sub_45250(a1);
      v10 = 31;
      if ( v22 == 4 )
        v10 = 20;
    }
LABEL_44:
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree();
    }
  }
  return v10;
}

