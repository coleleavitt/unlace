__int64 __fastcall sub_18E50(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 segm_name; // rax
  char *v8; // r14
  char *v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // rbx
  __int64 member; // r15
  int _32bit; // r15d
  int v18; // eax
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v25; // ecx
  unsigned int v26; // esi
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  __int64 (*v29)(); // rcx
  __int64 v30; // [rsp+18h] [rbp-160h]
  int v31; // [rsp+20h] [rbp-158h]
  int v32; // [rsp+20h] [rbp-158h]
  unsigned __int64 v33; // [rsp+20h] [rbp-158h]
  unsigned int v34; // [rsp+34h] [rbp-144h] BYREF
  __int64 v35; // [rsp+38h] [rbp-140h]
  char *haystack; // [rsp+40h] [rbp-138h]
  __int128 v37; // [rsp+48h] [rbp-130h]
  __int64 v38; // [rsp+60h] [rbp-118h]
  __int128 v39; // [rsp+68h] [rbp-110h]
  __int128 v40; // [rsp+78h] [rbp-100h]
  __int64 v41; // [rsp+88h] [rbp-F0h]
  int v42; // [rsp+90h] [rbp-E8h]
  __int128 v43; // [rsp+A0h] [rbp-D8h] BYREF
  char *v44; // [rsp+B0h] [rbp-C8h]
  __int128 v45; // [rsp+B8h] [rbp-C0h]
  __int64 v46; // [rsp+C8h] [rbp-B0h]
  __int128 v47; // [rsp+D0h] [rbp-A8h]
  __int128 v48; // [rsp+E0h] [rbp-98h]
  __int64 v49; // [rsp+110h] [rbp-68h]
  int v50; // [rsp+118h] [rbp-60h]
  __int64 v51; // [rsp+120h] [rbp-58h]
  char v52; // [rsp+128h] [rbp-50h]
  unsigned __int64 v53; // [rsp+138h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v34 = 0;
  if ( !(unsigned __int8)sub_14FD0(a1, 0, &v34) )
    return (unsigned int)-1;
  v4 = 1;
  if ( v34 > 0xE )
    v4 = 4;
  v5 = sub_15060(a1, v4);
  if ( v5 == -1 )
    return (unsigned int)-1;
  haystack = 0;
  v37 = 0;
  v6 = getseg();
  segm_name = get_segm_name();
  v8 = haystack;
  if ( segm_name > 0 )
  {
    if ( (_QWORD)v37 )
    {
      v9 = strstr(haystack, "__objc_opt_rw");
      if ( v9 )
      {
        if ( v9 - v8 != -1 )
        {
          v35 = 0;
          v38 = 0;
          v41 = 0;
          v42 = 1;
          v39 = 0;
          v40 = 0;
          if ( (unsigned __int8)get_type_by_tid() && (unsigned __int8)get_tinfo_details() )
          {
            v44 = 0;
            v46 = 0;
            v49 = 1;
            v50 = -1;
            v51 = 0;
            v52 = 0;
            v43 = 0;
            v45 = 0;
            v47 = 0;
            v48 = 0;
            v44 = (char *)qvector_reserve();
            *(_QWORD *)&v45 = 3;
            strcpy(v44, "cb");
            member = udt_type_data_t__find_member();
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
            if ( member >= 0 )
            {
              _32bit = get_32bit();
              if ( _32bit != -1 )
              {
                v18 = get_32bit();
                if ( v18 != -1 )
                {
                  v19 = *(_QWORD *)(a1 + 688) + v5 + (unsigned int)(v18 * _32bit);
                  if ( v19 >= *(_QWORD *)(v6 + 8) )
                  {
LABEL_47:
                    v10 = 0;
                    goto LABEL_12;
                  }
                  while ( (*(_BYTE *)(a2 + 8) & 2) == 0 || !(unsigned __int8)callui(27) )
                  {
                    v20 = *(_QWORD *)a1;
                    *(_QWORD *)&v43 = 0;
                    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int128 *, unsigned __int64))(v20 + 136))(
                            a1,
                            &v43,
                            v19) )
                      goto LABEL_47;
                    if ( !(_QWORD)v43 )
                      goto LABEL_47;
                    LODWORD(v21) = get_32bit();
                    v22 = v21;
                    if ( (_DWORD)v21 == -1 )
                      goto LABEL_47;
                    v23 = *(_QWORD *)(a1 + 240);
                    v21 = (unsigned int)v21;
                    v30 = v21;
                    if ( (unsigned int)v21 < v23 )
                      goto LABEL_47;
                    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
                    {
                      v32 = v21;
                      sub_EB50(v19, v23, *(_QWORD *)(a1 + 120));
                      v22 = v32;
                    }
                    v31 = v22;
                    v10 = (**(__int64 (__fastcall ***)(__int64, unsigned __int64))a2)(a2, v19);
                    if ( v10 )
                      goto LABEL_12;
                    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
                    {
                      v24 = *(_QWORD *)(a1 + 240);
                      v25 = v31 - v24;
                      if ( v31 != (_DWORD)v24 )
                      {
                        v26 = *(_DWORD *)(a1 + 744);
                        if ( !(v25 % v26) )
                        {
                          v27 = v24 + v19;
                          v33 = v25 + v24 + v19;
                          if ( v24 + v19 < v33 )
                          {
                            v28 = v26;
                            do
                            {
                              v29 = sub_FB90;
                              if ( v26 != 8 )
                                v29 = sub_FBB0;
                              ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))v29)(v27, v28, 0);
                              v28 = *(unsigned int *)(a1 + 744);
                              v27 += v28;
                              v26 = *(_DWORD *)(a1 + 744);
                            }
                            while ( v27 < v33 );
                          }
                        }
                      }
                    }
                    v19 += v30;
                    if ( v19 >= *(_QWORD *)(v6 + 8) )
                      goto LABEL_47;
                  }
                }
              }
            }
          }
          v10 = -1;
LABEL_12:
          v11 = v38;
          if ( v38 )
          {
            v12 = v39;
            if ( (_QWORD)v39 )
            {
              v13 = 0;
              do
              {
                v14 = (_QWORD *)(v11 + 144 * v13);
                clear_tinfo_t();
                if ( v14[5] )
                {
                  v14[6] = 0;
                  qfree();
                }
                if ( v14[2] )
                {
                  v14[3] = 0;
                  qfree();
                }
                ++v13;
                v11 = v38;
              }
              while ( v12 != v13 );
            }
            *(_QWORD *)&v39 = 0;
            qfree();
          }
          clear_tinfo_t();
          v8 = haystack;
          goto LABEL_23;
        }
      }
    }
  }
  v10 = -1;
LABEL_23:
  if ( v8 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v10;
}
