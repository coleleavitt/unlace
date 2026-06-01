void __fastcall sub_11D90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 i; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rbx
  void *v17; // rdi
  __int64 v18; // rbx
  void *v19; // rdi
  __int64 v20; // rbx
  void *v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 j; // rbp
  _QWORD *v29; // r15
  __int64 v30; // rbx
  void *v31; // rdi
  __int64 v32; // rbx
  _QWORD *v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 k; // rbx
  _QWORD *v38; // rbp
  void *v39; // r14
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r12
  __int64 v44; // rbp
  _QWORD *v45; // rbp
  __int64 v46; // r15
  __int64 v47; // r14
  __int64 v48; // rbx
  __int64 v49; // r13
  __int64 v50; // r12
  __int64 v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // r12
  __int64 n; // r13
  __int64 v58; // rdx
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 ii; // rbp
  void *v62; // rdi
  void **v63; // rbx
  unsigned __int64 v64; // rbp
  void *v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // r15
  __int64 v69; // r13
  __int64 m; // r12
  __int64 v72; // [rsp+8h] [rbp-70h]
  _QWORD *v73; // [rsp+8h] [rbp-70h]
  __int64 v74; // [rsp+8h] [rbp-70h]
  __int64 v75; // [rsp+10h] [rbp-68h]
  unsigned __int64 v76; // [rsp+10h] [rbp-68h]
  __int64 v77; // [rsp+10h] [rbp-68h]
  __int64 v78; // [rsp+18h] [rbp-60h]
  void *v79; // [rsp+20h] [rbp-58h]
  __int64 v80; // [rsp+28h] [rbp-50h]
  __int64 v81; // [rsp+30h] [rbp-48h]
  __int64 v82; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 1848);
  *(_QWORD *)a1 = off_7E7C8;
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 1856);
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = v1 + 40 * i;
        if ( *(_QWORD *)(v4 + 16) )
        {
          *(_QWORD *)(v4 + 24) = 0;
          qfree();
          v1 = *(_QWORD *)(a1 + 1848);
        }
      }
    }
    *(_QWORD *)(a1 + 1856) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1792) )
  {
    *(_QWORD *)(a1 + 1800) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1760) )
  {
    *(_QWORD *)(a1 + 1768) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1736) )
  {
    *(_QWORD *)(a1 + 1744) = 0;
    qfree();
  }
  v5 = *(_QWORD *)(a1 + 1704);
  while ( v5 )
  {
    sub_FA10(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
  if ( *(_QWORD *)(a1 + 1656) )
  {
    *(_QWORD *)(a1 + 1664) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1624) )
  {
    *(_QWORD *)(a1 + 1632) = 0;
    qfree();
  }
  qmutex_free();
  *(_OWORD *)(a1 + 1040) = 0;
  v7 = *(_QWORD *)(a1 + 1576);
  while ( v7 )
  {
    v8 = (_QWORD *)v7;
    sub_104F0(*(_QWORD **)(v7 + 24));
    v9 = *(_QWORD *)(v7 + 48);
    v7 = *(_QWORD *)(v7 + 16);
    if ( v9 )
    {
      v8[7] = 0;
      qfree();
    }
    operator delete(v8, 0x48u);
  }
  v10 = *(_QWORD *)(a1 + 1528);
  while ( v10 )
  {
    v11 = (_QWORD *)v10;
    sub_107B0(*(_QWORD **)(v10 + 24));
    v12 = *(_QWORD *)(v10 + 48);
    v10 = *(_QWORD *)(v10 + 16);
    if ( v12 )
    {
      v11[7] = 0;
      qfree();
    }
    operator delete(v11, 0x48u);
  }
  v13 = *(_QWORD *)(a1 + 1480);
  while ( v13 )
  {
    v14 = (_QWORD *)v13;
    sub_10A70(*(_QWORD **)(v13 + 24));
    v15 = *(_QWORD *)(v13 + 48);
    v13 = *(_QWORD *)(v13 + 16);
    if ( v15 )
    {
      v14[7] = 0;
      qfree();
    }
    operator delete(v14, 0x48u);
  }
  sub_F4F0(*(void **)(a1 + 1432));
  sub_F5E0(*(void **)(a1 + 1384));
  v16 = *(_QWORD *)(a1 + 1336);
  while ( v16 )
  {
    sub_FBE0(*(_QWORD **)(v16 + 24));
    v17 = (void *)v16;
    v16 = *(_QWORD *)(v16 + 16);
    operator delete(v17, 0x30u);
  }
  v18 = *(_QWORD *)(a1 + 1288);
  while ( v18 )
  {
    sub_10320(*(_QWORD **)(v18 + 24));
    v19 = (void *)v18;
    v18 = *(_QWORD *)(v18 + 16);
    operator delete(v19, 0x30u);
  }
  v20 = *(_QWORD *)(a1 + 1240);
  while ( v20 )
  {
    sub_FDB0(*(_QWORD **)(v20 + 24));
    v21 = (void *)v20;
    v20 = *(_QWORD *)(v20 + 16);
    operator delete(v21, 0x38u);
  }
  v22 = *(_QWORD *)(a1 + 1200);
  if ( v22 )
  {
    if ( *(_QWORD *)(a1 + 1208) )
    {
      v72 = 0;
      v23 = 0;
      v75 = *(_QWORD *)(a1 + 1208);
      do
      {
        v24 = (_QWORD *)(v22 + v72);
        if ( *(_QWORD *)(v22 + v72 + 368) )
        {
          v24[47] = 0;
          qfree();
        }
        v25 = v24[18];
        if ( v25 )
        {
          v26 = v24[19];
          if ( v26 )
          {
            v27 = 0;
            for ( j = 0; j != v26; ++j )
            {
              v29 = (_QWORD *)(v25 + v27);
              if ( *(_QWORD *)(v25 + v27 + 56) )
              {
                v29[8] = 0;
                qfree();
              }
              if ( v29[4] )
              {
                v29[5] = 0;
                qfree();
              }
              if ( v29[1] )
              {
                v29[2] = 0;
                qfree();
              }
              v25 = v24[18];
              v27 += 120;
            }
          }
          v24[19] = 0;
          qfree();
        }
        if ( v24[14] )
        {
          v24[15] = 0;
          qfree();
        }
        if ( v24[8] )
        {
          v24[9] = 0;
          qfree();
        }
        if ( v24[5] )
        {
          v24[6] = 0;
          qfree();
        }
        if ( v24[2] )
        {
          v24[3] = 0;
          qfree();
        }
        ++v23;
        v72 += 392;
        v22 = *(_QWORD *)(a1 + 1200);
      }
      while ( v75 != v23 );
    }
    *(_QWORD *)(a1 + 1208) = 0;
    qfree();
  }
  v30 = *(_QWORD *)(a1 + 1168);
  while ( v30 )
  {
    sub_10320(*(_QWORD **)(v30 + 24));
    v31 = (void *)v30;
    v30 = *(_QWORD *)(v30 + 16);
    operator delete(v31, 0x30u);
  }
  v32 = *(_QWORD *)(a1 + 1120);
  while ( v32 )
  {
    v33 = (_QWORD *)v32;
    sub_10D30(*(_QWORD **)(v32 + 24));
    v34 = *(_QWORD *)(v32 + 32);
    v32 = *(_QWORD *)(v32 + 16);
    if ( v34 )
    {
      v33[5] = 0;
      qfree();
    }
    operator delete(v33, 0x40u);
  }
  v35 = *(_QWORD *)(a1 + 1080);
  if ( v35 )
  {
    v36 = *(_QWORD *)(a1 + 1088);
    if ( v36 )
    {
      for ( k = 0; k != v36; ++k )
      {
        v38 = (_QWORD *)(v35 + 72 * k);
        if ( v38[5] )
        {
          v38[6] = 0;
          qfree();
        }
        if ( v38[2] )
        {
          v38[3] = 0;
          qfree();
        }
        v35 = *(_QWORD *)(a1 + 1080);
      }
    }
    *(_QWORD *)(a1 + 1088) = 0;
    qfree();
  }
  if ( *(_BYTE *)(a1 + 896) )
    sub_4A2D0(a1 + 864);
  v39 = *(void **)(a1 + 1008);
  if ( v39 )
  {
    v40 = *((_QWORD *)v39 + 5);
    v41 = *((_QWORD *)v39 + 9);
    v42 = *((_QWORD *)v39 + 6);
    v78 = *((_QWORD *)v39 + 4);
    v43 = *((_QWORD *)v39 + 7);
    v44 = *((_QWORD *)v39 + 2);
    if ( v40 + 8 < v41 )
    {
      v79 = *(void **)(a1 + 1008);
      v45 = (_QWORD *)(v40 + 8);
      v80 = *((_QWORD *)v39 + 7);
      v46 = *((_QWORD *)v39 + 2);
      v81 = *((_QWORD *)v39 + 6);
      v76 = *((_QWORD *)v39 + 9);
      v82 = *((_QWORD *)v39 + 5);
      do
      {
        v73 = v45;
        v47 = *v45 + 512LL;
        v48 = *v45;
        do
        {
          if ( *(_QWORD *)(v48 + 8) )
          {
            v49 = *(_QWORD *)(v48 + 16);
            if ( v49 )
            {
              v50 = 0;
              v51 = 0;
              v52 = *(_QWORD *)(v48 + 8);
              do
              {
                if ( *(_QWORD *)(v52 + v50 + 112) )
                {
                  *(_QWORD *)(v52 + v50 + 120) = 0;
                  qfree();
                  v52 = *(_QWORD *)(v48 + 8);
                }
                ++v51;
                v50 += 184;
              }
              while ( v49 != v51 );
            }
            *(_QWORD *)(v48 + 16) = 0;
            qfree();
          }
          v48 += 32;
        }
        while ( v47 != v48 );
        v41 = v76;
        v45 = v73 + 1;
      }
      while ( (unsigned __int64)(v73 + 1) < v76 );
      v39 = v79;
      v43 = v80;
      v44 = v46;
      v42 = v81;
      v40 = v82;
    }
    if ( v41 == v40 )
    {
      while ( v42 != v44 )
      {
        v67 = *(_QWORD *)(v44 + 8);
        if ( v67 )
        {
          v68 = *(_QWORD *)(v44 + 16);
          if ( v68 )
          {
            v69 = 0;
            for ( m = 0; m != v68; ++m )
            {
              if ( *(_QWORD *)(v67 + v69 + 112) )
              {
                *(_QWORD *)(v67 + v69 + 120) = 0;
                qfree();
                v67 = *(_QWORD *)(v44 + 8);
              }
              v69 += 184;
            }
          }
          *(_QWORD *)(v44 + 16) = 0;
          qfree();
        }
        v44 += 32;
      }
    }
    else
    {
      if ( v44 != v78 )
      {
        v74 = v43;
        v77 = v42;
        v53 = v44;
        do
        {
          v54 = *(_QWORD *)(v53 + 8);
          if ( v54 )
          {
            v55 = *(_QWORD *)(v53 + 16);
            if ( v55 )
            {
              v56 = 0;
              for ( n = 0; n != v55; ++n )
              {
                if ( *(_QWORD *)(v54 + v56 + 112) )
                {
                  *(_QWORD *)(v54 + v56 + 120) = 0;
                  qfree();
                  v54 = *(_QWORD *)(v53 + 8);
                }
                v56 += 184;
              }
            }
            *(_QWORD *)(v53 + 16) = 0;
            qfree();
          }
          v53 += 32;
        }
        while ( v78 != v53 );
        v43 = v74;
        v42 = v77;
      }
      for ( ; v42 != v43; v43 += 32 )
      {
        v58 = *(_QWORD *)(v43 + 8);
        if ( v58 )
        {
          v59 = *(_QWORD *)(v43 + 16);
          if ( v59 )
          {
            v60 = 0;
            for ( ii = 0; ii != v59; ++ii )
            {
              if ( *(_QWORD *)(v58 + v60 + 112) )
              {
                *(_QWORD *)(v58 + v60 + 120) = 0;
                qfree();
                v58 = *(_QWORD *)(v43 + 8);
              }
              v60 += 184;
            }
          }
          *(_QWORD *)(v43 + 16) = 0;
          qfree();
        }
      }
    }
    v62 = *(void **)v39;
    if ( *(_QWORD *)v39 )
    {
      v63 = *((void ***)v39 + 5);
      v64 = *((_QWORD *)v39 + 9) + 8LL;
      if ( (unsigned __int64)v63 < v64 )
      {
        do
        {
          v65 = *v63++;
          operator delete(v65, 0x200u);
        }
        while ( (unsigned __int64)v63 < v64 );
        v62 = *(void **)v39;
      }
      operator delete(v62, 8LL * *((_QWORD *)v39 + 1));
    }
    operator delete(v39, 0x50u);
  }
  qmutex_free();
  v66 = *(_QWORD *)(a1 + 984);
  *(_QWORD *)(a1 + 888) = 0;
  if ( v66 )
  {
    *(_QWORD *)(a1 + 992) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 960) )
  {
    *(_QWORD *)(a1 + 968) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 928) )
  {
    *(_QWORD *)(a1 + 936) = 0;
    qfree();
  }
  sub_117D0(a1);
}

