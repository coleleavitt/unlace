unsigned __int64 __fastcall sub_1AB40(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r14d
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 func; // rax
  _QWORD *v10; // r12
  unsigned __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  int flags; // eax
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp-8h] [rbp-318h]
  __int64 *v27; // [rsp+0h] [rbp-310h]
  __int64 v28; // [rsp+8h] [rbp-308h] BYREF
  __int128 v29; // [rsp+10h] [rbp-300h]
  int v30; // [rsp+20h] [rbp-2F0h]
  __int64 v31; // [rsp+28h] [rbp-2E8h] BYREF
  __int128 v32; // [rsp+30h] [rbp-2E0h]
  __int64 v33; // [rsp+40h] [rbp-2D0h]
  __int64 v34; // [rsp+48h] [rbp-2C8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-2C0h]
  __int64 v36; // [rsp+58h] [rbp-2B8h]
  __int64 v37; // [rsp+60h] [rbp-2B0h]
  __int64 v38; // [rsp+68h] [rbp-2A8h]
  __int64 v39; // [rsp+70h] [rbp-2A0h]
  __int128 v40; // [rsp+78h] [rbp-298h]
  __int64 v41; // [rsp+88h] [rbp-288h]
  __int64 v42; // [rsp+90h] [rbp-280h]
  int v43; // [rsp+98h] [rbp-278h]
  __int64 v44; // [rsp+A0h] [rbp-270h]
  int v45; // [rsp+A8h] [rbp-268h]
  __int64 v46; // [rsp+B0h] [rbp-260h]
  int v47; // [rsp+B8h] [rbp-258h]
  __int64 v48; // [rsp+C0h] [rbp-250h]
  int v49; // [rsp+C8h] [rbp-248h]
  __int64 v50; // [rsp+D0h] [rbp-240h]
  _QWORD v51[5]; // [rsp+D8h] [rbp-238h] BYREF
  __int16 v52; // [rsp+100h] [rbp-210h]
  __int128 v53; // [rsp+108h] [rbp-208h]
  __int64 v54; // [rsp+118h] [rbp-1F8h]
  __int64 v55; // [rsp+120h] [rbp-1F0h]
  int v56; // [rsp+128h] [rbp-1E8h]
  __int64 v57; // [rsp+130h] [rbp-1E0h]
  int v58; // [rsp+138h] [rbp-1D8h]
  __int64 v59; // [rsp+140h] [rbp-1D0h]
  int v60; // [rsp+148h] [rbp-1C8h]
  __int64 v61; // [rsp+150h] [rbp-1C0h]
  int v62; // [rsp+158h] [rbp-1B8h]
  __int64 v63; // [rsp+160h] [rbp-1B0h]
  __int128 v64; // [rsp+168h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+178h] [rbp-198h]
  __int64 v66; // [rsp+180h] [rbp-190h]
  __int64 v67; // [rsp+188h] [rbp-188h]
  char v68; // [rsp+190h] [rbp-180h] BYREF
  unsigned __int64 v69; // [rsp+2D0h] [rbp-40h] BYREF

  v69 = __readfsqword(0x28u);
  v29 = 0;
  v28 = 0;
  sub_1A920(&v28, a2);
  if ( (_QWORD)v29 )
  {
    v4 = 0;
    v5 = 0;
    v27 = &v31;
    do
    {
      v31 = 0;
      v32 = 0;
      sub_110D0(v27, nullptr, nullptr, *(_QWORD *)(v28 + 8 * v5), 10);
      if ( (_QWORD)v32 )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)(v31 + 8 * v7);
          func = get_func(v8);
          v10 = (_QWORD *)func;
          if ( func && (a3 == -1 || (int)get_func_chunknum(func, a3) >= 0) && *v10 != v8 )
          {
            v65 = -1;
            v11 = (unsigned __int64 *)&v68;
            v66 = 0;
            v67 = 0;
            v64 = -1;
            do
            {
              *(_WORD *)v11 = 0;
              v11 += 5;
              *((_WORD *)v11 - 19) = 0;
              *((_WORD *)v11 - 18) = 0;
              *((_DWORD *)v11 - 2) = 0;
              *((_WORD *)v11 - 17) = 0;
              *((_OWORD *)v11 - 2) = 0;
              *(v11 - 2) = 0;
            }
            while ( &v69 != v11 );
            v12 = decode_prev_insn(&v64, v8);
            if ( v12 != -1 && sub_15B50((__int64)&v64) )
            {
              v13 = sub_15B70(a1, (__int64)&v64, 1);
              set_abits(v13, 0x20000000);
              flags = get_flags_ex(v12, 4, v14);
              if ( ((~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0) && (get_aflags(v12) & 0x20000000) == 0 )
              {
                v17 = (__int64 *)get_func(v12);
                if ( v17 )
                {
                  v22 = *v17;
                  del_func(*v17);
                }
                else
                {
                  v22 = -1;
                }
                v34 = v12;
                LOWORD(v39) = 0;
                v35 = -1;
                v36 = 512;
                v37 = -1;
                v38 = 0;
                v41 = 0xFFFFFFFFLL;
                v42 = 0;
                v43 = 0;
                v44 = 0;
                v45 = 0;
                v46 = 0;
                v47 = 0;
                v48 = 0;
                v49 = 0;
                v50 = 0;
                v40 = 0;
                ((void (__fastcall *)(__int64 *, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64 *, __int64, _QWORD, _QWORD, int, __int64, _QWORD, _QWORD, __int64))add_func_ex)(
                  &v34,
                  0,
                  v18,
                  v19,
                  v20,
                  v21,
                  v26,
                  v27,
                  v28,
                  v29,
                  *((_QWORD *)&v29 + 1),
                  v30,
                  v31,
                  v32,
                  *((_QWORD *)&v32 + 1),
                  v33);
                if ( v22 != -1 )
                {
                  v51[0] = v22;
                  v51[1] = -1;
                  v51[2] = 512;
                  v51[3] = -1;
                  v51[4] = 0;
                  v52 = 0;
                  v54 = 0xFFFFFFFFLL;
                  v55 = 0;
                  v56 = 0;
                  v57 = 0;
                  v58 = 0;
                  v59 = 0;
                  v60 = 0;
                  v61 = 0;
                  v62 = 0;
                  v63 = 0;
                  v53 = 0;
                  add_func_ex(
                    v51,
                    0,
                    v23,
                    0,
                    v24,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    *((_QWORD *)&v29 + 1),
                    v30,
                    v31,
                    v32,
                    *((_QWORD *)&v32 + 1),
                    v33,
                    v34,
                    v35,
                    v36,
                    v37,
                    v38,
                    v39,
                    v40,
                    *((_QWORD *)&v40 + 1));
                }
              }
            }
          }
          v7 = ++v6;
        }
        while ( v6 < (unsigned __int64)v32 );
      }
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      v5 = ++v4;
    }
    while ( v4 < (unsigned __int64)v29 );
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v69 - __readfsqword(0x28u);
}

