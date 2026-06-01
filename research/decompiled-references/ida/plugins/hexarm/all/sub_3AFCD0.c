__int64 __fastcall sub_3AFCD0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 **v15; // rax
  __int64 *v16; // rcx
  __int64 *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 i; // r13
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 j; // r13
  _QWORD *v26; // rax
  __int64 v27; // r12
  __int64 v28; // rbx
  char *v29; // rbx
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v35; // [rsp+8h] [rbp-1A0h]
  __int64 v36; // [rsp+10h] [rbp-198h]
  __int64 v37; // [rsp+18h] [rbp-190h]
  int v38; // [rsp+20h] [rbp-188h] BYREF
  int v39; // [rsp+24h] [rbp-184h]
  _QWORD v40[7]; // [rsp+50h] [rbp-158h] BYREF
  char v41; // [rsp+88h] [rbp-120h] BYREF
  char v42; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+108h] [rbp-A0h]
  __int64 v44; // [rsp+110h] [rbp-98h]
  __int64 v45; // [rsp+118h] [rbp-90h]
  __int64 v46; // [rsp+128h] [rbp-80h]
  __int64 v47; // [rsp+130h] [rbp-78h]
  __int64 v48; // [rsp+140h] [rbp-68h]
  __int64 v49; // [rsp+148h] [rbp-60h]
  unsigned __int64 v50; // [rsp+168h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  sub_3AF6B0((__int64)v40, a1, a3, a4);
  v34 = a5;
  v9 = &v34;
  v35 = *a6;
  LODWORD(v36) = *((_DWORD *)a6 + 2);
  if ( a5 == -1 )
    v9 = *(__int64 **)(v43 + 1400);
  v10 = callui(16, 0, v40, v9, &callui, v8, v34, v35, v36, v37);
  v11 = 0;
  if ( v10 >= 0 && v47 )
  {
    v31 = v46 + 48LL * (int)v10;
    **(_QWORD **)(v43 + 1400) = **(_QWORD **)v31;
    v32 = *(_QWORD *)(v43 + 1400);
    *(_QWORD *)(v32 + 8) = *(_QWORD *)(v31 + 24);
    *(_DWORD *)(v32 + 16) = *(_DWORD *)(v31 + 32);
    sub_390F70((__int64)&v38, *(_QWORD *)(*(_QWORD *)v31 + 8LL) + 8LL, (__int64 *)(v31 + 24));
    if ( !v39 )
    {
      v33 = tag_skipcodes();
      v39 = skip_spaces() - v33;
    }
    sub_395DD0((__int64)&v38, 1u, 0, 0);
    v11 = 1;
  }
  v40[0] = off_4E1A10;
  if ( v48 )
  {
    v49 = 0;
    qfree();
  }
  v12 = v46;
  if ( v46 )
  {
    v13 = v47;
    if ( v47 )
    {
      v14 = 0;
      do
      {
        v15 = (__int64 **)(v12 + 48 * v14);
        v16 = *v15;
        if ( *v15 )
        {
          if ( (*((_DWORD *)v16 + 26))-- == 1 )
          {
            v18 = *v15;
            if ( *v15 )
            {
              sub_258D30(*v15);
              v19 = v18[23];
              if ( v19 )
              {
                v20 = v18[24];
                if ( v20 )
                {
                  for ( i = 0; i != v20; ++i )
                  {
                    v22 = (_QWORD *)(v19 + 24 * i);
                    if ( *v22 )
                    {
                      v22[1] = 0;
                      qfree();
                      v19 = v18[23];
                    }
                  }
                }
                v18[24] = 0;
                qfree();
              }
              if ( v18[20] )
              {
                v18[21] = 0;
                qfree();
              }
              v23 = v18[16];
              if ( v23 )
              {
                v24 = v18[17];
                if ( v24 )
                {
                  for ( j = 0; j != v24; ++j )
                  {
                    v26 = (_QWORD *)(v23 + 32 * j);
                    if ( *v26 )
                    {
                      v26[1] = 0;
                      qfree();
                      v23 = v18[16];
                    }
                  }
                }
                v18[17] = 0;
                qfree();
              }
              sub_255410((__int64)(v18 + 2));
              j__qfree();
            }
          }
          v12 = v46;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    v47 = 0;
    qfree();
  }
  if ( v44 )
  {
    v27 = v45;
    if ( v45 )
    {
      v28 = 0;
      do
      {
        ++v28;
        clear_tinfo_t();
      }
      while ( v27 != v28 );
    }
    v45 = 0;
    qfree();
  }
  v29 = &v42;
  v40[0] = &unk_4E7D28;
  do
  {
    if ( *(_QWORD *)v29 )
    {
      *((_QWORD *)v29 + 1) = 0;
      qfree();
    }
    v29 -= 24;
  }
  while ( v29 != &v41 );
  return v11;
}

