__int64 __fastcall sub_1A7F0(__int64 a1, int a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  bool v5; // cf
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r13
  unsigned __int64 v10; // rdi
  __int64 i; // r12
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 linput; // r12
  char v23; // [rsp+8h] [rbp-270h]
  _BYTE v24[32]; // [rsp+10h] [rbp-268h] BYREF
  _BYTE v25[520]; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int64 v26; // [rsp+238h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case -1:
      v18 = *(_QWORD *)(a1 + 33157);
      v19 = *(unsigned int *)(a1 + 33153);
      v5 = __CFADD__(v18, v19);
      v6 = v18 + v19;
      *(__int64 *)((char *)&qword_10288 + a1) = v18;
      v7 = (v6 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v5 )
        goto LABEL_21;
      v9 = getseg(v18);
      if ( !v9 || !(unsigned __int8)set_segm_end(*(_QWORD *)(a1 + 33157), (v6 + 16) & 0xFFFFFFFFFFFFFFF0LL, 1) )
        goto LABEL_32;
      v20 = qftell(*(_QWORD *)(a1 + 33312));
      linput = make_linput(*(_QWORD *)(a1 + 33312));
      file2base(linput, v20, *(__int64 *)((char *)&qword_10288 + a1), v6, 1);
      unmake_linput(linput);
      qfseek(*(_QWORD *)(a1 + 33312), v20 + *(unsigned int *)(a1 + 33153), 0);
      goto LABEL_26;
    case 0:
      v15 = getinf(12);
      v16 = *(unsigned __int16 *)(a1 + 33081);
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (16 * v15);
      *(__int64 *)((char *)&qword_10288 + a1) = v3;
      *(_QWORD *)(a1 + 33065) = v3;
      if ( !(_WORD)v16 )
        return 0;
      v5 = __CFADD__(v3, v16);
      v6 = v3 + v16;
      v7 = (v6 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v5 )
LABEL_21:
        sub_12DB0((__int64)"Our of addressing space");
      v23 = 1;
LABEL_4:
      v8 = (unsigned __int16)(v3 >> 4);
      if ( v3 > 0x100000 )
      {
        v8 = *(unsigned __int16 *)((char *)sub_10290 + a1);
        *(_WORD *)((char *)sub_10290 + a1) = v8 + 1;
        set_selector(v8);
      }
      if ( !(unsigned __int8)add_segm(v8, *(__int64 *)((char *)&qword_10288 + a1), v7, 0, off_2C9C0[a2], 0) )
      {
LABEL_32:
        qexit(1);
LABEL_33:
        sub_E6C0(0);
      }
      v9 = getseg(*(__int64 *)((char *)&qword_10288 + a1));
      *(_QWORD *)(v9 + 32) = -(__int64)*(unsigned __int16 *)(a1 + 33147);
      *(_BYTE *)(v9 + 184) = v23;
      if ( a2 == 1 )
      {
        qsnprintf(v24, 32, "met%03u", *(unsigned __int16 *)(a1 + 33147));
        set_segm_name(v9, v24, 0);
      }
      else
      {
        *(_WORD *)(v9 + 44) |= 0x20u;
        qsnprintf(v24, 32, off_2C9A0[a2], *(unsigned __int16 *)(a1 + 33147));
        set_segm_name(v9, v24, 0);
        if ( a2 > 1 )
        {
          v10 = *(__int64 *)((char *)&qword_10288 + a1);
          for ( i = 0; v10 < v6; *(__int64 *)((char *)&qword_10288 + a1) = v10 )
          {
            create_data(v10, 0, 1, -1);
            if ( a2 == 2 )
            {
              qsnprintf(v25, 512, "met%03u_slot%03llu", *(unsigned __int16 *)(a1 + 33147), i);
              v12 = set_name(*(__int64 *)((char *)&qword_10288 + a1), v25, 6144);
              v13 = *(__int64 *)((char *)&qword_10288 + a1);
              if ( v12 )
                make_name_auto(v13);
              else
                hide_name(v13);
            }
            ++i;
            v10 = *(__int64 *)((char *)&qword_10288 + a1) + 1;
          }
LABEL_26:
          create_data(v6, 0, v7 - v6, -1);
        }
      }
      *(__int64 *)((char *)&qword_10288 + a1) = v7;
      return v9;
    case 1:
      v3 = *(__int64 *)((char *)&qword_10288 + a1);
      v17 = *(unsigned int *)(a1 + 33153);
      v23 = 2;
      v5 = __CFADD__(v3, v17);
      v6 = v3 + v17;
      *(_QWORD *)(a1 + 33157) = v3;
      v7 = (v6 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v5 )
        goto LABEL_21;
      goto LABEL_4;
    case 2:
      v3 = *(__int64 *)((char *)&qword_10288 + a1);
      v4 = *(unsigned __int16 *)(a1 + 33173);
      v5 = __CFADD__(v3, v4);
      v6 = v3 + v4;
      *(_QWORD *)(a1 + 33165) = v3;
      v7 = (v6 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v5 )
        goto LABEL_21;
      v23 = 9;
      goto LABEL_4;
    case 3:
      v3 = *(__int64 *)((char *)&qword_10288 + a1);
      v14 = *(unsigned __int16 *)(a1 + 33031) + 1LL;
      *(_QWORD *)(a1 + 33053) = v3;
      v5 = __CFADD__(v3, v14);
      v6 = v3 + v14;
      v7 = (v6 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v5 )
        goto LABEL_21;
      v23 = 4;
      goto LABEL_4;
    default:
      goto LABEL_33;
  }
}

