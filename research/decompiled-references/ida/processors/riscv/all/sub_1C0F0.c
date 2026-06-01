__int64 __fastcall sub_1C0F0(__int64 **a1, __int64 *a2, int a3)
{
  __int64 v4; // rdi
  char tinfo_property; // al
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  unsigned int tinfo_details; // ebp
  int v10; // r8d
  int v11; // r9d
  unsigned __int64 v12; // rcx
  _QWORD *v13; // r15
  __int64 v14; // r13
  __int64 v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  char v20; // al
  __int64 v21; // rdi
  char v22; // al
  __int64 *v23; // r14
  __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rbp
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbp
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rax
  int *v35; // r15
  __int64 v36; // r12
  __int64 v37; // rbx
  int v38; // edx
  _DWORD *v39; // rdi
  bool v40; // cf
  __int64 v41; // rax
  __int64 v42; // rcx
  int *v43; // rdi
  __int64 v44; // r13
  int *v45; // r15
  __int64 v46; // rbx
  int v47; // ecx
  _DWORD *v48; // rdi
  int v49; // [rsp+0h] [rbp-A8h]
  int v50; // [rsp+8h] [rbp-A0h]
  int v51; // [rsp+10h] [rbp-98h]
  __int64 v52; // [rsp+10h] [rbp-98h]
  __int64 v53; // [rsp+10h] [rbp-98h]
  int v54; // [rsp+18h] [rbp-90h]
  __int64 v55; // [rsp+18h] [rbp-90h]
  int v56; // [rsp+20h] [rbp-88h] BYREF
  __int64 v57; // [rsp+28h] [rbp-80h] BYREF
  _QWORD *v58; // [rsp+30h] [rbp-78h] BYREF
  __int128 v59; // [rsp+38h] [rbp-70h] BYREF
  __int128 v60; // [rsp+48h] [rbp-60h]
  __int64 v61; // [rsp+58h] [rbp-50h]
  __int64 v62; // [rsp+60h] [rbp-48h]
  unsigned __int64 v63; // [rsp+68h] [rbp-40h]

  v4 = *a2;
  v63 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v4, 2);
  v7 = *a2;
  if ( (tinfo_property & 0x2F) == 0xD )
  {
    v58 = nullptr;
    LODWORD(v62) = 1;
    v61 = 0;
    v59 = 0;
    v60 = 0;
    v8 = nullptr;
    tinfo_details = get_tinfo_details(v7, 13);
    if ( (_BYTE)tinfo_details )
    {
      v12 = v59 + (*a1)[1];
      if ( (unsigned __int64)a1[1] < v12 )
        return 0;
      v13 = &v58[18 * v59];
      if ( v13 != v58 )
      {
        while ( (*v8 & 7) == 0 )
        {
          tinfo_details = sub_1C0F0(
                            (_DWORD)a1,
                            (int)v8 + 64,
                            a3 + (unsigned int)(*v8 >> 3),
                            v12,
                            v10,
                            v11,
                            v49,
                            v50,
                            v51,
                            v54,
                            v56,
                            v57,
                            (_DWORD)v58,
                            v59,
                            DWORD2(v59),
                            v60,
                            DWORD2(v60),
                            v61,
                            v62);
          if ( (_BYTE)tinfo_details )
          {
            v8 += 18;
            if ( v13 != v8 )
              continue;
          }
          v8 = v58;
          goto LABEL_9;
        }
        v8 = v58;
        tinfo_details = 0;
      }
    }
LABEL_9:
    if ( v8 )
    {
      v14 = v59;
      if ( (_QWORD)v59 )
      {
        v15 = 0;
        do
        {
          v16 = &v8[18 * v15];
          clear_tinfo_t(v16 + 8);
          v17 = v16[5];
          if ( v17 )
          {
            v16[6] = 0;
            qfree(v17);
          }
          v18 = v16[2];
          if ( v18 )
          {
            v16[3] = 0;
            qfree(v18);
          }
          ++v15;
          v8 = v58;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v59 = 0;
      qfree(v8);
    }
  }
  else
  {
    v20 = get_tinfo_property(v7, 2);
    v21 = *a2;
    if ( (v20 & 0xF) == 0xB )
    {
      v58 = nullptr;
      *(_QWORD *)&v59 = 0;
      tinfo_details = get_tinfo_details(v21, 11);
      if ( (_BYTE)tinfo_details && (unsigned __int64)a1[1] >= (*a1)[1] + (unsigned __int64)DWORD1(v59) )
        get_tinfo_size(0, v58, 0);
      else
        tinfo_details = 0;
      clear_tinfo_t(&v58);
    }
    else
    {
      v22 = get_tinfo_property(v21, 2);
      if ( (v22 & 0x3E) != 0 )
      {
        if ( (v22 & 0xFu) <= 9 || (tinfo_details = 0, (v22 & 0x3F) == 0x2D) )
        {
          v23 = *a1;
          tinfo_details = 0;
          if ( (*a1)[1] < (unsigned __int64)a1[1] )
          {
            v56 = a3;
            v57 = 0;
            copy_tinfo_t(&v57, a2);
            v24 = *v23;
            v25 = v23[2];
            if ( (unsigned __int64)&v56 < *v23 || (unsigned __int64)&v56 >= v24 + 16 * v25 )
            {
              v30 = v23[1];
              if ( v25 < v30 + 1 )
              {
                v24 = qvector_reserve(v23, 0, v30 + 1, 16);
                v33 = v23[1];
                v34 = v23[2];
                v23[2] = v25;
                v35 = (int *)*v23;
                v53 = v34;
                v36 = v33 - 1;
                if ( v36 >= 0 )
                {
                  v37 = v24;
                  do
                  {
                    v38 = *v35;
                    *(_QWORD *)(v37 + 8) = 0;
                    *(_DWORD *)v37 = v38;
                    copy_tinfo_t(v37 + 8, v35 + 2);
                    v39 = v35 + 2;
                    v35 += 4;
                    v37 += 16;
                    clear_tinfo_t(v39);
                    v40 = v36-- == 0;
                  }
                  while ( !v40 );
                  v35 = (int *)*v23;
                }
                qfree(v35);
                *v23 = v24;
                v23[2] = v53;
                v30 = v23[1];
              }
              v31 = 16 * v30 + v24;
              v32 = v56;
              *(_QWORD *)(v31 + 8) = 0;
              *(_DWORD *)v31 = v32;
              copy_tinfo_t(v31 + 8, &v57);
            }
            else
            {
              *(_QWORD *)&v59 = 0;
              LODWORD(v58) = v56;
              copy_tinfo_t(&v59, &v57);
              v26 = v23[1];
              v27 = v23[2];
              if ( v27 < v26 + 1 )
              {
                v41 = qvector_reserve(v23, 0, v26 + 1, 16);
                v42 = v23[2];
                v43 = (int *)*v23;
                v23[2] = v27;
                v44 = v41;
                v52 = v41;
                v55 = v42;
                v45 = v43;
                v46 = v23[1] - 1;
                if ( v46 >= 0 )
                {
                  do
                  {
                    v47 = *v45;
                    *(_QWORD *)(v44 + 8) = 0;
                    *(_DWORD *)v44 = v47;
                    copy_tinfo_t(v44 + 8, v45 + 2);
                    v48 = v45 + 2;
                    v45 += 4;
                    v44 += 16;
                    clear_tinfo_t(v48);
                    v40 = v46-- == 0;
                  }
                  while ( !v40 );
                  v43 = (int *)*v23;
                }
                qfree(v43);
                *v23 = v52;
                v23[2] = v55;
                v26 = v23[1];
              }
              else
              {
                v52 = *v23;
              }
              v28 = 16 * v26 + v52;
              v29 = (int)v58;
              *(_QWORD *)(v28 + 8) = 0;
              *(_DWORD *)v28 = v29;
              copy_tinfo_t(v28 + 8, &v59);
              clear_tinfo_t(&v59);
            }
            ++v23[1];
            tinfo_details = 1;
            clear_tinfo_t(&v57);
          }
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return tinfo_details;
}

