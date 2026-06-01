__int64 __fastcall sub_37E40(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 **v10; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int16 v17; // r12
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  __int64 *v21; // r15
  __int64 **v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 flags; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 *v30; // rcx
  __int64 **v31; // rax
  unsigned __int8 v32; // [rsp+0h] [rbp-298h]
  __int64 *v33; // [rsp+10h] [rbp-288h] BYREF
  __int128 v34; // [rsp+18h] [rbp-280h]
  char v35; // [rsp+28h] [rbp-270h]
  _QWORD *v36; // [rsp+30h] [rbp-268h] BYREF
  __int128 v37; // [rsp+38h] [rbp-260h]
  char v38; // [rsp+48h] [rbp-250h]
  _QWORD v39[3]; // [rsp+50h] [rbp-248h] BYREF
  __int128 v40; // [rsp+68h] [rbp-230h]
  __int64 v41; // [rsp+78h] [rbp-220h]
  __int128 v42; // [rsp+80h] [rbp-218h]
  __int64 v43; // [rsp+90h] [rbp-208h]
  __int128 v44; // [rsp+98h] [rbp-200h]
  __int64 v45; // [rsp+A8h] [rbp-1F0h]
  __int128 v46; // [rsp+B0h] [rbp-1E8h]
  __int64 v47; // [rsp+C0h] [rbp-1D8h]
  __int128 v48; // [rsp+C8h] [rbp-1D0h]
  char v49; // [rsp+D8h] [rbp-1C0h]
  __int64 v50; // [rsp+E0h] [rbp-1B8h]
  char v51; // [rsp+E8h] [rbp-1B0h]
  __int128 v52; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v53; // [rsp+100h] [rbp-198h]
  __int64 v54; // [rsp+108h] [rbp-190h]
  __int64 v55; // [rsp+110h] [rbp-188h]
  _BYTE v56[46]; // [rsp+118h] [rbp-180h] BYREF
  unsigned __int16 v57; // [rsp+146h] [rbp-152h]
  __int64 v58; // [rsp+150h] [rbp-148h]
  _QWORD v59[8]; // [rsp+258h] [rbp-40h] BYREF

  v59[0] = __readfsqword(0x28u);
  v5 = 0;
  if ( a4 == 1 || a3 == 1 )
    return v5;
  v8 = a3;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = &v33;
  v33 = nullptr;
  v35 = 0;
  v34 = 0;
  v12 = sub_5B9B0(a1, &v33, v9, v8, 0, 0);
  v14 = v33;
  v5 = v12;
  if ( (_BYTE)v12 )
  {
    if ( (unsigned __int8)(v35 - 10) <= 1u )
    {
      v13 = v34;
      v15 = *v33;
      if ( (_QWORD)v34 == 1 || (v16 = v33 + 3, v13 = (__int64)&v33[3 * v34], 24LL * (_QWORD)v34 == 24) )
      {
LABEL_13:
        v17 = *((_WORD *)v33 + 8);
        LOBYTE(v5) = v17 != 88 && v17 != 118;
        if ( !(_BYTE)v5 )
        {
          v53 = -1;
          v18 = v56;
          v54 = 0;
          v55 = 0;
          v52 = -1;
          do
          {
            *(_WORD *)v18 = 0;
            v18 += 5;
            *((_WORD *)v18 - 19) = 0;
            *((_WORD *)v18 - 18) = 0;
            *((_DWORD *)v18 - 2) = 0;
            *((_WORD *)v18 - 17) = 0;
            *((_OWORD *)v18 - 2) = 0;
            *(v18 - 2) = 0;
          }
          while ( v18 != v59 );
          v10 = (__int64 **)v14[1];
          if ( (int)decode_insn(&v52, v10, v59, 0.0) <= 0 || v56[41] != 4 || v57 != a4 )
          {
LABEL_28:
            v14 = v33;
            goto LABEL_11;
          }
          v19 = *(_QWORD *)(a2 + 16);
          v10 = &v36;
          v36 = nullptr;
          v38 = 0;
          v37 = 0;
          if ( (unsigned __int8)sub_5B9B0(a1, &v36, v19, a4, 0, 0) )
          {
            v20 = v36;
            if ( (unsigned __int8)(v38 - 10) > 1u )
              goto LABEL_26;
            v21 = (__int64 *)*v36;
            if ( (_QWORD)v37 != 1 )
            {
              v22 = v36 + 3;
              v13 = (__int64)&v36[3 * v37];
              if ( 24LL * (_QWORD)v37 != 24 )
              {
                while ( (__int64 *)*v22 == v21 )
                {
                  v22 += 3;
                  if ( (_QWORD *)v13 == v22 )
                    goto LABEL_36;
                }
                goto LABEL_26;
              }
            }
LABEL_36:
            v10 = &v36;
            v32 = sub_5B9B0(a1, &v36, v53, v57, 0, 0);
            if ( v32 )
            {
              v20 = v36;
              if ( (unsigned __int8)(v38 - 10) > 1u )
                goto LABEL_26;
              v13 = v37;
              v30 = (__int64 *)*v36;
              if ( (_QWORD)v37 != 1 )
              {
                v13 = 24 * v37;
                v31 = (__int64 **)(v36 + 3);
                v10 = (__int64 **)&v36[3 * v37];
                if ( 24LL * (_QWORD)v37 != 24 )
                {
                  while ( v30 == *v31 )
                  {
                    v31 += 3;
                    if ( v31 == v10 )
                      goto LABEL_29;
                  }
                  goto LABEL_26;
                }
              }
LABEL_29:
              if ( v30 != v21 )
              {
LABEL_26:
                if ( v20 )
                {
                  *(_QWORD *)&v37 = 0;
                  qfree(v20, v10, v13, 0.0);
                }
                goto LABEL_28;
              }
              v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
              v43 = 0;
              v24 = v23 & ((unsigned __int64)v21 + v15);
              v25 = v23 & ((unsigned __int64)v21 + v58);
              v39[0] = a1;
              v39[1] = v24;
              v39[2] = 0;
              v41 = 0;
              v45 = 0;
              v47 = 0;
              v49 = 1;
              v50 = 0;
              v51 = 1;
              v40 = 0;
              v42 = 0;
              v44 = 0;
              v46 = 0;
              v48 = 0;
              v26 = sub_5DB20(v39);
              flags = get_flags_ex(v25, 4);
              if ( !(unsigned __int8)is_defarg(flags, 0) )
              {
                v28 = 9;
                if ( v17 == 118 )
                  v28 = 2;
                op_offset(v25, 0, v28, -1, v21, v26);
              }
              v10 = (__int64 **)(v24 - v26);
              insn_add_dref(a2, v24 - v26, 0, 1);
              sub_375D0(v39, v24 - v26, v29, 0.0);
              v5 = v32;
            }
          }
          v20 = v36;
          goto LABEL_26;
        }
      }
      else
      {
        while ( v15 == *v16 )
        {
          v16 += 3;
          if ( v16 == (_QWORD *)v13 )
            goto LABEL_13;
        }
      }
    }
    v5 = 0;
  }
LABEL_11:
  if ( v14 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v14, v10, v13, 0.0);
  }
  return v5;
}
