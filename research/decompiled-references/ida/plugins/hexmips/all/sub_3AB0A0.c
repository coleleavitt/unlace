__int64 __fastcall sub_3AB0A0(__int64 a1, __int64 a2, unsigned int **a3)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 idati; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rbx
  _QWORD *v17; // r13
  __int64 v18; // rcx
  char v19; // si
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // ebp
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v29; // [rsp+18h] [rbp-C0h]
  unsigned int *v30; // [rsp+20h] [rbp-B8h]
  __int64 v31; // [rsp+30h] [rbp-A8h]
  __int64 v32; // [rsp+48h] [rbp-90h] BYREF
  __int64 v33; // [rsp+50h] [rbp-88h] BYREF
  int v34; // [rsp+58h] [rbp-80h]
  __int64 v35; // [rsp+60h] [rbp-78h]
  __int128 v36; // [rsp+68h] [rbp-70h]
  __int64 v37; // [rsp+80h] [rbp-58h]
  __int128 v38; // [rsp+88h] [rbp-50h]
  unsigned __int64 v39; // [rsp+98h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v3 = a3[1];
  if ( !v3 )
    return 0;
  v32 = 0;
  v4 = *a3;
  v35 = 0;
  v36 = 0;
  v30 = &v4[(_QWORD)v3];
  if ( v4 == v30 )
  {
    v25 = 0;
    goto LABEL_25;
  }
  do
  {
    v11 = *v4;
    WORD4(v38) = 257;
    *(_QWORD *)&v38 = v11;
    idati = a2;
    if ( !a2 )
      idati = get_idati();
    v37 = idati;
    if ( (unsigned __int8)create_tinfo() )
    {
      sub_3A4470(&v32);
      v7 = *((_QWORD *)&v36 + 1);
      v6 = v36;
      if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
      {
        v13 = qvector_reserve();
        v14 = *((_QWORD *)&v36 + 1);
        v15 = v35;
        *((_QWORD *)&v36 + 1) = v7;
        v29 = v13;
        v31 = v14;
        v16 = v36 - 1;
        if ( (__int64)v36 - 1 >= 0 )
        {
          v17 = (_QWORD *)v13;
          do
          {
            v18 = *(_QWORD *)v15;
            v17[1] = 0;
            *v17 = v18;
            copy_tinfo_t();
            v19 = *(_BYTE *)(v15 + 16);
            v15 += 24;
            v17 += 3;
            *((_BYTE *)v17 - 8) = v19;
            *((_DWORD *)v17 - 1) = *(_DWORD *)(v15 - 4);
            clear_tinfo_t();
          }
          while ( v16-- != 0 );
        }
        qfree();
        v35 = v29;
        *((_QWORD *)&v36 + 1) = v31;
        v6 = v36;
      }
      else
      {
        v29 = v35;
      }
      v8 = v29 + 24 * v6;
      *(_QWORD *)v8 = 0;
      v9 = v32;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)&v36 = v36 + 1;
      v10 = *(_QWORD *)(v8 + 8);
      *(_DWORD *)(v8 + 20) = 0;
      *(_BYTE *)(v8 + 16) = 1;
      *(_QWORD *)(v8 + 8) = v9;
      v32 = v10;
    }
    ++v4;
  }
  while ( v30 != v4 );
  v21 = v36;
  if ( (_QWORD)v36 )
  {
    v37 = 0;
    v38 = 0;
    if ( (_QWORD)v36 == 1 )
    {
      v24 = v35;
      v23 = 0;
      if ( (*(_QWORD *)(v35 + 8) & 0x100LL) != 0 )
      {
        get_tinfo_pdata();
        v23 = v37;
        v24 = v35;
        v21 = v36;
      }
    }
    else
    {
      v22 = qvector_reserve();
      v37 = v22;
      *(_QWORD *)&v38 = 24;
      *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_4074E0);
      *(_QWORD *)(v22 + 15) = 0x736570797420656CLL;
      v23 = v37;
      v24 = v35;
      v21 = v36;
      *(_BYTE *)(v37 + 23) = 0;
    }
    v34 = 0;
    v33 = 0xFFFFFFFFLL;
    v25 = sub_3AA890(a1, v23, v24, v21, -1, &v33);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree();
    }
    if ( !v35 )
      goto LABEL_25;
    v26 = v36;
    if ( (_QWORD)v36 )
    {
      v27 = 0;
      do
      {
        ++v27;
        clear_tinfo_t();
      }
      while ( v26 != v27 );
    }
  }
  else
  {
    if ( !v35 )
    {
      v25 = 0;
      goto LABEL_25;
    }
    v25 = 0;
  }
  *(_QWORD *)&v36 = 0;
  qfree();
LABEL_25:
  clear_tinfo_t();
  return v25;
}

