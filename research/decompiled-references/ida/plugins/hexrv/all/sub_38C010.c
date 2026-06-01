unsigned __int64 __fastcall sub_38C010(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, char **, void **, __int64),
        unsigned __int8 a3,
        __int64 a4,
        signed int a5,
        __int64 a6)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // ebp
  char v9; // r15
  __int64 v10; // r14
  __int64 (__fastcall *v11)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  size_t v12; // r14
  __int64 v13; // r14
  char *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // r14
  char *v17; // r12
  __int64 v18; // r12
  __int64 v19; // rbp
  _QWORD *v20; // rbx
  unsigned int v22; // r15d
  void *v23; // r14
  void (__fastcall *v24)(_QWORD, char **, void **, __int64); // r15
  size_t v25; // r14
  char *v26; // rdi
  __int64 v27; // r15
  __int64 v28; // r14
  char *v29; // r12
  __int64 v30; // [rsp+0h] [rbp-138h]
  signed int v36; // [rsp+38h] [rbp-100h]
  __int64 (__fastcall *v37)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-F0h]
  __int64 v38; // [rsp+58h] [rbp-E0h] BYREF
  void *v39; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+68h] [rbp-D0h]
  __int64 v41; // [rsp+80h] [rbp-B8h]
  __int128 v42; // [rsp+88h] [rbp-B0h]
  __int128 v43; // [rsp+98h] [rbp-A0h]
  __int64 v44; // [rsp+A8h] [rbp-90h]
  int v45; // [rsp+B0h] [rbp-88h]
  char *v46; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v47; // [rsp+C8h] [rbp-70h]
  __int128 v48; // [rsp+D8h] [rbp-60h]
  __int64 v49; // [rsp+E8h] [rbp-50h]
  int v50; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v51; // [rsp+F8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v41 = 0;
  v44 = 0;
  v45 = 1;
  v42 = 0;
  v43 = 0;
  v6 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v30 = v41 + 144 * v42;
    if ( v30 != v41 )
    {
      v7 = v41;
      v8 = -1;
      while ( 1 )
      {
        ++v8;
        if ( (get_tinfo_property() & 0x2F) != 0xD )
        {
          if ( HIBYTE(v45) )
          {
            v22 = a5 + (*(_QWORD *)v7 >> 3);
            v23 = (void *)operator new(0x40u);
            v46 = nullptr;
            sub_38B820((__int64)v23, v22, a4, (__int64)&v46, v8);
            clear_tinfo_t();
            v24 = **a2;
            v39 = v23;
            v46 = nullptr;
            v47 = 0;
            v25 = *(_QWORD *)(v7 + 24);
            if ( v25 )
            {
              v46 = (char *)qalloc_or_throw();
              *((_QWORD *)&v47 + 1) = v25;
              memcpy(v46, *(const void **)(v7 + 16), v25);
              *(_QWORD *)&v47 = v25;
            }
            v24(a2, &v46, &v39, a6);
            if ( v46 )
            {
              *(_QWORD *)&v47 = 0;
              qfree();
            }
            if ( v39 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v39 + 8LL))(v39);
          }
          goto LABEL_38;
        }
        v46 = nullptr;
        v49 = 0;
        v50 = 1;
        v47 = 0;
        v48 = 0;
        if ( !(unsigned __int8)get_tinfo_details() )
        {
          v26 = v46;
          if ( v46 )
          {
            v27 = v47;
            if ( (_QWORD)v47 )
            {
              v28 = 0;
              do
              {
                v29 = &v26[144 * v28];
                clear_tinfo_t();
                if ( *((_QWORD *)v29 + 5) )
                {
                  *((_QWORD *)v29 + 6) = 0;
                  qfree();
                }
                if ( *((_QWORD *)v29 + 2) )
                {
                  *((_QWORD *)v29 + 3) = 0;
                  qfree();
                }
                ++v28;
                v26 = v46;
              }
              while ( v27 != v28 );
            }
            *(_QWORD *)&v47 = 0;
            qfree();
          }
          goto LABEL_38;
        }
        v9 = sub_38BA90(a1, (__int64 *)&v46, a3);
        if ( !a3 || v9 )
          break;
        if ( HIBYTE(v45) )
          goto LABEL_48;
LABEL_17:
        v14 = v46;
        if ( v46 )
        {
          v15 = v47;
          if ( (_QWORD)v47 )
          {
            v16 = 0;
            do
            {
              v17 = &v14[144 * v16];
              clear_tinfo_t();
              if ( *((_QWORD *)v17 + 5) )
              {
                *((_QWORD *)v17 + 6) = 0;
                qfree();
              }
              if ( *((_QWORD *)v17 + 2) )
              {
                *((_QWORD *)v17 + 3) = 0;
                qfree();
              }
              ++v16;
              v14 = v46;
            }
            while ( v15 != v16 );
          }
          *(_QWORD *)&v47 = 0;
          v7 += 144;
          qfree();
          if ( v30 == v7 )
          {
LABEL_26:
            v6 = v41;
            goto LABEL_27;
          }
        }
        else
        {
LABEL_38:
          v7 += 144;
          if ( v30 == v7 )
            goto LABEL_26;
        }
      }
      if ( HIBYTE(v45) )
LABEL_48:
        v36 = a5;
      else
        v36 = a5 + (*(_QWORD *)v7 >> 3);
      v10 = operator new(0x40u);
      sub_38B820(v10, v36, a4, v7 + 64, v8);
      v11 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))**a2;
      v38 = v10;
      v39 = nullptr;
      v40 = 0;
      v12 = *(_QWORD *)(v7 + 24);
      if ( v12 )
      {
        v37 = v11;
        v39 = (void *)qalloc_or_throw();
        *((_QWORD *)&v40 + 1) = v12;
        memcpy(v39, *(const void **)(v7 + 16), v12);
        *(_QWORD *)&v40 = v12;
        v11 = v37;
      }
      v13 = v11(a2, &v39, &v38, a6);
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree();
      }
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
      if ( v9 )
        sub_38C010(a1, a2, a3, v7 + 64, v36, v13);
      goto LABEL_17;
    }
LABEL_27:
    if ( v6 )
    {
      v18 = v42;
      if ( (_QWORD)v42 )
      {
        v19 = 0;
        do
        {
          v20 = (_QWORD *)(v6 + 144 * v19);
          clear_tinfo_t();
          if ( v20[5] )
          {
            v20[6] = 0;
            qfree();
          }
          if ( v20[2] )
          {
            v20[3] = 0;
            qfree();
          }
          ++v19;
          v6 = v41;
        }
        while ( v18 != v19 );
      }
      *(_QWORD *)&v42 = 0;
      qfree();
    }
  }
  return v51 - __readfsqword(0x28u);
}

