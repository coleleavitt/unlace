__int64 __fastcall sub_3AF790(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 *a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  __int64 v12; // r9
  __int64 *v13; // rcx
  __int64 v14; // rax
  double v15; // xmm0_8
  unsigned int v16; // ebp
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 **v20; // rax
  __int64 *v21; // rcx
  __int64 *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 i; // r13
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 j; // r13
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rbx
  char *v38; // rbx
  __int64 v39; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v45; // [rsp+8h] [rbp-1A0h]
  __int64 v46; // [rsp+10h] [rbp-198h]
  __int64 v47; // [rsp+18h] [rbp-190h]
  int v48; // [rsp+20h] [rbp-188h] BYREF
  int v49; // [rsp+24h] [rbp-184h]
  _QWORD v50[7]; // [rsp+50h] [rbp-158h] BYREF
  char v51; // [rsp+88h] [rbp-120h] BYREF
  char v52; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+108h] [rbp-A0h]
  __int64 v54; // [rsp+110h] [rbp-98h]
  __int64 v55; // [rsp+118h] [rbp-90h]
  __int64 v56; // [rsp+128h] [rbp-80h]
  __int64 v57; // [rsp+130h] [rbp-78h]
  __int64 v58; // [rsp+140h] [rbp-68h]
  __int64 v59; // [rsp+148h] [rbp-60h]
  unsigned __int64 v60; // [rsp+168h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  sub_3AF170((__int64)v50, a1, a3, a4);
  v44 = a5;
  v13 = &v44;
  v45 = *a6;
  LODWORD(v46) = *((_DWORD *)a6 + 2);
  if ( a5 == -1 )
    v13 = *(__int64 **)(v53 + 1400);
  v15 = callui(16, 0, v50, v13, &callui, v12, v44, v45, v46, v47);
  v16 = 0;
  if ( v14 >= 0 && v57 )
  {
    v41 = v56 + 48LL * (int)v14;
    **(_QWORD **)(v53 + 1400) = **(_QWORD **)v41;
    v42 = *(_QWORD *)(v53 + 1400);
    *(_QWORD *)(v42 + 8) = *(_QWORD *)(v41 + 24);
    *(_DWORD *)(v42 + 16) = *(_DWORD *)(v41 + 32);
    sub_390A30((__int64)&v48, *(_QWORD *)(*(_QWORD *)v41 + 8LL) + 8LL, (__int64 *)(v41 + 24));
    if ( !v49 )
    {
      v43 = tag_skipcodes();
      v49 = skip_spaces() - v43;
    }
    sub_395890((__int64)&v48, 1, 0, 0, v15, a8, a9, a10);
    v16 = 1;
  }
  v50[0] = off_4E7350;
  if ( v58 )
  {
    v59 = 0;
    qfree(v58);
  }
  v17 = v56;
  if ( v56 )
  {
    v18 = v57;
    if ( v57 )
    {
      v19 = 0;
      do
      {
        v20 = (__int64 **)(v17 + 48 * v19);
        v21 = *v20;
        if ( *v20 )
        {
          if ( (*((_DWORD *)v21 + 26))-- == 1 )
          {
            v23 = *v20;
            if ( *v20 )
            {
              sub_258970(*v20);
              v24 = v23[23];
              if ( v24 )
              {
                v25 = v23[24];
                if ( v25 )
                {
                  for ( i = 0; i != v25; ++i )
                  {
                    v27 = (__int64 *)(v24 + 24 * i);
                    v28 = *v27;
                    if ( *v27 )
                    {
                      v27[1] = 0;
                      qfree(v28);
                      v24 = v23[23];
                    }
                  }
                }
                v23[24] = 0;
                qfree(v24);
              }
              v29 = v23[20];
              if ( v29 )
              {
                v23[21] = 0;
                qfree(v29);
              }
              v30 = v23[16];
              if ( v30 )
              {
                v31 = v23[17];
                if ( v31 )
                {
                  for ( j = 0; j != v31; ++j )
                  {
                    v33 = (__int64 *)(v30 + 32 * j);
                    v34 = *v33;
                    if ( *v33 )
                    {
                      v33[1] = 0;
                      qfree(v34);
                      v30 = v23[16];
                    }
                  }
                }
                v23[17] = 0;
                qfree(v30);
              }
              sub_255050((__int64)(v23 + 2), v15);
              j__qfree((__int64)v23);
            }
          }
          v17 = v56;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    v57 = 0;
    qfree(v17);
  }
  v35 = v54;
  if ( v54 )
  {
    v36 = v55;
    if ( v55 )
    {
      v37 = 0;
      do
      {
        ++v37;
        clear_tinfo_t();
        v35 = v54;
      }
      while ( v36 != v37 );
    }
    v55 = 0;
    qfree(v35);
  }
  v38 = &v52;
  v50[0] = &unk_4EBE48;
  do
  {
    v39 = *(_QWORD *)v38;
    if ( *(_QWORD *)v38 )
    {
      *((_QWORD *)v38 + 1) = 0;
      qfree(v39);
    }
    v38 -= 24;
  }
  while ( v38 != &v51 );
  return v16;
}

