// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_394E20(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 module_data; // r13
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rbx
  int v11; // eax
  char v12; // bp
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 i; // r12
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 j; // r12
  _QWORD *v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v28; // rcx
  _QWORD *v29; // rsi
  _QWORD *k; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rsi
  _QWORD *m; // rdx
  _QWORD *v35; // rax
  __int64 *v36; // rbx
  __int64 v37; // rsi
  __int64 ii; // rdx
  _QWORD *v39; // rcx
  __int64 v40; // rsi
  __int64 jj; // rcx
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  size_t v44; // rbp
  int v45; // ebp
  __int64 v46; // rcx
  __int64 v47; // rdx
  const char *v48; // r8
  unsigned int v49; // eax
  _QWORD *v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 *v54; // rbp
  __int64 v55; // rcx
  unsigned __int64 v56; // rsi
  __int64 kk; // rax
  _QWORD *v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rsi
  __int64 mm; // rdx
  _QWORD *v62; // rax
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 *v68; // r15
  __int64 v69; // rsi
  __int64 *v70; // rbx
  __int64 *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  _QWORD *v74; // [rsp+0h] [rbp-158h]
  __int64 v75; // [rsp+8h] [rbp-150h]
  __int64 v76; // [rsp+10h] [rbp-148h]
  unsigned __int64 v77; // [rsp+18h] [rbp-140h]
  __int64 v78; // [rsp+20h] [rbp-138h]
  __int64 v79; // [rsp+20h] [rbp-138h]
  __int64 v80; // [rsp+20h] [rbp-138h]
  __int64 v81; // [rsp+20h] [rbp-138h]
  __int64 v82; // [rsp+30h] [rbp-128h]
  __int64 (__fastcall **v83)(); // [rsp+38h] [rbp-120h] BYREF
  _QWORD v84[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v85; // [rsp+60h] [rbp-F8h]
  __int128 v86; // [rsp+68h] [rbp-F0h]
  __int64 v87; // [rsp+78h] [rbp-E0h]
  __int64 v88; // [rsp+80h] [rbp-D8h]
  __int64 v89; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+98h] [rbp-C0h]
  void *src; // [rsp+A0h] [rbp-B8h]
  size_t n[3]; // [rsp+A8h] [rbp-B0h]
  _BYTE v93[24]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-80h]
  __int128 v95; // [rsp+E0h] [rbp-78h]
  _QWORD v96[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v97[11]; // [rsp+100h] [rbp-58h] BYREF

  v5 = a3;
  v75 = a4;
  v97[3] = __readfsqword(0x28u);
  if ( a3 )
    module_data = *(_QWORD *)(a3 + 128);
  else
    module_data = get_module_data();
  if ( *(_QWORD *)(module_data + 936) > 1u )
  {
    if ( (*(_BYTE *)(module_data + 606) & 0x40) == 0 )
    {
      v7 = 0;
      sub_2B5230((__int64)"Cannot continue after an internal error, sorry");
      return v7;
    }
    if ( *(_QWORD *)(module_data + 928) )
    {
      *(_QWORD *)(module_data + 936) = 0;
      qfree();
      *(_QWORD *)(module_data + 928) = 0;
      *(_QWORD *)(module_data + 944) = 0;
    }
  }
  v74 = v84;
  sub_390EF0((__int64)v84, a1);
  v7 = v84[0];
  if ( *(_QWORD *)(a1 + 32) != -1 || v84[0] )
  {
    v8 = v84[0];
    v85 = 0;
    v87 = 0;
    v88 = 0xFFFFFFFFLL;
    v86 = 0;
    get_func_ranges();
    v9 = v85;
    v10 = v85 + 16 * v86;
    if ( v85 != v10 )
    {
      do
      {
        get_fchunk();
        v8 = 1;
        lock_func_range();
        v9 += 16;
      }
      while ( v10 != v9 );
    }
    LOBYTE(v76) = 0;
    if ( (a2 & 8) != 0 )
      goto LABEL_101;
    if ( v5 )
    {
LABEL_13:
      v11 = sub_332BA0((__int64)v84, *(_QWORD *)(v5 + 24) + 8LL);
      v82 = 0;
      LOBYTE(v77) = v11 != 0;
      if ( !(v11 | a2 & 0xC) )
      {
        LODWORD(v74) = 1;
        v7 = v5;
        v12 = 0;
        LOBYTE(v77) = a2 & 1;
LABEL_15:
        v94 = -1;
        v95 = 0u;
        memset(v93, 0, sizeof(v93));
        if ( (unsigned int)sub_393D00((__m128i *)v93, module_data, v7, a1, 0, 1) == 1 )
        {
          if ( (_BYTE)v77 )
          {
            v43 = (unsigned int)v74 | 2;
            if ( (_BYTE)v76 )
            {
              if ( (a2 & 0x80) == 0 )
                v43 = (unsigned int)v74 | 6;
              LODWORD(v74) = v43;
            }
            else
            {
              LODWORD(v74) = (unsigned int)v74 | 2;
            }
          }
          callui(149, *(_QWORD *)(v7 + 8), v93, (unsigned int)v74, &callui, v13, v74, v75, v76, v77);
        }
        sub_38B9D0(v7, 0);
        if ( v75 && v12 )
        {
          v97[1] = v75;
          v15 = *(_QWORD *)(v7 + 8);
          v97[0] = 0;
          v96[1] = v15;
          v96[0] = 0;
          callui(176, v96, v97, 1, &callui, v14, v74, v75, v76, v77);
        }
        if ( *((_QWORD *)&v95 + 1) )
          qfree();
LABEL_23:
        if ( v82 )
        {
          v16 = (*(_DWORD *)(v82 + 104))-- == 1;
          if ( v16 )
          {
            sub_258D30((__int64 *)v82);
            v17 = *(_QWORD *)(v82 + 184);
            if ( v17 )
            {
              v18 = *(_QWORD *)(v82 + 192);
              if ( v18 )
              {
                for ( i = 0; i != v18; ++i )
                {
                  v20 = (_QWORD *)(v17 + 24 * i);
                  if ( *v20 )
                  {
                    v20[1] = 0;
                    qfree();
                    v17 = *(_QWORD *)(v82 + 184);
                  }
                }
              }
              *(_QWORD *)(v82 + 192) = 0;
              qfree();
            }
            if ( *(_QWORD *)(v82 + 160) )
            {
              *(_QWORD *)(v82 + 168) = 0;
              qfree();
            }
            v21 = *(_QWORD *)(v82 + 128);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v82 + 136);
              if ( v22 )
              {
                for ( j = 0; j != v22; ++j )
                {
                  v24 = (_QWORD *)(v21 + 32 * j);
                  if ( *v24 )
                  {
                    v24[1] = 0;
                    qfree();
                    v21 = *(_QWORD *)(v82 + 128);
                  }
                }
              }
              *(_QWORD *)(v82 + 136) = 0;
              qfree();
            }
            sub_255410(v82 + 16);
            j__qfree();
          }
        }
        v25 = v85;
        v26 = v85 + 16 * v86;
        if ( v85 != v26 )
        {
          do
          {
            v25 += 16;
            get_fchunk();
            lock_func_range();
          }
          while ( v26 != v25 );
          v26 = v85;
        }
        if ( v26 )
        {
          *(_QWORD *)&v86 = 0;
          qfree();
        }
        goto LABEL_47;
      }
      if ( (a2 & 2) == 0 )
        a2 |= 1u;
LABEL_52:
      if ( (a2 & 4) != 0 && v84[0] )
        sub_1477B0(*(_QWORD *)(module_data + 112), *(_QWORD *)v84[0], 0);
      v89 = 0;
      *(_OWORD *)n = 0;
      v90 = -1;
      src = nullptr;
      sub_14C800(v93, *(_QWORD *)(module_data + 112), v84, &v89, ((a2 & 0x100) != 0) + 8);
      v7 = *(_QWORD *)v93;
      v82 = *(_QWORD *)v93;
      if ( !*(_QWORD *)v93 )
        goto LABEL_106;
      if ( !*(_DWORD *)(*(_QWORD *)v93 + 104LL) )
      {
        sub_258D30(*(__int64 **)v93);
        v28 = *(_QWORD *)(v7 + 184);
        if ( v28 )
        {
          v29 = *(_QWORD **)(v7 + 192);
          if ( v29 )
          {
            for ( k = nullptr; k != v29; k = (_QWORD *)((char *)k + 1) )
            {
              v31 = (_QWORD *)(v28 + 24LL * (_QWORD)k);
              if ( *v31 )
              {
                v31[1] = 0;
                v74 = k;
                qfree();
                v28 = *(_QWORD *)(v7 + 184);
                k = v74;
              }
            }
          }
          *(_QWORD *)(v7 + 192) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v7 + 160) )
        {
          *(_QWORD *)(v7 + 168) = 0;
          qfree();
        }
        v32 = *(_QWORD *)(v7 + 128);
        if ( v32 )
        {
          v33 = *(_QWORD **)(v7 + 136);
          if ( v33 )
          {
            for ( m = nullptr; m != v33; m = (_QWORD *)((char *)m + 1) )
            {
              v35 = (_QWORD *)(v32 + 32LL * (_QWORD)m);
              if ( *v35 )
              {
                v35[1] = 0;
                v74 = m;
                qfree();
                v32 = *(_QWORD *)(v7 + 128);
                m = v74;
              }
            }
          }
          *(_QWORD *)(v7 + 136) = 0;
          qfree();
        }
        sub_255410(v7 + 16);
        j__qfree();
        v7 = v82;
        if ( !v82 )
        {
LABEL_106:
          v44 = n[0];
          *(_QWORD *)v93 = off_4D6390;
          v95 = 0;
          v83 = off_4DE2F8;
          v94 = 0;
          *(_DWORD *)&v93[8] = v89;
          *(_QWORD *)&v93[16] = v90;
          if ( n[0] )
          {
            v94 = qalloc_or_throw();
            *((_QWORD *)&v95 + 1) = v44;
            memcpy((void *)v94, src, v44);
            *(_QWORD *)&v95 = v44;
          }
          sub_33C6D0(0.0, (__int64)&v83, module_data, (__int64)v93);
          *(_QWORD *)v93 = off_4D6390;
          if ( v94 )
          {
            *(_QWORD *)&v95 = 0;
            qfree();
          }
          std::exception::~exception((std::exception *)v93);
          if ( src )
          {
            n[0] = 0;
            qfree();
          }
          v7 = 0;
          goto LABEL_23;
        }
      }
      if ( src )
      {
        n[0] = 0;
        qfree();
        v7 = v82;
        LODWORD(v74) = (unsigned __int8)v77 ^ 1;
        if ( v5 )
        {
          if ( (a2 & 9) != 1 )
          {
            LOBYTE(v77) = 0;
            if ( v82 )
              goto LABEL_78;
LABEL_153:
            v7 = v5;
            v12 = 0;
            goto LABEL_15;
          }
          LOBYTE(v77) = 1;
          if ( !v82 )
            goto LABEL_153;
LABEL_78:
          ++*(_DWORD *)(v7 + 104);
          *(_QWORD *)v93 = v7;
          sub_3908A0(v5, (__int64 *)v93, 0);
          v36 = *(__int64 **)v93;
          if ( *(_QWORD *)v93 )
          {
            v16 = (*(_DWORD *)(*(_QWORD *)v93 + 104LL))-- == 1;
            if ( v16 )
            {
              sub_258D30(v36);
              v37 = v36[23];
              if ( v37 )
              {
                v76 = v36[24];
                if ( v76 )
                {
                  for ( ii = 0; ii != v76; ++ii )
                  {
                    v39 = (_QWORD *)(v37 + 24 * ii);
                    if ( *v39 )
                    {
                      v39[1] = 0;
                      v78 = ii;
                      qfree();
                      v37 = v36[23];
                      ii = v78;
                    }
                  }
                }
                v36[24] = 0;
                qfree();
              }
              if ( v36[20] )
              {
                v36[21] = 0;
                qfree();
              }
              v40 = v36[16];
              if ( v40 )
              {
                v76 = v36[17];
                if ( v76 )
                {
                  for ( jj = 0; jj != v76; ++jj )
                  {
                    v42 = (_QWORD *)(v40 + 32 * jj);
                    if ( *v42 )
                    {
                      v42[1] = 0;
                      v79 = jj;
                      qfree();
                      v40 = v36[16];
                      jj = v79;
                    }
                  }
                }
                v36[17] = 0;
                qfree();
              }
              sub_255410((__int64)(v36 + 2));
              j__qfree();
            }
          }
          LOBYTE(v76) = 1;
          v7 = v5;
          v12 = 0;
LABEL_98:
          *(_DWORD *)v7 |= 2u;
          goto LABEL_15;
        }
        if ( !v82 )
        {
          LOBYTE(v77) = 0;
          v12 = 0;
          goto LABEL_15;
        }
      }
      else
      {
        LODWORD(v74) = (unsigned __int8)v77 ^ 1;
        if ( v5 )
        {
          LOBYTE(v77) = (a2 & 9) == 1;
          goto LABEL_78;
        }
      }
      memset(v93, 0, sizeof(v93));
      v45 = sub_3878A0(*(_QWORD *)(*(_QWORD *)(v7 + 216) + 1008LL));
      sub_390C80((__int64 *)v93, v45, "Pseudocode-");
      v7 = operator new(0xA8u);
      v46 = *(_QWORD *)&v93[8];
      v89 = v82;
      v47 = *(_QWORD *)(v82 + 216);
      if ( v82 )
      {
        ++*(_DWORD *)(v82 + 104);
        v48 = s1;
        if ( v46 )
          v48 = *(const char **)v93;
        *(_DWORD *)v7 = 0;
        *(_DWORD *)(v7 + 4) = v45;
        *(_OWORD *)(v7 + 8) = 0;
        *(__m128i *)(v7 + 24) = _mm_unpacklo_epi64(
                                  _mm_loadl_epi64((const __m128i *)(v82 + 8)),
                                  (__m128i)(unsigned __int64)v82);
        ++*(_DWORD *)(v82 + 104);
        v49 = *(_DWORD *)v7 & 0xFFFFFFFD;
      }
      else
      {
        if ( *(_QWORD *)&v93[8] )
        {
          *(_DWORD *)(v7 + 4) = v45;
          v48 = *(const char **)v93;
        }
        else
        {
          *(_DWORD *)(v7 + 4) = v45;
          v48 = s1;
        }
        *(_OWORD *)(v7 + 8) = 0;
        v49 = 0;
        *(_OWORD *)(v7 + 24) = 0;
      }
      *(_QWORD *)(v7 + 128) = v47;
      *(_QWORD *)(v7 + 52) = 0;
      *(_QWORD *)(v7 + 44) = 0xFFFFFFFFLL;
      *(_DWORD *)(v7 + 80) = 0;
      *(_DWORD *)(v7 + 104) = 0;
      *(_QWORD *)(v7 + 136) = 0;
      *(_QWORD *)(v7 + 160) = 0;
      *(_DWORD *)v7 = v49;
      *(_OWORD *)(v7 + 144) = 0;
      v50 = *(_QWORD **)(v47 + 1008);
      v51 = v50[6];
      v52 = v50[5];
      if ( v50[7] < (unsigned __int64)(v51 + 1) )
      {
        v77 = (unsigned __int64)v48;
        v64 = qvector_reserve();
        v50[5] = v64;
        v52 = v64;
        v48 = (const char *)v77;
        v51 = v50[6];
      }
      *(_QWORD *)(v52 + 8 * v51) = v7;
      ++v50[6];
      sub_394A90((_QWORD *)v7, (__int64)v48, a2, -1);
      v54 = (__int64 *)v89;
      if ( v89 )
      {
        v16 = (*(_DWORD *)(v89 + 104))-- == 1;
        if ( v16 )
        {
          sub_258D30(v54);
          v55 = v54[23];
          if ( v55 )
          {
            v56 = v54[24];
            if ( v56 )
            {
              for ( kk = 0; kk != v56; ++kk )
              {
                v58 = (_QWORD *)(v55 + 24 * kk);
                if ( *v58 )
                {
                  v58[1] = 0;
                  v80 = kk;
                  v77 = v56;
                  qfree();
                  kk = v80;
                  v55 = v54[23];
                }
              }
            }
            v54[24] = 0;
            qfree();
          }
          if ( v54[20] )
          {
            v54[21] = 0;
            qfree();
          }
          v59 = v54[16];
          if ( v59 )
          {
            v60 = v54[17];
            if ( v60 )
            {
              for ( mm = 0; mm != v60; ++mm )
              {
                v62 = (_QWORD *)(v59 + 32 * mm);
                if ( *v62 )
                {
                  v62[1] = 0;
                  v81 = mm;
                  v77 = v60;
                  qfree();
                  mm = v81;
                  v59 = v54[16];
                }
              }
            }
            v54[17] = 0;
            qfree();
          }
          sub_255410((__int64)(v54 + 2));
          j__qfree();
        }
      }
      sub_38FA40(v7, 1, v53);
      if ( (a2 & 0x10) == 0 )
      {
        callui(
          174,
          *(_QWORD *)(v7 + 16),
          (*(_DWORD *)(*(_QWORD *)(v7 + 128) + 724LL) << 16) | 0x104u,
          0,
          &callui,
          v63,
          v74,
          v75,
          (_BYTE)v76,
          v77);
        sub_33E5A0(*(_QWORD *)(v7 + 128), 0x64u, v7);
      }
      v12 = *(_BYTE *)(*(_QWORD *)(v7 + 128) + 713LL);
      LODWORD(v74) = ((a2 & 1) << 16) | (unsigned int)v74;
      if ( *(_QWORD *)v93 )
      {
        *(_QWORD *)&v93[8] = 0;
        qfree();
      }
      LOBYTE(v77) = 0;
      goto LABEL_98;
    }
    LOBYTE(v76) = 0;
    v5 = sub_38A180(module_data, v8);
    if ( v5 )
      goto LABEL_100;
    v65 = *(_QWORD *)(module_data + 888);
    if ( v65 )
    {
      v66 = *(_QWORD *)(v65 + 8);
      v67 = *(_QWORD *)(module_data + 1008);
      v68 = *(__int64 **)(v67 + 40);
      v69 = *(_QWORD *)(v67 + 48);
      v70 = &v68[v69];
      if ( v66 )
      {
        v71 = *(__int64 **)(v67 + 40);
        if ( v69 * 8 )
        {
          while ( 1 )
          {
            v5 = *v71;
            if ( *v71 )
            {
              if ( v66 == *(_QWORD *)(v5 + 8) || v66 == *(_QWORD *)(v5 + 16) )
                goto LABEL_169;
            }
            if ( v70 == ++v71 )
              goto LABEL_163;
          }
        }
      }
      else
      {
LABEL_163:
        v77 = *(_QWORD *)(a1 + 16);
        if ( v68 != v70 )
        {
          while ( 1 )
          {
            v5 = *v68;
            if ( *v68 )
            {
              LOBYTE(v76) = sub_38A0C0(*v68, v77);
              if ( (_BYTE)v76 )
                break;
            }
            if ( v70 == ++v68 )
              goto LABEL_167;
          }
LABEL_100:
          if ( (*(_BYTE *)v5 & 1) != 0 )
            goto LABEL_13;
LABEL_101:
          v5 = 0;
          LOBYTE(v77) = 1;
          goto LABEL_52;
        }
      }
LABEL_167:
      v72 = *(_QWORD *)(module_data + 1008);
      v73 = *(_QWORD *)(v72 + 48);
      if ( v73 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v72 + 40) + 8 * v73 - 8);
        if ( v5 )
        {
LABEL_169:
          LOBYTE(v76) = 1;
          goto LABEL_100;
        }
      }
    }
    LOBYTE(v76) = 1;
    goto LABEL_101;
  }
LABEL_47:
  if ( v84[1] )
  {
    v84[2] = 0;
    qfree();
  }
  return v7;
}

