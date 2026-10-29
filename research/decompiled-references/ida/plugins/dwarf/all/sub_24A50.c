__int64 __fastcall sub_24A50(__int64 a1, const char *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  const char *v7; // r15
  size_t v8; // r13
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 *v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned __int64 v33; // [rsp+8h] [rbp-1620h]
  __int64 v34; // [rsp+20h] [rbp-1608h] BYREF
  __int128 v35; // [rsp+28h] [rbp-1600h]
  __int64 v36[13]; // [rsp+40h] [rbp-15E8h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-1580h]
  __int128 v38; // [rsp+B0h] [rbp-1578h]
  __int64 v39; // [rsp+C0h] [rbp-1568h]
  __int128 v40; // [rsp+C8h] [rbp-1560h]
  __int128 v41; // [rsp+D8h] [rbp-1550h]
  unsigned __int64 v42; // [rsp+E8h] [rbp-1540h]
  __int64 v43; // [rsp+F0h] [rbp-1538h]
  __int64 v44; // [rsp+F8h] [rbp-1530h]
  __int64 v45; // [rsp+100h] [rbp-1528h]
  __int128 v46; // [rsp+108h] [rbp-1520h]
  __m128i si128; // [rsp+118h] [rbp-1510h]
  __int64 v48; // [rsp+128h] [rbp-1500h]
  __int64 v49; // [rsp+130h] [rbp-14F8h]
  __int64 v50; // [rsp+138h] [rbp-14F0h]
  __int64 v51; // [rsp+140h] [rbp-14E8h]
  __int64 v52; // [rsp+148h] [rbp-14E0h]
  __int64 v53; // [rsp+150h] [rbp-14D8h]
  __int64 v54; // [rsp+158h] [rbp-14D0h]
  __int64 v55; // [rsp+170h] [rbp-14B8h]
  __int128 v56; // [rsp+178h] [rbp-14B0h]
  __int64 v57; // [rsp+188h] [rbp-14A0h]
  __int128 v58; // [rsp+190h] [rbp-1498h]
  __int64 v59; // [rsp+1A0h] [rbp-1488h] BYREF
  __int128 v60; // [rsp+1A8h] [rbp-1480h]
  __int64 v61; // [rsp+1B8h] [rbp-1470h]
  _BYTE v62[5156]; // [rsp+1C0h] [rbp-1468h] BYREF
  unsigned __int64 v63; // [rsp+15E8h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v35 = 0;
  v34 = 0;
  v2 = sub_21D90(&v34, a2);
  if ( (_BYTE)v2 )
  {
    v33 = v35;
    if ( !(_QWORD)v35 )
    {
      v26 = v34;
      if ( !v34 )
        return v2;
      goto LABEL_45;
    }
    v3 = 0;
    do
    {
      v36[0] = 0;
      v4 = (__int64 *)(v34 + 40 * v3);
      v37 = 0;
      v42 = 0xFFFFFFFF00000000LL;
      v39 = 0;
      v43 = 0xFFFFFFFFLL;
      v44 = -1;
      v45 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v57 = 0;
      v38 = 0;
      v40 = 0;
      v41 = 0;
      v46 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_AB160);
      v56 = 0;
      v58 = 0;
      sub_83090(v36);
      v5 = operator new(0x28u);
      v6 = v5;
      v7 = src;
      if ( v4[3] )
        v7 = (const char *)v4[2];
      *(_DWORD *)(v5 + 8) = 1;
      *(_QWORD *)(v5 + 16) = 0;
      *(_OWORD *)(v5 + 24) = 0;
      *(_QWORD *)v5 = &off_C9478;
      if ( v7 )
      {
        v8 = strlen(v7);
        v9 = (void *)qvector_reserve(v6 + 16, 0, v8 + 1, 1);
        *(_QWORD *)(v6 + 16) = v9;
        *(_QWORD *)(v6 + 24) = v8 + 1;
        memmove(v9, v7, v8);
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + v8) = 0;
      }
      v61 = 0xFFFFFFFFLL;
      memset(v62, 0, sizeof(v62));
      v36[0] = v6;
      v59 = 0;
      v60 = 0;
      LODWORD(v61) = getinf(5);
      v2 = sub_24200(a1, v36, *v4, v4[1], (__int64)&v59, 4);
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree(v59);
      }
      sub_83090(v36);
      v10 = v57;
      if ( v57 )
      {
        v11 = v58;
        if ( (_QWORD)v58 )
        {
          v12 = 0;
          do
          {
            v13 = (__int64 *)(v10 + 24 * v12);
            v14 = *v13;
            if ( *v13 )
            {
              v13[1] = 0;
              qfree(v14);
              v10 = v57;
            }
            ++v12;
          }
          while ( v11 != v12 );
        }
        *(_QWORD *)&v58 = 0;
        qfree(v10);
      }
      v15 = v55;
      if ( v55 )
      {
        v16 = v56;
        if ( (_QWORD)v56 )
        {
          v17 = 0;
          do
          {
            v18 = (__int64 *)(v15 + 72 * v17);
            v19 = v18[3];
            if ( v19 )
            {
              v18[4] = 0;
              qfree(v19);
            }
            v20 = *v18;
            if ( *v18 )
            {
              v18[1] = 0;
              qfree(v20);
            }
            ++v17;
            v15 = v55;
          }
          while ( v16 != v17 );
        }
        *(_QWORD *)&v56 = 0;
        qfree(v15);
      }
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      v21 = v37;
      if ( v37 )
      {
        v22 = v38;
        if ( (_QWORD)v38 )
        {
          v23 = 0;
          v24 = 0;
          do
          {
            v25 = *(_QWORD *)(v21 + v23 + 16);
            if ( v25 )
            {
              *(_QWORD *)(v21 + v23 + 24) = 0;
              qfree(v25);
              v21 = v37;
            }
            ++v24;
            v23 += 120;
          }
          while ( v22 != v24 );
        }
        *(_QWORD *)&v38 = 0;
        qfree(v21);
      }
      ++v3;
    }
    while ( v3 < v33 && (_BYTE)v2 );
  }
  v26 = v34;
  if ( v34 )
  {
    v27 = v35;
    if ( (_QWORD)v35 )
    {
      v28 = 0;
      do
      {
        v29 = v26 + 40 * v28;
        v30 = *(_QWORD *)(v29 + 16);
        if ( v30 )
        {
          *(_QWORD *)(v29 + 24) = 0;
          qfree(v30);
          v26 = v34;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
LABEL_45:
    *(_QWORD *)&v35 = 0;
    qfree(v26);
  }
  return v2;
}

