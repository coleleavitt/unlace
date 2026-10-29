__int64 __fastcall sub_18970(__int64 **a1, __int64 *a2, int a3)
{
  __int64 v4; // rdi
  char tinfo_property; // al
  __int64 v7; // rdi
  unsigned int v8; // eax
  int v9; // r8d
  int v10; // r9d
  _QWORD *v11; // rbx
  unsigned int tinfo_details; // r12d
  __int64 v13; // r13
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  char v19; // al
  __int64 v20; // rdi
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int tinfo_size; // r15d
  unsigned __int64 v25; // r14
  char v26; // al
  __int64 *v27; // r14
  __int64 v28; // rbp
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rbp
  int v33; // eax
  unsigned __int64 v34; // rcx
  _QWORD *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rbp
  int v38; // eax
  __int64 v39; // r12
  __int64 v40; // rax
  int *v41; // r15
  __int64 v42; // r12
  __int64 v43; // rbx
  int v44; // edx
  _DWORD *v45; // rdi
  bool v46; // cf
  __int64 v47; // rax
  __int64 v48; // rcx
  int *v49; // rdi
  __int64 v50; // r13
  int *v51; // r15
  __int64 v52; // rbx
  int v53; // ecx
  _DWORD *v54; // rdi
  int v55; // [rsp+0h] [rbp-A8h]
  int v56; // [rsp+8h] [rbp-A0h]
  int v57; // [rsp+10h] [rbp-98h]
  __int64 v58; // [rsp+10h] [rbp-98h]
  __int64 v59; // [rsp+10h] [rbp-98h]
  int v60; // [rsp+18h] [rbp-90h]
  __int64 v61; // [rsp+18h] [rbp-90h]
  int v62; // [rsp+20h] [rbp-88h] BYREF
  __int64 v63; // [rsp+28h] [rbp-80h] BYREF
  _QWORD *v64; // [rsp+30h] [rbp-78h] BYREF
  __int128 v65; // [rsp+38h] [rbp-70h] BYREF
  __int128 v66; // [rsp+48h] [rbp-60h]
  __int64 v67; // [rsp+58h] [rbp-50h]
  __int64 v68; // [rsp+60h] [rbp-48h]
  unsigned __int64 v69; // [rsp+68h] [rbp-40h]

  v4 = *a2;
  v69 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v4, 2);
  v7 = *a2;
  if ( (tinfo_property & 0x2F) != 0xD )
  {
    v19 = get_tinfo_property(v7, 2);
    v20 = *a2;
    if ( (v19 & 0xF) != 0xB )
    {
      v26 = get_tinfo_property(v20, 2);
      if ( (v26 & 0x3E) != 0 )
      {
        if ( (v26 & 0xFu) <= 9 || (tinfo_details = 0, (v26 & 0x3F) == 0x2D) )
        {
          v27 = *a1;
          tinfo_details = 0;
          if ( (*a1)[1] < (unsigned __int64)a1[1] )
          {
            v62 = a3;
            v63 = 0;
            copy_tinfo_t(&v63, a2);
            v28 = *v27;
            v29 = v27[2];
            if ( (unsigned __int64)&v62 < *v27 || (unsigned __int64)&v62 >= v28 + 16 * v29 )
            {
              v36 = v27[1];
              if ( v29 < v36 + 1 )
              {
                v28 = qvector_reserve(v27, 0, v36 + 1, 16);
                v39 = v27[1];
                v40 = v27[2];
                v27[2] = v29;
                v41 = (int *)*v27;
                v59 = v40;
                v42 = v39 - 1;
                if ( v42 >= 0 )
                {
                  v43 = v28;
                  do
                  {
                    v44 = *v41;
                    *(_QWORD *)(v43 + 8) = 0;
                    *(_DWORD *)v43 = v44;
                    copy_tinfo_t(v43 + 8, v41 + 2);
                    v45 = v41 + 2;
                    v41 += 4;
                    v43 += 16;
                    clear_tinfo_t(v45);
                    v46 = v42-- == 0;
                  }
                  while ( !v46 );
                  v41 = (int *)*v27;
                }
                qfree(v41);
                *v27 = v28;
                v27[2] = v59;
                v36 = v27[1];
              }
              v37 = 16 * v36 + v28;
              v38 = v62;
              *(_QWORD *)(v37 + 8) = 0;
              *(_DWORD *)v37 = v38;
              copy_tinfo_t(v37 + 8, &v63);
            }
            else
            {
              *(_QWORD *)&v65 = 0;
              LODWORD(v64) = v62;
              copy_tinfo_t(&v65, &v63);
              v30 = v27[1];
              v31 = v27[2];
              if ( v31 < v30 + 1 )
              {
                v47 = qvector_reserve(v27, 0, v30 + 1, 16);
                v48 = v27[2];
                v49 = (int *)*v27;
                v27[2] = v31;
                v50 = v47;
                v58 = v47;
                v61 = v48;
                v51 = v49;
                v52 = v27[1] - 1;
                if ( v52 >= 0 )
                {
                  do
                  {
                    v53 = *v51;
                    *(_QWORD *)(v50 + 8) = 0;
                    *(_DWORD *)v50 = v53;
                    copy_tinfo_t(v50 + 8, v51 + 2);
                    v54 = v51 + 2;
                    v51 += 4;
                    v50 += 16;
                    clear_tinfo_t(v54);
                    v46 = v52-- == 0;
                  }
                  while ( !v46 );
                  v49 = (int *)*v27;
                }
                qfree(v49);
                *v27 = v58;
                v27[2] = v61;
                v30 = v27[1];
              }
              else
              {
                v58 = *v27;
              }
              v32 = 16 * v30 + v58;
              v33 = (int)v64;
              *(_QWORD *)(v32 + 8) = 0;
              *(_DWORD *)v32 = v33;
              copy_tinfo_t(v32 + 8, &v65);
              clear_tinfo_t(&v65);
            }
            ++v27[1];
            tinfo_details = 1;
            clear_tinfo_t(&v63);
          }
        }
      }
      else
      {
        return 0;
      }
      return tinfo_details;
    }
    v64 = nullptr;
    *(_QWORD *)&v65 = 0;
    tinfo_details = get_tinfo_details(v20, 11, &v64);
    if ( (_BYTE)tinfo_details && (unsigned __int64)a1[1] >= (*a1)[1] + (unsigned __int64)DWORD1(v65) )
    {
      tinfo_size = get_tinfo_size(0, v64, 0);
      v25 = 0;
      if ( !DWORD1(v65) )
      {
LABEL_41:
        clear_tinfo_t(&v64);
        return tinfo_details;
      }
      while ( (unsigned __int8)sub_18970(
                                 (_DWORD)a1,
                                 (unsigned int)&v64,
                                 a3,
                                 v21,
                                 v22,
                                 v23,
                                 v55,
                                 v56,
                                 v57,
                                 v60,
                                 v62,
                                 v63,
                                 (__int64)v64,
                                 v65,
                                 DWORD2(v65),
                                 v66,
                                 DWORD2(v66),
                                 v67,
                                 v68) )
      {
        ++v25;
        a3 += tinfo_size;
        if ( v25 >= DWORD1(v65) )
          goto LABEL_41;
      }
    }
    tinfo_details = 0;
    goto LABEL_41;
  }
  v64 = nullptr;
  v67 = 0;
  LODWORD(v68) = 1;
  v65 = 0;
  v66 = 0;
  v8 = get_tinfo_details(v7, 13, &v64);
  v11 = v64;
  tinfo_details = v8;
  if ( !(_BYTE)v8 )
    goto LABEL_6;
  if ( BYTE3(v68) && (unsigned __int64)v65 > 1 || (v34 = v65 + (*a1)[1], (unsigned __int64)a1[1] < v34) )
  {
    tinfo_details = 0;
    goto LABEL_6;
  }
  v35 = &v64[18 * v65];
  if ( v35 == v64 )
  {
LABEL_6:
    if ( v11 )
    {
LABEL_7:
      v13 = v65;
      if ( (_QWORD)v65 )
      {
        v14 = 0;
        do
        {
          v15 = &v11[18 * v14];
          clear_tinfo_t(v15 + 8);
          v16 = v15[5];
          if ( v16 )
          {
            v15[6] = 0;
            qfree(v16);
          }
          v17 = v15[2];
          if ( v17 )
          {
            v15[3] = 0;
            qfree(v17);
          }
          ++v14;
          v11 = v64;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v65 = 0;
      qfree(v11);
    }
    return tinfo_details;
  }
  do
  {
    if ( (*v11 & 7) != 0 )
    {
      v11 = v64;
      tinfo_details = 0;
      goto LABEL_6;
    }
    tinfo_details = sub_18970(
                      (_DWORD)a1,
                      (int)v11 + 64,
                      a3 + (unsigned int)(*v11 >> 3),
                      v34,
                      v9,
                      v10,
                      v55,
                      v56,
                      v57,
                      v60,
                      v62,
                      v63,
                      (__int64)v64,
                      v65,
                      DWORD2(v65),
                      v66,
                      DWORD2(v66),
                      v67,
                      v68);
    if ( !(_BYTE)tinfo_details )
      break;
    v11 += 18;
  }
  while ( v35 != v11 );
  v11 = v64;
  if ( v64 )
    goto LABEL_7;
  return tinfo_details;
}

