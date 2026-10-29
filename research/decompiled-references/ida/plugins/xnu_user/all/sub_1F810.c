__int64 __fastcall sub_1F810(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 tinfo_size; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // r15d
  __int64 v17; // [rsp+18h] [rbp-3C0h]
  unsigned __int64 v18; // [rsp+20h] [rbp-3B8h]
  __int64 v19; // [rsp+20h] [rbp-3B8h]
  __int64 v20; // [rsp+30h] [rbp-3A8h]
  __int64 v21; // [rsp+30h] [rbp-3A8h]
  __int64 v22; // [rsp+30h] [rbp-3A8h]
  __int64 v23; // [rsp+38h] [rbp-3A0h]
  unsigned int v24; // [rsp+5Ch] [rbp-37Ch] BYREF
  __int64 v25; // [rsp+60h] [rbp-378h] BYREF
  __int64 v26; // [rsp+68h] [rbp-370h] BYREF
  __int64 v27; // [rsp+70h] [rbp-368h] BYREF
  __int64 v28; // [rsp+78h] [rbp-360h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-358h] BYREF
  __int128 v30; // [rsp+88h] [rbp-350h]
  void *src; // [rsp+A0h] [rbp-338h]
  __int128 i; // [rsp+A8h] [rbp-330h]
  __m128i v33; // [rsp+C0h] [rbp-318h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-308h]
  __int128 v35; // [rsp+D8h] [rbp-300h]
  __int64 v36; // [rsp+E8h] [rbp-2F0h]
  __int128 v37; // [rsp+F0h] [rbp-2E8h]
  __int128 v38; // [rsp+100h] [rbp-2D8h]
  __int64 v39; // [rsp+130h] [rbp-2A8h]
  int v40; // [rsp+138h] [rbp-2A0h]
  __int64 v41; // [rsp+140h] [rbp-298h]
  char v42; // [rsp+148h] [rbp-290h]
  __m128i v43; // [rsp+150h] [rbp-288h] BYREF
  __int64 v44; // [rsp+160h] [rbp-278h]
  __int128 v45; // [rsp+168h] [rbp-270h]
  __int64 v46; // [rsp+178h] [rbp-260h]
  __int128 v47; // [rsp+180h] [rbp-258h]
  __int128 v48; // [rsp+190h] [rbp-248h]
  __int64 v49; // [rsp+1C0h] [rbp-218h]
  int v50; // [rsp+1C8h] [rbp-210h]
  __int64 v51; // [rsp+1D0h] [rbp-208h]
  char v52; // [rsp+1D8h] [rbp-200h]
  __m128i v53; // [rsp+1E0h] [rbp-1F8h] BYREF
  __int64 v54; // [rsp+1F0h] [rbp-1E8h]
  __int128 v55; // [rsp+1F8h] [rbp-1E0h]
  __int64 v56; // [rsp+208h] [rbp-1D0h]
  __int128 v57; // [rsp+210h] [rbp-1C8h]
  __int128 v58; // [rsp+220h] [rbp-1B8h]
  __int64 v59; // [rsp+250h] [rbp-188h]
  int v60; // [rsp+258h] [rbp-180h]
  __int64 v61; // [rsp+260h] [rbp-178h]
  char v62; // [rsp+268h] [rbp-170h]
  __m128i v63; // [rsp+270h] [rbp-168h] BYREF
  __int64 v64; // [rsp+280h] [rbp-158h]
  __int128 v65; // [rsp+288h] [rbp-150h]
  __int64 v66; // [rsp+298h] [rbp-140h]
  __int128 v67; // [rsp+2A0h] [rbp-138h]
  __int128 v68; // [rsp+2B0h] [rbp-128h]
  __int64 v69; // [rsp+2E0h] [rbp-F8h]
  int v70; // [rsp+2E8h] [rbp-F0h]
  __int64 v71; // [rsp+2F0h] [rbp-E8h]
  char v72; // [rsp+2F8h] [rbp-E0h]
  __m128i v73; // [rsp+300h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+310h] [rbp-C8h]
  __int128 v75; // [rsp+318h] [rbp-C0h]
  __int64 v76; // [rsp+328h] [rbp-B0h]
  __int128 v77; // [rsp+330h] [rbp-A8h]
  __int128 v78; // [rsp+340h] [rbp-98h]
  __int64 v79; // [rsp+370h] [rbp-68h]
  int v80; // [rsp+378h] [rbp-60h]
  __int64 v81; // [rsp+380h] [rbp-58h]
  char v82; // [rsp+388h] [rbp-50h]
  unsigned __int64 v83; // [rsp+398h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 2088) == -1 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v25 = 0;
    LOWORD(v74) = 256;
    v73.m128i_i64[1] = (__int64)"EFI_DEBUG_IMAGE_INFO_TABLE_HEADER";
    v73.m128i_i64[0] = get_idati();
    if ( (unsigned __int8)create_tinfo() && (get_tinfo_property() & 0x2F) == 0xD )
    {
      v34 = 0;
      v39 = 1;
      v49 = 1;
      v36 = 0;
      v40 = -1;
      v41 = 0;
      v42 = 0;
      v44 = 0;
      v46 = 0;
      v50 = -1;
      v51 = 0;
      v52 = 0;
      v33 = 0;
      v35 = 0;
      v37 = 0;
      v38 = 0;
      v43 = 0;
      v45 = 0;
      v47 = 0;
      v48 = 0;
      if ( (unsigned __int8)sub_1C970(a1, &v33, &v25, "EfiDebugImageInfoTable")
        && (unsigned __int8)sub_1C970(a1, &v43, &v25, "TableSize")
        && (v5 = *(int *)(a1 + 1176),
            v24 = 0,
            v26 = 0,
            v17 = *(int *)(qword_9AD30 + 144 * v5 + 128),
            v17 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                     a1,
                     *(_QWORD *)(a1 + 2088) + ((unsigned __int64)v33.m128i_i64[0] >> 3),
                     &v26,
                     v17,
                     0))
        && (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
             a1,
             *(_QWORD *)(a1 + 2088) + ((unsigned __int64)v43.m128i_i64[0] >> 3),
             &v24,
             4,
             0) == 4 )
      {
        v3 = 0;
        if ( v24 )
        {
          v30 = 0;
          v29 = 0;
          sub_1F7A0((__int64 *)&v29, v17 * v24);
          v6 = v30;
          if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
                 a1,
                 v26,
                 v29,
                 v30,
                 0) == v6 )
          {
            v7 = v29;
            src = nullptr;
            v18 = v29 + v30;
            for ( i = 0; v7 < v18; v7 += v17 )
            {
              v73.m128i_i64[0] = 0;
              sub_2EDD0(a1 + 1704, &v73, v7);
              v10 = i;
              v12 = v73.m128i_i64[0];
              v11 = src;
              v9 = i + 1;
              if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
              {
                if ( *((_QWORD *)&i + 1) < v9 )
                {
                  v20 = v73.m128i_i64[0];
                  src = (void *)qvector_reserve();
                  v10 = i;
                  v11 = src;
                  v12 = v20;
                }
                v23 = v12;
                memmove(v11 + 1, v11, 8 * v10);
                *v11 = v23;
                v8 = i + 1;
              }
              else
              {
                if ( *((_QWORD *)&i + 1) < v9 )
                {
                  v21 = v73.m128i_i64[0];
                  src = (void *)qvector_reserve();
                  v10 = i;
                  v11 = src;
                  v12 = v21;
                }
                v11[v10] = v12;
                v8 = i + 1;
              }
              *(_QWORD *)&i = v8;
            }
            LOWORD(v74) = 256;
            v73.m128i_i64[1] = (__int64)"EFI_DEBUG_IMAGE_INFO_NORMAL";
            v73.m128i_i64[0] = get_idati();
            if ( (unsigned __int8)create_tinfo() && (get_tinfo_property() & 0x2F) == 0xD )
            {
              tinfo_size = get_tinfo_size();
              sub_1F7A0((__int64 *)&v29, tinfo_size);
              v54 = 0;
              v59 = 1;
              v69 = 1;
              v79 = 1;
              v56 = 0;
              v60 = -1;
              v61 = 0;
              v62 = 0;
              v64 = 0;
              v66 = 0;
              v70 = -1;
              v71 = 0;
              v72 = 0;
              v74 = 0;
              v76 = 0;
              v80 = -1;
              v81 = 0;
              v82 = 0;
              v53 = 0;
              v55 = 0;
              v57 = 0;
              v58 = 0;
              v63 = 0;
              v65 = 0;
              v67 = 0;
              v68 = 0;
              v73 = 0;
              v75 = 0;
              v77 = 0;
              v78 = 0;
              if ( (unsigned __int8)sub_1C970(a1, &v53, &v25, "ImageInfoType")
                && (unsigned __int8)sub_1C970(a1, &v63, &v25, "LoadedImageProtocolInstance")
                && (unsigned __int8)sub_1C970(a1, &v73, &v25, "ImageHandle") )
              {
                v14 = 0;
                v22 = a1 + 1704;
                v19 = i;
                if ( (_QWORD)i )
                {
                  while ( 1 )
                  {
                    v15 = v30;
                    if ( (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
                           a1,
                           *((_QWORD *)src + v14),
                           v29,
                           v30,
                           0) == v15 )
                    {
                      v16 = *(_DWORD *)(v29 + ((unsigned __int64)v53.m128i_i64[0] >> 3));
                      v27 = 0;
                      v28 = 0;
                      sub_2EDD0(v22, &v27, v29 + ((unsigned __int64)v73.m128i_i64[0] >> 3));
                      sub_2EDD0(v22, &v28, v29 + ((unsigned __int64)v63.m128i_i64[0] >> 3));
                      v3 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64, __int64))a2)(a2, v16, v28, v27);
                      if ( v3 )
                        break;
                    }
                    if ( ++v14 == v19 )
                      goto LABEL_51;
                  }
                }
                else
                {
LABEL_51:
                  v3 = 0;
                }
              }
              else
              {
                v3 = -1;
              }
              sub_1C020(&v73);
              sub_1C020(&v63);
              sub_1C020(&v53);
            }
            else
            {
              v3 = -1;
            }
            if ( src )
            {
              *(_QWORD *)&i = 0;
              qfree();
            }
          }
          else
          {
            v3 = -1;
          }
          if ( v29 )
          {
            *(_QWORD *)&v30 = 0;
            qfree();
          }
        }
      }
      else
      {
        v3 = -1;
      }
      clear_tinfo_t();
      if ( v46 )
      {
        *(_QWORD *)&v47 = 0;
        qfree();
      }
      if ( v44 )
      {
        *(_QWORD *)&v45 = 0;
        qfree();
      }
      clear_tinfo_t();
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree();
      }
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree();
      }
    }
    else
    {
      v3 = -1;
    }
    clear_tinfo_t();
  }
  return v3;
}

