__int64 __fastcall sub_3D2DF0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  unsigned int tinfo_details; // r12d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  size_t v15; // r10
  __int64 v16; // r8
  size_t v17; // r11
  __int64 v18; // rsi
  unsigned __int64 v19; // r8
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-120h]
  unsigned __int64 v28; // [rsp+8h] [rbp-120h]
  unsigned __int64 v29; // [rsp+10h] [rbp-118h]
  size_t v30; // [rsp+10h] [rbp-118h]
  size_t v31; // [rsp+18h] [rbp-110h]
  __int64 v32; // [rsp+20h] [rbp-108h]
  __int64 v33; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-E0h]
  __int64 v35; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+68h] [rbp-C0h]
  __int64 v37; // [rsp+80h] [rbp-A8h]
  __int128 v38; // [rsp+88h] [rbp-A0h]
  __int64 v39; // [rsp+98h] [rbp-90h]
  __int64 v40; // [rsp+A0h] [rbp-88h]
  __int64 v41; // [rsp+A8h] [rbp-80h]
  __int128 v42; // [rsp+B0h] [rbp-78h]
  __int64 v43; // [rsp+C0h] [rbp-68h]
  __int128 v44; // [rsp+C8h] [rbp-60h]
  char v45; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v46; // [rsp+E8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( a4 == -1 )
  {
    return 0;
  }
  else
  {
    get_tinfo();
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      v37 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v43 = 0;
      v45 = 16;
      v38 = 0;
      v42 = 0;
      v44 = 0;
      tinfo_details = get_tinfo_details();
      if ( (_BYTE)tinfo_details )
      {
        v34 = 0;
        v33 = 0;
        tinfo_details = dump_func_type_data();
        if ( (_BYTE)tinfo_details )
        {
          v35 = 0;
          v36 = 0;
          sub_3CD370(&v33, &v35, "\n", 1);
          v12 = v35;
          v13 = v35 + 24 * v36;
          if ( v13 != v35 )
          {
            do
            {
              v19 = a2[1];
              if ( v19 > 1 )
              {
                v20 = *a2;
                if ( *(_BYTE *)(*a2 + v19 - 2) != 10 )
                {
                  v21 = v19 + 1;
                  if ( a2[2] < v19 + 1 )
                  {
                    v29 = a2[1];
                    v27 = v19 + 1;
                    v22 = qvector_reserve();
                    v19 = v29;
                    v21 = v27;
                    *a2 = v22;
                    v20 = v22;
                  }
                  a2[1] = v21;
                  *(_BYTE *)(v20 + v19 - 1) = 10;
                  *(_BYTE *)(*a2 + v19) = 0;
                }
              }
              v14 = *(_QWORD *)(v12 + 8);
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v14 != 1 )
                {
                  v16 = a2[1];
                  v17 = v14 - 1;
                  if ( v16 )
                  {
                    --v16;
                    v17 = v15 + v16;
                    v14 += v16;
                  }
                  v18 = *a2;
                  if ( a2[2] < v14 )
                  {
                    v32 = v16;
                    v31 = v15;
                    v30 = v17;
                    v28 = v14;
                    v26 = qvector_reserve();
                    v16 = v32;
                    v15 = v31;
                    *a2 = v26;
                    v18 = v26;
                    v17 = v30;
                    v14 = v28;
                  }
                  a2[1] = v14;
                  *(_BYTE *)(v18 + v17) = 0;
                  memcpy((void *)(v16 + *a2), *(const void **)v12, v15);
                }
              }
              v12 += 24;
              ++*a3;
            }
            while ( v13 != v12 );
            v12 = v35;
          }
          if ( v12 )
          {
            v23 = v36;
            if ( (_QWORD)v36 )
            {
              v24 = 0;
              do
              {
                v25 = (_QWORD *)(v12 + 24 * v24);
                if ( *v25 )
                {
                  v25[1] = 0;
                  qfree();
                  v12 = v35;
                }
                ++v24;
              }
              while ( v23 != v24 );
            }
            *(_QWORD *)&v36 = 0;
            qfree();
          }
        }
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree();
        }
      }
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree();
      }
      cleanup_argloc();
      clear_tinfo_t();
      v8 = v37;
      if ( v37 )
      {
        v9 = v38;
        if ( (_QWORD)v38 )
        {
          v10 = 0;
          do
          {
            v11 = (_QWORD *)(v8 + 80 * v10);
            clear_tinfo_t();
            if ( v11[5] )
            {
              v11[6] = 0;
              qfree();
            }
            if ( v11[2] )
            {
              v11[3] = 0;
              qfree();
            }
            ++v10;
            cleanup_argloc();
            v8 = v37;
          }
          while ( v9 != v10 );
        }
        *(_QWORD *)&v38 = 0;
        qfree();
      }
    }
    else
    {
      tinfo_details = 0;
    }
    clear_tinfo_t();
  }
  return tinfo_details;
}

